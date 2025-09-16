#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("00ill");
MODULE_DESCRIPTION("Hello Kernel");

static int __init my_hello_init(void)
{
    printk(KERN_INFO "Hello, Kernel World!\n");
    return 0;
}

static void __exit my_hello_exit(void)
{
    printk(KERN_INFO "Goodbye, Kernel World!\n");
}

module_init(my_hello_init);
module_exit(my_hello_exit);
