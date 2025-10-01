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
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x41a8eb1d, "drm_bridge_remove" },
	{ 0x67b3f5eb, "drm_bridge_attach" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x7c913590, "regulator_disable" },
	{ 0xe7b70404, "regcache_mark_dirty" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3826df6, "i2c_client_get_device_id" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xaf639b91, "of_device_get_match_data" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xede0def6, "devm_drm_of_get_bridge" },
	{ 0x63c42bd1, "devm_regulator_get" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xb96f2e38, "drm_bridge_add" },
	{ 0x8b5f7abc, "of_graph_get_endpoint_by_regs" },
	{ 0xa4d926a3, "drm_of_get_data_lanes_count" },
	{ 0x3cd4b93b, "of_graph_get_remote_port_parent" },
	{ 0x6485236e, "of_find_mipi_dsi_host_by_node" },
	{ 0x469438cc, "of_node_put" },
	{ 0x5b46b83a, "devm_mipi_dsi_device_register_full" },
	{ 0x14f71ff0, "devm_mipi_dsi_attach" },
	{ 0xac647349, "of_graph_get_port_by_id" },
	{ 0xcbdec50, "drm_of_lvds_get_dual_link_pixel_order" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0xb0bd0071, "drm_atomic_get_new_bridge_state" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xae9a8968, "drm_atomic_get_new_connector_for_encoder" },
	{ 0x945446cb, "regmap_bulk_write" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8738a8cb, "drm_atomic_helper_bridge_duplicate_state" },
	{ 0x4bd2941a, "drm_atomic_helper_bridge_destroy_state" },
	{ 0x88276b49, "drm_atomic_helper_bridge_reset" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,regmap-i2c");

MODULE_ALIAS("of:N*T*Cti,sn65dsi83");
MODULE_ALIAS("of:N*T*Cti,sn65dsi83C*");
MODULE_ALIAS("of:N*T*Cti,sn65dsi84");
MODULE_ALIAS("of:N*T*Cti,sn65dsi84C*");
MODULE_ALIAS("i2c:ti,sn65dsi83");
MODULE_ALIAS("i2c:ti,sn65dsi84");

MODULE_INFO(srcversion, "35A586A77CCF6359248AD8C");
