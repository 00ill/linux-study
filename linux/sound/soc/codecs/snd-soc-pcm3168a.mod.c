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

KSYMTAB_DATA(pcm3168a_regmap, "_gpl", "");
KSYMTAB_FUNC(pcm3168a_probe, "_gpl", "");
KSYMTAB_FUNC(pcm3168a_remove, "_gpl", "");
KSYMTAB_DATA(pcm3168a_pm_ops, "_gpl", "");

SYMBOL_CRC(pcm3168a_regmap, 0x111bf83a, "_gpl");
SYMBOL_CRC(pcm3168a_probe, 0x4e8e6bc2, "_gpl");
SYMBOL_CRC(pcm3168a_remove, 0xc0e259b1, "_gpl");
SYMBOL_CRC(pcm3168a_pm_ops, 0xfc8d2787, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x91074fa1, "regcache_cache_only" },
	{ 0xd49bc814, "regcache_sync" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd44144c9, "snd_soc_put_enum_double" },
	{ 0xe7b70404, "regcache_mark_dirty" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0x437d0342, "__pm_runtime_set_status" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0x94cdce7d, "regulator_bulk_disable" },
	{ 0x1a32c879, "snd_soc_get_enum_double" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0x669c413b, "_dev_err" },
	{ 0x8bf569e8, "snd_soc_get_volsw_range" },
	{ 0x8830d3c5, "snd_soc_info_volsw_range" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0x4586e558, "snd_soc_put_volsw_range" },
	{ 0x2bfdd58b, "snd_soc_info_enum_double" },
	{ 0x994edb3c, "regulator_bulk_enable" },
	{ 0x273de036, "devm_regulator_bulk_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xc7ba913d, "snd_soc_get_volsw" },
	{ 0x26aa5f3, "snd_soc_put_volsw" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");


MODULE_INFO(srcversion, "B9C333E2BE05110DC9A55B8");
