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
	{ 0x9ba6295b, "regmap_read" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xadd14be9, "iio_get_time_ns" },
	{ 0xebf2304b, "iio_push_event" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0xd02eafcc, "__devm_iio_device_register" },
	{ 0x37086b9, "iio_read_const_attr" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio,regmap-i2c");

MODULE_ALIAS("i2c:veml6030");
MODULE_ALIAS("of:N*T*Cvishay,veml6030");
MODULE_ALIAS("of:N*T*Cvishay,veml6030C*");

MODULE_INFO(srcversion, "4DFB05E772CD4038FB650D3");
