#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xefa7f375, "i2c_smbus_read_byte_data" },
	{ 0x555dcc70, "i2c_smbus_write_byte_data" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xda1bd86, "i2c_get_match_data" },
	{ 0x2c605a6c, "i2c_smbus_write_byte" },
	{ 0xef160adf, "devm_hwmon_device_register_with_groups" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb865073a, "i2c_smbus_read_word_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xe94059dd, "i2c_smbus_write_word_data" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cdallas,ds1621");
MODULE_ALIAS("of:N*T*Cdallas,ds1621C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1625");
MODULE_ALIAS("of:N*T*Cdallas,ds1625C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1631");
MODULE_ALIAS("of:N*T*Cdallas,ds1631C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1721");
MODULE_ALIAS("of:N*T*Cdallas,ds1721C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1731");
MODULE_ALIAS("of:N*T*Cdallas,ds1731C*");
MODULE_ALIAS("i2c:ds1621");
MODULE_ALIAS("i2c:ds1625");
MODULE_ALIAS("i2c:ds1631");
MODULE_ALIAS("i2c:ds1721");
MODULE_ALIAS("i2c:ds1731");

MODULE_INFO(srcversion, "4FE73E7419DD31FF76DC50E");
