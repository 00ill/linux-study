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
	{ 0x41a8eb1d, "drm_bridge_remove" },
	{ 0xdd2f5f95, "mipi_dsi_generic_write" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9ce050be, "drm_mode_copy" },
	{ 0x67b3f5eb, "drm_bridge_attach" },
	{ 0x674786b8, "mipi_dsi_driver_unregister" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x7c913590, "regulator_disable" },
	{ 0x669c413b, "_dev_err" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xede0def6, "devm_drm_of_get_bridge" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x63c42bd1, "devm_regulator_get" },
	{ 0xb96f2e38, "drm_bridge_add" },
	{ 0x871dbd35, "mipi_dsi_attach" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8738a8cb, "drm_atomic_helper_bridge_duplicate_state" },
	{ 0x4bd2941a, "drm_atomic_helper_bridge_destroy_state" },
	{ 0x88276b49, "drm_atomic_helper_bridge_reset" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");

MODULE_ALIAS("of:N*T*Ctoshiba,tc358762");
MODULE_ALIAS("of:N*T*Ctoshiba,tc358762C*");

MODULE_INFO(srcversion, "591F14EEC7A7A078E0E3BDC");
