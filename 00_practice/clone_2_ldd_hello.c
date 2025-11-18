#include "linux/init.h"
#include "linux/fs.h"
#include "linux/kernel.h"
#include "linux/module.h"
#include "linux/cdev.h"
#include "linux/types.h"
#include "linux/device.h"
#include "linux/ioctl.h"

#define HELLO_MAGIC 'k'
#define HELLO_IOCTL_RESET    _IO(HELLO_MAGIC, 1)
#define HELLO_IOCTL_SET_MSG  _IOW(HELLO_MAGIC, 2, char *)
#define HELLO_IOCTL_GET_MSG  _IOR(HELLO_MAGIC, 3, char *)

#define MAX_IOCTL_MSG_SIZE 128
static char kernel_msg[MAX_IOCTL_MSG_SIZE] = "Initial kernel message!\n";

static long hello_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
{
    char tmp_msg[MAX_IOCTL_MSG_SIZE];

    switch (cmd) {
    case HELLO_IOCTL_RESET:
        printk(KERN_INFO "hello: ioctl - RESET\n");
        // Reset any state if needed
        break;

    case HELLO_IOCTL_SET_MSG:
        printk(KERN_INFO "hello: ioctl - SET_MSG\n");
        if (copy_from_user(tmp_msg, (char __user *)arg, MAX_IOCTL_MSG_SIZE)) {
            return -EFAULT;
        }
        strncpy(kernel_msg, tmp_msg, MAX_IOCTL_MSG_SIZE);
        kernel_msg[MAX_IOCTL_MSG_SIZE - 1] = 0; // Ensure null termination
        printk(KERN_INFO "hello: received message from user: %s\n", kernel_msg);
        break;

    case HELLO_IOCTL_GET_MSG:
        printk(KERN_INFO "hello: ioctl - GET_MSG\n");
        if (copy_to_user((char __user *)arg, kernel_msg, MAX_IOCTL_MSG_SIZE)) {
            return -EFAULT;
        }
        break;

    default: 
        return -ENOTTY; // Command not found
    }

    return 0;
}


int hello_open(struct inode* inode, struct file* file)
{
    printk(KERN_INFO "hello fo read\n");
    return 0;
}

int hello_release(struct inode* inode, struct file* file)
{
    printk(KERN_INFO "Hello Kernel Release\n");
    return 0;
}

static ssize_t hello_read(struct file *file, char __user *buf, size_t count, loff_t *ppos)
{
    char msg[] = "Hello, Kernel!\n";
    size_t len = sizeof(msg);
    if (*ppos >= len)
        return 0;
    if (count > len - *ppos)
        count = len - *ppos;
    if (copy_to_user(buf, msg + *ppos, count))
        return -EFAULT;
    *ppos += count;
    printk(KERN_INFO "myhello: read %zu bytes\n", count);
    return count;
}

static file_operation fo =
{
    .owner = THIS_MODULE,
    .open = hello_open,
    .release = hello_release,
    .read = hello_read
    .unlocked_ioctl = hello_ioctl,
};


#define NUM_DEVICES 1
#define DRIVER_NAME "hello_clone"
static struct cdev cdev;
static dev_t device_num;
static struct class* hello_class;
static int __init hello_init()
{
    printk(KERN_INFO "Hello init start\n");
    int ret;
    //Device number allocate
    ret = alloc_chrdev_region(&device_num, 0, NUM_DEVICES, DRIVER_NAME);
    if(ret < 0)
    {
        printk(KERN_ERR "hello_clone : failed to allocate device number\n");
        return ret;
    }
    //Initialize char device and add
    cdev_init(&cdev, &fo);
    ret = cdev_add(&cdev, device_num, NUM_DEVICES);
    if(ret < 0)
    {
        unregister_chrdev_region(device_num, NUM_DEVICES); // Cancel alloc_chrdev_region
        printk(KERN_ERR "hello_clone : failed to add cdev\n");
        return ret;
    }
    //Create device node(/dev file)
    hello_class = class_create(DRIVER_NAME);
    if(IS_ERR(hello_class))
    {
        cdev_del(&cdev);
        unregister_chrdev_region(device_num, NUM_DEVICES); // Cancel alloc_chrdev_region
        printk(KERN_ERR "hello_clone : failed to create class\n");
        return PTR_ERR(hello_class);
    }
    device_create(hello_class, NULL, device_num, NULL, DRIVER_NAME);
    printk(KERN_INFO "kernel init end\n");
    return 0;
}

static void __exit hello_exit()
{
    device_destroy(hello_class, device_num);
    class_destroy(hello_class);
    cdev_del(&cdev);
    unregister_chrdev_region(device_num, NUM_DEVICES); // Cancel alloc_chrdev_region
    printk(KERN_INFO "hello_clone : driver removed");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("CYI");
MODULE_DESCRIPTION("Practice LDD");