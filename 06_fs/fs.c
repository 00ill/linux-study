#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

int __init fs_init(void);
void __exit fs_exit(void);

int __init fs_init(void)
{
    printk(KERN_INFO "fs module init");
    return 0;
}

void __exit fs_exit(void)
{
    printk(KERN_INFO "fs module exit");
}



module_init(fs_init);
module_exit(fs_exit);
MODULE_LICENSE("GPL");