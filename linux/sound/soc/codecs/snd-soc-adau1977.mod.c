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

KSYMTAB_FUNC(adau1977_probe, "_gpl", "");
KSYMTAB_DATA(adau1977_regmap_config, "_gpl", "");

SYMBOL_CRC(adau1977_probe, 0xf5977246, "_gpl");
SYMBOL_CRC(adau1977_regmap_config, 0xf7baf5ca, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb724c49d, "regulator_enable" },
	{ 0x91074fa1, "regcache_cache_only" },
	{ 0xd49bc814, "regcache_sync" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xc00e0644, "snd_pcm_hw_constraint_minmax" },
	{ 0xe7b70404, "regcache_mark_dirty" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xddf1ec59, "devm_regulator_get_optional" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x63c42bd1, "devm_regulator_get" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0x669c413b, "_dev_err" },
	{ 0xcae7cb9b, "snd_pcm_hw_constraint_list" },
	{ 0x7fca93ba, "snd_pcm_hw_constraint_mask64" },
	{ 0xc7ba913d, "snd_soc_get_volsw" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x26aa5f3, "snd_soc_put_volsw" },
	{ 0xa9c7f153, "snd_soc_dapm_new_controls" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd1b8a25, "regcache_cache_bypass" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x7c913590, "regulator_disable" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "CD33AE00646636A8FA58F51");
