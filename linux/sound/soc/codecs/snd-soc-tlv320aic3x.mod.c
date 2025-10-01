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

KSYMTAB_DATA(aic3x_regmap, "_gpl", "");
KSYMTAB_FUNC(aic3x_probe, "", "");
KSYMTAB_FUNC(aic3x_remove, "", "");

SYMBOL_CRC(aic3x_regmap, 0x27970bbd, "_gpl");
SYMBOL_CRC(aic3x_probe, 0x9ce3b4d5, "");
SYMBOL_CRC(aic3x_remove, 0xdbbf7619, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5d3260cd, "snd_soc_dapm_put_enum_double" },
	{ 0x91074fa1, "regcache_cache_only" },
	{ 0xd49bc814, "regcache_sync" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0xd50a6007, "snd_soc_component_read" },
	{ 0x888069f8, "snd_soc_component_test_bits" },
	{ 0xd44144c9, "snd_soc_put_enum_double" },
	{ 0xe7b70404, "regcache_mark_dirty" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x244c4519, "snd_soc_component_write" },
	{ 0x100f41a4, "regulator_get_voltage" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0xcb79172c, "devm_regulator_register_notifier" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x94cdce7d, "regulator_bulk_disable" },
	{ 0x1a32c879, "snd_soc_get_enum_double" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf2fef9c5, "snd_soc_dapm_put_volsw" },
	{ 0xddfb6567, "snd_soc_add_component_controls" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x6c7b687c, "snd_soc_dapm_add_routes" },
	{ 0x4ea8cba3, "snd_soc_dapm_kcontrol_dapm" },
	{ 0x2bfdd58b, "snd_soc_info_enum_double" },
	{ 0x994edb3c, "regulator_bulk_enable" },
	{ 0x273de036, "devm_regulator_bulk_get" },
	{ 0xc7ba913d, "snd_soc_get_volsw" },
	{ 0x26aa5f3, "snd_soc_put_volsw" },
	{ 0xe35415b5, "snd_soc_component_update_bits" },
	{ 0xa9c7f153, "snd_soc_dapm_new_controls" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0x2128f382, "snd_soc_dapm_get_volsw" },
	{ 0x2e9298c8, "regmap_register_patch" },
	{ 0xbf3721f6, "snd_soc_dapm_mixer_update_power" },
	{ 0x892f2f94, "snd_soc_dapm_get_enum_double" },
	{ 0xb3b39a03, "gpiod_set_consumer_name" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");


MODULE_INFO(srcversion, "0C5801046C23C9706D71493");
