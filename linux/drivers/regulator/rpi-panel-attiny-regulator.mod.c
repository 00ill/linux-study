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
	{ 0xcc0983c6, "regmap_write" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1cba4270, "rdev_get_drvdata" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdcb764ad, "memset" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xed5e1c79, "devm_regulator_register" },
	{ 0x9716458e, "devm_backlight_device_register" },
	{ 0x71d5ffb9, "devm_gpiochip_add_data_with_key" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x35ef1cd, "gpiochip_get_data" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c,backlight");

MODULE_ALIAS("of:N*T*Craspberrypi,7inch-touchscreen-panel-regulator");
MODULE_ALIAS("of:N*T*Craspberrypi,7inch-touchscreen-panel-regulatorC*");

MODULE_INFO(srcversion, "6DFEB69765D220B82A0C8DD");
