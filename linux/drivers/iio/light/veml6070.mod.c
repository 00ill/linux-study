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
	{ 0x2f4d7036, "iio_device_unregister" },
	{ 0x5c362e8, "i2c_unregister_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2c605a6c, "i2c_smbus_write_byte" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaff77e28, "i2c_smbus_read_byte" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa60c35c2, "i2c_new_dummy_device" },
	{ 0x9dd92e13, "__iio_device_register" },
	{ 0x669c413b, "_dev_err" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cvishay,veml6070");
MODULE_ALIAS("of:N*T*Cvishay,veml6070C*");
MODULE_ALIAS("i2c:veml6070");

MODULE_INFO(srcversion, "C796C140B05A2E08C96D548");
