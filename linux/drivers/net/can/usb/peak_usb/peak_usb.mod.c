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
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x51c821c5, "can_free_echo_skb" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xf7bfac12, "can_put_echo_skb" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xfaaac432, "can_get_echo_skb" },
	{ 0x8b63df5a, "alloc_canfd_skb" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x87e7c8e4, "netdev_warn" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xac13b56d, "open_candev" },
	{ 0x8502868b, "netdev_err" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xab815fa5, "alloc_can_skb" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xbb8ce2ef, "netif_device_detach" },
	{ 0xa00da1db, "unregister_candev" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xad8e2b22, "can_change_state" },
	{ 0x93428159, "can_change_mtu" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x26e4dad9, "can_dropped_invalid_skb" },
	{ 0x669c413b, "_dev_err" },
	{ 0x573ed21e, "free_candev" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb99649c9, "alloc_candev_mqs" },
	{ 0x6047ede6, "can_fd_len2dlc" },
	{ 0xc3665eed, "netdev_printk" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0xf12d9387, "can_fd_dlc2len" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0xa99e73f3, "close_candev" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x50d00458, "netif_rx" },
	{ 0x17ada51d, "can_bus_off" },
	{ 0x29c998f4, "usb_unanchor_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5fd2cd02, "driver_for_each_device" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf4450a48, "alloc_can_err_skb" },
	{ 0x47d99c63, "register_candev" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x67bbcda, "netdev_info" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v0C72p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0014d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "AC19637E7C9903B25FBE7CE");
