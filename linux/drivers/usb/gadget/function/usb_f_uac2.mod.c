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
	{ 0x1c59410b, "u_audio_set_playback_srate" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x8bf701a4, "usb_interface_id" },
	{ 0x72516513, "usb_assign_descriptors" },
	{ 0x96848186, "scnprintf" },
	{ 0x146a17cb, "u_audio_set_mute" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0x7b8b67b6, "u_audio_set_volume" },
	{ 0xfed36053, "u_audio_start_playback" },
	{ 0x970607ff, "usb_ep_free_request" },
	{ 0x35e071f4, "config_ep_by_speed" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc5a99c05, "u_audio_get_mute" },
	{ 0x8b4d772c, "u_audio_stop_capture" },
	{ 0x4e2ba35d, "u_audio_stop_playback" },
	{ 0xf9673004, "usb_function_register" },
	{ 0x363cf47c, "g_audio_setup" },
	{ 0x669c413b, "_dev_err" },
	{ 0x10b9f0fc, "config_group_init_type_name" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5a921311, "strncmp" },
	{ 0x6f3f2011, "usb_ep_autoconfig" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x3a7652c8, "usb_put_function_instance" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x7726aaac, "u_audio_get_capture_srate" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xf0105eee, "usb_function_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8ca7011c, "usb_ep_alloc_request" },
	{ 0xb3b29aa1, "u_audio_suspend" },
	{ 0x2d75696f, "usb_ep_set_halt" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf750f844, "u_audio_get_volume" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3050c875, "u_audio_get_playback_srate" },
	{ 0xe0419ac4, "kstrtos16" },
	{ 0xa3165b56, "u_audio_start_capture" },
	{ 0x36eaf060, "g_audio_cleanup" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xe7a2563e, "u_audio_set_capture_srate" },
	{ 0x7673e7f6, "usb_ep_queue" },
	{ 0x98cf60b3, "strlen" },
	{ 0xbcf61715, "usb_ep_enable" },
	{ 0xd152cd3f, "usb_ep_disable" },
	{ 0xd962ac6, "usb_free_all_descriptors" },
	{ 0x3a7eeb5, "usb_gstrings_attach" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "u_audio,libcomposite");


MODULE_INFO(srcversion, "D98B63029F5DA146C92FD21");
