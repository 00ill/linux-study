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

KSYMTAB_FUNC(mt76_connac_mcu_start_firmware, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_patch_sem_ctrl, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_start_patch, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_init_download, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_channel_domain, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_mac_enable, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_vif_ps, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_rts_thresh, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_beacon_loss_iter, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_add_nested_tlv, "_gpl", "");
KSYMTAB_FUNC(__mt76_connac_mcu_alloc_sta_req, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_alloc_wtbl_req, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_bss_omac_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_basic_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_uapsd, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_wtbl_hdr_trans_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_update_hdr_trans, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_wtbl_update_hdr_trans, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_wtbl_generic_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_he_tlv_v2, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_get_phy_mode_v2, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_wtbl_smps_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_wtbl_ht_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_cmd, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_wtbl_ba_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_uni_add_dev, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_ba_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_wed_update, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_ba, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_get_phy_mode, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_get_phy_mode_ext, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_get_he_phy_cap, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_get_eht_phy_cap, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_uni_set_chctx, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_uni_add_bss, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_hw_scan, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_cancel_hw_scan, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sched_scan_req, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sched_scan_enable, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_chip_config, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_deep_sleep, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_sta_state_dp, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_coredump_event, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_get_ch_power, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_rate_txpower, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_update_arp_filter, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_p2p_oppps, "_gpl", "");
KSYMTAB_DATA(mt76_connac_wowlan_support, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_update_gtk_rekey, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_gtk_rekey, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_suspend_mode, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_wow_ctrl, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_hif_suspend, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_suspend_iter, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_reg_rr, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_reg_wr, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_add_key, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_bss_ext_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_bss_basic_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_pm, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_restart, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_del_wtbl_all, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_rdd_cmd, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_load_ram, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_load_patch, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_mcu_fill_message, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_gen_ppe_thresh, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_pm_wake, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_power_save_sched, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_free_pending_tx_skbs, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_pm_queue_skb, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_pm_dequeue_skbs, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_tx_complete_skb, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_write_hw_txp, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_txp_skb_unmap, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_init_tx_queues, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_mac_tx_rate_val, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_mac_write_txwi, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_mac_fill_txs, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_mac_add_txs_skb, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_mac_decode_he_radiotap, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_reverse_frag0_hdr_trans, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_mac_fill_rx_rate, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_tx_check_aggr, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_txwi_free, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_tx_token_put, "_gpl", "");
KSYMTAB_FUNC(mt76_connac3_mac_decode_he_radiotap, "_gpl", "");
KSYMTAB_FUNC(mt76_connac3_mac_decode_eht_radiotap, "_gpl", "");

SYMBOL_CRC(mt76_connac_mcu_start_firmware, 0x629cf2a8, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_patch_sem_ctrl, 0xd221d881, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_start_patch, 0x445cc672, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_init_download, 0x7e847824, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_channel_domain, 0xe1040088, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_mac_enable, 0xb2110948, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_vif_ps, 0xd8f5f103, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_rts_thresh, 0xd7bdab51, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_beacon_loss_iter, 0x55b64098, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_add_nested_tlv, 0xdc05d44c, "_gpl");
SYMBOL_CRC(__mt76_connac_mcu_alloc_sta_req, 0xcc67eae2, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_alloc_wtbl_req, 0x76c5464e, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_bss_omac_tlv, 0x87e62845, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_basic_tlv, 0xf5731821, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_uapsd, 0xc09d757e, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_wtbl_hdr_trans_tlv, 0x7c0531f7, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_update_hdr_trans, 0x8f162e97, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_wtbl_update_hdr_trans, 0xad08a7b1, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_wtbl_generic_tlv, 0x05a8d8e1, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_he_tlv_v2, 0xc9b39a58, "_gpl");
SYMBOL_CRC(mt76_connac_get_phy_mode_v2, 0x64baa726, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_tlv, 0x7253d438, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_wtbl_smps_tlv, 0x2f47f7cc, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_wtbl_ht_tlv, 0x885119ff, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_cmd, 0x8612c817, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_wtbl_ba_tlv, 0xeedc90ae, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_uni_add_dev, 0xde0ae918, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_ba_tlv, 0xe4eebfb5, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_wed_update, 0x323996cb, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_ba, 0x2bf0fead, "_gpl");
SYMBOL_CRC(mt76_connac_get_phy_mode, 0xcae61a67, "_gpl");
SYMBOL_CRC(mt76_connac_get_phy_mode_ext, 0xb17933db, "_gpl");
SYMBOL_CRC(mt76_connac_get_he_phy_cap, 0xd9607800, "_gpl");
SYMBOL_CRC(mt76_connac_get_eht_phy_cap, 0x8e794aaf, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_uni_set_chctx, 0x43ccbc16, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_uni_add_bss, 0x454bb2d4, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_hw_scan, 0x1f692c29, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_cancel_hw_scan, 0x0b084c0d, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sched_scan_req, 0xad6df5c8, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sched_scan_enable, 0xe7ab9cf0, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_chip_config, 0x0217ce62, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_deep_sleep, 0x710d8387, "_gpl");
SYMBOL_CRC(mt76_connac_sta_state_dp, 0xba64d582, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_coredump_event, 0xfd4ff518, "_gpl");
SYMBOL_CRC(mt76_connac_get_ch_power, 0x826c09e1, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_rate_txpower, 0x4d8a9b70, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_update_arp_filter, 0x0d92a82b, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_p2p_oppps, 0x65b882d6, "_gpl");
SYMBOL_CRC(mt76_connac_wowlan_support, 0x908ca40c, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_update_gtk_rekey, 0x2a154440, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_gtk_rekey, 0x2fd63435, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_suspend_mode, 0x2173ef72, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_wow_ctrl, 0x5c95a14d, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_hif_suspend, 0x671c209b, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_suspend_iter, 0xeea4feec, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_reg_rr, 0xb05d8b3a, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_reg_wr, 0x9f49a738, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_add_key, 0x6eba5e80, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_bss_ext_tlv, 0x6fa82148, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_bss_basic_tlv, 0xa4403f75, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_pm, 0x6522065e, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_restart, 0x39379585, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_del_wtbl_all, 0x1f963e48, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_rdd_cmd, 0x51e43cf7, "_gpl");
SYMBOL_CRC(mt76_connac2_load_ram, 0x439eb4de, "_gpl");
SYMBOL_CRC(mt76_connac2_load_patch, 0x7c2353c9, "_gpl");
SYMBOL_CRC(mt76_connac2_mcu_fill_message, 0xe31d3807, "_gpl");
SYMBOL_CRC(mt76_connac_gen_ppe_thresh, 0x0a25337f, "_gpl");
SYMBOL_CRC(mt76_connac_pm_wake, 0xd93c9c73, "_gpl");
SYMBOL_CRC(mt76_connac_power_save_sched, 0x45168a4e, "_gpl");
SYMBOL_CRC(mt76_connac_free_pending_tx_skbs, 0xae57145c, "_gpl");
SYMBOL_CRC(mt76_connac_pm_queue_skb, 0xbcde9105, "_gpl");
SYMBOL_CRC(mt76_connac_pm_dequeue_skbs, 0x7701b9e5, "_gpl");
SYMBOL_CRC(mt76_connac_tx_complete_skb, 0x95de45aa, "_gpl");
SYMBOL_CRC(mt76_connac_write_hw_txp, 0xeca02305, "_gpl");
SYMBOL_CRC(mt76_connac_txp_skb_unmap, 0xa6724bf6, "_gpl");
SYMBOL_CRC(mt76_connac_init_tx_queues, 0xb8315b75, "_gpl");
SYMBOL_CRC(mt76_connac2_mac_tx_rate_val, 0xfbd24d47, "_gpl");
SYMBOL_CRC(mt76_connac2_mac_write_txwi, 0xc1c91e56, "_gpl");
SYMBOL_CRC(mt76_connac2_mac_fill_txs, 0x3a043787, "_gpl");
SYMBOL_CRC(mt76_connac2_mac_add_txs_skb, 0x0cb69620, "_gpl");
SYMBOL_CRC(mt76_connac2_mac_decode_he_radiotap, 0x4e2b07cc, "_gpl");
SYMBOL_CRC(mt76_connac2_reverse_frag0_hdr_trans, 0x6c5835f9, "_gpl");
SYMBOL_CRC(mt76_connac2_mac_fill_rx_rate, 0x21d284dd, "_gpl");
SYMBOL_CRC(mt76_connac2_tx_check_aggr, 0xe2eac78d, "_gpl");
SYMBOL_CRC(mt76_connac2_txwi_free, 0xa78cda20, "_gpl");
SYMBOL_CRC(mt76_connac2_tx_token_put, 0x6abcd540, "_gpl");
SYMBOL_CRC(mt76_connac3_mac_decode_he_radiotap, 0x552c67c9, "_gpl");
SYMBOL_CRC(mt76_connac3_mac_decode_eht_radiotap, 0xbf6f6e46, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x80711def, "mt76_tx_status_unlock" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x62c7eaae, "mt76_tx_status_skb_get" },
	{ 0xdd034165, "mt76_tx_status_lock" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xbd232569, "dma_unmap_page_attrs" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x5b721b4, "mt76_get_rate" },
	{ 0xaf9e534c, "ieee80211_start_tx_ba_session" },
	{ 0x4829a47e, "memcpy" },
	{ 0xfb1f865e, "ieee80211_beacon_loss" },
	{ 0xe093d9fc, "__mt76_tx_complete_skb" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x501ee2bd, "ieee80211_get_hdrlen_from_skb" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x69509299, "ieee80211_find_sta" },
	{ 0x7d91801c, "mt76_calculate_default_rate" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xa1ba9225, "mt76_tx" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x40d54980, "mt76_init_queue" },
	{ 0xb6574433, "mt76_tx_status_skb_done" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2a10607e, "devm_kfree" },
	{ 0x669c413b, "_dev_err" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x1e3a4a79, "mt76_mcu_skb_send_and_get_msg" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x33b58322, "skb_push" },
	{ 0xabb61447, "ieee80211_wake_queues" },
	{ 0xab1a00a2, "mt76_mcu_send_and_get_msg" },
	{ 0x9faf7c7e, "ieee80211_iter_keys_rcu" },
	{ 0xa7817566, "__mt76_mcu_msg_alloc" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xdcb764ad, "memset" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0x6ce9f0e8, "__mt76_mcu_send_firmware" },
	{ 0x27b8aeb2, "ieee80211_stop_queues" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6fa74b97, "mt76_get_rate_power_limits" },
	{ 0xe027e031, "ieee80211_scan_completed" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x682d24a7, "mt76_get_sar_power" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x5808f0c9, "mt76_put_txwi" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x1879fcbd, "bridge_tunnel_header" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mt76,mac80211,cfg80211");


MODULE_INFO(srcversion, "A2B3AE191F1A78B7651387E");
