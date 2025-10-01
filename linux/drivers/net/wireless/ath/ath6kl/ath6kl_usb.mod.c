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
	{ 0x70b0605f, "usb_anchor_urb" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0xebdd4a71, "ath6kl_core_tx_complete" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7df9f3a, "ath6kl_core_rx_complete" },
	{ 0x37a0cba, "kfree" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x4fd4738f, "ath6kl_core_init" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x2207db44, "ath6kl_stop_txrx" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x1354043d, "ath6kl_warn" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0xb9a689dd, "ath6kl_err" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x29c998f4, "usb_unanchor_urb" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x6633ffef, "ath6kl_core_create" },
	{ 0xfa5e5f29, "ath6kl_core_cleanup" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xfe726b0d, "ath6kl_core_destroy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ath6kl_core");

MODULE_ALIAS("usb:v0CF3p9375d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p9374d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp390Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "99A0B5BB48AED33DCA3FFAF");
