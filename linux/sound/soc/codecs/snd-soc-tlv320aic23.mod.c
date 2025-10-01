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

KSYMTAB_DATA(tlv320aic23_regmap, "", "");
KSYMTAB_FUNC(tlv320aic23_probe, "", "");

SYMBOL_CRC(tlv320aic23_regmap, 0x43b4bdc6, "");
SYMBOL_CRC(tlv320aic23_probe, 0x00721381, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5d3260cd, "snd_soc_dapm_put_enum_double" },
	{ 0xd49bc814, "regcache_sync" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xd50a6007, "snd_soc_component_read" },
	{ 0xd44144c9, "snd_soc_put_enum_double" },
	{ 0xe7b70404, "regcache_mark_dirty" },
	{ 0x244c4519, "snd_soc_component_write" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1a32c879, "snd_soc_get_enum_double" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0xf2fef9c5, "snd_soc_dapm_put_volsw" },
	{ 0x2bfdd58b, "snd_soc_info_enum_double" },
	{ 0xc7ba913d, "snd_soc_get_volsw" },
	{ 0x26aa5f3, "snd_soc_put_volsw" },
	{ 0xe35415b5, "snd_soc_component_update_bits" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2128f382, "snd_soc_dapm_get_volsw" },
	{ 0x892f2f94, "snd_soc_dapm_get_enum_double" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");


MODULE_INFO(srcversion, "34178A0140D080ABEB81FC0");
