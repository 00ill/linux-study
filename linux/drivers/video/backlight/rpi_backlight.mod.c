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
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x645c2e80, "rpi_firmware_get" },
	{ 0x9716458e, "devm_backlight_device_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "backlight");

MODULE_ALIAS("of:N*T*Craspberrypi,rpi-backlight");
MODULE_ALIAS("of:N*T*Craspberrypi,rpi-backlightC*");

MODULE_INFO(srcversion, "7D160686B1599E6DDAF75B7");
