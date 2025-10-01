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
	{ 0xa728742c, "usb_register_driver" },
	{ 0x3cf8929c, "usb_unlink_urb" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xd8f2fce2, "usb_free_coherent" },
	{ 0x385fa099, "unregister_netdev" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x573ed21e, "free_candev" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x26e4dad9, "can_dropped_invalid_skb" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x98434f46, "usb_alloc_coherent" },
	{ 0x87e7c8e4, "netdev_warn" },
	{ 0xc3665eed, "netdev_printk" },
	{ 0x70b0605f, "usb_anchor_urb" },
	{ 0xf7bfac12, "can_put_echo_skb" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8502868b, "netdev_err" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x51c821c5, "can_free_echo_skb" },
	{ 0x29c998f4, "usb_unanchor_urb" },
	{ 0xbb8ce2ef, "netif_device_detach" },
	{ 0xf4450a48, "alloc_can_err_skb" },
	{ 0x50d00458, "netif_rx" },
	{ 0x17ada51d, "can_bus_off" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0x67bbcda, "netdev_info" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xab815fa5, "alloc_can_skb" },
	{ 0xb99649c9, "alloc_candev_mqs" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x47d99c63, "register_candev" },
	{ 0x669c413b, "_dev_err" },
	{ 0xac13b56d, "open_candev" },
	{ 0xa99e73f3, "close_candev" },
	{ 0xfaaac432, "can_get_echo_skb" },
	{ 0x93428159, "can_change_mtu" },
	{ 0xd14e8222, "ethtool_op_get_ts_info" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v12D6p0444d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4864CC2A50F6D51EC571707");
