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
	{ 0x41cc93f6, "input_event" },
	{ 0xf2cffaef, "gpiod_get_value_cansleep" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xe32031d6, "devm_gpiod_get_array" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0x669c413b, "_dev_err" },
	{ 0x42e74445, "device_property_match_string" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0x2795b5f0, "gpiod_to_irq" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crotary-encoder");
MODULE_ALIAS("of:N*T*Crotary-encoderC*");

MODULE_INFO(srcversion, "1FD3A79ED28B01AAAF71218");
