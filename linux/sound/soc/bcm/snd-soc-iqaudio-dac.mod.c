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
	{ 0x35498050, "snd_soc_register_card" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xf3d2ce77, "snd_soc_limit_volume" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xccb09baa, "snd_soc_get_pcm_runtime" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0xdfa58c18, "snd_soc_unregister_card" },
	{ 0x3a1aed17, "of_property_read_string" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Ciqaudio,iqaudio-dac");
MODULE_ALIAS("of:N*T*Ciqaudio,iqaudio-dacC*");

MODULE_INFO(srcversion, "61F7CF0CDCCE24225C346E5");
