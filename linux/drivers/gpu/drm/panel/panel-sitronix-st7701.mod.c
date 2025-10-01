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
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x55e75972, "mipi_dsi_detach" },
	{ 0x1e17308d, "mipi_dsi_dcs_write" },
	{ 0x10a3bca5, "drm_panel_remove" },
	{ 0x3dd3a80c, "drm_panel_disable" },
	{ 0x2e9cd830, "drm_panel_unprepare" },
	{ 0x39439cdf, "drm_mode_duplicate" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x595ea9b6, "drm_mode_probed_add" },
	{ 0x3bdb815f, "drm_connector_set_panel_orientation" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0x94cdce7d, "regulator_bulk_disable" },
	{ 0x39ac332b, "mipi_dbi_command_stackbuf" },
	{ 0xcd47056b, "__spi_register_driver" },
	{ 0x1cf19505, "mipi_dsi_driver_register_full" },
	{ 0x92893115, "driver_unregister" },
	{ 0x674786b8, "mipi_dsi_driver_unregister" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xaf639b91, "of_device_get_match_data" },
	{ 0x273de036, "devm_regulator_bulk_get" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0x7e7b9899, "of_drm_get_panel_orientation" },
	{ 0xe9057ca6, "drm_panel_init" },
	{ 0xa4e17f1, "drm_panel_of_backlight" },
	{ 0x4e797082, "drm_panel_add" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x871dbd35, "mipi_dsi_attach" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x952a302c, "mipi_dbi_spi_init" },
	{ 0x994edb3c, "regulator_bulk_enable" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "drm,drm_mipi_dbi");

MODULE_ALIAS("spi:rg28xx-panel");
MODULE_ALIAS("of:N*T*Canbernic,rg28xx-panel");
MODULE_ALIAS("of:N*T*Canbernic,rg28xx-panelC*");
MODULE_ALIAS("of:N*T*Canbernic,rg-arc-panel");
MODULE_ALIAS("of:N*T*Canbernic,rg-arc-panelC*");
MODULE_ALIAS("of:N*T*Cdensitron,dmt028vghmcmi-1a");
MODULE_ALIAS("of:N*T*Cdensitron,dmt028vghmcmi-1aC*");
MODULE_ALIAS("of:N*T*Celida,kd50t048a");
MODULE_ALIAS("of:N*T*Celida,kd50t048aC*");
MODULE_ALIAS("of:N*T*Ctechstar,ts8550b");
MODULE_ALIAS("of:N*T*Ctechstar,ts8550bC*");

MODULE_INFO(srcversion, "3C5AF4A349866229FA97148");
