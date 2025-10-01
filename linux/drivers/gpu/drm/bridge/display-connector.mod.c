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
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0x7c913590, "regulator_disable" },
	{ 0x41a8eb1d, "drm_bridge_remove" },
	{ 0xaad5afda, "i2c_put_adapter" },
	{ 0x2ee70f4e, "drm_edid_read_ddc" },
	{ 0xf2cffaef, "gpiod_get_value_cansleep" },
	{ 0x2306aa71, "drm_probe_ddc" },
	{ 0xb0bd0071, "drm_atomic_get_new_bridge_state" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xaf639b91, "of_device_get_match_data" },
	{ 0x3a1aed17, "of_property_read_string" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0xb96f2e38, "drm_bridge_add" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x2795b5f0, "gpiod_to_irq" },
	{ 0xdcb764ad, "memset" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0xdc0b74e3, "i2c_get_adapter_by_fwnode" },
	{ 0x469438cc, "of_node_put" },
	{ 0xddf1ec59, "devm_regulator_get_optional" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa4015b15, "drm_bridge_hpd_notify" },
	{ 0x8738a8cb, "drm_atomic_helper_bridge_duplicate_state" },
	{ 0x4bd2941a, "drm_atomic_helper_bridge_destroy_state" },
	{ 0x88276b49, "drm_atomic_helper_bridge_reset" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");

MODULE_ALIAS("of:N*T*Ccomposite-video-connector");
MODULE_ALIAS("of:N*T*Ccomposite-video-connectorC*");
MODULE_ALIAS("of:N*T*Cdvi-connector");
MODULE_ALIAS("of:N*T*Cdvi-connectorC*");
MODULE_ALIAS("of:N*T*Chdmi-connector");
MODULE_ALIAS("of:N*T*Chdmi-connectorC*");
MODULE_ALIAS("of:N*T*Csvideo-connector");
MODULE_ALIAS("of:N*T*Csvideo-connectorC*");
MODULE_ALIAS("of:N*T*Cvga-connector");
MODULE_ALIAS("of:N*T*Cvga-connectorC*");
MODULE_ALIAS("of:N*T*Cdp-connector");
MODULE_ALIAS("of:N*T*Cdp-connectorC*");

MODULE_INFO(srcversion, "192F7F1E110267897AD8B84");
