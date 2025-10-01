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
	{ 0x669c413b, "_dev_err" },
	{ 0x39439cdf, "drm_mode_duplicate" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x595ea9b6, "drm_mode_probed_add" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x695a693f, "mipi_dsi_dcs_get_display_brightness" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x379dd0e4, "mipi_dsi_dcs_set_display_brightness" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x273de036, "devm_regulator_bulk_get" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0x9716458e, "devm_backlight_device_register" },
	{ 0xe9057ca6, "drm_panel_init" },
	{ 0x4e797082, "drm_panel_add" },
	{ 0x871dbd35, "mipi_dsi_attach" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x674786b8, "mipi_dsi_driver_unregister" },
	{ 0x6a39aab2, "mipi_dsi_dcs_set_display_off" },
	{ 0xb3a15189, "mipi_dsi_dcs_enter_sleep_mode" },
	{ 0xf9a482f9, "msleep" },
	{ 0x94cdce7d, "regulator_bulk_disable" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x994edb3c, "regulator_bulk_enable" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xdde96621, "mipi_dsi_dcs_soft_reset" },
	{ 0x35aa48fa, "mipi_dsi_dcs_set_pixel_format" },
	{ 0xd1733a2b, "mipi_dsi_dcs_set_column_address" },
	{ 0x125163ad, "mipi_dsi_dcs_set_page_address" },
	{ 0x1e17308d, "mipi_dsi_dcs_write" },
	{ 0xbdee65bb, "mipi_dsi_dcs_exit_sleep_mode" },
	{ 0xdd2f5f95, "mipi_dsi_generic_write" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6c915a29, "mipi_dsi_dcs_set_display_on" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "drm,backlight");

MODULE_ALIAS("of:N*T*Cjdi,lt070me05000");
MODULE_ALIAS("of:N*T*Cjdi,lt070me05000C*");

MODULE_INFO(srcversion, "720A92C7F2F256F8EB1A247");
