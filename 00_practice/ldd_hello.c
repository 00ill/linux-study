// 0251016 Clone Coding and Description
#include "linux/cdev.h"
#include "linux/device.h"
#include "linux/device/class.h"
#include "linux/fs.h"
#include "linux/init.h"
#include "linux/kern_levels.h"
#include "linux/module.h"
#include "linux/types.h"

/*-------------------------------ioctl---------------------------------*/
#define HELLO_MAGIC 'k'
#define HELLO_IOCTL_RESET _IO(HELLO_MAGIC, 1)
#define HELLO_IOCTL_SET_MSG _IOW(HELLO_MAGIC, 2, char*)
#define HELLO_IOCTL_GET_MSG _IOR(HELLO_MAGIC, 3, char*)
#define MAX_IOCTL_MSG_SIZE 128
static char kernel_msg[MAX_IOCTL_MSG_SIZE] = "Initial kernel message!\n";

long hello_ioctl(struct file* file, unsigned int cmd, unsigned long arg)
{
    // cmd for userspace ioctl() call
    // arg for userspace program num or pointer
    char tmp_msg[MAX_IOCTL_MSG_SIZE];
    switch (cmd)
    {
        case HELLO_IOCTL_RESET:
            printk(KERN_INFO "hello : ioctl -RESET\n");
            break;
        case HELLO_IOCTL_SET_MSG:
            printk(KERN_INFO "hello : ioctl -SET_MSG\n");
            if (copy_from_user(tmp_msg, (char __user*)arg, MAX_IOCTL_MSG_SIZE))
            {
                return -EFAULT;
            }
            strncpy(kernel_msg, tmp_msg, MAX_IOCTL_MSG_SIZE);
            kernel_msg[MAX_IOCTL_MSG_SIZE - 1] = 0; // Ensure null termination
            printk(KERN_INFO "hello: received message from user: %s\n", kernel_msg);
            break;
        case HELLO_IOCTL_GET_MSG:
            printk(KERN_INFO "hello: ioctl - GET_MSG\n");
            if (copy_to_user((char __user*)arg, kernel_msg, MAX_IOCTL_MSG_SIZE))
            {
                return -EFAULT;
            }
            break;

        default:
            return -ENOTTY; // Command not found
    }

    return 0;
}

/*---------------------------------------------------------------------*/

int hello_open(struct inode* inode, struct file* file)
{
    printk(KERN_INFO "Hello Kernel Open\n");
    return 0;
}

int hello_release(struct inode* inode, struct file* file)
{
    printk(KERN_INFO "Hello Kernel Release\n");
    return 0;
}

ssize_t hello_read(struct file* file, char __user* buf, size_t count, loff_t* ppos)
{
    ssize_t temp;
    return temp;
}

static struct file_operations fo = {
    .owner = THIS_MODULE,
    .open = hello_open,
    .release = hello_release,
    .read = hello_read,
    .unlocked_ioctl = hello_ioctl,
};

#define DRIVER_NAME "hello"
/*---------------------------------------------------------------------*/
/*using var to register device number that used to char device driver
 *NUM_DEVICES : How many make device
 *device_num : what is device number that kerner allocate for char ldd
 */
#define NUM_DEVICES 1
static dev_t device_num;
/*---------------------------------------------------------------------*/
static struct cdev cdev;
static struct class* hello_class;
static int __init hello_init(void)
{
    printk(KERN_INFO "hello init start\n");
    int ret;
    // Device number allocate
    ret = alloc_chrdev_region(&device_num, 0, NUM_DEVICES, DRIVER_NAME);
    if (ret < 0)
    {
        printk(KERN_ERR "hello : failed to allocate device number\n");
        return ret;
    }
    // initialize char device and add
    cdev_init(&cdev, &fo);                          // initialize cdev and link fo
    ret = cdev_add(&cdev, device_num, NUM_DEVICES); // register cdev to kernel and activate device
    if (ret < 0)
    {
        unregister_chrdev_region(device_num, NUM_DEVICES);
        printk(KERN_ERR "hello : failed to add cdev\n");
        return ret;
    }
    // create device node(/dev file)
    hello_class = class_create(DRIVER_NAME); // create device class in /sys/class
    if (IS_ERR(hello_class))                 // check pointer error
    {
        cdev_del(&cdev);
        unregister_chrdev_region(device_num, NUM_DEVICES);
        printk(KERN_ERR "hello : failed to create class\n");
        return PTR_ERR(hello_class);
    }
    device_create(hello_class, NULL, device_num, NULL,
                  DRIVER_NAME); // udev automatically create /dev/hello file
    printk(KERN_INFO "hello init end\n");
    return 0;
}

static void __exit hello_exit(void)
{
    // Remove Device file
    // In init function : device_create()
    device_destroy(hello_class, device_num);

    // Remove Device class
    // In init function : class_create()
    class_destroy(hello_class);

    // Remove cdev
    // In init funtion : cdev_add()
    cdev_del(&cdev);
    
    // Return Device Number
    // In init function : alloc_chrdev_region()
    unregister_chrdev_region(device_num, NUM_DEVICES);
    printk(KERN_INFO "hello: driver removed\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("YI");
MODULE_DESCRIPTION("Practice LDD");
