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
	{ 0x92ee93f3, "snd_rawmidi_receive" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x441636cf, "usb_control_msg_send" },
	{ 0xd86b7fad, "snd_rawmidi_transmit" },
	{ 0xcae9f99e, "snd_ctl_add" },
	{ 0xa7ab474b, "snd_pcm_new" },
	{ 0xc40f5484, "snd_card_register" },
	{ 0x554f4d66, "usb_control_msg_recv" },
	{ 0x95f6a55f, "snd_card_free" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x70f7da02, "usb_interrupt_msg" },
	{ 0x1069d298, "snd_ctl_new1" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xac71d468, "snd_ctl_make_virtual_master" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0x306f753, "snd_card_new" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd203810d, "snd_ctl_boolean_mono_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf74654c, "usb_poison_urb" },
	{ 0x624ab268, "snd_card_free_when_closed" },
	{ 0xd7577bf7, "snd_ctl_boolean_stereo_info" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0x738a0e18, "snd_pcm_set_ops" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xf89bee15, "_snd_ctl_add_follower" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9a0af284, "snd_pcm_set_managed_buffer_all" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x99cd0788, "param_ops_charp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x49b8b65a, "snd_rawmidi_new" },
	{ 0xda9ef1db, "snd_card_disconnect" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x853bcf02, "snd_rawmidi_set_ops" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xae99ccd, "snd_pcm_stop_xrun" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0xbc04b8e9, "usb_init_urb" },
	{ 0xc9098c3d, "snd_pcm_period_elapsed" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-rawmidi,snd,snd-pcm");

MODULE_ALIAS("usb:v0CCDp0080d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5E207C5EA6DC405598B2306");
