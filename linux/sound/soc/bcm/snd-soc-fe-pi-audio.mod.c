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
	{ 0x469438cc, "of_node_put" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x4249de05, "snd_soc_dapm_force_enable_pin" },
	{ 0xf19dda0, "snd_soc_dai_set_sysclk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0xdcb764ad, "memset" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0xe35415b5, "snd_soc_component_update_bits" },
	{ 0x98348416, "devm_snd_soc_register_card" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cfe-pi,fe-pi-audio");
MODULE_ALIAS("of:N*T*Cfe-pi,fe-pi-audioC*");

MODULE_INFO(srcversion, "086C9EAF3817E4924D7DE67");
