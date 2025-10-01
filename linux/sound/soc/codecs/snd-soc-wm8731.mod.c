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

KSYMTAB_FUNC(wm8731_init, "_gpl", "");
KSYMTAB_DATA(wm8731_regmap, "_gpl", "");

SYMBOL_CRC(wm8731_init, 0x90472f94, "_gpl");
SYMBOL_CRC(wm8731_regmap, 0x1998fb9e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5d3260cd, "snd_soc_dapm_put_enum_double" },
	{ 0xd49bc814, "regcache_sync" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0xd50a6007, "snd_soc_component_read" },
	{ 0xe7b70404, "regcache_mark_dirty" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0x244c4519, "snd_soc_component_write" },
	{ 0x7ba0b3cf, "snd_soc_dapm_sync" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x94cdce7d, "regulator_bulk_disable" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0xd203810d, "snd_ctl_boolean_mono_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf2fef9c5, "snd_soc_dapm_put_volsw" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcae7cb9b, "snd_pcm_hw_constraint_list" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x2bfdd58b, "snd_soc_info_enum_double" },
	{ 0x994edb3c, "regulator_bulk_enable" },
	{ 0x273de036, "devm_regulator_bulk_get" },
	{ 0xc7ba913d, "snd_soc_get_volsw" },
	{ 0x26aa5f3, "snd_soc_put_volsw" },
	{ 0xe35415b5, "snd_soc_component_update_bits" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x2128f382, "snd_soc_dapm_get_volsw" },
	{ 0x892f2f94, "snd_soc_dapm_get_enum_double" },
	{ 0x815588a6, "clk_enable" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd,snd-pcm");


MODULE_INFO(srcversion, "7113C57B5FCFB5144C1D964");
