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

KSYMTAB_DATA(rtw_disable_lps_deep_mode, "", "");
KSYMTAB_DATA(rtw_debug_mask, "", "");
KSYMTAB_FUNC(rtw_dump_fw, "", "");
KSYMTAB_FUNC(rtw_dump_reg, "", "");
KSYMTAB_FUNC(rtw_set_rx_freq_band, "", "");
KSYMTAB_FUNC(rtw_chip_info_setup, "", "");
KSYMTAB_FUNC(rtw_core_init, "", "");
KSYMTAB_FUNC(rtw_core_deinit, "", "");
KSYMTAB_FUNC(rtw_register_hw, "", "");
KSYMTAB_FUNC(rtw_unregister_hw, "", "");
KSYMTAB_DATA(rtw_ops, "", "");
KSYMTAB_FUNC(check_hw_ready, "", "");
KSYMTAB_FUNC(rtw_restore_reg, "", "");
KSYMTAB_FUNC(rtw_tx_fill_tx_desc, "", "");
KSYMTAB_FUNC(rtw_tx_report_enqueue, "", "");
KSYMTAB_FUNC(rtw_tx_write_data_rsvd_page_get, "", "");
KSYMTAB_FUNC(rtw_tx_write_data_h2c_get, "", "");
KSYMTAB_FUNC(rtw_tx_ac_to_hwq, "", "");
KSYMTAB_FUNC(rtw_tx_queue_mapping, "", "");
KSYMTAB_FUNC(rtw_rx_stats, "", "");
KSYMTAB_FUNC(rtw_update_rx_freq_from_ie, "", "");
KSYMTAB_FUNC(rtw_rx_fill_rx_status, "", "");
KSYMTAB_FUNC(rtw_set_channel_mac, "", "");
KSYMTAB_FUNC(rtw_write_firmware_page, "", "");
KSYMTAB_DATA(rtw_rate_section, "", "");
KSYMTAB_DATA(rtw_rate_size, "", "");
KSYMTAB_FUNC(rtw_phy_set_edcca_th, "", "");
KSYMTAB_FUNC(rtw_phy_init, "", "");
KSYMTAB_FUNC(rtw_phy_parsing_cfo, "", "");
KSYMTAB_FUNC(rtw_phy_rf_power_2_rssi, "", "");
KSYMTAB_FUNC(rtw_phy_read_rf, "", "");
KSYMTAB_FUNC(rtw_phy_read_rf_sipi, "", "");
KSYMTAB_FUNC(rtw_phy_write_rf_reg_sipi, "", "");
KSYMTAB_FUNC(rtw_phy_write_rf_reg_mix, "", "");
KSYMTAB_FUNC(rtw_parse_tbl_phy_cond, "", "");
KSYMTAB_FUNC(rtw_parse_tbl_bb_pg, "", "");
KSYMTAB_FUNC(rtw_parse_tbl_txpwr_lmt, "", "");
KSYMTAB_FUNC(rtw_phy_cfg_mac, "", "");
KSYMTAB_FUNC(rtw_phy_cfg_agc, "", "");
KSYMTAB_FUNC(rtw_phy_cfg_bb, "", "");
KSYMTAB_FUNC(rtw_phy_cfg_rf, "", "");
KSYMTAB_FUNC(rtw_phy_load_tables, "", "");
KSYMTAB_FUNC(rtw_phy_get_tx_power_index, "", "");
KSYMTAB_FUNC(rtw_phy_set_tx_power_level, "", "");
KSYMTAB_FUNC(rtw_phy_config_swing_table, "", "");
KSYMTAB_FUNC(rtw_phy_pwrtrack_avg, "", "");
KSYMTAB_FUNC(rtw_phy_pwrtrack_thermal_changed, "", "");
KSYMTAB_FUNC(rtw_phy_pwrtrack_get_delta, "", "");
KSYMTAB_FUNC(rtw_phy_pwrtrack_get_pwridx, "", "");
KSYMTAB_FUNC(rtw_phy_pwrtrack_need_lck, "", "");
KSYMTAB_FUNC(rtw_phy_pwrtrack_need_iqk, "", "");
KSYMTAB_FUNC(rtw_coex_write_scbd, "", "");
KSYMTAB_FUNC(rtw_coex_read_indirect_reg, "", "");
KSYMTAB_FUNC(rtw_coex_write_indirect_reg, "", "");
KSYMTAB_FUNC(rtw_read8_physical_efuse, "", "");
KSYMTAB_FUNC(rtw_fw_c2h_cmd_rx_irqsafe, "", "");
KSYMTAB_FUNC(rtw_fw_c2h_cmd_isr, "", "");
KSYMTAB_FUNC(rtw_fw_do_iqk, "", "");
KSYMTAB_FUNC(rtw_fw_inform_rfk_status, "", "");
KSYMTAB_FUNC(rtw_power_mode_change, "", "");
KSYMTAB_FUNC(rtw_bf_enable_bfee_su, "", "");
KSYMTAB_FUNC(rtw_bf_enable_bfee_mu, "", "");
KSYMTAB_FUNC(rtw_bf_remove_bfee_su, "", "");
KSYMTAB_FUNC(rtw_bf_remove_bfee_mu, "", "");
KSYMTAB_FUNC(rtw_bf_set_gid_table, "", "");
KSYMTAB_FUNC(rtw_bf_phy_init, "", "");
KSYMTAB_FUNC(rtw_bf_cfg_csi_rate, "", "");
KSYMTAB_FUNC(rtw_regd_get, "", "");
KSYMTAB_FUNC(rtw_regd_srrc, "", "");

SYMBOL_CRC(rtw_disable_lps_deep_mode, 0x36c5bfca, "");
SYMBOL_CRC(rtw_debug_mask, 0x33b3f3c0, "");
SYMBOL_CRC(rtw_dump_fw, 0xca625403, "");
SYMBOL_CRC(rtw_dump_reg, 0x390b2a7e, "");
SYMBOL_CRC(rtw_set_rx_freq_band, 0x26182c49, "");
SYMBOL_CRC(rtw_chip_info_setup, 0xee2afcb0, "");
SYMBOL_CRC(rtw_core_init, 0x2929676c, "");
SYMBOL_CRC(rtw_core_deinit, 0x5d6ba6e3, "");
SYMBOL_CRC(rtw_register_hw, 0xb641717d, "");
SYMBOL_CRC(rtw_unregister_hw, 0x6d683dbc, "");
SYMBOL_CRC(rtw_ops, 0x5deb5694, "");
SYMBOL_CRC(check_hw_ready, 0x3afd40da, "");
SYMBOL_CRC(rtw_restore_reg, 0x944a76a1, "");
SYMBOL_CRC(rtw_tx_fill_tx_desc, 0xcb1b156c, "");
SYMBOL_CRC(rtw_tx_report_enqueue, 0x232d9b7f, "");
SYMBOL_CRC(rtw_tx_write_data_rsvd_page_get, 0x163aff43, "");
SYMBOL_CRC(rtw_tx_write_data_h2c_get, 0x535a81ca, "");
SYMBOL_CRC(rtw_tx_ac_to_hwq, 0x1dc2d072, "");
SYMBOL_CRC(rtw_tx_queue_mapping, 0x27f203b3, "");
SYMBOL_CRC(rtw_rx_stats, 0x7e1bc3ad, "");
SYMBOL_CRC(rtw_update_rx_freq_from_ie, 0x166d0d51, "");
SYMBOL_CRC(rtw_rx_fill_rx_status, 0xfc1c5526, "");
SYMBOL_CRC(rtw_set_channel_mac, 0xb171bd00, "");
SYMBOL_CRC(rtw_write_firmware_page, 0x5e5ef8d3, "");
SYMBOL_CRC(rtw_rate_section, 0x58210e60, "");
SYMBOL_CRC(rtw_rate_size, 0x519c8ba9, "");
SYMBOL_CRC(rtw_phy_set_edcca_th, 0xfdab54b6, "");
SYMBOL_CRC(rtw_phy_init, 0xbd71b283, "");
SYMBOL_CRC(rtw_phy_parsing_cfo, 0x00acc9db, "");
SYMBOL_CRC(rtw_phy_rf_power_2_rssi, 0x440b7589, "");
SYMBOL_CRC(rtw_phy_read_rf, 0xf485f978, "");
SYMBOL_CRC(rtw_phy_read_rf_sipi, 0x1b59fe1e, "");
SYMBOL_CRC(rtw_phy_write_rf_reg_sipi, 0x69fc617b, "");
SYMBOL_CRC(rtw_phy_write_rf_reg_mix, 0x64fb3ec7, "");
SYMBOL_CRC(rtw_parse_tbl_phy_cond, 0x3c89c466, "");
SYMBOL_CRC(rtw_parse_tbl_bb_pg, 0x88a73743, "");
SYMBOL_CRC(rtw_parse_tbl_txpwr_lmt, 0x47c6b033, "");
SYMBOL_CRC(rtw_phy_cfg_mac, 0x1979e856, "");
SYMBOL_CRC(rtw_phy_cfg_agc, 0xa66ac6c6, "");
SYMBOL_CRC(rtw_phy_cfg_bb, 0xe91f9113, "");
SYMBOL_CRC(rtw_phy_cfg_rf, 0x0a7892f9, "");
SYMBOL_CRC(rtw_phy_load_tables, 0x80351814, "");
SYMBOL_CRC(rtw_phy_get_tx_power_index, 0x0f6f6e65, "");
SYMBOL_CRC(rtw_phy_set_tx_power_level, 0x40c13330, "");
SYMBOL_CRC(rtw_phy_config_swing_table, 0xaf46e406, "");
SYMBOL_CRC(rtw_phy_pwrtrack_avg, 0x083783cf, "");
SYMBOL_CRC(rtw_phy_pwrtrack_thermal_changed, 0x16fb4e1d, "");
SYMBOL_CRC(rtw_phy_pwrtrack_get_delta, 0x944ae17b, "");
SYMBOL_CRC(rtw_phy_pwrtrack_get_pwridx, 0x41de0330, "");
SYMBOL_CRC(rtw_phy_pwrtrack_need_lck, 0x43f3cb5a, "");
SYMBOL_CRC(rtw_phy_pwrtrack_need_iqk, 0xee74ce20, "");
SYMBOL_CRC(rtw_coex_write_scbd, 0x0f6a6a12, "");
SYMBOL_CRC(rtw_coex_read_indirect_reg, 0xbc62b6ac, "");
SYMBOL_CRC(rtw_coex_write_indirect_reg, 0xa667ddf0, "");
SYMBOL_CRC(rtw_read8_physical_efuse, 0xf9e3596c, "");
SYMBOL_CRC(rtw_fw_c2h_cmd_rx_irqsafe, 0xb8688652, "");
SYMBOL_CRC(rtw_fw_c2h_cmd_isr, 0xb6a3874b, "");
SYMBOL_CRC(rtw_fw_do_iqk, 0x2e94dc29, "");
SYMBOL_CRC(rtw_fw_inform_rfk_status, 0xcbb432e6, "");
SYMBOL_CRC(rtw_power_mode_change, 0x19b55010, "");
SYMBOL_CRC(rtw_bf_enable_bfee_su, 0xbdce8285, "");
SYMBOL_CRC(rtw_bf_enable_bfee_mu, 0xc49804bf, "");
SYMBOL_CRC(rtw_bf_remove_bfee_su, 0xf1f8a113, "");
SYMBOL_CRC(rtw_bf_remove_bfee_mu, 0xb92f2953, "");
SYMBOL_CRC(rtw_bf_set_gid_table, 0xf88afade, "");
SYMBOL_CRC(rtw_bf_phy_init, 0x4e00d9a5, "");
SYMBOL_CRC(rtw_bf_cfg_csi_rate, 0x911a4ea0, "");
SYMBOL_CRC(rtw_regd_get, 0x5baafe08, "");
SYMBOL_CRC(rtw_regd_srrc, 0xad550356, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xad68421f, "ieee80211_connection_loss" },
	{ 0x4365e3a8, "ieee80211_report_wowlan_wakeup" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xdca0f8b3, "ieee80211_txq_get_depth" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x53734755, "ieee80211_probereq_get" },
	{ 0xf557ba8f, "ieee80211_iterate_stations_atomic" },
	{ 0xaf9e534c, "ieee80211_start_tx_ba_session" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa6636aff, "regulatory_hint" },
	{ 0x37a0cba, "kfree" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x163d6686, "ieee80211_nullfunc_get" },
	{ 0xb9bd9ac2, "ieee80211_pspoll_get" },
	{ 0x4ff913b5, "ieee80211_register_hw" },
	{ 0xe83c2d4, "ieee80211_emulate_change_chanctx" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x14ceba88, "ieee80211_restart_hw" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0x3c744e95, "cfg80211_calculate_bitrate" },
	{ 0x69509299, "ieee80211_find_sta" },
	{ 0xf2ec32dd, "ieee80211_iter_keys" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1499afed, "ieee80211_tx_status_irqsafe" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0xaeb98a5e, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xa724da05, "wiphy_to_ieee80211_hw" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6ca3449c, "ieee80211_queue_delayed_work" },
	{ 0x5273a0d5, "ieee80211_proberesp_get" },
	{ 0x669c413b, "_dev_err" },
	{ 0x8bbcc68f, "request_firmware_nowait" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa70378e3, "ieee80211_find_sta_by_ifaddr" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0xabb61447, "ieee80211_wake_queues" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9faf7c7e, "ieee80211_iter_keys_rcu" },
	{ 0xb58c18e8, "ieee80211_free_txskb" },
	{ 0xf4da4505, "dev_coredumpv" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa4df42a0, "ieee80211_tx_dequeue" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x38590bd4, "ieee80211_emulate_add_chanctx" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xb77e1ef3, "ieee80211_emulate_switch_vif_chanctx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x27b8aeb2, "ieee80211_stop_queues" },
	{ 0x43f25734, "skb_unlink" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3aca71a1, "cfg80211_get_ies_channel_number" },
	{ 0x999e8297, "vfree" },
	{ 0xe027e031, "ieee80211_scan_completed" },
	{ 0x2bf50a51, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x24c4b1f8, "ieee80211_unregister_hw" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x20f09351, "ieee80211_beacon_get_tim" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xac85f68f, "skb_copy" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x686a6862, "ieee80211_cqm_rssi_notify" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xb536b184, "ieee80211_request_smps" },
	{ 0x4559e78f, "ieee80211_queue_work" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0xe3bafe79, "ieee80211_emulate_remove_chanctx" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "7F2A3ED3A9D46A058344081");
