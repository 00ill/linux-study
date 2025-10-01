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
	{ 0xe0e90a2d, "ieee80211_queue_stopped" },
	{ 0xf18d82ec, "ieee80211_stop_tx_ba_session" },
	{ 0xc22550f5, "usb_put_intf" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x70b0605f, "usb_anchor_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x86b13d2a, "usb_unpoison_anchored_urbs" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xe228da49, "usb_ifnum_to_if" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x61420e14, "ieee80211_free_hw" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa6636aff, "regulatory_hint" },
	{ 0x37a0cba, "kfree" },
	{ 0xe3dcebe7, "led_classdev_unregister" },
	{ 0x4ff913b5, "ieee80211_register_hw" },
	{ 0xe83c2d4, "ieee80211_emulate_change_chanctx" },
	{ 0x14ceba88, "ieee80211_restart_hw" },
	{ 0xad25b856, "dev_kfree_skb_irq_reason" },
	{ 0x55c62378, "usb_check_int_endpoints" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x71b6ad08, "ieee80211_wake_queue" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x2ad25d23, "usb_get_intf" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x842f046d, "usb_poison_anchored_urbs" },
	{ 0x94293e46, "__ieee80211_get_tx_led_name" },
	{ 0x69509299, "ieee80211_find_sta" },
	{ 0x69ddc472, "ieee80211_get_tx_rates" },
	{ 0x72b34551, "usb_driver_release_interface" },
	{ 0x22fe87e5, "ieee80211_handle_wake_tx_queue" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1499afed, "ieee80211_tx_status_irqsafe" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x7fcac341, "usb_reset_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xa916b694, "strnlen" },
	{ 0xb1ab353, "ath_regd_get_band_ctl" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x8af69228, "usb_queue_reset_device" },
	{ 0xaeb98a5e, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xd9ff7d99, "devm_bitmap_zalloc" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xa724da05, "wiphy_to_ieee80211_hw" },
	{ 0x46049065, "ath_reg_notifier_apply" },
	{ 0x6ca3449c, "ieee80211_queue_delayed_work" },
	{ 0x669c413b, "_dev_err" },
	{ 0x8bbcc68f, "request_firmware_nowait" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xe5d944e8, "ieee80211_sta_block_awake" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x88f87e52, "ath_is_mybeacon" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xabb61447, "ieee80211_wake_queues" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xb58c18e8, "ieee80211_free_txskb" },
	{ 0x37c9d5fc, "led_classdev_register_ext" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc87fd291, "ieee80211_alloc_hw_nm" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x38590bd4, "ieee80211_emulate_add_chanctx" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xb77e1ef3, "ieee80211_emulate_switch_vif_chanctx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x41cc93f6, "input_event" },
	{ 0x1e052696, "ieee80211_stop_queue" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x29c998f4, "usb_unanchor_urb" },
	{ 0x27b8aeb2, "ieee80211_stop_queues" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xadb38c78, "__ieee80211_get_assoc_led_name" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x24c4b1f8, "ieee80211_unregister_hw" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb3e9f5d1, "ath_regd_init" },
	{ 0x20f09351, "ieee80211_beacon_get_tim" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa1311ba2, "usb_get_from_anchor" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x4559e78f, "ieee80211_queue_work" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xaad0ae78, "__bitmap_shift_right" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0xe3bafe79, "ieee80211_emulate_remove_chanctx" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x20b512e9, "usb_check_bulk_endpoints" },
	{ 0x2eeceda9, "ieee80211_rx_napi" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mac80211,cfg80211,ath");

MODULE_ALIAS("usb:v0CF3p9170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vCACEp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A09d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A0Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1221d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0804d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0326d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3417d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApF522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p5304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp093Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0249d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p02B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p9170d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "53C8B1D9B1904E7AE001C87");
