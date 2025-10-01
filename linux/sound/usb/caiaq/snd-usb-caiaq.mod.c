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
	{ 0x99c44b73, "input_allocate_device" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x92ee93f3, "snd_rawmidi_receive" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0xbbdd3e30, "snd_pcm_hw_limit_rates" },
	{ 0xd86b7fad, "snd_rawmidi_transmit" },
	{ 0xcae9f99e, "snd_ctl_add" },
	{ 0xa7ab474b, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc40f5484, "snd_card_register" },
	{ 0x95f6a55f, "snd_card_free" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x32a0c53, "input_unregister_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb727b479, "input_free_device" },
	{ 0x1069d298, "snd_ctl_new1" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x7fcac341, "usb_reset_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x306f753, "snd_card_new" },
	{ 0x2cd667b2, "usb_urb_ep_type_check" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf965886d, "snd_card_set_id" },
	{ 0x669c413b, "_dev_err" },
	{ 0x624ab268, "snd_card_free_when_closed" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0x738a0e18, "snd_pcm_set_ops" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x90548a4e, "usb_string" },
	{ 0x9a0af284, "snd_pcm_set_managed_buffer_all" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x99cd0788, "param_ops_charp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x41cc93f6, "input_event" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0x49b8b65a, "snd_rawmidi_new" },
	{ 0xda9ef1db, "snd_card_disconnect" },
	{ 0x853bcf02, "snd_rawmidi_set_ops" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xbc04b8e9, "usb_init_urb" },
	{ 0xc9098c3d, "snd_pcm_period_elapsed" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-rawmidi,snd-pcm,snd");

MODULE_ALIAS("usb:v17CCp1969d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp4711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp4712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1978d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1915d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0D8Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0839d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp041Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp2305d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCpBAFFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp041Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0808d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7B7229A0C7BECEDFB4AB4C9");
