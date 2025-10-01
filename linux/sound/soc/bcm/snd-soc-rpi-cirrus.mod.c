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
	{ 0x5d3260cd, "snd_soc_dapm_put_enum_double" },
	{ 0xe914e41e, "strcpy" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x42d820de, "snd_soc_dai_set_tdm_slot" },
	{ 0xd50a6007, "snd_soc_component_read" },
	{ 0xc00e0644, "snd_pcm_hw_constraint_minmax" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x82f8a615, "snd_soc_component_set_sysclk" },
	{ 0xf19dda0, "snd_soc_dai_set_sysclk" },
	{ 0x94ddfa76, "snd_soc_dai_set_clkdiv" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xcfd51e72, "snd_soc_dai_set_bclk_ratio" },
	{ 0xccb09baa, "snd_soc_get_pcm_runtime" },
	{ 0xd203810d, "snd_ctl_boolean_mono_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x6219fee8, "snd_soc_component_set_pll" },
	{ 0x2bfdd58b, "snd_soc_info_enum_double" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0xe35415b5, "snd_soc_component_update_bits" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3db15a33, "snd_soc_dai_set_pll" },
	{ 0x892f2f94, "snd_soc_dapm_get_enum_double" },
	{ 0x98348416, "devm_snd_soc_register_card" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm,snd");

MODULE_ALIAS("of:N*T*Cwlf,rpi-cirrus");
MODULE_ALIAS("of:N*T*Cwlf,rpi-cirrusC*");

MODULE_INFO(srcversion, "ABB6D865EB98AF57D5A8ADB");
