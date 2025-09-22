#include "linux/types.h"
#include <asm-generic/errno-base.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/proc_fs.h>

int __init fs_init(void);
void __exit fs_exit(void);

static int proc_value = 0;

static ssize_t my_read(struct file* file, char* buffer, size_t count, loff_t* offset)
{
    char msg[32];
    int len;

    len = snprintf(msg, sizeof(msg), "%d\n", proc_value);
    if (*offset >= len)
        return 0;
    if (copy_to_user(buffer, msg, len))
        return -EFAULT;
    *offset += len;
    return len;
}

static ssize_t my_write(struct file* file, const char* buffer, size_t count, loff_t* offset)
{
    char buf[16];
    if (count > sizeof(buf) - 1)
        return -EINVAL;
    if (copy_from_user(buf, buffer, count))
        return -EFAULT;
    buf[count] = '\0';
    sscanf(buf, "%d", &proc_value);

    return count;
}

static const struct proc_ops my_proc_ops = {
    .proc_read = my_read,
    .proc_write = my_write,
};

int __init fs_init(void)
{
    printk(KERN_INFO "fs module init\n");
    proc_create("my_proc_practice", 0666, NULL, &my_proc_ops);
    return 0;
}

void __exit fs_exit(void)
{
    remove_proc_entry("my_proc_practice", NULL);
    printk(KERN_INFO "fs module exit\n");
}

module_init(fs_init);
module_exit(fs_exit);
MODULE_LICENSE("GPL");