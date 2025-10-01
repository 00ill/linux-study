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
	{ 0xb724c49d, "regulator_enable" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x7c913590, "regulator_disable" },
	{ 0x67b3f5eb, "drm_bridge_attach" },
	{ 0x59eb762c, "drm_connector_init_with_ddc" },
	{ 0x33b1ad47, "drm_connector_attach_encoder" },
	{ 0x6f071d9f, "drm_bridge_detect" },
	{ 0x56ced639, "drm_edid_connector_update" },
	{ 0x3afa3628, "drm_add_modes_noedid" },
	{ 0xca313957, "drm_set_preferred_mode" },
	{ 0x53ac44d8, "drm_bridge_edid_read" },
	{ 0xc6ae8403, "drm_edid_connector_add_modes" },
	{ 0x397c3d27, "drm_edid_free" },
	{ 0x122c3a7e, "_printk" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xaf639b91, "of_device_get_match_data" },
	{ 0xd3b16307, "of_graph_get_remote_node" },
	{ 0xb2a10cc3, "of_drm_find_bridge" },
	{ 0x469438cc, "of_node_put" },
	{ 0xddf1ec59, "devm_regulator_get_optional" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x581a702d, "devm_drm_bridge_add" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x8f0dae1c, "drm_atomic_helper_connector_reset" },
	{ 0xeaa8bb30, "drm_helper_probe_single_connector_modes" },
	{ 0x1c1ef61e, "drm_connector_cleanup" },
	{ 0x3b0a7432, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xf5ed3c2b, "drm_atomic_helper_connector_destroy_state" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");

MODULE_ALIAS("of:N*T*Cdumb-vga-dac");
MODULE_ALIAS("of:N*T*Cdumb-vga-dacC*");
MODULE_ALIAS("of:N*T*Cadi,adv7123");
MODULE_ALIAS("of:N*T*Cadi,adv7123C*");
MODULE_ALIAS("of:N*T*Cti,opa362");
MODULE_ALIAS("of:N*T*Cti,opa362C*");
MODULE_ALIAS("of:N*T*Cti,ths8135");
MODULE_ALIAS("of:N*T*Cti,ths8135C*");
MODULE_ALIAS("of:N*T*Cti,ths8134");
MODULE_ALIAS("of:N*T*Cti,ths8134C*");

MODULE_INFO(srcversion, "E68EFB43773CDE7B23FF71B");
