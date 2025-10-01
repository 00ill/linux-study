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
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x35ef1cd, "gpiochip_get_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xf9a482f9, "msleep" },
	{ 0x71d5ffb9, "devm_gpiochip_add_data_with_key" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x9716458e, "devm_backlight_device_register" },
	{ 0x669c413b, "_dev_err" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c,backlight");

MODULE_ALIAS("of:N*T*Cwaveshare,touchscreen-panel-regulator");
MODULE_ALIAS("of:N*T*Cwaveshare,touchscreen-panel-regulatorC*");

MODULE_INFO(srcversion, "93534B9A1D4FBB8C75C9FB0");
