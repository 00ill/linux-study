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
	{ 0x469438cc, "of_node_put" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xd50a6007, "snd_soc_component_read" },
	{ 0xf19dda0, "snd_soc_dai_set_sysclk" },
	{ 0x244c4519, "snd_soc_component_write" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x944260cf, "snd_soc_dapm_get_pin_switch" },
	{ 0xcfd51e72, "snd_soc_dai_set_bclk_ratio" },
	{ 0xccb09baa, "snd_soc_get_pcm_runtime" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0xdfa58c18, "snd_soc_unregister_card" },
	{ 0x3a1aed17, "of_property_read_string" },
	{ 0xdcb764ad, "memset" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x323ddbac, "snd_soc_dapm_put_pin_switch" },
	{ 0x206d8929, "snd_soc_dapm_info_pin_switch" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Cosaelectronics,dacberry400");
MODULE_ALIAS("of:N*T*Cosaelectronics,dacberry400C*");

MODULE_INFO(srcversion, "2919A8BB77EC0A246DA676E");
