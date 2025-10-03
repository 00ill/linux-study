#include <linux/module.h>
#include <linux/fs.h>
#include <linux/init.h>
#include <linux/cdev.h>
#include <linux/device.h>

#define DRIVER_NAME "hello"
#define NUM_DEVICES 1

static dev_t device_num;
static struct cdev cdev;
static struct class *my_char_class;

static int my_char_open(struct inode *inode, struct file *file) {
    printk(KERN_INFO "my_char_open\n");
    return 0;
}

static int my_char_release(struct inode *inode, struct file *file) {
    printk(KERN_INFO "my_char release\n");
    return 0;
}

static ssize_t my_char_read(struct file *file, char __user *buf, size_t count, loff_t *ppos) {
    char *message = "Hello, world!\n";
    size_t len = strlen(message);

    if (*ppos >= len)
        return 0;

    if (count > len - *ppos)
        count = len - *ppos;

    if (copy_to_user(buf, message + *ppos, count))
        return -EFAULT;

    *ppos += count;
    return count;
}

static struct file_operations my_char_fops = {
    .owner = THIS_MODULE,
    .open = my_char_open,
    .release = my_char_release,
    .read = my_char_read,
};

static int __init my_char_init(void) {
    int ret;
    ret = alloc_chrdev_region(&device_num, 0, NUM_DEVICES, DRIVER_NAME);
    if (ret < 0) {
        printk(KERN_ERR "Failed to allocate device number\n");
        return ret;
    }
    cdev_init(&cdev, &my_char_fops);
    cdev.owner = THIS_MODULE;
    ret = cdev_add(&cdev, device_num, NUM_DEVICES);
    if (ret < 0) {
        unregister_chrdev_region(device_num, NUM_DEVICES);
        printk(KERN_ERR "Failed to add device to the system\n");
        return ret;
    }
    my_char_class = class_create(THIS_MODULE, DRIVER_NAME);
    if (IS_ERR(my_char_class)) {
        cdev_del(&cdev);
        unregister_chrdev_region(device_num, NUM_DEVICES);
        printk

