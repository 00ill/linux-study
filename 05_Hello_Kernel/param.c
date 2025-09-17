#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/stat.h> //for S_IRUSR | S_IWUSR
#include <linux/init.h>

// module_param(name, type, perm)
MODULE_LICENSE("GPL");
int test;
module_param(test, int, S_IWUSR | S_IRUSR);
static int __init test_param_init(void)
{
    printk(KERN_INFO "test value : %d\n", test);
    return 0;
}

static void __exit test_param_exit(void)
{
}

module_init(test_param_init);
module_exit(test_param_exit);