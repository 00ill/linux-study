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
	{ 0x441636cf, "usb_control_msg_send" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x554f4d66, "usb_control_msg_recv" },
	{ 0xd14e8222, "ethtool_op_get_ts_info" },
	{ 0xcbd42ffb, "can_ethtool_op_get_ts_info_hwts" },
	{ 0x5187b7de, "can_eth_ioctl_hwts" },
	{ 0x67bbcda, "netdev_info" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x26e4dad9, "can_dropped_invalid_skb" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc3665eed, "netdev_printk" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x4829a47e, "memcpy" },
	{ 0x70b0605f, "usb_anchor_urb" },
	{ 0xf7bfac12, "can_put_echo_skb" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x8502868b, "netdev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x6047ede6, "can_fd_len2dlc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x51c821c5, "can_free_echo_skb" },
	{ 0x29c998f4, "usb_unanchor_urb" },
	{ 0xbb8ce2ef, "netif_device_detach" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xac13b56d, "open_candev" },
	{ 0xf7ce00e9, "can_rx_offload_enable" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x862258db, "timecounter_init" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x6dc88bac, "napi_disable" },
	{ 0xa99e73f3, "close_candev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x669c413b, "_dev_err" },
	{ 0xbc3f2cb0, "timecounter_cyc2time" },
	{ 0xb6a286fd, "can_rx_offload_queue_timestamp" },
	{ 0x1ab626d6, "can_rx_offload_queue_tail" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0xa00da1db, "unregister_candev" },
	{ 0x5d200af4, "can_rx_offload_del" },
	{ 0x573ed21e, "free_candev" },
	{ 0x8b63df5a, "alloc_canfd_skb" },
	{ 0xf12d9387, "can_fd_dlc2len" },
	{ 0xf4450a48, "alloc_can_err_skb" },
	{ 0x857d40d0, "can_rx_offload_irq_finish" },
	{ 0xab815fa5, "alloc_can_skb" },
	{ 0x88385b5d, "can_rx_offload_get_echo_skb_queue_timestamp" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0xb124ff36, "can_rx_offload_get_echo_skb_queue_tail" },
	{ 0xdcb764ad, "memset" },
	{ 0xb99649c9, "alloc_candev_mqs" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc133cdeb, "can_rx_offload_add_manual" },
	{ 0x47d99c63, "register_candev" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x93428159, "can_change_mtu" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v1D50p606Fd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1209p2323d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1CD2p606Fd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D0p10B8d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D0p0F30d*dc*dsc*dp*ic*isc*ip*in00*");

MODULE_INFO(srcversion, "08AD45C5F477A189C240662");
