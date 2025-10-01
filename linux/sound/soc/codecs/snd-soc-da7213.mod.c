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
	{ 0x5d3260cd, "snd_soc_dapm_put_enum_double" },
	{ 0x91074fa1, "regcache_cache_only" },
	{ 0xd49bc814, "regcache_sync" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x6cfb64fe, "regmap_raw_read" },
	{ 0xd50a6007, "snd_soc_component_read" },
	{ 0x62990e3a, "pm_runtime_set_autosuspend_delay" },
	{ 0xd44144c9, "snd_soc_put_enum_double" },
	{ 0xe7b70404, "regcache_mark_dirty" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x244c4519, "snd_soc_component_write" },
	{ 0x437d0342, "__pm_runtime_set_status" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0x94cdce7d, "regulator_bulk_disable" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x1a32c879, "snd_soc_get_enum_double" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf2fef9c5, "snd_soc_dapm_put_volsw" },
	{ 0xa0fffb26, "device_property_read_string" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x2bfdd58b, "snd_soc_info_enum_double" },
	{ 0x994edb3c, "regulator_bulk_enable" },
	{ 0x273de036, "devm_regulator_bulk_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xef54673c, "devm_clk_get_optional" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xc7ba913d, "snd_soc_get_volsw" },
	{ 0x26aa5f3, "snd_soc_put_volsw" },
	{ 0xe35415b5, "snd_soc_component_update_bits" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd7281bdb, "dapm_regulator_event" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2128f382, "snd_soc_dapm_get_volsw" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x892f2f94, "snd_soc_dapm_get_enum_double" },
	{ 0xee1be65c, "regmap_raw_write" },
	{ 0xc0d8cf8, "__pm_runtime_use_autosuspend" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,regmap-i2c,snd-pcm");

MODULE_ALIAS("of:N*T*Cdlg,da7212");
MODULE_ALIAS("of:N*T*Cdlg,da7212C*");
MODULE_ALIAS("of:N*T*Cdlg,da7213");
MODULE_ALIAS("of:N*T*Cdlg,da7213C*");
MODULE_ALIAS("i2c:da7213");

MODULE_INFO(srcversion, "B7B36EE8FB11580B081AB59");
