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
	{ 0xb865073a, "i2c_smbus_read_word_data" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x2c605a6c, "i2c_smbus_write_byte" },
	{ 0xf9a482f9, "msleep" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd02eafcc, "__devm_iio_device_register" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x555dcc70, "i2c_smbus_write_byte_data" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Csilabs,si7020");
MODULE_ALIAS("of:N*T*Csilabs,si7020C*");
MODULE_ALIAS("i2c:si7020");
MODULE_ALIAS("i2c:th06");

MODULE_INFO(srcversion, "CC54A270E41B6A60BAEBEB1");
