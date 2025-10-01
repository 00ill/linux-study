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
	{ 0x35498050, "snd_soc_register_card" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x654f9128, "snd_ctl_remove" },
	{ 0x244c4519, "snd_soc_component_write" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xcfd51e72, "snd_soc_dai_set_bclk_ratio" },
	{ 0xccb09baa, "snd_soc_get_pcm_runtime" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0xdfa58c18, "snd_soc_unregister_card" },
	{ 0xdcb764ad, "memset" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd");

MODULE_ALIAS("of:N*T*Cpifi,pifi-40");
MODULE_ALIAS("of:N*T*Cpifi,pifi-40C*");

MODULE_INFO(srcversion, "C40774D8A2FB4254AE71312");
