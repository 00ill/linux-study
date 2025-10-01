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

KSYMTAB_DATA(aic32x4_regmap_config, "", "");
KSYMTAB_FUNC(aic32x4_probe, "", "");
KSYMTAB_FUNC(aic32x4_remove, "", "");
KSYMTAB_FUNC(aic32x4_register_clocks, "_gpl", "");

SYMBOL_CRC(aic32x4_regmap_config, 0x91ee772e, "");
SYMBOL_CRC(aic32x4_probe, 0xdf29ff81, "");
SYMBOL_CRC(aic32x4_remove, 0x5f4d167f, "");
SYMBOL_CRC(aic32x4_register_clocks, 0x5ed8334a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5d3260cd, "snd_soc_dapm_put_enum_double" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x24da821d, "of_property_match_string" },
	{ 0xd50a6007, "snd_soc_component_read" },
	{ 0x74e0bd7f, "gpiod_set_raw_value_cansleep" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xd44144c9, "snd_soc_put_enum_double" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0xddf1ec59, "devm_regulator_get_optional" },
	{ 0x244c4519, "snd_soc_component_write" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0x122c3a7e, "_printk" },
	{ 0xd54a2d90, "devm_clk_bulk_get" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x63c42bd1, "devm_regulator_get" },
	{ 0x1a32c879, "snd_soc_get_enum_double" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0xc7a7e770, "clk_bulk_enable" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0xc529465e, "devm_gpio_request_one" },
	{ 0xd203810d, "snd_ctl_boolean_mono_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf2fef9c5, "snd_soc_dapm_put_volsw" },
	{ 0x3e7bb035, "dev_get_regmap" },
	{ 0xddfb6567, "snd_soc_add_component_controls" },
	{ 0x735829f, "of_get_named_gpio" },
	{ 0x54064512, "devm_clk_register" },
	{ 0xdcb764ad, "memset" },
	{ 0xfb69d912, "clk_hw_determine_rate_no_reparent" },
	{ 0x2bfdd58b, "snd_soc_info_enum_double" },
	{ 0x5d22ffe8, "of_clk_get_parent_name" },
	{ 0xc7ba913d, "snd_soc_get_volsw" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x26aa5f3, "snd_soc_put_volsw" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0xe35415b5, "snd_soc_component_update_bits" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x44056010, "gpio_to_desc" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x7c913590, "regulator_disable" },
	{ 0xead5c8e5, "clk_bulk_prepare" },
	{ 0x2128f382, "snd_soc_dapm_get_volsw" },
	{ 0x892f2f94, "snd_soc_dapm_get_enum_double" },
	{ 0x5f10fc21, "clk_hw_register_clkdev" },
	{ 0xf9a482f9, "msleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm,snd");


MODULE_INFO(srcversion, "B09015FE6CD8E3DA57B042C");
