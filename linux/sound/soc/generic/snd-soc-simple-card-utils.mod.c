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

KSYMTAB_FUNC(simple_util_get_sample_fmt, "_gpl", "");
KSYMTAB_FUNC(simple_util_parse_convert, "_gpl", "");
KSYMTAB_FUNC(simple_util_is_convert_required, "_gpl", "");
KSYMTAB_FUNC(simple_util_parse_daifmt, "_gpl", "");
KSYMTAB_FUNC(simple_util_parse_tdm_width_map, "_gpl", "");
KSYMTAB_FUNC(simple_util_set_dailink_name, "_gpl", "");
KSYMTAB_FUNC(simple_util_parse_card_name, "_gpl", "");
KSYMTAB_FUNC(simple_util_parse_clk, "_gpl", "");
KSYMTAB_FUNC(simple_util_startup, "_gpl", "");
KSYMTAB_FUNC(simple_util_shutdown, "_gpl", "");
KSYMTAB_FUNC(simple_util_hw_params, "_gpl", "");
KSYMTAB_FUNC(simple_util_be_hw_params_fixup, "_gpl", "");
KSYMTAB_FUNC(simple_util_dai_init, "_gpl", "");
KSYMTAB_FUNC(simple_util_canonicalize_platform, "_gpl", "");
KSYMTAB_FUNC(simple_util_canonicalize_cpu, "_gpl", "");
KSYMTAB_FUNC(simple_util_clean_reference, "_gpl", "");
KSYMTAB_FUNC(simple_util_parse_routing, "_gpl", "");
KSYMTAB_FUNC(simple_util_parse_widgets, "_gpl", "");
KSYMTAB_FUNC(simple_util_parse_pin_switches, "_gpl", "");
KSYMTAB_FUNC(simple_util_init_jack, "_gpl", "");
KSYMTAB_FUNC(simple_util_init_aux_jacks, "_gpl", "");
KSYMTAB_FUNC(simple_util_init_priv, "_gpl", "");
KSYMTAB_FUNC(simple_util_remove, "_gpl", "");
KSYMTAB_FUNC(graph_util_card_probe, "_gpl", "");
KSYMTAB_FUNC(graph_util_is_ports0, "_gpl", "");
KSYMTAB_FUNC(graph_util_parse_dai, "_gpl", "");
KSYMTAB_FUNC(graph_util_parse_link_direction, "_gpl", "");
KSYMTAB_FUNC(graph_util_parse_trigger_order, "_gpl", "");

SYMBOL_CRC(simple_util_get_sample_fmt, 0x2be78522, "_gpl");
SYMBOL_CRC(simple_util_parse_convert, 0x9732dee9, "_gpl");
SYMBOL_CRC(simple_util_is_convert_required, 0xa0c800c8, "_gpl");
SYMBOL_CRC(simple_util_parse_daifmt, 0xb48aabc5, "_gpl");
SYMBOL_CRC(simple_util_parse_tdm_width_map, 0x70730640, "_gpl");
SYMBOL_CRC(simple_util_set_dailink_name, 0x23c59856, "_gpl");
SYMBOL_CRC(simple_util_parse_card_name, 0x0b904941, "_gpl");
SYMBOL_CRC(simple_util_parse_clk, 0xae8ff9e5, "_gpl");
SYMBOL_CRC(simple_util_startup, 0x83480b88, "_gpl");
SYMBOL_CRC(simple_util_shutdown, 0xf64bb4e0, "_gpl");
SYMBOL_CRC(simple_util_hw_params, 0x876ce94f, "_gpl");
SYMBOL_CRC(simple_util_be_hw_params_fixup, 0x2cf8fcab, "_gpl");
SYMBOL_CRC(simple_util_dai_init, 0x158ecde5, "_gpl");
SYMBOL_CRC(simple_util_canonicalize_platform, 0x9c2dba8e, "_gpl");
SYMBOL_CRC(simple_util_canonicalize_cpu, 0x7fa3331e, "_gpl");
SYMBOL_CRC(simple_util_clean_reference, 0x16e51d97, "_gpl");
SYMBOL_CRC(simple_util_parse_routing, 0x4c599574, "_gpl");
SYMBOL_CRC(simple_util_parse_widgets, 0xec48ee6a, "_gpl");
SYMBOL_CRC(simple_util_parse_pin_switches, 0xb88214c4, "_gpl");
SYMBOL_CRC(simple_util_init_jack, 0x79d14906, "_gpl");
SYMBOL_CRC(simple_util_init_aux_jacks, 0xee0b25db, "_gpl");
SYMBOL_CRC(simple_util_init_priv, 0xec9ccd9f, "_gpl");
SYMBOL_CRC(simple_util_remove, 0x8095d2fe, "_gpl");
SYMBOL_CRC(graph_util_card_probe, 0x8fb870ae, "_gpl");
SYMBOL_CRC(graph_util_is_ports0, 0xb93e8b3b, "_gpl");
SYMBOL_CRC(graph_util_parse_dai, 0x307d0b30, "_gpl");
SYMBOL_CRC(graph_util_parse_link_direction, 0xa276aca6, "_gpl");
SYMBOL_CRC(graph_util_parse_trigger_order, 0x8c42a9aa, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe50db602, "snd_soc_get_dai_via_args" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x469438cc, "of_node_put" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xda95366, "snd_soc_dummy_dlc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x42d820de, "snd_soc_dai_set_tdm_slot" },
	{ 0x5c24c15d, "snd_soc_jack_add_gpios" },
	{ 0xc00e0644, "snd_pcm_hw_constraint_minmax" },
	{ 0x4241833, "of_graph_parse_endpoint" },
	{ 0x37a0cba, "kfree" },
	{ 0x692bdce9, "of_get_parent" },
	{ 0xf9622dd1, "snd_soc_daifmt_clock_provider_from_bitmap" },
	{ 0x697cbeec, "of_node_get" },
	{ 0x95847995, "snd_soc_get_dai_id" },
	{ 0x82f8a615, "snd_soc_component_set_sysclk" },
	{ 0x7cce589b, "snd_soc_card_jack_new" },
	{ 0x269cf38f, "snd_soc_of_parse_audio_routing" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x3b62e3cb, "devm_kvasprintf" },
	{ 0xf19dda0, "snd_soc_dai_set_sysclk" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb17870d2, "snd_soc_component_set_jack" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x30dbbf3f, "snd_soc_daifmt_parse_clock_provider_raw" },
	{ 0x67b9787a, "of_graph_get_endpoint_count" },
	{ 0xec905c5d, "of_get_child_by_name" },
	{ 0x9e112a5a, "devm_get_clk_from_child" },
	{ 0x669c413b, "_dev_err" },
	{ 0x20dd2ee6, "snd_soc_dai_name_get" },
	{ 0xce4b2614, "snd_soc_dlc_use_cpu_as_platform" },
	{ 0x5a86c6d4, "of_property_count_elems_of_size" },
	{ 0x3a1aed17, "of_property_read_string" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0x38b95834, "of_graph_get_next_endpoint" },
	{ 0xeb0001e, "snd_soc_get_dlc" },
	{ 0xdcb764ad, "memset" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x99546f5c, "of_graph_get_port_parent" },
	{ 0xf65465e1, "snd_soc_daifmt_parse_format" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x9b76ae25, "snd_soc_card_jack_new_pins" },
	{ 0x60b0af5, "snd_soc_runtime_calc_hw" },
	{ 0x8a502be1, "snd_soc_of_parse_pin_switches" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x80dd4730, "gpiod_get_optional" },
	{ 0x4f1f923, "of_node_name_eq" },
	{ 0xda769b09, "snd_soc_of_parse_audio_simple_widgets" },
	{ 0x3a8fa32d, "snd_soc_copy_dai_args" },
	{ 0xb3b39a03, "gpiod_set_consumer_name" },
	{ 0xa932d852, "snd_soc_dai_active" },
	{ 0x487bda51, "snd_soc_of_parse_card_name" },
	{ 0x1303fea, "snd_soc_component_get_jack_type" },
	{ 0x815588a6, "clk_enable" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");


MODULE_INFO(srcversion, "407042F12C0EFC7F1F30F63");
