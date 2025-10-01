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

KSYMTAB_FUNC(rtl_tid_to_ac, "_gpl", "");
KSYMTAB_FUNC(rtl_deinit_deferred_work, "_gpl", "");
KSYMTAB_FUNC(rtl_init_rfkill, "", "");
KSYMTAB_FUNC(rtl_deinit_rfkill, "_gpl", "");
KSYMTAB_FUNC(rtl_init_core, "_gpl", "");
KSYMTAB_FUNC(rtl_deinit_core, "_gpl", "");
KSYMTAB_FUNC(rtl_init_rx_config, "_gpl", "");
KSYMTAB_FUNC(rtl_mrate_idx_to_arfr_id, "", "");
KSYMTAB_FUNC(rtlwifi_rate_mapping, "", "");
KSYMTAB_FUNC(rtl_get_tcb_desc, "", "");
KSYMTAB_FUNC(rtl_tx_mgmt_proc, "_gpl", "");
KSYMTAB_FUNC(rtl_action_proc, "_gpl", "");
KSYMTAB_FUNC(rtl_is_special_data, "_gpl", "");
KSYMTAB_FUNC(rtl_tx_ackqueue, "_gpl", "");
KSYMTAB_FUNC(rtl_set_tx_report, "_gpl", "");
KSYMTAB_FUNC(rtl_tx_report_handler, "_gpl", "");
KSYMTAB_FUNC(rtl_get_hal_edca_param, "_gpl", "");
KSYMTAB_FUNC(rtl_rx_ampdu_apply, "", "");
KSYMTAB_FUNC(rtl_beacon_statistic, "_gpl", "");
KSYMTAB_FUNC(rtl_collect_scan_list, "", "");
KSYMTAB_FUNC(rtl_c2hcmd_enqueue, "", "");
KSYMTAB_FUNC(rtl_send_smps_action, "", "");
KSYMTAB_FUNC(rtl_phy_scan_operation_backup, "", "");
KSYMTAB_FUNC(rtl_recognize_peer, "_gpl", "");
KSYMTAB_FUNC(rtl_cam_add_one_entry, "", "");
KSYMTAB_FUNC(rtl_cam_delete_one_entry, "", "");
KSYMTAB_FUNC(rtl_cam_reset_all_entry, "", "");
KSYMTAB_FUNC(rtl_cam_mark_invalid, "", "");
KSYMTAB_FUNC(rtl_cam_empty_entry, "", "");
KSYMTAB_FUNC(rtl_cam_get_free_entry, "", "");
KSYMTAB_FUNC(rtl_cam_del_entry, "", "");
KSYMTAB_DATA(channel5g, "", "");
KSYMTAB_DATA(channel5g_80m, "", "");
KSYMTAB_FUNC(rtl_addr_delay, "", "");
KSYMTAB_FUNC(rtl_rfreg_delay, "", "");
KSYMTAB_FUNC(rtl_bb_delay, "", "");
KSYMTAB_FUNC(rtl_fw_cb, "", "");
KSYMTAB_FUNC(rtl_wowlan_fw_cb, "", "");
KSYMTAB_FUNC(rtl_update_beacon_work_callback, "_gpl", "");
KSYMTAB_FUNC(rtl_hal_pwrseqcmdparsing, "", "");
KSYMTAB_FUNC(rtl_cmd_send_packet, "", "");
KSYMTAB_FUNC(rtl_init_sw_leds, "", "");
KSYMTAB_DATA(rtl_ops, "_gpl", "");
KSYMTAB_FUNC(rtl_btc_status_false, "_gpl", "");
KSYMTAB_FUNC(rtl_dm_diginit, "", "");
KSYMTAB_FUNC(_rtl_dbg_print, "_gpl", "");
KSYMTAB_FUNC(_rtl_dbg_print_data, "_gpl", "");
KSYMTAB_FUNC(rtl_debug_add_one, "_gpl", "");
KSYMTAB_FUNC(rtl_debug_remove_one, "_gpl", "");
KSYMTAB_FUNC(efuse_read_1byte, "", "");
KSYMTAB_FUNC(read_efuse_byte, "_gpl", "");
KSYMTAB_FUNC(efuse_shadow_read, "", "");
KSYMTAB_FUNC(rtl_efuse_shadow_map_update, "", "");
KSYMTAB_FUNC(efuse_one_byte_read, "", "");
KSYMTAB_FUNC(efuse_power_switch, "", "");
KSYMTAB_FUNC(rtl_get_hwinfo, "_gpl", "");
KSYMTAB_FUNC(rtl_fw_block_write, "_gpl", "");
KSYMTAB_FUNC(rtl_fw_page_write, "_gpl", "");
KSYMTAB_FUNC(rtl_fill_dummy, "_gpl", "");
KSYMTAB_FUNC(rtl_efuse_ops_init, "_gpl", "");
KSYMTAB_FUNC(rtl_ps_enable_nic, "", "");
KSYMTAB_FUNC(rtl_ps_disable_nic, "", "");
KSYMTAB_FUNC(rtl_ips_nic_on, "_gpl", "");
KSYMTAB_FUNC(rtl_swlps_beacon, "_gpl", "");
KSYMTAB_FUNC(rtl_lps_change_work_callback, "_gpl", "");
KSYMTAB_FUNC(rtl_lps_enter, "_gpl", "");
KSYMTAB_FUNC(rtl_lps_leave, "_gpl", "");
KSYMTAB_FUNC(rtl_p2p_info, "_gpl", "");
KSYMTAB_FUNC(rtl_query_rxpwrpercentage, "", "");
KSYMTAB_FUNC(rtl_evm_db_to_percentage, "", "");
KSYMTAB_FUNC(rtl_signal_scale_mapping, "", "");
KSYMTAB_FUNC(rtl_process_phyinfo, "", "");

SYMBOL_CRC(rtl_tid_to_ac, 0x97e05663, "_gpl");
SYMBOL_CRC(rtl_deinit_deferred_work, 0x5346e965, "_gpl");
SYMBOL_CRC(rtl_init_rfkill, 0x640309e7, "");
SYMBOL_CRC(rtl_deinit_rfkill, 0xd31e90d9, "_gpl");
SYMBOL_CRC(rtl_init_core, 0xfdfb26a0, "_gpl");
SYMBOL_CRC(rtl_deinit_core, 0x705c8463, "_gpl");
SYMBOL_CRC(rtl_init_rx_config, 0x3489ef13, "_gpl");
SYMBOL_CRC(rtl_mrate_idx_to_arfr_id, 0x0e900ac1, "");
SYMBOL_CRC(rtlwifi_rate_mapping, 0xf4b3386b, "");
SYMBOL_CRC(rtl_get_tcb_desc, 0x303b7e68, "");
SYMBOL_CRC(rtl_tx_mgmt_proc, 0xb0c66c82, "_gpl");
SYMBOL_CRC(rtl_action_proc, 0x2acc8adb, "_gpl");
SYMBOL_CRC(rtl_is_special_data, 0xd810685c, "_gpl");
SYMBOL_CRC(rtl_tx_ackqueue, 0x35e2062c, "_gpl");
SYMBOL_CRC(rtl_set_tx_report, 0xdd7c7431, "_gpl");
SYMBOL_CRC(rtl_tx_report_handler, 0xc103905f, "_gpl");
SYMBOL_CRC(rtl_get_hal_edca_param, 0x262296e8, "_gpl");
SYMBOL_CRC(rtl_rx_ampdu_apply, 0x349eb157, "");
SYMBOL_CRC(rtl_beacon_statistic, 0x319e5c75, "_gpl");
SYMBOL_CRC(rtl_collect_scan_list, 0xe130d538, "");
SYMBOL_CRC(rtl_c2hcmd_enqueue, 0x00ac6162, "");
SYMBOL_CRC(rtl_send_smps_action, 0x2b9f31d3, "");
SYMBOL_CRC(rtl_phy_scan_operation_backup, 0x9f593884, "");
SYMBOL_CRC(rtl_recognize_peer, 0x84830d98, "_gpl");
SYMBOL_CRC(rtl_cam_add_one_entry, 0x58c44918, "");
SYMBOL_CRC(rtl_cam_delete_one_entry, 0x0da861c4, "");
SYMBOL_CRC(rtl_cam_reset_all_entry, 0xf3a19245, "");
SYMBOL_CRC(rtl_cam_mark_invalid, 0x4de2a00d, "");
SYMBOL_CRC(rtl_cam_empty_entry, 0xa1775e72, "");
SYMBOL_CRC(rtl_cam_get_free_entry, 0x9751ea3d, "");
SYMBOL_CRC(rtl_cam_del_entry, 0x65638934, "");
SYMBOL_CRC(channel5g, 0x54824f58, "");
SYMBOL_CRC(channel5g_80m, 0x0b038e24, "");
SYMBOL_CRC(rtl_addr_delay, 0x1b945315, "");
SYMBOL_CRC(rtl_rfreg_delay, 0x4c846cbb, "");
SYMBOL_CRC(rtl_bb_delay, 0xd3b06145, "");
SYMBOL_CRC(rtl_fw_cb, 0x8ea60059, "");
SYMBOL_CRC(rtl_wowlan_fw_cb, 0xebedfe5f, "");
SYMBOL_CRC(rtl_update_beacon_work_callback, 0x6db3ba37, "_gpl");
SYMBOL_CRC(rtl_hal_pwrseqcmdparsing, 0x968a6b1d, "");
SYMBOL_CRC(rtl_cmd_send_packet, 0x24fa6687, "");
SYMBOL_CRC(rtl_init_sw_leds, 0x09fe3744, "");
SYMBOL_CRC(rtl_ops, 0x66a572fb, "_gpl");
SYMBOL_CRC(rtl_btc_status_false, 0x2921a4d4, "_gpl");
SYMBOL_CRC(rtl_dm_diginit, 0xffdc071e, "");
SYMBOL_CRC(_rtl_dbg_print, 0xafc5f548, "_gpl");
SYMBOL_CRC(_rtl_dbg_print_data, 0x27acbf49, "_gpl");
SYMBOL_CRC(rtl_debug_add_one, 0xa3ef49a4, "_gpl");
SYMBOL_CRC(rtl_debug_remove_one, 0x80afd864, "_gpl");
SYMBOL_CRC(efuse_read_1byte, 0x52faee13, "");
SYMBOL_CRC(read_efuse_byte, 0xeb4c178e, "_gpl");
SYMBOL_CRC(efuse_shadow_read, 0x5d5af00d, "");
SYMBOL_CRC(rtl_efuse_shadow_map_update, 0x2e9bcda7, "");
SYMBOL_CRC(efuse_one_byte_read, 0x7a540251, "");
SYMBOL_CRC(efuse_power_switch, 0xe690f9c7, "");
SYMBOL_CRC(rtl_get_hwinfo, 0xf4a6def3, "_gpl");
SYMBOL_CRC(rtl_fw_block_write, 0x0cca82f1, "_gpl");
SYMBOL_CRC(rtl_fw_page_write, 0xae973240, "_gpl");
SYMBOL_CRC(rtl_fill_dummy, 0x2e5382f9, "_gpl");
SYMBOL_CRC(rtl_efuse_ops_init, 0x841a00f4, "_gpl");
SYMBOL_CRC(rtl_ps_enable_nic, 0x7157371b, "");
SYMBOL_CRC(rtl_ps_disable_nic, 0x5d61593d, "");
SYMBOL_CRC(rtl_ips_nic_on, 0xdf79eab4, "_gpl");
SYMBOL_CRC(rtl_swlps_beacon, 0xa07908a2, "_gpl");
SYMBOL_CRC(rtl_lps_change_work_callback, 0x2d32cdfc, "_gpl");
SYMBOL_CRC(rtl_lps_enter, 0xa029331e, "_gpl");
SYMBOL_CRC(rtl_lps_leave, 0x59b84c67, "_gpl");
SYMBOL_CRC(rtl_p2p_info, 0xf99bf46b, "_gpl");
SYMBOL_CRC(rtl_query_rxpwrpercentage, 0x30a956d7, "");
SYMBOL_CRC(rtl_evm_db_to_percentage, 0xed7c8cf2, "");
SYMBOL_CRC(rtl_signal_scale_mapping, 0xdeeb5082, "");
SYMBOL_CRC(rtl_process_phyinfo, 0x615beb4a, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xad68421f, "ieee80211_connection_loss" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xaf9e534c, "ieee80211_start_tx_ba_session" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0xe83c2d4, "ieee80211_emulate_change_chanctx" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xad25b856, "dev_kfree_skb_irq_reason" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xf06f51ae, "ieee80211_rate_control_unregister" },
	{ 0x501ee2bd, "ieee80211_get_hdrlen_from_skb" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x69509299, "ieee80211_find_sta" },
	{ 0x22fe87e5, "ieee80211_handle_wake_tx_queue" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1499afed, "ieee80211_tx_status_irqsafe" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xfeed4c75, "cfg80211_put_bss" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0xaeb98a5e, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xa724da05, "wiphy_to_ieee80211_hw" },
	{ 0x5d809a68, "simple_open" },
	{ 0x3939f8f0, "rfkill_pause_polling" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x96bd2420, "wiphy_apply_custom_regulatory" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x3dfbc684, "seq_putc" },
	{ 0xab0256ee, "ieee80211_rate_control_register" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x38590bd4, "ieee80211_emulate_add_chanctx" },
	{ 0xb77e1ef3, "ieee80211_emulate_switch_vif_chanctx" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x43f25734, "skb_unlink" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x661256ad, "seq_read" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xda7db208, "wiphy_rfkill_set_hw_state_reason" },
	{ 0xfc4326dd, "wiphy_rfkill_start_polling" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x38d52607, "freq_reg_info" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb0e72cfd, "ieee80211_resume_disconnect" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x20f09351, "ieee80211_beacon_get_tim" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x10139ad8, "single_release" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x71c90ddc, "single_open" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe3bafe79, "ieee80211_emulate_remove_chanctx" },
	{ 0xa3efce01, "cfg80211_unlink_bss" },
	{ 0xa7999ec7, "__cfg80211_get_bss" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x25fd7ebc, "ieee80211_rx_irqsafe" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mac80211,cfg80211,rfkill");


MODULE_INFO(srcversion, "91C3A4ABC60368D7AEF5A08");
