#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(audio_graph_parse_of, "_gpl", "");

SYMBOL_CRC(audio_graph_parse_of, 0x271894e0, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x39b38c0d, "of_graph_get_remote_endpoint" },
	{ 0x23c59856, "simple_util_set_dailink_name" },
	{ 0x68d350ab, "snd_soc_of_parse_tdm_slot" },
	{ 0x9c2dba8e, "simple_util_canonicalize_platform" },
	{ 0xa0c800c8, "simple_util_is_convert_required" },
	{ 0x83480b88, "simple_util_startup" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x469438cc, "of_node_put" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x9732dee9, "simple_util_parse_convert" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xec48ee6a, "simple_util_parse_widgets" },
	{ 0xb48aabc5, "simple_util_parse_daifmt" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x8c42a9aa, "graph_util_parse_trigger_order" },
	{ 0x37a0cba, "kfree" },
	{ 0x692bdce9, "of_get_parent" },
	{ 0x30616764, "of_phandle_iterator_next" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xfad34d0, "snd_soc_of_parse_node_prefix" },
	{ 0xec9ccd9f, "simple_util_init_priv" },
	{ 0x876ce94f, "simple_util_hw_params" },
	{ 0x50a58b43, "of_get_next_child" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa276aca6, "graph_util_parse_link_direction" },
	{ 0x16e51d97, "simple_util_clean_reference" },
	{ 0x2cf8fcab, "simple_util_be_hw_params_fixup" },
	{ 0x669c413b, "_dev_err" },
	{ 0xae8ff9e5, "simple_util_parse_clk" },
	{ 0x4c599574, "simple_util_parse_routing" },
	{ 0x8fb870ae, "graph_util_card_probe" },
	{ 0x7fa3331e, "simple_util_canonicalize_cpu" },
	{ 0xbad7f81b, "snd_soc_find_dai_with_mutex" },
	{ 0xdcb764ad, "memset" },
	{ 0xb904941, "simple_util_parse_card_name" },
	{ 0xf64bb4e0, "simple_util_shutdown" },
	{ 0x99546f5c, "of_graph_get_port_parent" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x8095d2fe, "simple_util_remove" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x307d0b30, "graph_util_parse_dai" },
	{ 0xd08d2a5b, "snd_soc_pm_ops" },
	{ 0x4f1f923, "of_node_name_eq" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xa2a7f612, "of_phandle_iterator_init" },
	{ 0xaf639b91, "of_device_get_match_data" },
	{ 0x98348416, "devm_snd_soc_register_card" },
	{ 0x158ecde5, "simple_util_dai_init" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-simple-card-utils,snd-soc-core");

MODULE_ALIAS("of:N*T*Caudio-graph-card");
MODULE_ALIAS("of:N*T*Caudio-graph-cardC*");
MODULE_ALIAS("of:N*T*Caudio-graph-scu-card");
MODULE_ALIAS("of:N*T*Caudio-graph-scu-cardC*");

MODULE_INFO(srcversion, "0BCAED1AD952F5F19484009");
