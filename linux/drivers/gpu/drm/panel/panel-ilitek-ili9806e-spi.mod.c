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
	{ 0xcd47056b, "__spi_register_driver" },
	{ 0x10a3bca5, "drm_panel_remove" },
	{ 0xdcb764ad, "memset" },
	{ 0xce12c86b, "spi_sync" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xaf639b91, "of_device_get_match_data" },
	{ 0xe9057ca6, "drm_panel_init" },
	{ 0x63c42bd1, "devm_regulator_get" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa4e17f1, "drm_panel_of_backlight" },
	{ 0x4e797082, "drm_panel_add" },
	{ 0x669c413b, "_dev_err" },
	{ 0x92893115, "driver_unregister" },
	{ 0x39439cdf, "drm_mode_duplicate" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x595ea9b6, "drm_mode_probed_add" },
	{ 0xd4099a0b, "drm_display_info_set_bus_formats" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("spi:txw397017s2");
MODULE_ALIAS("spi:ili9806e");
MODULE_ALIAS("spi:hyperpixel4");
MODULE_ALIAS("of:N*T*Ctxw,txw397017s2");
MODULE_ALIAS("of:N*T*Ctxw,txw397017s2C*");
MODULE_ALIAS("of:N*T*Cpimoroni,hyperpixel4");
MODULE_ALIAS("of:N*T*Cpimoroni,hyperpixel4C*");
MODULE_ALIAS("of:N*T*Cilitek,ili9806e");
MODULE_ALIAS("of:N*T*Cilitek,ili9806eC*");

MODULE_INFO(srcversion, "71BDB30ABCE5BFDA4EA6DB3");
