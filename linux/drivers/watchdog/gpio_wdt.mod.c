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
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6f7defa4, "gpiod_direction_output" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xa0fffb26, "device_property_read_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0xc3e6921c, "watchdog_init_timeout" },
	{ 0xcf868890, "devm_watchdog_register_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x2092cf46, "gpiod_direction_input" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Clinux,wdt-gpio");
MODULE_ALIAS("of:N*T*Clinux,wdt-gpioC*");

MODULE_INFO(srcversion, "3CA443E9626EB15F7C5E386");
