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
	{ 0xb8409034, "devm_mux_chip_alloc" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x486af00d, "gpiod_count" },
	{ 0xf8d07858, "bitmap_from_arr32" },
	{ 0x791acbcf, "gpiod_set_array_value_cansleep" },
	{ 0x85ec9bba, "devm_mux_chip_register" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0xe32031d6, "devm_gpiod_get_array" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mux-core");

MODULE_ALIAS("of:N*T*Cgpio-mux");
MODULE_ALIAS("of:N*T*Cgpio-muxC*");

MODULE_INFO(srcversion, "0A3987EA653CEDD78E8BDEA");
