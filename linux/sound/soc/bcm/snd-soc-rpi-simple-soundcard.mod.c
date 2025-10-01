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
	{ 0x42d820de, "snd_soc_dai_set_tdm_slot" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x82f8a615, "snd_soc_component_set_sysclk" },
	{ 0x3c24ae1d, "gpiod_get_value" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x244c4519, "snd_soc_component_write" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xcfd51e72, "snd_soc_dai_set_bclk_ratio" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0xa8a523fe, "of_match_node" },
	{ 0xdcb764ad, "memset" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0x98348416, "devm_snd_soc_register_card" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Cadi,adau1977-adc");
MODULE_ALIAS("of:N*T*Cadi,adau1977-adcC*");
MODULE_ALIAS("of:N*T*Cgooglevoicehat,googlevoicehat-soundcard");
MODULE_ALIAS("of:N*T*Cgooglevoicehat,googlevoicehat-soundcardC*");
MODULE_ALIAS("of:N*T*Chifiberrydacplusdsp,hifiberrydacplusdsp-soundcard");
MODULE_ALIAS("of:N*T*Chifiberrydacplusdsp,hifiberrydacplusdsp-soundcardC*");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-adc8x");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-adc8xC*");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-amp");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-ampC*");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-amp3");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-amp3C*");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dac");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacC*");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dac8x");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dac8xC*");
MODULE_ALIAS("of:N*T*Cdionaudio,dionaudio-kiwi");
MODULE_ALIAS("of:N*T*Cdionaudio,dionaudio-kiwiC*");
MODULE_ALIAS("of:N*T*Crpi,rpi-dac");
MODULE_ALIAS("of:N*T*Crpi,rpi-dacC*");
MODULE_ALIAS("of:N*T*Cmerus,merus-amp");
MODULE_ALIAS("of:N*T*Cmerus,merus-ampC*");
MODULE_ALIAS("of:N*T*Cpifi,pifi-mini-210");
MODULE_ALIAS("of:N*T*Cpifi,pifi-mini-210C*");

MODULE_INFO(srcversion, "5A3E74C1106BB378FF08CEC");
