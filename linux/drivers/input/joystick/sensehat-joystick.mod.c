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
	{ 0x9ba6295b, "regmap_read" },
	{ 0x41cc93f6, "input_event" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x3e7bb035, "dev_get_regmap" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0xcab72f31, "input_register_device" },
	{ 0xbb324372, "platform_get_irq" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Craspberrypi,sensehat-joystick");
MODULE_ALIAS("of:N*T*Craspberrypi,sensehat-joystickC*");

MODULE_INFO(srcversion, "AB2BB2BCEB8BFD789CA53EF");
