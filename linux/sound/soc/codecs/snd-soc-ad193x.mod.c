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

KSYMTAB_DATA(ad193x_regmap_config, "_gpl", "");
KSYMTAB_FUNC(ad193x_probe, "_gpl", "");

SYMBOL_CRC(ad193x_regmap_config, 0xb79bb3c0, "_gpl");
SYMBOL_CRC(ad193x_probe, 0xea0fc14b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xd44144c9, "snd_soc_put_enum_double" },
	{ 0x7ba0b3cf, "snd_soc_dapm_sync" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0x1a32c879, "snd_soc_get_enum_double" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0x669c413b, "_dev_err" },
	{ 0xddfb6567, "snd_soc_add_component_controls" },
	{ 0xcae7cb9b, "snd_pcm_hw_constraint_list" },
	{ 0x6c7b687c, "snd_soc_dapm_add_routes" },
	{ 0x2bfdd58b, "snd_soc_info_enum_double" },
	{ 0xc7ba913d, "snd_soc_get_volsw" },
	{ 0x26aa5f3, "snd_soc_put_volsw" },
	{ 0xa9c7f153, "snd_soc_dapm_new_controls" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0xf2413f61, "regmap_multi_reg_write" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");


MODULE_INFO(srcversion, "8AFD215A68E4B35CACB8C49");
