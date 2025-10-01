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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe50db602, "snd_soc_get_dai_via_args" },
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
	{ 0x8c42a9aa, "graph_util_parse_trigger_order" },
	{ 0x37a0cba, "kfree" },
	{ 0x692bdce9, "of_get_parent" },
	{ 0x697cbeec, "of_node_get" },
	{ 0xfad34d0, "snd_soc_of_parse_node_prefix" },
	{ 0x7fc1f05a, "of_platform_depopulate" },
	{ 0xec9ccd9f, "simple_util_init_priv" },
	{ 0x876ce94f, "simple_util_hw_params" },
	{ 0x50a58b43, "of_get_next_child" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa276aca6, "graph_util_parse_link_direction" },
	{ 0xdfc6cb12, "snd_soc_of_parse_aux_devs" },
	{ 0x16e51d97, "simple_util_clean_reference" },
	{ 0xb88214c4, "simple_util_parse_pin_switches" },
	{ 0x79d14906, "simple_util_init_jack" },
	{ 0xec905c5d, "of_get_child_by_name" },
	{ 0x2cf8fcab, "simple_util_be_hw_params_fixup" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0xae8ff9e5, "simple_util_parse_clk" },
	{ 0x4c599574, "simple_util_parse_routing" },
	{ 0x20dd2ee6, "snd_soc_dai_name_get" },
	{ 0x775294d7, "of_device_is_available" },
	{ 0x7fa3331e, "simple_util_canonicalize_cpu" },
	{ 0xeb0001e, "snd_soc_get_dlc" },
	{ 0xdcb764ad, "memset" },
	{ 0xb904941, "simple_util_parse_card_name" },
	{ 0xf64bb4e0, "simple_util_shutdown" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x8095d2fe, "simple_util_remove" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xd08d2a5b, "snd_soc_pm_ops" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0x3a8fa32d, "snd_soc_copy_dai_args" },
	{ 0xaf639b91, "of_device_get_match_data" },
	{ 0xee0b25db, "simple_util_init_aux_jacks" },
	{ 0x9afeaa80, "of_platform_populate" },
	{ 0x98348416, "devm_snd_soc_register_card" },
	{ 0x158ecde5, "simple_util_dai_init" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-simple-card-utils");

MODULE_ALIAS("of:N*T*Csimple-audio-card");
MODULE_ALIAS("of:N*T*Csimple-audio-cardC*");
MODULE_ALIAS("of:N*T*Csimple-scu-audio-card");
MODULE_ALIAS("of:N*T*Csimple-scu-audio-cardC*");

MODULE_INFO(srcversion, "8B6433D4D4EFE50681777BD");
