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
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xe1a5f7a7, "snd_soc_dai_set_fmt" },
	{ 0x791acbcf, "gpiod_set_array_value_cansleep" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xf19dda0, "snd_soc_dai_set_sysclk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xcfd51e72, "snd_soc_dai_set_bclk_ratio" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0xcae7cb9b, "snd_pcm_hw_constraint_list" },
	{ 0x9a354cc, "devm_gpiod_get_array_optional" },
	{ 0xdcb764ad, "memset" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x98348416, "devm_snd_soc_register_card" },
	{ 0xf9a482f9, "msleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Cai,audioinjector-octo-soundcard");
MODULE_ALIAS("of:N*T*Cai,audioinjector-octo-soundcardC*");

MODULE_INFO(srcversion, "3CE2A1FE9E787AC8FF6419C");
