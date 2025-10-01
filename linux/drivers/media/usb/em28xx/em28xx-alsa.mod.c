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
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc07cc92d, "em28xx_audio_analog_set" },
	{ 0xcae9f99e, "snd_ctl_add" },
	{ 0x98434f46, "usb_alloc_coherent" },
	{ 0xa7ab474b, "snd_pcm_new" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe228da49, "usb_ifnum_to_if" },
	{ 0xc40f5484, "snd_card_register" },
	{ 0x95f6a55f, "snd_card_free" },
	{ 0xc00e0644, "snd_pcm_hw_constraint_minmax" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x1069d298, "snd_ctl_new1" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x306f753, "snd_card_new" },
	{ 0xd203810d, "snd_ctl_boolean_mono_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0xd8f2fce2, "usb_free_coherent" },
	{ 0xb5c0ffa, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa6107fa3, "em28xx_unregister_extension" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0x738a0e18, "snd_pcm_set_ops" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x1c1df557, "em28xx_write_ac97" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x9a0af284, "snd_pcm_set_managed_buffer_all" },
	{ 0xdcb764ad, "memset" },
	{ 0xf29cfe4d, "em28xx_read_ac97" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xda9ef1db, "snd_card_disconnect" },
	{ 0x103afa42, "snd_pcm_hw_constraint_integer" },
	{ 0x3cf8929c, "usb_unlink_urb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9f63cedb, "em28xx_register_extension" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xe6bccba, "_snd_pcm_stream_lock_irqsave" },
	{ 0xc9098c3d, "snd_pcm_period_elapsed" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x374647f3, "_dev_printk" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "em28xx,snd,snd-pcm");


MODULE_INFO(srcversion, "9608404D129236FD9A4626C");
