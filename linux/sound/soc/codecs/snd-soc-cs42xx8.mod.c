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

KSYMTAB_DATA(cs42xx8_regmap_config, "_gpl", "");
KSYMTAB_DATA(cs42448_data, "_gpl", "");
KSYMTAB_DATA(cs42888_data, "_gpl", "");
KSYMTAB_FUNC(cs42xx8_probe, "_gpl", "");
KSYMTAB_DATA(cs42xx8_pm, "_gpl", "");

SYMBOL_CRC(cs42xx8_regmap_config, 0x76dd6ed7, "_gpl");
SYMBOL_CRC(cs42448_data, 0xcd3794c9, "_gpl");
SYMBOL_CRC(cs42888_data, 0x7cac7292, "_gpl");
SYMBOL_CRC(cs42xx8_probe, 0xb498944f, "_gpl");
SYMBOL_CRC(cs42xx8_pm, 0xd8151927, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x91074fa1, "regcache_cache_only" },
	{ 0xd49bc814, "regcache_sync" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xd44144c9, "snd_soc_put_enum_double" },
	{ 0xe7b70404, "regcache_mark_dirty" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x94cdce7d, "regulator_bulk_disable" },
	{ 0x1a32c879, "snd_soc_get_enum_double" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0x669c413b, "_dev_err" },
	{ 0xddfb6567, "snd_soc_add_component_controls" },
	{ 0x6c7b687c, "snd_soc_dapm_add_routes" },
	{ 0x2bfdd58b, "snd_soc_info_enum_double" },
	{ 0x994edb3c, "regulator_bulk_enable" },
	{ 0x273de036, "devm_regulator_bulk_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xc7ba913d, "snd_soc_get_volsw" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x26aa5f3, "snd_soc_put_volsw" },
	{ 0xa9c7f153, "snd_soc_dapm_new_controls" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x815588a6, "clk_enable" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "5618EE67BED314E797CE901");
