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
	{ 0xe914e41e, "strcpy" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x98434f46, "usb_alloc_coherent" },
	{ 0xa7ab474b, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe228da49, "usb_ifnum_to_if" },
	{ 0xc40f5484, "snd_card_register" },
	{ 0x95f6a55f, "snd_card_free" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0xc00e0644, "snd_pcm_hw_constraint_minmax" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x72b34551, "usb_driver_release_interface" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x306f753, "snd_card_new" },
	{ 0x4e0850fd, "__snd_usbmidi_create" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x669c413b, "_dev_err" },
	{ 0xd8f2fce2, "usb_free_coherent" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf6491f8c, "usb_driver_claim_interface" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x624ab268, "snd_card_free_when_closed" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0x738a0e18, "snd_pcm_set_ops" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9a0af284, "snd_pcm_set_managed_buffer_all" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x99cd0788, "param_ops_charp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xda9ef1db, "snd_card_disconnect" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xae99ccd, "snd_pcm_stop_xrun" },
	{ 0x604dd937, "snd_pcm_hw_constraint_msbits" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xbc04b8e9, "usb_init_urb" },
	{ 0xc9098c3d, "snd_pcm_period_elapsed" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xd9d2bb03, "snd_usbmidi_disconnect" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm,snd,snd-usbmidi-lib");

MODULE_ALIAS("usb:v0582p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p007Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p008Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "777B7BA42B1924D686404EA");
