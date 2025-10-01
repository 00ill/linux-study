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
	{ 0xd44144c9, "snd_soc_put_enum_double" },
	{ 0x244c4519, "snd_soc_component_write" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1a32c879, "snd_soc_get_enum_double" },
	{ 0xcfd51e72, "snd_soc_dai_set_bclk_ratio" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0xddfb6567, "snd_soc_add_component_controls" },
	{ 0xdcb764ad, "memset" },
	{ 0x2bfdd58b, "snd_soc_info_enum_double" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0xe35415b5, "snd_soc_component_update_bits" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-adc");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-adcC*");

MODULE_INFO(srcversion, "968CD2264306F9B8FC9435E");
