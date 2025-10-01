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
	{ 0x55e75972, "mipi_dsi_detach" },
	{ 0x10a3bca5, "drm_panel_remove" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x7c913590, "regulator_disable" },
	{ 0x39439cdf, "drm_mode_duplicate" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x595ea9b6, "drm_mode_probed_add" },
	{ 0x3bdb815f, "drm_connector_set_panel_orientation" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x669c413b, "_dev_err" },
	{ 0x6a39aab2, "mipi_dsi_dcs_set_display_off" },
	{ 0xb3a15189, "mipi_dsi_dcs_enter_sleep_mode" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xaf639b91, "of_device_get_match_data" },
	{ 0xe9057ca6, "drm_panel_init" },
	{ 0x63c42bd1, "devm_regulator_get" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x7e7b9899, "of_drm_get_panel_orientation" },
	{ 0xa4e17f1, "drm_panel_of_backlight" },
	{ 0x4e797082, "drm_panel_add" },
	{ 0x871dbd35, "mipi_dsi_attach" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x674786b8, "mipi_dsi_driver_unregister" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6c915a29, "mipi_dsi_dcs_set_display_on" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0x935d5c9b, "mipi_dsi_dcs_write_buffer" },
	{ 0xf010a028, "mipi_dsi_dcs_set_tear_on" },
	{ 0xbdee65bb, "mipi_dsi_dcs_exit_sleep_mode" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("of:N*T*Cbananapi,lhr050h41");
MODULE_ALIAS("of:N*T*Cbananapi,lhr050h41C*");
MODULE_ALIAS("of:N*T*Cfeixin,k101-im2byl02");
MODULE_ALIAS("of:N*T*Cfeixin,k101-im2byl02C*");
MODULE_ALIAS("of:N*T*Cstartek,kd050hdfia020");
MODULE_ALIAS("of:N*T*Cstartek,kd050hdfia020C*");
MODULE_ALIAS("of:N*T*Ctdo,tl050hdv35");
MODULE_ALIAS("of:N*T*Ctdo,tl050hdv35C*");
MODULE_ALIAS("of:N*T*Cwanchanglong,w552946aba");
MODULE_ALIAS("of:N*T*Cwanchanglong,w552946abaC*");
MODULE_ALIAS("of:N*T*Campire,am8001280g");
MODULE_ALIAS("of:N*T*Campire,am8001280gC*");
MODULE_ALIAS("of:N*T*Ccrystalfontz,cfaf7201280a0_050tx");
MODULE_ALIAS("of:N*T*Ccrystalfontz,cfaf7201280a0_050txC*");
MODULE_ALIAS("of:N*T*Cnwe,nwe080");
MODULE_ALIAS("of:N*T*Cnwe,nwe080C*");
MODULE_ALIAS("of:N*T*Craspberrypi,dsi-5inch");
MODULE_ALIAS("of:N*T*Craspberrypi,dsi-5inchC*");
MODULE_ALIAS("of:N*T*Craspberrypi,dsi-7inch");
MODULE_ALIAS("of:N*T*Craspberrypi,dsi-7inchC*");

MODULE_INFO(srcversion, "2D2E931915A6C7318A90BE7");
