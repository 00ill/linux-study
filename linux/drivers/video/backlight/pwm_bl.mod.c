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
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x18337c70, "pwm_apply_might_sleep" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x7c913590, "regulator_disable" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xddf1ec59, "devm_regulator_get_optional" },
	{ 0xce408618, "devm_pwm_get" },
	{ 0x433cb9ab, "backlight_device_register" },
	{ 0xf2cffaef, "gpiod_get_value_cansleep" },
	{ 0x34593969, "regulator_is_enabled" },
	{ 0x6f7defa4, "gpiod_direction_output" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x2a10607e, "devm_kfree" },
	{ 0xcd458c71, "backlight_device_unregister" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "backlight");

MODULE_ALIAS("of:N*T*Cpwm-backlight");
MODULE_ALIAS("of:N*T*Cpwm-backlightC*");

MODULE_INFO(srcversion, "203EFCBF8239DA0AC953994");
