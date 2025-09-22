#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/stat.h> //for S_IRUSR | S_IWUSR
#include <linux/init.h>
#include <linux/moduleparam.h>
// Module param allow user-space to configure the module behavior without recompiling
// module_param(name, type, perm)
// Create file in /sys/modules/<module name>/parameter

int test;
module_param(test, int, S_IWUSR | S_IRUSR);
MODULE_PARM_DESC(test,"This is short description of the parameter");

static int cb_value = 0;

static int notify_param(const char *val, const struct kernel_param *kp)
{
    // kernel_param
    // kernel structure that represent a module parameter internally
    // it holds meta data like parameter name, bits, pointers to set/get callback function

    int ret = param_set_int(val, kp); // Update the parameter using helper
    // param_set_int
    // takees a string input from user space and converts to int to store module parameter var
    if(ret == 0)
    {
        printk(KERN_INFO "Callback function called : new cb_value = %d\n", cb_value);
        return 0;
    }
    return ret;
}

static int param_get(char *buffer, const struct kernel_param *kp)
{
    return param_get_int(buffer, kp);
    // param_get_int
    // convert the stored int module parameter value to string format to be read by user space
}

static const struct kernel_param_ops my_param_ops = {
    .set = notify_param,
    .get = param_get,
};

module_param_cb(cb_value, &my_param_ops, &cb_value, 0644);

static int __init test_param_init(void)
{
    printk(KERN_INFO "test value : %d\n", test);
    printk(KERN_INFO "cb value : %d\n", cb_value);
    return 0;
}

static void __exit test_param_exit(void)
{
    printk(KERN_INFO "End test value : %d\n", test);
    printk(KERN_INFO "End cb value : %d\n", cb_value);
    printk(KERN_INFO "End kernel param\n");
}

module_init(test_param_init);
module_exit(test_param_exit);
MODULE_LICENSE("GPL");