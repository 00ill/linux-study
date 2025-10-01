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

KSYMTAB_FUNC(mt7925_mac_write_txwi, "_gpl", "");
KSYMTAB_FUNC(mt7925_txwi_free, "_gpl", "");
KSYMTAB_FUNC(mt7925_rx_check, "_gpl", "");
KSYMTAB_FUNC(mt7925_queue_rx_skb, "_gpl", "");
KSYMTAB_FUNC(mt7925_usb_sdio_tx_prepare_skb, "_gpl", "");
KSYMTAB_FUNC(mt7925_usb_sdio_tx_complete_skb, "_gpl", "");
KSYMTAB_FUNC(mt7925_usb_sdio_tx_status_data, "_gpl", "");
KSYMTAB_FUNC(mt7925_mcu_parse_response, "_gpl", "");
KSYMTAB_FUNC(mt7925_mcu_regval, "_gpl", "");
KSYMTAB_FUNC(mt7925_mcu_set_deep_sleep, "_gpl", "");
KSYMTAB_FUNC(mt7925_mcu_set_thermal_protect, "_gpl", "");
KSYMTAB_FUNC(mt7925_run_firmware, "_gpl", "");
KSYMTAB_FUNC(mt7925_mcu_set_eeprom, "_gpl", "");
KSYMTAB_FUNC(mt7925_mcu_hw_scan, "_gpl", "");
KSYMTAB_FUNC(mt7925_mcu_sched_scan_req, "_gpl", "");
KSYMTAB_FUNC(mt7925_mcu_cancel_hw_scan, "_gpl", "");
KSYMTAB_FUNC(mt7925_mcu_set_channel_domain, "_gpl", "");
KSYMTAB_FUNC(mt7925_mcu_fill_message, "_gpl", "");
KSYMTAB_FUNC(__mt7925_start, "_gpl", "");
KSYMTAB_FUNC(mt7925_roc_abort_sync, "_gpl", "");
KSYMTAB_FUNC(mt7925_mac_sta_add, "_gpl", "");
KSYMTAB_FUNC(mt7925_mac_sta_event, "_gpl", "");
KSYMTAB_FUNC(mt7925_mac_sta_remove, "_gpl", "");
KSYMTAB_DATA(mt7925_ops, "_gpl", "");
KSYMTAB_FUNC(mt7925_mac_init, "_gpl", "");
KSYMTAB_FUNC(mt7925_register_device, "_gpl", "");

SYMBOL_CRC(mt7925_mac_write_txwi, 0xecdabdd7, "_gpl");
SYMBOL_CRC(mt7925_txwi_free, 0xdd6063b9, "_gpl");
SYMBOL_CRC(mt7925_rx_check, 0xf6381803, "_gpl");
SYMBOL_CRC(mt7925_queue_rx_skb, 0x14a6569d, "_gpl");
SYMBOL_CRC(mt7925_usb_sdio_tx_prepare_skb, 0xae2aa2d6, "_gpl");
SYMBOL_CRC(mt7925_usb_sdio_tx_complete_skb, 0x363b10ba, "_gpl");
SYMBOL_CRC(mt7925_usb_sdio_tx_status_data, 0x931adbc2, "_gpl");
SYMBOL_CRC(mt7925_mcu_parse_response, 0x4af39573, "_gpl");
SYMBOL_CRC(mt7925_mcu_regval, 0xb00d6607, "_gpl");
SYMBOL_CRC(mt7925_mcu_set_deep_sleep, 0x827b6e37, "_gpl");
SYMBOL_CRC(mt7925_mcu_set_thermal_protect, 0xcce3fee0, "_gpl");
SYMBOL_CRC(mt7925_run_firmware, 0x3c1aca93, "_gpl");
SYMBOL_CRC(mt7925_mcu_set_eeprom, 0x038b4719, "_gpl");
SYMBOL_CRC(mt7925_mcu_hw_scan, 0xe25093a6, "_gpl");
SYMBOL_CRC(mt7925_mcu_sched_scan_req, 0x2deaf0b5, "_gpl");
SYMBOL_CRC(mt7925_mcu_cancel_hw_scan, 0xe62dbbd7, "_gpl");
SYMBOL_CRC(mt7925_mcu_set_channel_domain, 0x94982a8a, "_gpl");
SYMBOL_CRC(mt7925_mcu_fill_message, 0xa8181690, "_gpl");
SYMBOL_CRC(__mt7925_start, 0x52dfb9fe, "_gpl");
SYMBOL_CRC(mt7925_roc_abort_sync, 0x1de5d279, "_gpl");
SYMBOL_CRC(mt7925_mac_sta_add, 0xa9933262, "_gpl");
SYMBOL_CRC(mt7925_mac_sta_event, 0x7543f735, "_gpl");
SYMBOL_CRC(mt7925_mac_sta_remove, 0x58cedb64, "_gpl");
SYMBOL_CRC(mt7925_ops, 0xfdc91b83, "_gpl");
SYMBOL_CRC(mt7925_mac_init, 0x495c6393, "_gpl");
SYMBOL_CRC(mt7925_register_device, 0x57174042, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x2a154440, "mt76_connac_mcu_update_gtk_rekey" },
	{ 0x4ae8caa7, "ieee80211_sta_register_airtime" },
	{ 0x4a55f887, "mt792x_init_wcid" },
	{ 0x84c8285a, "mt76_init_sar_power" },
	{ 0xad68421f, "ieee80211_connection_loss" },
	{ 0x80711def, "mt76_tx_status_unlock" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x27c66375, "simple_attr_open" },
	{ 0xcc985438, "ieee80211_iterate_interfaces" },
	{ 0x9b63f646, "mt792x_stop" },
	{ 0x826c09e1, "mt76_connac_get_ch_power" },
	{ 0x3c57e074, "debugfs_attr_write" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x64baa726, "mt76_connac_get_phy_mode_v2" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x62c7eaae, "mt76_tx_status_skb_get" },
	{ 0x53a605f7, "mt792x_tx_worker" },
	{ 0x31fe408c, "mt792x_flush" },
	{ 0xdd034165, "mt76_tx_status_lock" },
	{ 0x10ee30c1, "mt792x_rx_get_wcid" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0xa25337f, "mt76_connac_gen_ppe_thresh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xde0ae918, "mt76_connac_mcu_uni_add_dev" },
	{ 0x286aaa08, "mt76_release_buffered_frames" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x5cb5519f, "mt76_get_txpower" },
	{ 0xc09d757e, "mt76_connac_mcu_sta_uapsd" },
	{ 0x5495c001, "mt76_tx_status_skb_add" },
	{ 0xd93c9c73, "mt76_connac_pm_wake" },
	{ 0x5b721b4, "mt76_get_rate" },
	{ 0xdf73a34, "mt792x_pm_wake_work" },
	{ 0xc4366c7d, "mt76_wake_tx_queue" },
	{ 0xaf9e534c, "ieee80211_start_tx_ba_session" },
	{ 0x4829a47e, "memcpy" },
	{ 0x433af450, "mt76_get_antenna" },
	{ 0x99752555, "mt792x_set_coverage_class" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xe093d9fc, "__mt76_tx_complete_skb" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0x6ab0bd12, "mt76_set_stream_caps" },
	{ 0x77764ee7, "mt792x_mac_assoc_rssi" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x501ee2bd, "ieee80211_get_hdrlen_from_skb" },
	{ 0xe2964344, "__wake_up" },
	{ 0xe731fec5, "mt792x_mac_work" },
	{ 0xcf48e2a, "mt76_mcu_rx_event" },
	{ 0x718c5ec7, "mt76_wcid_init" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0xae57145c, "mt76_connac_free_pending_tx_skbs" },
	{ 0x5d379c81, "mt792x_sta_statistics" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0x45168a4e, "mt76_connac_power_save_sched" },
	{ 0x352833ed, "__alloc_pages_noprof" },
	{ 0xa6724bf6, "mt76_connac_txp_skb_unmap" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfc28cd6b, "debugfs_create_devm_seqfile" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xabd80dc9, "mt792x_get_et_sset_count" },
	{ 0x731aeaa1, "mt792x_set_tsf" },
	{ 0xe40b66ef, "mt76_wcid_alloc" },
	{ 0x618911fc, "numa_node" },
	{ 0xcfe0f50e, "mt792x_set_wakeup" },
	{ 0x75850bb7, "mt76_wcid_key_setup" },
	{ 0x2fd63435, "mt76_connac_mcu_set_gtk_rekey" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0xaeb98a5e, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x84588585, "mt76_rx" },
	{ 0x160a9f73, "mt792x_load_firmware" },
	{ 0x83fb6862, "mt792x_get_et_stats" },
	{ 0x454bb2d4, "mt76_connac_mcu_uni_add_bss" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xa724da05, "wiphy_to_ieee80211_hw" },
	{ 0xa861d6a8, "debugfs_attr_read" },
	{ 0x64e39ac7, "mt792x_mac_link_bss_remove" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb6574433, "mt76_tx_status_skb_done" },
	{ 0x6ca3449c, "ieee80211_queue_delayed_work" },
	{ 0x4679d10c, "devm_kmemdup" },
	{ 0x2a10607e, "devm_kfree" },
	{ 0x669c413b, "_dev_err" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xc9309635, "mt76_register_device" },
	{ 0xb604f1d, "mt792x_get_stats" },
	{ 0x1e3a4a79, "mt76_mcu_skb_send_and_get_msg" },
	{ 0x2ef9e47d, "simple_attr_release" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5f5404d4, "ieee80211_remain_on_channel_expired" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x3dfbc684, "seq_putc" },
	{ 0xabb61447, "ieee80211_wake_queues" },
	{ 0xab1a00a2, "mt76_mcu_send_and_get_msg" },
	{ 0x3da213e2, "ieee80211_beacon_get_template" },
	{ 0x6cab16b1, "mt792x_pm_stats" },
	{ 0xcabae421, "mt76_eeprom_override" },
	{ 0xf4da4505, "dev_coredumpv" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa7817566, "__mt76_mcu_msg_alloc" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd9607800, "mt76_connac_get_he_phy_cap" },
	{ 0x11089ac7, "_ctype" },
	{ 0x98fca8d0, "mt76_get_survey" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xef160adf, "devm_hwmon_device_register_with_groups" },
	{ 0xdcb764ad, "memset" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0xea4fe3bd, "mt76_token_release" },
	{ 0xa76bb0b4, "mt792x_get_tsf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x5a7b5c38, "mt792x_pm_idle_timeout_set" },
	{ 0xd8aa80c5, "mt792x_tx" },
	{ 0x7c25e8d3, "mt792x_get_et_strings" },
	{ 0xe43249b6, "mt76_sta_state" },
	{ 0x21f0f8a, "ieee80211_ready_on_channel" },
	{ 0x27b8aeb2, "ieee80211_stop_queues" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5fc625c6, "devm_kasprintf" },
	{ 0x65950b37, "mt792x_remove_interface" },
	{ 0x661256ad, "seq_read" },
	{ 0x552c67c9, "mt76_connac3_mac_decode_he_radiotap" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfbd24d47, "mt76_connac2_mac_tx_rate_val" },
	{ 0xdc05d44c, "mt76_connac_mcu_add_nested_tlv" },
	{ 0x17f568e9, "mt76_rates" },
	{ 0xac7f5729, "mt792x_queues_read" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0xff42b891, "mt792x_queues_acq" },
	{ 0x6fa74b97, "mt76_get_rate_power_limits" },
	{ 0xcb3034e8, "ieee80211_sched_scan_results" },
	{ 0xe027e031, "ieee80211_scan_completed" },
	{ 0x2bf50a51, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x6181210e, "mt76_insert_ccmp_hdr" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0xc4ca34eb, "mt792x_tx_stats_show" },
	{ 0x2173ef72, "mt76_connac_mcu_set_suspend_mode" },
	{ 0xd5e99826, "mt76_rx_aggr_start" },
	{ 0xd9aab56f, "__folio_put" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x8cbc73ec, "ieee80211_set_active_links_async" },
	{ 0xc3a0fb62, "mt792x_pm_idle_timeout_get" },
	{ 0x9c06d4d5, "mt792x_roc_timer" },
	{ 0xfd4ff518, "mt76_connac_mcu_coredump_event" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x682d24a7, "mt76_get_sar_power" },
	{ 0xc9b39a58, "mt76_connac_mcu_sta_he_tlv_v2" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6e0a2327, "mt792x_mac_init_band" },
	{ 0xc74b49a3, "mt76_skb_adjust_pad" },
	{ 0x5808f0c9, "mt76_put_txwi" },
	{ 0x1a6e83da, "mt76_wcid_cleanup" },
	{ 0x98a3ee72, "mt792x_init_wiphy" },
	{ 0xcc67eae2, "__mt76_connac_mcu_alloc_sta_req" },
	{ 0x10139ad8, "single_release" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xbf6f6e46, "mt76_connac3_mac_decode_eht_radiotap" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xfc79af8d, "mt76_queues_read" },
	{ 0x1e16c16, "mt76_sta_pre_rcu_remove" },
	{ 0x7e756333, "mt76_register_debugfs_fops" },
	{ 0xcf7b1f5c, "cfg80211_get_iftype_ext_capa" },
	{ 0x9ac5e3f, "mt792x_reset" },
	{ 0x327a9822, "mt76_rx_signal" },
	{ 0x56cebf17, "__mt76_set_tx_blocked" },
	{ 0x4559e78f, "ieee80211_queue_work" },
	{ 0x37134f35, "mt792x_mac_reset_counters" },
	{ 0x90807f59, "napi_consume_skb" },
	{ 0x98cf60b3, "strlen" },
	{ 0x1879fcbd, "bridge_tunnel_header" },
	{ 0x88ec4249, "__mt76_poll" },
	{ 0x2f7813a7, "mt76_rx_aggr_stop" },
	{ 0x71c90ddc, "single_open" },
	{ 0xcae61a67, "mt76_connac_get_phy_mode" },
	{ 0xf5731821, "mt76_connac_mcu_sta_basic_tlv" },
	{ 0xef7f1f41, "ieee80211_disconnect" },
	{ 0xe4ccb149, "mt792x_pm_power_save_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mt76-connac-lib,mac80211,mt792x-lib,mt76,cfg80211");


MODULE_INFO(srcversion, "DA6354C82850E3AF9ECA923");
