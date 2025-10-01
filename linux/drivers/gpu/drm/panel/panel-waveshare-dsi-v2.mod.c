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
	{ 0x1cf19505, "mipi_dsi_driver_register_full" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0x55e75972, "mipi_dsi_detach" },
	{ 0x10a3bca5, "drm_panel_remove" },
	{ 0x39439cdf, "drm_mode_duplicate" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x595ea9b6, "drm_mode_probed_add" },
	{ 0x3bdb815f, "drm_connector_set_panel_orientation" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x669c413b, "_dev_err" },
	{ 0x6a39aab2, "mipi_dsi_dcs_set_display_off" },
	{ 0xb3a15189, "mipi_dsi_dcs_enter_sleep_mode" },
	{ 0x1e17308d, "mipi_dsi_dcs_write" },
	{ 0x7a1c2aba, "of_get_property" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xaf639b91, "of_device_get_match_data" },
	{ 0xe9057ca6, "drm_panel_init" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x7e7b9899, "of_drm_get_panel_orientation" },
	{ 0xa4e17f1, "drm_panel_of_backlight" },
	{ 0x4e797082, "drm_panel_add" },
	{ 0x871dbd35, "mipi_dsi_attach" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x674786b8, "mipi_dsi_driver_unregister" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("of:N*T*Cwaveshare,12.3-dsi-touch-a,4lane");
MODULE_ALIAS("of:N*T*Cwaveshare,12.3-dsi-touch-a,4laneC*");
MODULE_ALIAS("of:N*T*Cwaveshare,10.1-dsi-touch-a-4lane");
MODULE_ALIAS("of:N*T*Cwaveshare,10.1-dsi-touch-a-4laneC*");
MODULE_ALIAS("of:N*T*Cwaveshare,10.1-dsi-touch-a");
MODULE_ALIAS("of:N*T*Cwaveshare,10.1-dsi-touch-aC*");
MODULE_ALIAS("of:N*T*Cwaveshare,10.1-dsi-touch-b,4lane");
MODULE_ALIAS("of:N*T*Cwaveshare,10.1-dsi-touch-b,4laneC*");
MODULE_ALIAS("of:N*T*Cwaveshare,10.1-dsi-touch-b");
MODULE_ALIAS("of:N*T*Cwaveshare,10.1-dsi-touch-bC*");
MODULE_ALIAS("of:N*T*Cwaveshare,9.0-dsi-touch-b,4lane");
MODULE_ALIAS("of:N*T*Cwaveshare,9.0-dsi-touch-b,4laneC*");
MODULE_ALIAS("of:N*T*Cwaveshare,9.0-dsi-touch-b");
MODULE_ALIAS("of:N*T*Cwaveshare,9.0-dsi-touch-bC*");
MODULE_ALIAS("of:N*T*Cwaveshare,8.8-dsi-touch-a");
MODULE_ALIAS("of:N*T*Cwaveshare,8.8-dsi-touch-aC*");
MODULE_ALIAS("of:N*T*Cwaveshare,8.0-dsi-touch-a-4lane");
MODULE_ALIAS("of:N*T*Cwaveshare,8.0-dsi-touch-a-4laneC*");
MODULE_ALIAS("of:N*T*Cwaveshare,8.0-dsi-touch-a");
MODULE_ALIAS("of:N*T*Cwaveshare,8.0-dsi-touch-aC*");
MODULE_ALIAS("of:N*T*Cwaveshare,7.0-dsi-touch-a");
MODULE_ALIAS("of:N*T*Cwaveshare,7.0-dsi-touch-aC*");
MODULE_ALIAS("of:N*T*Cwaveshare,7.0-dsi-touch-b");
MODULE_ALIAS("of:N*T*Cwaveshare,7.0-dsi-touch-bC*");
MODULE_ALIAS("of:N*T*Cwaveshare,5.5-dsi-touch-a");
MODULE_ALIAS("of:N*T*Cwaveshare,5.5-dsi-touch-aC*");
MODULE_ALIAS("of:N*T*Cwaveshare,5.0-dsi-touch-a");
MODULE_ALIAS("of:N*T*Cwaveshare,5.0-dsi-touch-aC*");
MODULE_ALIAS("of:N*T*Cwaveshare,4.0-dsi-touch-c");
MODULE_ALIAS("of:N*T*Cwaveshare,4.0-dsi-touch-cC*");
MODULE_ALIAS("of:N*T*Cwaveshare,3.4-dsi-touch-c");
MODULE_ALIAS("of:N*T*Cwaveshare,3.4-dsi-touch-cC*");

MODULE_INFO(srcversion, "F3CBB43E46A184FF5255077");
