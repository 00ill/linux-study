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
	{ 0x49d91fad, "snd_soc_card_get_kcontrol" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xd44144c9, "snd_soc_put_enum_double" },
	{ 0xf19dda0, "snd_soc_dai_set_sysclk" },
	{ 0x654f9128, "snd_ctl_remove" },
	{ 0x94ddfa76, "snd_soc_dai_set_clkdiv" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1a32c879, "snd_soc_get_enum_double" },
	{ 0xcfd51e72, "snd_soc_dai_set_bclk_ratio" },
	{ 0xccb09baa, "snd_soc_get_pcm_runtime" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0xddfb6567, "snd_soc_add_component_controls" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x2bfdd58b, "snd_soc_info_enum_double" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0xc7ba913d, "snd_soc_get_volsw" },
	{ 0x26aa5f3, "snd_soc_put_volsw" },
	{ 0xe35415b5, "snd_soc_component_update_bits" },
	{ 0x3db15a33, "snd_soc_dai_set_pll" },
	{ 0x98348416, "devm_snd_soc_register_card" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd,snd-pcm");

MODULE_ALIAS("of:N*T*Crra,digidac1-soundcard");
MODULE_ALIAS("of:N*T*Crra,digidac1-soundcardC*");

MODULE_INFO(srcversion, "F645207F586345BF17B66A2");
