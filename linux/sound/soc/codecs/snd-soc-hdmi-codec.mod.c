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
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x99b70ac2, "snd_pcm_fill_iec958_consumer_hw_params" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xcae9f99e, "snd_ctl_add" },
	{ 0x32e4b9a3, "snd_soc_jack_report" },
	{ 0x86163591, "snd_pcm_add_chmap_ctls" },
	{ 0xb14ab1ef, "hdmi_audio_infoframe_init" },
	{ 0xa1c7f20f, "snd_pcm_fill_iec958_consumer" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0x649892e8, "snd_pcm_create_iec958_consumer_default" },
	{ 0x1069d298, "snd_ctl_new1" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdcb764ad, "memset" },
	{ 0x6c7b687c, "snd_soc_dapm_add_routes" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x1ffc1635, "snd_pcm_hw_constraint_eld" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm,snd,snd-soc-core");


MODULE_INFO(srcversion, "0CEE1E8935B79C7BB3D5B6D");
