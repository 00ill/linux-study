#include "linux/cdev.h"
#include "linux/device.h"
#include "linux/init.h"
#include "linux/kern_levels.h"
#include "linux/module.h"
#include "linux/sysctl.h"
#include "linux/types.h"
#include <linux/cdev.h>
#include <linux/fs.h>

#define DRIVER_NAME "myhello"
#define NUM_DEVICES 1

static int device_open(struct inode* inode, struct file* file)
{
    printk(KERN_INFO "my device OPEN\n");
    return 0;
}

static int device_release(struct inode* inode, struct file* file)
{
    printk(KERN_INFO "my device RELEASE\n");
    return 0;
}

static ssize_t device_read(struct file *file, char __user *buf, size_t count, loff_t *ppos)
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

/* Struct for Device Driver
 * In linux/fs.h
 */
static struct file_operations my_char_fops = {
    .owner = THIS_MODULE,
    .open = device_open,
    .release = device_release,
    .read = device_read,
};

/* dev_t -> U32 type
 * In linux/types.h
 * Device Number
 */
static dev_t device_num;
static struct cdev cdev;
/* In class.h
 *
 */
static struct class* myhello_class;

static int __init myhello_init(void)
{
    int ret;
    /* int alloc_chrdev_region(dev_t *dev, unsigned int firstminor, unsigned int count, char *name)
     * character device driver API using dynamic allocate
     */
    //
    ret = alloc_chrdev_region(&device_num, 0, NUM_DEVICES, DRIVER_NAME);
    if (ret < 0)
    {
        printk(KERN_ERR "myhello : failed to allocate device number\n");
        return ret;
    }
    cdev_init(&cdev, &my_char_fops);
    ret = cdev_add(&cdev, device_num, NUM_DEVICES);
    if (ret < 0)
    {
        unregister_chrdev_region(device_num, NUM_DEVICES);
        printk(KERN_ERR "myhello: failed to add cdev\n");
        return ret;
    }

    myhello_class = class_create(DRIVER_NAME);
    if (IS_ERR(myhello_class))
    {
        cdev_del(&cdev);
        unregister_chrdev_region(device_num, NUM_DEVICES);
        printk(KERN_ERR "myhello: failed to create class\n");
        return PTR_ERR(myhello_class);
    }
    device_create(myhello_class, NULL, device_num, NULL, DRIVER_NAME);
    printk(KERN_INFO "myhello: driver initialized\n");
    return 0;
}

static void __exit myhello_exit(void)
{
    device_destroy(myhello_class, device_num);
    class_destroy(myhello_class);
    cdev_del(&cdev);
    unregister_chrdev_region(device_num, NUM_DEVICES);
    printk(KERN_INFO "myhello: driver removed\n");
}

module_init(myhello_init);
module_exit(myhello_exit);

MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("A");
MODULE_DESCRIPTION("A simple hello kernel character device driver example");
