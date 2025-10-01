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
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xd44144c9, "snd_soc_put_enum_double" },
	{ 0xf19dda0, "snd_soc_dai_set_sysclk" },
	{ 0x94ddfa76, "snd_soc_dai_set_clkdiv" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1a32c879, "snd_soc_get_enum_double" },
	{ 0xcfd51e72, "snd_soc_dai_set_bclk_ratio" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0x3a1aed17, "of_property_read_string" },
	{ 0xddfb6567, "snd_soc_add_component_controls" },
	{ 0xa8a523fe, "of_match_node" },
	{ 0xdcb764ad, "memset" },
	{ 0x2bfdd58b, "snd_soc_info_enum_double" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0xe35415b5, "snd_soc_component_update_bits" },
	{ 0x3db15a33, "snd_soc_dai_set_pll" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0x98348416, "devm_snd_soc_register_card" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cjustboom,justboom-digi");
MODULE_ALIAS("of:N*T*Cjustboom,justboom-digiC*");
MODULE_ALIAS("of:N*T*Ciqaudio,wm8804-digi");
MODULE_ALIAS("of:N*T*Ciqaudio,wm8804-digiC*");
MODULE_ALIAS("of:N*T*Callo,allo-digione");
MODULE_ALIAS("of:N*T*Callo,allo-digioneC*");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-digi");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-digiC*");
MODULE_ALIAS("of:N*T*Cinterludeaudio,interludeaudio-digital");
MODULE_ALIAS("of:N*T*Cinterludeaudio,interludeaudio-digitalC*");

MODULE_INFO(srcversion, "79108782054A3B26A69B73B");
