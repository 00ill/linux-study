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
	{ 0xf19dda0, "snd_soc_dai_set_sysclk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0xdfa58c18, "snd_soc_unregister_card" },
	{ 0xcae7cb9b, "snd_pcm_hw_constraint_list" },
	{ 0xdcb764ad, "memset" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0xe35415b5, "snd_soc_component_update_bits" },
	{ 0x604dd937, "snd_pcm_hw_constraint_msbits" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Cas,audiosense-pi");
MODULE_ALIAS("of:N*T*Cas,audiosense-piC*");

MODULE_INFO(srcversion, "163A33FE578C86DA32E9E47");
