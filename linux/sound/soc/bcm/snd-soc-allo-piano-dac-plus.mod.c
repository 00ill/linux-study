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
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x49d91fad, "snd_soc_card_get_kcontrol" },
	{ 0x35498050, "snd_soc_register_card" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xf3d2ce77, "snd_soc_limit_volume" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd50a6007, "snd_soc_component_read" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x654f9128, "snd_ctl_remove" },
	{ 0x244c4519, "snd_soc_component_write" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xccb09baa, "snd_soc_get_pcm_runtime" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0xdfa58c18, "snd_soc_unregister_card" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x2bfdd58b, "snd_soc_info_enum_double" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd");

MODULE_ALIAS("of:N*T*Callo,piano-dac-plus");
MODULE_ALIAS("of:N*T*Callo,piano-dac-plusC*");

MODULE_INFO(srcversion, "5112BC0CD23C8B5DDFDC3F5");
