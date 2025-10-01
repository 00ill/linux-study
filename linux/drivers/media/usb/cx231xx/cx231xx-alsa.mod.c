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
	{ 0xe8568c88, "cx231xx_unregister_extension" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xa7ab474b, "snd_pcm_new" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc40f5484, "snd_card_register" },
	{ 0x95f6a55f, "snd_card_free" },
	{ 0x3a67ab17, "cx231xx_set_alt_setting" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd3ccc081, "cx231xx_capture_start" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x306f753, "snd_card_new" },
	{ 0x669c413b, "_dev_err" },
	{ 0xb5c0ffa, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x624ab268, "snd_card_free_when_closed" },
	{ 0x738a0e18, "snd_pcm_set_ops" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9a0af284, "snd_pcm_set_managed_buffer_all" },
	{ 0xdcb764ad, "memset" },
	{ 0x53d403f7, "cx231xx_register_extension" },
	{ 0x103afa42, "snd_pcm_hw_constraint_integer" },
	{ 0x3cf8929c, "usb_unlink_urb" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xe6bccba, "_snd_pcm_stream_lock_irqsave" },
	{ 0x5b6a59bc, "v4l2_subdev_call_wrappers" },
	{ 0xc9098c3d, "snd_pcm_period_elapsed" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd010312b, "is_fw_load" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "cx231xx,snd-pcm,snd,videodev");


MODULE_INFO(srcversion, "3793658B790BF2B76B18B73");
