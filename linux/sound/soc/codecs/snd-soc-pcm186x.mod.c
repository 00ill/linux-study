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

KSYMTAB_DATA(pcm186x_regmap, "_gpl", "");
KSYMTAB_FUNC(pcm186x_probe, "_gpl", "");

SYMBOL_CRC(pcm186x_regmap, 0x5856a674, "_gpl");
SYMBOL_CRC(pcm186x_probe, 0x3e8c2511, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5d3260cd, "snd_soc_dapm_put_enum_double" },
	{ 0x91074fa1, "regcache_cache_only" },
	{ 0xd49bc814, "regcache_sync" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x244c4519, "snd_soc_component_write" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0x94cdce7d, "regulator_bulk_disable" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0x669c413b, "_dev_err" },
	{ 0x2bfdd58b, "snd_soc_info_enum_double" },
	{ 0x994edb3c, "regulator_bulk_enable" },
	{ 0x273de036, "devm_regulator_bulk_get" },
	{ 0xc7ba913d, "snd_soc_get_volsw" },
	{ 0x26aa5f3, "snd_soc_put_volsw" },
	{ 0xe35415b5, "snd_soc_component_update_bits" },
	{ 0x892f2f94, "snd_soc_dapm_get_enum_double" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");


MODULE_INFO(srcversion, "CA7F4B3A1A009D9C4171E4C");
