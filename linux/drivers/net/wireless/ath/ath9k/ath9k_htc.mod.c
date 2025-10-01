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
	{ 0x9f470df, "ath9k_hw_reset_calvalid" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdcb65baf, "ath_key_config" },
	{ 0x3ef80ef0, "ath9k_hw_btcoex_init_3wire" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0xa6c5e39f, "ath9k_cmn_rx_accept" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x61420e14, "ieee80211_free_hw" },
	{ 0x7731c52, "ath9k_hw_reset" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x895a4266, "ath9k_hw_setuptxqueue" },
	{ 0x33bdaea8, "ath9k_hw_startpcureceive" },
	{ 0x4b88d7a6, "ath9k_hw_gpio_request_out" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xaf9e534c, "ieee80211_start_tx_ba_session" },
	{ 0x81286ef3, "ath9k_hw_setmcastfilter" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa6636aff, "regulatory_hint" },
	{ 0x37a0cba, "kfree" },
	{ 0x51afc111, "ath9k_hw_btcoex_set_weight" },
	{ 0xe3dcebe7, "led_classdev_unregister" },
	{ 0x4ff913b5, "ieee80211_register_hw" },
	{ 0xe83c2d4, "ieee80211_emulate_change_chanctx" },
	{ 0xa6cc04a6, "__ieee80211_create_tpt_led_trigger" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xf11a951c, "ath9k_hw_setpower" },
	{ 0x501ee2bd, "ieee80211_get_hdrlen_from_skb" },
	{ 0x32d7ef55, "__ieee80211_get_radio_led_name" },
	{ 0xc9dc01b8, "ath9k_hw_phy_disable" },
	{ 0x7782f7c4, "ath9k_cmn_rx_skb_postprocess" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc143af0f, "ath_hw_setbssidmask" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xec9743e1, "ath9k_cmn_beacon_config_sta" },
	{ 0x22e3abb9, "ath9k_hw_setrxabort" },
	{ 0xeae0de1, "ath9k_hw_btcoex_bt_stomp" },
	{ 0x23bac0bc, "ath9k_hw_gpio_free" },
	{ 0x70f7da02, "usb_interrupt_msg" },
	{ 0x650d4708, "ieee80211_tx_status_skb" },
	{ 0xecfea7ae, "ieee80211_get_buffered_bc" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x69509299, "ieee80211_find_sta" },
	{ 0x22fe87e5, "ieee80211_handle_wake_tx_queue" },
	{ 0x122c3a7e, "_printk" },
	{ 0xdeb78556, "ath9k_hw_beaconinit" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xaf37eb04, "ath9k_hw_settsf64" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xf2235e29, "ath9k_hw_init_global_settings" },
	{ 0x1d5ff0ca, "ath9k_hw_name" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x72429a8c, "ath9k_hw_beaconq_setup" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0xaeb98a5e, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x9eee677, "ath9k_hw_init_btcoex_hw" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xa724da05, "wiphy_to_ieee80211_hw" },
	{ 0x46049065, "ath_reg_notifier_apply" },
	{ 0x6ca3449c, "ieee80211_queue_delayed_work" },
	{ 0xff1b6615, "ath9k_hw_write_associd" },
	{ 0x669c413b, "_dev_err" },
	{ 0x8bbcc68f, "request_firmware_nowait" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x3939f8f0, "rfkill_pause_polling" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0x5a921311, "strncmp" },
	{ 0x1f2d80d9, "ath9k_cmn_process_rssi" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x74327932, "ath9k_cmn_beacon_config_adhoc" },
	{ 0x13c0013, "ieee80211_beacon_cntdwn_is_complete" },
	{ 0x88f87e52, "ath_is_mybeacon" },
	{ 0x62fa365e, "ath9k_hw_ani_monitor" },
	{ 0xc4db9bab, "ath9k_hw_getrxfilter" },
	{ 0xb7c2f69e, "ath9k_hw_btcoex_disable" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xabb61447, "ieee80211_wake_queues" },
	{ 0x37ca3cc1, "ath9k_cmn_beacon_config_ap" },
	{ 0x6d09751, "ath9k_hw_set_tsfadjust" },
	{ 0xbdde7b52, "ath9k_hw_set_sta_beacon_timers" },
	{ 0x37c9d5fc, "led_classdev_register_ext" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc87fd291, "ieee80211_alloc_hw_nm" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x27204d83, "ath9k_hw_gettsf64" },
	{ 0x38590bd4, "ieee80211_emulate_add_chanctx" },
	{ 0xeb9660f4, "ath9k_hw_resettxqueue" },
	{ 0x97d29a6d, "ath9k_hw_disable" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x20ce06a9, "ath9k_hw_setopmode" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xb77e1ef3, "ieee80211_emulate_switch_vif_chanctx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3cb475fa, "ath_printk" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x29c998f4, "usb_unanchor_urb" },
	{ 0x27b8aeb2, "ieee80211_stop_queues" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x69bb359f, "ath9k_cmn_init_channels_rates" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xda7db208, "wiphy_rfkill_set_hw_state_reason" },
	{ 0x6a36eb98, "ath9k_cmn_reload_chainmask" },
	{ 0x95902ab2, "usb_get_urb" },
	{ 0xfc4326dd, "wiphy_rfkill_start_polling" },
	{ 0x48f0bbf1, "ath9k_hw_reset_tsf" },
	{ 0x5f2b57bf, "ath9k_hw_releasetxqueue" },
	{ 0x7f7ee680, "ath9k_hw_get_txq_props" },
	{ 0x5c7c7d40, "ath9k_hw_setrxfilter" },
	{ 0x2bf50a51, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x24c4b1f8, "ieee80211_unregister_hw" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb3e9f5d1, "ath_regd_init" },
	{ 0x8498f8c9, "ath9k_hw_gpio_get" },
	{ 0x20f09351, "ieee80211_beacon_get_tim" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x4e851912, "ath9k_cmn_update_txpow" },
	{ 0xf90a7a6d, "ath_key_delete" },
	{ 0xec636e49, "ath9k_hw_stopdmarecv" },
	{ 0xc49442ff, "ath9k_cmn_get_hw_crypto_keytype" },
	{ 0x38c2883f, "ath9k_hw_wait" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x679b53ee, "ath9k_hw_btcoex_enable" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xeda2db4, "ath9k_cmn_process_rate" },
	{ 0x4559e78f, "ieee80211_queue_work" },
	{ 0xdd09ef4d, "ath9k_cmn_init_crypto" },
	{ 0xdf861bc3, "ath9k_hw_set_gpio" },
	{ 0x4074d816, "device_release_driver" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc0c66822, "ath9k_hw_deinit" },
	{ 0xe3bafe79, "ieee80211_emulate_remove_chanctx" },
	{ 0x53cc6bb8, "ath9k_cmn_get_channel" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xd8e3d534, "ath9k_hw_init" },
	{ 0xd9eb2768, "ieee80211_csa_finish" },
	{ 0xf7a97ddf, "ath9k_hw_set_txq_props" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2eeceda9, "ieee80211_rx_napi" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ath9k_hw,ath,ath9k_common,mac80211,cfg80211,rfkill");

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C6F3D6FA9038FEC8E8DA97F");
