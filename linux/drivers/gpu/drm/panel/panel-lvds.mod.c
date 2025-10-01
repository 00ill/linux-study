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
	{ 0x10a3bca5, "drm_panel_remove" },
	{ 0x3dd3a80c, "drm_panel_disable" },
	{ 0x39439cdf, "drm_mode_duplicate" },
	{ 0x595ea9b6, "drm_mode_probed_add" },
	{ 0xd4099a0b, "drm_display_info_set_bus_formats" },
	{ 0x3bdb815f, "drm_connector_set_panel_orientation" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x7c913590, "regulator_disable" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0x669c413b, "_dev_err" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x7e7b9899, "of_drm_get_panel_orientation" },
	{ 0x9237c7ed, "of_get_drm_panel_display_mode" },
	{ 0x3a1aed17, "of_property_read_string" },
	{ 0xb228c1bd, "drm_of_lvds_get_data_mapping" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0xddf1ec59, "devm_regulator_get_optional" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xe9057ca6, "drm_panel_init" },
	{ 0xa4e17f1, "drm_panel_of_backlight" },
	{ 0x4e797082, "drm_panel_add" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("of:N*T*Cpanel-lvds");
MODULE_ALIAS("of:N*T*Cpanel-lvdsC*");

MODULE_INFO(srcversion, "2B8FD0564939E5AA5B891CA");
