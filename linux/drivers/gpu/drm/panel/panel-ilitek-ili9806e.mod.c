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
	{ 0x12eb1110, "mipi_dsi_dcs_write_buffer_multi" },
	{ 0x1cf19505, "mipi_dsi_driver_register_full" },
	{ 0x55e75972, "mipi_dsi_detach" },
	{ 0x10a3bca5, "drm_panel_remove" },
	{ 0x1177079f, "drm_connector_helper_get_modes_fixed" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xe806e4fd, "device_get_match_data" },
	{ 0x273de036, "devm_regulator_bulk_get" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0xe9057ca6, "drm_panel_init" },
	{ 0x7e7b9899, "of_drm_get_panel_orientation" },
	{ 0xa4e17f1, "drm_panel_of_backlight" },
	{ 0x4e797082, "drm_panel_add" },
	{ 0x871dbd35, "mipi_dsi_attach" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x674786b8, "mipi_dsi_driver_unregister" },
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0x994edb3c, "regulator_bulk_enable" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xfcb0d465, "mipi_dsi_dcs_exit_sleep_mode_multi" },
	{ 0x54101057, "mipi_dsi_dcs_set_display_on_multi" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x94cdce7d, "regulator_bulk_disable" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x446bb3ad, "mipi_dsi_dcs_set_display_off_multi" },
	{ 0x3b2df030, "mipi_dsi_dcs_enter_sleep_mode_multi" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");

MODULE_ALIAS("of:N*T*Cdensitron,dmt028vghmcmi-1d");
MODULE_ALIAS("of:N*T*Cdensitron,dmt028vghmcmi-1dC*");
MODULE_ALIAS("of:N*T*Cortustech,com35h3p70ulc");
MODULE_ALIAS("of:N*T*Cortustech,com35h3p70ulcC*");

MODULE_INFO(srcversion, "14D76B209142AFD4703C02A");
