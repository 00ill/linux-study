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

KSYMTAB_DATA(pcm179x_regmap_config, "_gpl", "");
KSYMTAB_FUNC(pcm179x_common_init, "_gpl", "");

SYMBOL_CRC(pcm179x_regmap_config, 0xf06a0db0, "_gpl");
SYMBOL_CRC(pcm179x_common_init, 0xf0b0ce7c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0x669c413b, "_dev_err" },
	{ 0x8bf569e8, "snd_soc_get_volsw_range" },
	{ 0x8830d3c5, "snd_soc_info_volsw_range" },
	{ 0x4586e558, "snd_soc_put_volsw_range" },
	{ 0xc7ba913d, "snd_soc_get_volsw" },
	{ 0x26aa5f3, "snd_soc_put_volsw" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");


MODULE_INFO(srcversion, "8EE0CDB0F89B12BCF7E9A41");
