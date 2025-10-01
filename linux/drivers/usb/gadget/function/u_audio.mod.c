#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(u_audio_set_capture_srate, "_gpl", "");
KSYMTAB_FUNC(u_audio_get_capture_srate, "_gpl", "");
KSYMTAB_FUNC(u_audio_set_playback_srate, "_gpl", "");
KSYMTAB_FUNC(u_audio_get_playback_srate, "_gpl", "");
KSYMTAB_FUNC(u_audio_start_capture, "_gpl", "");
KSYMTAB_FUNC(u_audio_stop_capture, "_gpl", "");
KSYMTAB_FUNC(u_audio_start_playback, "_gpl", "");
KSYMTAB_FUNC(u_audio_stop_playback, "_gpl", "");
KSYMTAB_FUNC(u_audio_suspend, "_gpl", "");
KSYMTAB_FUNC(u_audio_get_volume, "_gpl", "");
KSYMTAB_FUNC(u_audio_set_volume, "_gpl", "");
KSYMTAB_FUNC(u_audio_get_mute, "_gpl", "");
KSYMTAB_FUNC(u_audio_set_mute, "_gpl", "");
KSYMTAB_FUNC(g_audio_setup, "_gpl", "");
KSYMTAB_FUNC(g_audio_cleanup, "_gpl", "");

SYMBOL_CRC(u_audio_set_capture_srate, 0xe7a2563e, "_gpl");
SYMBOL_CRC(u_audio_get_capture_srate, 0x7726aaac, "_gpl");
SYMBOL_CRC(u_audio_set_playback_srate, 0x1c59410b, "_gpl");
SYMBOL_CRC(u_audio_get_playback_srate, 0x3050c875, "_gpl");
SYMBOL_CRC(u_audio_start_capture, 0xa3165b56, "_gpl");
SYMBOL_CRC(u_audio_stop_capture, 0x8b4d772c, "_gpl");
SYMBOL_CRC(u_audio_start_playback, 0xfed36053, "_gpl");
SYMBOL_CRC(u_audio_stop_playback, 0x4e2ba35d, "_gpl");
SYMBOL_CRC(u_audio_suspend, 0xb3b29aa1, "_gpl");
SYMBOL_CRC(u_audio_get_volume, 0xf750f844, "_gpl");
SYMBOL_CRC(u_audio_set_volume, 0x7b8b67b6, "_gpl");
SYMBOL_CRC(u_audio_get_mute, 0xc5a99c05, "_gpl");
SYMBOL_CRC(u_audio_set_mute, 0x146a17cb, "_gpl");
SYMBOL_CRC(g_audio_setup, 0x363cf47c, "_gpl");
SYMBOL_CRC(g_audio_cleanup, 0x36eaf060, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7673e7f6, "usb_ep_queue" },
	{ 0x669c413b, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x970607ff, "usb_ep_free_request" },
	{ 0xd8f2370d, "snd_pcm_stream_lock" },
	{ 0x88817f04, "snd_pcm_stream_unlock" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc9098c3d, "snd_pcm_period_elapsed" },
	{ 0x93d1d1e4, "snd_ctl_notify" },
	{ 0x35e071f4, "config_ep_by_speed" },
	{ 0xbcf61715, "usb_ep_enable" },
	{ 0x8ca7011c, "usb_ep_alloc_request" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xdcb764ad, "memset" },
	{ 0x103afa42, "snd_pcm_hw_constraint_integer" },
	{ 0x624ab268, "snd_card_free_when_closed" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8c8eed8e, "usb_ep_dequeue" },
	{ 0xd152cd3f, "usb_ep_disable" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x306f753, "snd_card_new" },
	{ 0xa7ab474b, "snd_pcm_new" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x738a0e18, "snd_pcm_set_ops" },
	{ 0x1069d298, "snd_ctl_new1" },
	{ 0xcae9f99e, "snd_ctl_add" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9a0af284, "snd_pcm_set_managed_buffer_all" },
	{ 0xc40f5484, "snd_card_register" },
	{ 0x95f6a55f, "snd_card_free" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm,snd,libcomposite");


MODULE_INFO(srcversion, "0F2DD68CE58B97752054D11");
