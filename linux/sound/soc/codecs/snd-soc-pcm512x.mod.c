#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_DATA(pcm512x_regmap, "_gpl", "");
KSYMTAB_FUNC(pcm512x_probe, "_gpl", "");
KSYMTAB_FUNC(pcm512x_remove, "_gpl", "");
KSYMTAB_DATA(pcm512x_pm_ops, "_gpl", "");

SYMBOL_CRC(pcm512x_regmap, 0x29f603f4, "_gpl");
SYMBOL_CRC(pcm512x_probe, 0x70a7e4b1, "_gpl");
SYMBOL_CRC(pcm512x_remove, 0xec43380f, "_gpl");
SYMBOL_CRC(pcm512x_pm_ops, 0xf0843038, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x91074fa1, "regcache_cache_only" },
	{ 0xd49bc814, "regcache_sync" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0xd44144c9, "snd_soc_put_enum_double" },
	{ 0xe7b70404, "regcache_mark_dirty" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xee9124b3, "snd_soc_params_to_frame_size" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0x437d0342, "__pm_runtime_set_status" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xcb79172c, "devm_regulator_register_notifier" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0x94cdce7d, "regulator_bulk_disable" },
	{ 0x1a32c879, "snd_soc_get_enum_double" },
	{ 0x8cd3d745, "snd_pcm_hw_rule_add" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd7577bf7, "snd_ctl_boolean_stereo_info" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcae7cb9b, "snd_pcm_hw_constraint_list" },
	{ 0x2bfdd58b, "snd_soc_info_enum_double" },
	{ 0x994edb3c, "regulator_bulk_enable" },
	{ 0x273de036, "devm_regulator_bulk_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xc7ba913d, "snd_soc_get_volsw" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x26aa5f3, "snd_soc_put_volsw" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x503bd137, "snd_interval_ranges" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x80e877ab, "snd_pcm_hw_constraint_ratnums" },
	{ 0xea124bd1, "gcd" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0x2acda8a0, "snd_soc_params_to_bclk" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm,snd");


MODULE_INFO(srcversion, "287C126E8413A93A5FBBAE7");
