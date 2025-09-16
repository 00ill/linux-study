#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

// module_param(name, type, perm)



static int __init test_param_init(void)
{
    return 0;
}

static int __exit test_param_exit(void)
{
    return 0;
}

module_init(test_param_init);
module_exit(test_param_exit);