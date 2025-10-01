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
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x61420e14, "ieee80211_free_hw" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0xf557ba8f, "ieee80211_iterate_stations_atomic" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xaf9e534c, "ieee80211_start_tx_ba_session" },
	{ 0x37a0cba, "kfree" },
	{ 0x4ff913b5, "ieee80211_register_hw" },
	{ 0xe3dcebe7, "led_classdev_unregister" },
	{ 0xe83c2d4, "ieee80211_emulate_change_chanctx" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xad25b856, "dev_kfree_skb_irq_reason" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3c744e95, "cfg80211_calculate_bitrate" },
	{ 0x69509299, "ieee80211_find_sta" },
	{ 0x22fe87e5, "ieee80211_handle_wake_tx_queue" },
	{ 0x1499afed, "ieee80211_tx_status_irqsafe" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x7fcac341, "usb_reset_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xaeb98a5e, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x669c413b, "_dev_err" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xa70378e3, "ieee80211_find_sta_by_ifaddr" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x13c0013, "ieee80211_beacon_cntdwn_is_complete" },
	{ 0xabb61447, "ieee80211_wake_queues" },
	{ 0x37c9d5fc, "led_classdev_register_ext" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc87fd291, "ieee80211_alloc_hw_nm" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x38590bd4, "ieee80211_emulate_add_chanctx" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xb77e1ef3, "ieee80211_emulate_switch_vif_chanctx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x29c998f4, "usb_unanchor_urb" },
	{ 0x27b8aeb2, "ieee80211_stop_queues" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x2bf50a51, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x24c4b1f8, "ieee80211_unregister_hw" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x20f09351, "ieee80211_beacon_get_tim" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xbc04b8e9, "usb_init_urb" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xe3bafe79, "ieee80211_emulate_remove_chanctx" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xd9eb2768, "ieee80211_csa_finish" },
	{ 0x25fd7ebc, "ieee80211_rx_irqsafe" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

MODULE_ALIAS("usb:v0BDAp8724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp1724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp0724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp818Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0108d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p3319d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0109d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApB720d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v7392pA611d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApF179d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp8179d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp0179d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0DF6p0076d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p3311d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p330Fd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p3310d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p331Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v07B8p8179d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v056Ep4008d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p010Cd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0111d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2C4Ep0102d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0B05p18F0d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v7392pB811d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApFFEFd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApB711d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp2005d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApF192d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0B05p18F1d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v7392pB722d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp318Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0135d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "F2FFC0F39499A69E84907B8");
