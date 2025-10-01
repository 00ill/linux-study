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

KSYMTAB_FUNC(mwifiex_queue_main_work, "_gpl", "");
KSYMTAB_FUNC(mwifiex_main_process, "_gpl", "");
KSYMTAB_FUNC(mwifiex_multi_chan_resync, "_gpl", "");
KSYMTAB_FUNC(mwifiex_upload_device_dump, "_gpl", "");
KSYMTAB_FUNC(mwifiex_drv_info_dump, "_gpl", "");
KSYMTAB_FUNC(mwifiex_prepare_fw_dump_info, "_gpl", "");
KSYMTAB_FUNC(mwifiex_shutdown_sw, "_gpl", "");
KSYMTAB_FUNC(mwifiex_reinit_sw, "_gpl", "");
KSYMTAB_FUNC(mwifiex_add_card, "_gpl", "");
KSYMTAB_FUNC(mwifiex_remove_card, "_gpl", "");
KSYMTAB_FUNC(_mwifiex_dbg, "_gpl", "");
KSYMTAB_FUNC(mwifiex_dnld_fw, "_gpl", "");
KSYMTAB_FUNC(mwifiex_process_hs_config, "_gpl", "");
KSYMTAB_FUNC(mwifiex_process_sleep_confirm_resp, "_gpl", "");
KSYMTAB_FUNC(mwifiex_init_shutdown_fw, "_gpl", "");
KSYMTAB_FUNC(mwifiex_alloc_dma_align_buf, "_gpl", "");
KSYMTAB_FUNC(mwifiex_fw_dump_event, "_gpl", "");
KSYMTAB_FUNC(mwifiex_handle_rx_packet, "_gpl", "");
KSYMTAB_FUNC(mwifiex_write_data_complete, "_gpl", "");
KSYMTAB_FUNC(mwifiex_deauthenticate_all, "_gpl", "");
KSYMTAB_FUNC(mwifiex_cancel_hs, "_gpl", "");
KSYMTAB_FUNC(mwifiex_enable_hs, "_gpl", "");
KSYMTAB_FUNC(mwifiex_disable_auto_ds, "_gpl", "");
KSYMTAB_FUNC(mwifiex_add_virtual_intf, "_gpl", "");
KSYMTAB_FUNC(mwifiex_del_virtual_intf, "_gpl", "");

SYMBOL_CRC(mwifiex_queue_main_work, 0x1f2bd99f, "_gpl");
SYMBOL_CRC(mwifiex_main_process, 0x76659f4b, "_gpl");
SYMBOL_CRC(mwifiex_multi_chan_resync, 0xe456459c, "_gpl");
SYMBOL_CRC(mwifiex_upload_device_dump, 0xf4f3ff5c, "_gpl");
SYMBOL_CRC(mwifiex_drv_info_dump, 0xce8c1d4c, "_gpl");
SYMBOL_CRC(mwifiex_prepare_fw_dump_info, 0x0c6d9d06, "_gpl");
SYMBOL_CRC(mwifiex_shutdown_sw, 0x3850ad8f, "_gpl");
SYMBOL_CRC(mwifiex_reinit_sw, 0x73508ab3, "_gpl");
SYMBOL_CRC(mwifiex_add_card, 0x9f41a940, "_gpl");
SYMBOL_CRC(mwifiex_remove_card, 0xd20f87c8, "_gpl");
SYMBOL_CRC(_mwifiex_dbg, 0x6a823a9e, "_gpl");
SYMBOL_CRC(mwifiex_dnld_fw, 0xd83dd1ba, "_gpl");
SYMBOL_CRC(mwifiex_process_hs_config, 0x25f45565, "_gpl");
SYMBOL_CRC(mwifiex_process_sleep_confirm_resp, 0xa33179d7, "_gpl");
SYMBOL_CRC(mwifiex_init_shutdown_fw, 0x84776043, "_gpl");
SYMBOL_CRC(mwifiex_alloc_dma_align_buf, 0xd4dad9f3, "_gpl");
SYMBOL_CRC(mwifiex_fw_dump_event, 0x3e68c2d2, "_gpl");
SYMBOL_CRC(mwifiex_handle_rx_packet, 0x1018114d, "_gpl");
SYMBOL_CRC(mwifiex_write_data_complete, 0x205fac05, "_gpl");
SYMBOL_CRC(mwifiex_deauthenticate_all, 0xf8192e35, "_gpl");
SYMBOL_CRC(mwifiex_cancel_hs, 0x52ed350a, "_gpl");
SYMBOL_CRC(mwifiex_enable_hs, 0xe82ac121, "_gpl");
SYMBOL_CRC(mwifiex_disable_auto_ds, 0x52832018, "_gpl");
SYMBOL_CRC(mwifiex_add_virtual_intf, 0xd21ebc24, "_gpl");
SYMBOL_CRC(mwifiex_del_virtual_intf, 0xe50bcb62, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x13d6c7f, "cfg80211_sched_scan_results" },
	{ 0x29b0d518, "skb_complete_wifi_ack" },
	{ 0xe914e41e, "strcpy" },
	{ 0xae954c28, "cfg80211_mgmt_tx_status_ext" },
	{ 0xc0632fb8, "cfg80211_rx_assoc_resp" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf112a651, "cfg80211_chandef_dfs_required" },
	{ 0x3700ec41, "cfg80211_scan_done" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x2ff86150, "cfg80211_sched_scan_stopped" },
	{ 0x15b9f3f1, "param_ops_ushort" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xab09b090, "cfg80211_remain_on_channel_expired" },
	{ 0x94002200, "cfg80211_cac_event" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x20482e2d, "cfg80211_register_netdevice" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x96848186, "scnprintf" },
	{ 0x4f5de0dc, "ieee80211_amsdu_to_8023s" },
	{ 0xd75b517a, "cfg80211_ref_bss" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa6636aff, "regulatory_hint" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x538f32f2, "cfg80211_chandef_valid" },
	{ 0x5cfe3a6a, "cfg80211_new_sta" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x248efd3, "kstrtobool_from_user" },
	{ 0x749cc8b8, "cfg80211_disconnected" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xdd3b7072, "ether_setup" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xc4f8efb6, "eth_type_trans" },
	{ 0xb67fb8b4, "alloc_netdev_mqs" },
	{ 0xb5c8842d, "wiphy_new_nm" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8aae78a0, "cfg80211_ready_on_channel" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x1c9b39cc, "cfg80211_classify8021d" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1b5d57a0, "cfg80211_rx_mlme_mgmt" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x79b82a71, "cfg80211_find_vendor_elem" },
	{ 0x4c4130b, "wiphy_register" },
	{ 0xfeed4c75, "cfg80211_put_bss" },
	{ 0xbb8ce2ef, "netif_device_detach" },
	{ 0xe9572433, "cfg80211_ch_switch_notify" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x64707a9c, "netif_device_attach" },
	{ 0x47cfd825, "kstrtouint_from_user" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x5ed3bbcd, "ieee80211_get_channel_khz" },
	{ 0x8f14d45b, "get_zeroed_page_noprof" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x29c54136, "__cfg80211_radar_event" },
	{ 0xf96381f, "cfg80211_tdls_oper_request" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4679d10c, "devm_kmemdup" },
	{ 0x669c413b, "_dev_err" },
	{ 0xe92d9e17, "cfg80211_ibss_joined" },
	{ 0x8bbcc68f, "request_firmware_nowait" },
	{ 0x5d809a68, "simple_open" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x96bd2420, "wiphy_apply_custom_regulatory" },
	{ 0x62345ccc, "cfg80211_michael_mic_failure" },
	{ 0x3958a712, "dev_close" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0xa9b2a19a, "cfg80211_del_sta_sinfo" },
	{ 0x2ce1c952, "wiphy_unregister" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xf4da4505, "dev_coredumpv" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x11089ac7, "_ctype" },
	{ 0x649550d5, "netif_tx_stop_all_queues" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xdcb764ad, "memset" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0x99cd0788, "param_ops_charp" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x57624c0a, "of_property_read_variable_u8_array" },
	{ 0x50d00458, "netif_rx" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x43f25734, "skb_unlink" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc1816a23, "cfg80211_sched_scan_stopped_locked" },
	{ 0xd4ab7847, "skb_realloc_headroom" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0xad539dc, "cfg80211_unregister_wdev" },
	{ 0x999e8297, "vfree" },
	{ 0xc5b357a6, "cfg80211_rx_mgmt_ext" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x828a01bc, "netif_carrier_off" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xac85f68f, "skb_copy" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xffc50605, "netif_carrier_on" },
	{ 0x23026b4b, "cfg80211_chandef_create" },
	{ 0xe0e3dcf5, "cfg80211_report_wowlan_wakeup" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x357d9e3, "cfg80211_inform_bss_data" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x168a52f7, "irq_of_parse_and_map" },
	{ 0x98cf60b3, "strlen" },
	{ 0x1879fcbd, "bridge_tunnel_header" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x5cba2be4, "ieee80211_bss_get_elem" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xd3922678, "cfg80211_connect_done" },
	{ 0xa7999ec7, "__cfg80211_get_bss" },
	{ 0x3b842f0a, "wiphy_free" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xd1e7f416, "cfg80211_cqm_rssi_notify" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x910b3446, "skb_queue_head" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "F7C1F25B363A352F8754A67");
