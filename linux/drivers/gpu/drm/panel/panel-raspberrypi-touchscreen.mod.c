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
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x55e75972, "mipi_dsi_detach" },
	{ 0x10a3bca5, "drm_panel_remove" },
	{ 0x7c1abbbd, "mipi_dsi_device_unregister" },
	{ 0x39439cdf, "drm_mode_duplicate" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x595ea9b6, "drm_mode_probed_add" },
	{ 0xd4099a0b, "drm_display_info_set_bus_formats" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x669c413b, "_dev_err" },
	{ 0x871dbd35, "mipi_dsi_attach" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x674786b8, "mipi_dsi_driver_unregister" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x555dcc70, "i2c_smbus_write_byte_data" },
	{ 0x38b95834, "of_graph_get_next_endpoint" },
	{ 0x3cd4b93b, "of_graph_get_remote_port_parent" },
	{ 0x6485236e, "of_find_mipi_dsi_host_by_node" },
	{ 0x469438cc, "of_node_put" },
	{ 0x292837a4, "of_graph_get_remote_port" },
	{ 0xa13f91ce, "mipi_dsi_device_register_full" },
	{ 0xe9057ca6, "drm_panel_init" },
	{ 0x4e797082, "drm_panel_add" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdd2f5f95, "mipi_dsi_generic_write" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("of:N*T*Craspberrypi,7inch-touchscreen-panel");
MODULE_ALIAS("of:N*T*Craspberrypi,7inch-touchscreen-panelC*");

MODULE_INFO(srcversion, "050CA70E2A8006A7C2ED484");
