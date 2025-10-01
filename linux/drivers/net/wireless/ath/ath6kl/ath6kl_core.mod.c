#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(ath6kl_printk, "", "");
KSYMTAB_FUNC(ath6kl_info, "", "");
KSYMTAB_FUNC(ath6kl_err, "", "");
KSYMTAB_FUNC(ath6kl_warn, "", "");
KSYMTAB_FUNC(ath6kl_read_tgt_stats, "", "");
KSYMTAB_FUNC(ath6kl_hif_rw_comp_handler, "", "");
KSYMTAB_FUNC(ath6kl_hif_intr_bh_handler, "", "");
KSYMTAB_FUNC(ath6kl_cfg80211_suspend, "", "");
KSYMTAB_FUNC(ath6kl_cfg80211_resume, "", "");
KSYMTAB_FUNC(ath6kl_stop_txrx, "", "");
KSYMTAB_FUNC(ath6kl_core_tx_complete, "", "");
KSYMTAB_FUNC(ath6kl_core_rx_complete, "", "");
KSYMTAB_FUNC(ath6kl_core_init, "", "");
KSYMTAB_FUNC(ath6kl_core_create, "", "");
KSYMTAB_FUNC(ath6kl_core_cleanup, "", "");
KSYMTAB_FUNC(ath6kl_core_destroy, "", "");

SYMBOL_CRC(ath6kl_printk, 0xb881b1a9, "");
SYMBOL_CRC(ath6kl_info, 0x3502feef, "");
SYMBOL_CRC(ath6kl_err, 0xb9a689dd, "");
SYMBOL_CRC(ath6kl_warn, 0x1354043d, "");
SYMBOL_CRC(ath6kl_read_tgt_stats, 0x23f81db7, "");
SYMBOL_CRC(ath6kl_hif_rw_comp_handler, 0x91cfb84a, "");
SYMBOL_CRC(ath6kl_hif_intr_bh_handler, 0xfd4ddbe2, "");
SYMBOL_CRC(ath6kl_cfg80211_suspend, 0x65880fd7, "");
SYMBOL_CRC(ath6kl_cfg80211_resume, 0xd0e49813, "");
SYMBOL_CRC(ath6kl_stop_txrx, 0x2207db44, "");
SYMBOL_CRC(ath6kl_core_tx_complete, 0xebdd4a71, "");
SYMBOL_CRC(ath6kl_core_rx_complete, 0x07df9f3a, "");
SYMBOL_CRC(ath6kl_core_init, 0x4fd4738f, "");
SYMBOL_CRC(ath6kl_core_create, 0x6633ffef, "");
SYMBOL_CRC(ath6kl_core_cleanup, 0xfa5e5f29, "");
SYMBOL_CRC(ath6kl_core_destroy, 0xfe726b0d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x13d6c7f, "cfg80211_sched_scan_results" },
	{ 0xf4c42d86, "cfg80211_cqm_txe_notify" },
	{ 0xae954c28, "cfg80211_mgmt_tx_status_ext" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x469438cc, "of_node_put" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x3700ec41, "cfg80211_scan_done" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x2ff86150, "cfg80211_sched_scan_stopped" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xab09b090, "cfg80211_remain_on_channel_expired" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x20482e2d, "cfg80211_register_netdevice" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x96848186, "scnprintf" },
	{ 0xcf2a6966, "up" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa6636aff, "regulatory_hint" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x5cfe3a6a, "cfg80211_new_sta" },
	{ 0x753adcaa, "netdev_set_default_ethtool_ops" },
	{ 0x749cc8b8, "cfg80211_disconnected" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xdd3b7072, "ether_setup" },
	{ 0x7a1c2aba, "of_get_property" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0x50c7e6ee, "of_find_compatible_node" },
	{ 0xc4f8efb6, "eth_type_trans" },
	{ 0xb67fb8b4, "alloc_netdev_mqs" },
	{ 0xb5c8842d, "wiphy_new_nm" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8aae78a0, "cfg80211_ready_on_channel" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x4c4130b, "wiphy_register" },
	{ 0xfeed4c75, "cfg80211_put_bss" },
	{ 0x9fb81438, "cfg80211_roamed" },
	{ 0xe9572433, "cfg80211_ch_switch_notify" },
	{ 0xbd395e28, "skb_copy_expand" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x5ed3bbcd, "ieee80211_get_channel_khz" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0x185c4037, "cfg80211_get_drvinfo" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe92d9e17, "cfg80211_ibss_joined" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x62345ccc, "cfg80211_michael_mic_failure" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0xa9b2a19a, "cfg80211_del_sta_sinfo" },
	{ 0x2ce1c952, "wiphy_unregister" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4295cec9, "ethtool_op_get_link" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0xdcb764ad, "memset" },
	{ 0x44e94587, "cfg80211_pmksa_candidate_notify" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x50d00458, "netif_rx" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xf924e8e, "cfg80211_check_station_change" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xad539dc, "cfg80211_unregister_wdev" },
	{ 0x999e8297, "vfree" },
	{ 0xc5b357a6, "cfg80211_rx_mgmt_ext" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x828a01bc, "netif_carrier_off" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xac85f68f, "skb_copy" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xffc50605, "netif_carrier_on" },
	{ 0x23026b4b, "cfg80211_chandef_create" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x24c63b71, "cfg80211_conn_failed" },
	{ 0x357d9e3, "cfg80211_inform_bss_data" },
	{ 0xd3922678, "cfg80211_connect_done" },
	{ 0xa7999ec7, "__cfg80211_get_bss" },
	{ 0x3b842f0a, "wiphy_free" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "497F2305047C5BE8AB8AF30");
