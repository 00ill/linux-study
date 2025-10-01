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

KSYMTAB_FUNC(cfg80211_shutdown_all_interfaces, "_gpl", "");
KSYMTAB_FUNC(wiphy_new_nm, "", "");
KSYMTAB_FUNC(wiphy_register, "", "");
KSYMTAB_FUNC(wiphy_rfkill_start_polling, "", "");
KSYMTAB_FUNC(wiphy_unregister, "", "");
KSYMTAB_FUNC(wiphy_free, "", "");
KSYMTAB_FUNC(wiphy_rfkill_set_hw_state_reason, "", "");
KSYMTAB_FUNC(cfg80211_unregister_wdev, "", "");
KSYMTAB_FUNC(cfg80211_stop_iface, "", "");
KSYMTAB_FUNC(cfg80211_register_netdevice, "", "");
KSYMTAB_FUNC(wiphy_work_queue, "_gpl", "");
KSYMTAB_FUNC(wiphy_work_cancel, "_gpl", "");
KSYMTAB_FUNC(wiphy_work_flush, "_gpl", "");
KSYMTAB_FUNC(wiphy_delayed_work_timer, "", "");
KSYMTAB_FUNC(wiphy_delayed_work_queue, "_gpl", "");
KSYMTAB_FUNC(wiphy_delayed_work_cancel, "_gpl", "");
KSYMTAB_FUNC(wiphy_delayed_work_flush, "_gpl", "");
KSYMTAB_FUNC(wiphy_delayed_work_pending, "_gpl", "");
KSYMTAB_FUNC(ieee80211_radiotap_iterator_init, "", "");
KSYMTAB_FUNC(ieee80211_radiotap_iterator_next, "", "");
KSYMTAB_FUNC(ieee80211_get_response_rate, "", "");
KSYMTAB_FUNC(ieee80211_mandatory_rates, "", "");
KSYMTAB_FUNC(ieee80211_channel_to_freq_khz, "", "");
KSYMTAB_FUNC(ieee80211_s1g_channel_width, "", "");
KSYMTAB_FUNC(ieee80211_freq_khz_to_channel, "", "");
KSYMTAB_FUNC(ieee80211_get_channel_khz, "", "");
KSYMTAB_FUNC(ieee80211_hdrlen, "", "");
KSYMTAB_FUNC(ieee80211_get_hdrlen_from_skb, "", "");
KSYMTAB_FUNC(ieee80211_get_mesh_hdrlen, "", "");
KSYMTAB_FUNC(ieee80211_get_8023_tunnel_proto, "", "");
KSYMTAB_FUNC(ieee80211_strip_8023_mesh_hdr, "", "");
KSYMTAB_FUNC(ieee80211_data_to_8023_exthdr, "", "");
KSYMTAB_FUNC(ieee80211_is_valid_amsdu, "", "");
KSYMTAB_FUNC(ieee80211_amsdu_to_8023s, "", "");
KSYMTAB_FUNC(cfg80211_classify8021d, "", "");
KSYMTAB_FUNC(ieee80211_bss_get_elem, "", "");
KSYMTAB_FUNC(cfg80211_calculate_bitrate, "", "");
KSYMTAB_FUNC(cfg80211_get_p2p_attr, "", "");
KSYMTAB_FUNC(ieee80211_ie_split_ric, "", "");
KSYMTAB_FUNC(ieee80211_fragment_element, "", "");
KSYMTAB_FUNC(ieee80211_operating_class_to_band, "", "");
KSYMTAB_FUNC(ieee80211_operating_class_to_chandef, "", "");
KSYMTAB_FUNC(ieee80211_chandef_to_operating_class, "", "");
KSYMTAB_FUNC(cfg80211_iter_combinations, "", "");
KSYMTAB_FUNC(cfg80211_check_combinations, "", "");
KSYMTAB_FUNC(ieee80211_get_num_supported_channels, "", "");
KSYMTAB_FUNC(cfg80211_get_station, "", "");
KSYMTAB_FUNC(cfg80211_free_nan_func, "", "");
KSYMTAB_FUNC(cfg80211_sinfo_alloc_tid_stats, "", "");
KSYMTAB_DATA(rfc1042_header, "", "");
KSYMTAB_DATA(bridge_tunnel_header, "", "");
KSYMTAB_FUNC(cfg80211_send_layer2_update, "", "");
KSYMTAB_FUNC(ieee80211_get_vht_max_nss, "", "");
KSYMTAB_FUNC(cfg80211_iftype_allowed, "", "");
KSYMTAB_FUNC(cfg80211_get_iftype_ext_capa, "", "");
KSYMTAB_FUNC(cfg80211_radio_chandef_valid, "", "");
KSYMTAB_FUNC(get_wiphy_regdom, "", "");
KSYMTAB_FUNC(reg_query_regdb_wmm, "", "");
KSYMTAB_FUNC(freq_reg_info, "", "");
KSYMTAB_FUNC(reg_initiator_name, "", "");
KSYMTAB_FUNC(wiphy_apply_custom_regulatory, "", "");
KSYMTAB_FUNC(regulatory_hint, "", "");
KSYMTAB_FUNC(regulatory_set_wiphy_regd, "", "");
KSYMTAB_FUNC(regulatory_set_wiphy_regd_sync, "", "");
KSYMTAB_FUNC(regulatory_pre_cac_allowed, "", "");
KSYMTAB_FUNC(cfg80211_is_element_inherited, "", "");
KSYMTAB_FUNC(cfg80211_iter_rnr, "_gpl", "");
KSYMTAB_FUNC(cfg80211_scan_done, "", "");
KSYMTAB_FUNC(cfg80211_sched_scan_results, "", "");
KSYMTAB_FUNC(cfg80211_sched_scan_stopped_locked, "", "");
KSYMTAB_FUNC(cfg80211_sched_scan_stopped, "", "");
KSYMTAB_FUNC(cfg80211_bss_flush, "", "");
KSYMTAB_FUNC(cfg80211_find_elem_match, "", "");
KSYMTAB_FUNC(cfg80211_find_vendor_elem, "", "");
KSYMTAB_FUNC(__cfg80211_get_bss, "", "");
KSYMTAB_FUNC(cfg80211_get_ies_channel_number, "", "");
KSYMTAB_FUNC(cfg80211_merge_profile, "", "");
KSYMTAB_FUNC(cfg80211_defragment_element, "", "");
KSYMTAB_FUNC(cfg80211_inform_bss_data, "", "");
KSYMTAB_FUNC(cfg80211_inform_bss_frame_data, "", "");
KSYMTAB_FUNC(cfg80211_ref_bss, "", "");
KSYMTAB_FUNC(cfg80211_put_bss, "", "");
KSYMTAB_FUNC(cfg80211_unlink_bss, "", "");
KSYMTAB_FUNC(cfg80211_bss_iter, "", "");
KSYMTAB_FUNC(nl80211_send_chandef, "", "");
KSYMTAB_FUNC(cfg80211_check_station_change, "", "");
KSYMTAB_FUNC(__cfg80211_alloc_event_skb, "", "");
KSYMTAB_FUNC(__cfg80211_send_event_skb, "", "");
KSYMTAB_FUNC(cfg80211_nan_match, "", "");
KSYMTAB_FUNC(cfg80211_nan_func_terminated, "", "");
KSYMTAB_FUNC(__cfg80211_alloc_reply_skb, "", "");
KSYMTAB_FUNC(cfg80211_vendor_cmd_reply, "_gpl", "");
KSYMTAB_FUNC(cfg80211_vendor_cmd_get_sender, "_gpl", "");
KSYMTAB_FUNC(cfg80211_rx_unprot_mlme_mgmt, "", "");
KSYMTAB_FUNC(cfg80211_links_removed, "", "");
KSYMTAB_FUNC(cfg80211_notify_new_peer_candidate, "", "");
KSYMTAB_FUNC(cfg80211_assoc_comeback, "", "");
KSYMTAB_FUNC(cfg80211_ready_on_channel, "", "");
KSYMTAB_FUNC(cfg80211_remain_on_channel_expired, "", "");
KSYMTAB_FUNC(cfg80211_tx_mgmt_expired, "", "");
KSYMTAB_FUNC(cfg80211_new_sta, "", "");
KSYMTAB_FUNC(cfg80211_del_sta_sinfo, "", "");
KSYMTAB_FUNC(cfg80211_conn_failed, "", "");
KSYMTAB_FUNC(cfg80211_rx_spurious_frame, "", "");
KSYMTAB_FUNC(cfg80211_rx_unexpected_4addr_frame, "", "");
KSYMTAB_FUNC(cfg80211_control_port_tx_status, "", "");
KSYMTAB_FUNC(cfg80211_mgmt_tx_status_ext, "", "");
KSYMTAB_FUNC(cfg80211_rx_control_port, "", "");
KSYMTAB_FUNC(cfg80211_cqm_rssi_notify, "", "");
KSYMTAB_FUNC(cfg80211_cqm_txe_notify, "", "");
KSYMTAB_FUNC(cfg80211_cqm_pktloss_notify, "", "");
KSYMTAB_FUNC(cfg80211_cqm_beacon_loss_notify, "", "");
KSYMTAB_FUNC(cfg80211_gtk_rekey_notify, "", "");
KSYMTAB_FUNC(cfg80211_pmksa_candidate_notify, "", "");
KSYMTAB_FUNC(cfg80211_ch_switch_notify, "", "");
KSYMTAB_FUNC(cfg80211_ch_switch_started_notify, "", "");
KSYMTAB_FUNC(cfg80211_bss_color_notify, "", "");
KSYMTAB_FUNC(cfg80211_sta_opmode_change_notify, "", "");
KSYMTAB_FUNC(cfg80211_probe_status, "", "");
KSYMTAB_FUNC(cfg80211_report_obss_beacon_khz, "", "");
KSYMTAB_FUNC(cfg80211_report_wowlan_wakeup, "", "");
KSYMTAB_FUNC(cfg80211_tdls_oper_request, "", "");
KSYMTAB_FUNC(cfg80211_ft_event, "", "");
KSYMTAB_FUNC(cfg80211_crit_proto_stopped, "", "");
KSYMTAB_FUNC(cfg80211_external_auth_request, "", "");
KSYMTAB_FUNC(cfg80211_update_owe_info_event, "", "");
KSYMTAB_FUNC(cfg80211_schedule_channels_check, "", "");
KSYMTAB_FUNC(cfg80211_rx_assoc_resp, "", "");
KSYMTAB_FUNC(cfg80211_rx_mlme_mgmt, "", "");
KSYMTAB_FUNC(cfg80211_auth_timeout, "", "");
KSYMTAB_FUNC(cfg80211_assoc_failure, "", "");
KSYMTAB_FUNC(cfg80211_tx_mlme_mgmt, "", "");
KSYMTAB_FUNC(cfg80211_michael_mic_failure, "", "");
KSYMTAB_FUNC(cfg80211_rx_mgmt_ext, "", "");
KSYMTAB_FUNC(__cfg80211_radar_event, "", "");
KSYMTAB_FUNC(cfg80211_cac_event, "", "");
KSYMTAB_FUNC(cfg80211_background_cac_abort, "", "");
KSYMTAB_FUNC(cfg80211_ibss_joined, "", "");
KSYMTAB_FUNC(cfg80211_connect_done, "", "");
KSYMTAB_FUNC(cfg80211_roamed, "", "");
KSYMTAB_FUNC(cfg80211_port_authorized, "", "");
KSYMTAB_FUNC(cfg80211_disconnected, "", "");
KSYMTAB_FUNC(cfg80211_chandef_create, "", "");
KSYMTAB_FUNC(nl80211_chan_width_to_mhz, "", "");
KSYMTAB_FUNC(cfg80211_chandef_valid, "", "");
KSYMTAB_FUNC(cfg80211_chandef_primary, "", "");
KSYMTAB_FUNC(cfg80211_chandef_compatible, "", "");
KSYMTAB_FUNC(cfg80211_chandef_dfs_required, "", "");
KSYMTAB_FUNC(cfg80211_chandef_dfs_usable, "", "");
KSYMTAB_FUNC(cfg80211_chandef_dfs_cac_time, "", "");
KSYMTAB_FUNC(cfg80211_chandef_usable, "", "");
KSYMTAB_FUNC(cfg80211_reg_check_beaconing, "", "");
KSYMTAB_FUNC(cfg80211_any_usable_channels, "", "");
KSYMTAB_FUNC(wdev_chandef, "", "");
KSYMTAB_FUNC(cfg80211_get_drvinfo, "", "");
KSYMTAB_FUNC(cfg80211_pmsr_complete, "_gpl", "");
KSYMTAB_FUNC(cfg80211_pmsr_report, "_gpl", "");
KSYMTAB_FUNC(wiphy_read_of_freq_limits, "", "");

SYMBOL_CRC(cfg80211_shutdown_all_interfaces, 0x13812107, "_gpl");
SYMBOL_CRC(wiphy_new_nm, 0xb5c8842d, "");
SYMBOL_CRC(wiphy_register, 0x04c4130b, "");
SYMBOL_CRC(wiphy_rfkill_start_polling, 0xfc4326dd, "");
SYMBOL_CRC(wiphy_unregister, 0x2ce1c952, "");
SYMBOL_CRC(wiphy_free, 0x3b842f0a, "");
SYMBOL_CRC(wiphy_rfkill_set_hw_state_reason, 0xda7db208, "");
SYMBOL_CRC(cfg80211_unregister_wdev, 0x0ad539dc, "");
SYMBOL_CRC(cfg80211_stop_iface, 0x88a89e46, "");
SYMBOL_CRC(cfg80211_register_netdevice, 0x20482e2d, "");
SYMBOL_CRC(wiphy_work_queue, 0x6848997e, "_gpl");
SYMBOL_CRC(wiphy_work_cancel, 0x0ad22aa9, "_gpl");
SYMBOL_CRC(wiphy_work_flush, 0x686431e1, "_gpl");
SYMBOL_CRC(wiphy_delayed_work_timer, 0x85de3f6f, "");
SYMBOL_CRC(wiphy_delayed_work_queue, 0xb44dcbbe, "_gpl");
SYMBOL_CRC(wiphy_delayed_work_cancel, 0xa5df9af0, "_gpl");
SYMBOL_CRC(wiphy_delayed_work_flush, 0x0c59e6de, "_gpl");
SYMBOL_CRC(wiphy_delayed_work_pending, 0xe1b1a348, "_gpl");
SYMBOL_CRC(ieee80211_radiotap_iterator_init, 0xb3f40e25, "");
SYMBOL_CRC(ieee80211_radiotap_iterator_next, 0x57e81fc4, "");
SYMBOL_CRC(ieee80211_get_response_rate, 0x6aac3bef, "");
SYMBOL_CRC(ieee80211_mandatory_rates, 0x272d6876, "");
SYMBOL_CRC(ieee80211_channel_to_freq_khz, 0x5584448a, "");
SYMBOL_CRC(ieee80211_s1g_channel_width, 0x1bb59029, "");
SYMBOL_CRC(ieee80211_freq_khz_to_channel, 0x6bedf402, "");
SYMBOL_CRC(ieee80211_get_channel_khz, 0x5ed3bbcd, "");
SYMBOL_CRC(ieee80211_hdrlen, 0x7ef39823, "");
SYMBOL_CRC(ieee80211_get_hdrlen_from_skb, 0x501ee2bd, "");
SYMBOL_CRC(ieee80211_get_mesh_hdrlen, 0xd56d55f3, "");
SYMBOL_CRC(ieee80211_get_8023_tunnel_proto, 0x13c58e52, "");
SYMBOL_CRC(ieee80211_strip_8023_mesh_hdr, 0x7c2713ef, "");
SYMBOL_CRC(ieee80211_data_to_8023_exthdr, 0x88215079, "");
SYMBOL_CRC(ieee80211_is_valid_amsdu, 0x16f21ea3, "");
SYMBOL_CRC(ieee80211_amsdu_to_8023s, 0x4f5de0dc, "");
SYMBOL_CRC(cfg80211_classify8021d, 0x1c9b39cc, "");
SYMBOL_CRC(ieee80211_bss_get_elem, 0x5cba2be4, "");
SYMBOL_CRC(cfg80211_calculate_bitrate, 0x3c744e95, "");
SYMBOL_CRC(cfg80211_get_p2p_attr, 0xf5596d89, "");
SYMBOL_CRC(ieee80211_ie_split_ric, 0x275269b3, "");
SYMBOL_CRC(ieee80211_fragment_element, 0xb801f7b3, "");
SYMBOL_CRC(ieee80211_operating_class_to_band, 0xf40bc2f5, "");
SYMBOL_CRC(ieee80211_operating_class_to_chandef, 0x345fa8cc, "");
SYMBOL_CRC(ieee80211_chandef_to_operating_class, 0xefab0596, "");
SYMBOL_CRC(cfg80211_iter_combinations, 0x02a4ae2e, "");
SYMBOL_CRC(cfg80211_check_combinations, 0xbe68609c, "");
SYMBOL_CRC(ieee80211_get_num_supported_channels, 0xa11e9994, "");
SYMBOL_CRC(cfg80211_get_station, 0xb938b18a, "");
SYMBOL_CRC(cfg80211_free_nan_func, 0x8fa02936, "");
SYMBOL_CRC(cfg80211_sinfo_alloc_tid_stats, 0x3c86019a, "");
SYMBOL_CRC(rfc1042_header, 0x69b18f43, "");
SYMBOL_CRC(bridge_tunnel_header, 0x1879fcbd, "");
SYMBOL_CRC(cfg80211_send_layer2_update, 0x8213db90, "");
SYMBOL_CRC(ieee80211_get_vht_max_nss, 0x7c3ac925, "");
SYMBOL_CRC(cfg80211_iftype_allowed, 0x7788dbff, "");
SYMBOL_CRC(cfg80211_get_iftype_ext_capa, 0xcf7b1f5c, "");
SYMBOL_CRC(cfg80211_radio_chandef_valid, 0x53382dce, "");
SYMBOL_CRC(get_wiphy_regdom, 0xd34f7fcd, "");
SYMBOL_CRC(reg_query_regdb_wmm, 0x8f495c47, "");
SYMBOL_CRC(freq_reg_info, 0x38d52607, "");
SYMBOL_CRC(reg_initiator_name, 0xdba126c1, "");
SYMBOL_CRC(wiphy_apply_custom_regulatory, 0x96bd2420, "");
SYMBOL_CRC(regulatory_hint, 0xa6636aff, "");
SYMBOL_CRC(regulatory_set_wiphy_regd, 0x6ff0721a, "");
SYMBOL_CRC(regulatory_set_wiphy_regd_sync, 0x3b616ad2, "");
SYMBOL_CRC(regulatory_pre_cac_allowed, 0x930e5633, "");
SYMBOL_CRC(cfg80211_is_element_inherited, 0xcc1a7c48, "");
SYMBOL_CRC(cfg80211_iter_rnr, 0x646c544c, "_gpl");
SYMBOL_CRC(cfg80211_scan_done, 0x3700ec41, "");
SYMBOL_CRC(cfg80211_sched_scan_results, 0x013d6c7f, "");
SYMBOL_CRC(cfg80211_sched_scan_stopped_locked, 0xc1816a23, "");
SYMBOL_CRC(cfg80211_sched_scan_stopped, 0x2ff86150, "");
SYMBOL_CRC(cfg80211_bss_flush, 0xce4bf615, "");
SYMBOL_CRC(cfg80211_find_elem_match, 0x9d6cba30, "");
SYMBOL_CRC(cfg80211_find_vendor_elem, 0x79b82a71, "");
SYMBOL_CRC(__cfg80211_get_bss, 0xa7999ec7, "");
SYMBOL_CRC(cfg80211_get_ies_channel_number, 0x3aca71a1, "");
SYMBOL_CRC(cfg80211_merge_profile, 0x117aca91, "");
SYMBOL_CRC(cfg80211_defragment_element, 0xd6c87a05, "");
SYMBOL_CRC(cfg80211_inform_bss_data, 0x0357d9e3, "");
SYMBOL_CRC(cfg80211_inform_bss_frame_data, 0x43b6cec9, "");
SYMBOL_CRC(cfg80211_ref_bss, 0xd75b517a, "");
SYMBOL_CRC(cfg80211_put_bss, 0xfeed4c75, "");
SYMBOL_CRC(cfg80211_unlink_bss, 0xa3efce01, "");
SYMBOL_CRC(cfg80211_bss_iter, 0xca61327c, "");
SYMBOL_CRC(nl80211_send_chandef, 0xe0ebe2fc, "");
SYMBOL_CRC(cfg80211_check_station_change, 0x0f924e8e, "");
SYMBOL_CRC(__cfg80211_alloc_event_skb, 0xde488bdf, "");
SYMBOL_CRC(__cfg80211_send_event_skb, 0x7ecfdbd3, "");
SYMBOL_CRC(cfg80211_nan_match, 0x0fd1abe4, "");
SYMBOL_CRC(cfg80211_nan_func_terminated, 0x45f5b4e9, "");
SYMBOL_CRC(__cfg80211_alloc_reply_skb, 0xe2d68ff4, "");
SYMBOL_CRC(cfg80211_vendor_cmd_reply, 0x3a027638, "_gpl");
SYMBOL_CRC(cfg80211_vendor_cmd_get_sender, 0x0d24fbc6, "_gpl");
SYMBOL_CRC(cfg80211_rx_unprot_mlme_mgmt, 0xe56ea47d, "");
SYMBOL_CRC(cfg80211_links_removed, 0x64eeadfb, "");
SYMBOL_CRC(cfg80211_notify_new_peer_candidate, 0xce176353, "");
SYMBOL_CRC(cfg80211_assoc_comeback, 0xf45f64d3, "");
SYMBOL_CRC(cfg80211_ready_on_channel, 0x8aae78a0, "");
SYMBOL_CRC(cfg80211_remain_on_channel_expired, 0xab09b090, "");
SYMBOL_CRC(cfg80211_tx_mgmt_expired, 0xd94858c1, "");
SYMBOL_CRC(cfg80211_new_sta, 0x5cfe3a6a, "");
SYMBOL_CRC(cfg80211_del_sta_sinfo, 0xa9b2a19a, "");
SYMBOL_CRC(cfg80211_conn_failed, 0x24c63b71, "");
SYMBOL_CRC(cfg80211_rx_spurious_frame, 0x333e5962, "");
SYMBOL_CRC(cfg80211_rx_unexpected_4addr_frame, 0x674d9482, "");
SYMBOL_CRC(cfg80211_control_port_tx_status, 0x6087131f, "");
SYMBOL_CRC(cfg80211_mgmt_tx_status_ext, 0xae954c28, "");
SYMBOL_CRC(cfg80211_rx_control_port, 0x2ffc7524, "");
SYMBOL_CRC(cfg80211_cqm_rssi_notify, 0xd1e7f416, "");
SYMBOL_CRC(cfg80211_cqm_txe_notify, 0xf4c42d86, "");
SYMBOL_CRC(cfg80211_cqm_pktloss_notify, 0xb15481e8, "");
SYMBOL_CRC(cfg80211_cqm_beacon_loss_notify, 0xa9990494, "");
SYMBOL_CRC(cfg80211_gtk_rekey_notify, 0x15d3ed78, "");
SYMBOL_CRC(cfg80211_pmksa_candidate_notify, 0x44e94587, "");
SYMBOL_CRC(cfg80211_ch_switch_notify, 0xe9572433, "");
SYMBOL_CRC(cfg80211_ch_switch_started_notify, 0x29d78518, "");
SYMBOL_CRC(cfg80211_bss_color_notify, 0xac890fbb, "");
SYMBOL_CRC(cfg80211_sta_opmode_change_notify, 0xa0123f2f, "");
SYMBOL_CRC(cfg80211_probe_status, 0x6ee0cb96, "");
SYMBOL_CRC(cfg80211_report_obss_beacon_khz, 0x94e1e4b4, "");
SYMBOL_CRC(cfg80211_report_wowlan_wakeup, 0xe0e3dcf5, "");
SYMBOL_CRC(cfg80211_tdls_oper_request, 0x0f96381f, "");
SYMBOL_CRC(cfg80211_ft_event, 0x1fcc028f, "");
SYMBOL_CRC(cfg80211_crit_proto_stopped, 0xce8a1918, "");
SYMBOL_CRC(cfg80211_external_auth_request, 0x2252dae3, "");
SYMBOL_CRC(cfg80211_update_owe_info_event, 0xcfebb55e, "");
SYMBOL_CRC(cfg80211_schedule_channels_check, 0x927b9391, "");
SYMBOL_CRC(cfg80211_rx_assoc_resp, 0xc0632fb8, "");
SYMBOL_CRC(cfg80211_rx_mlme_mgmt, 0x1b5d57a0, "");
SYMBOL_CRC(cfg80211_auth_timeout, 0x8a58505e, "");
SYMBOL_CRC(cfg80211_assoc_failure, 0xb0fcf4c4, "");
SYMBOL_CRC(cfg80211_tx_mlme_mgmt, 0x69e15b3d, "");
SYMBOL_CRC(cfg80211_michael_mic_failure, 0x62345ccc, "");
SYMBOL_CRC(cfg80211_rx_mgmt_ext, 0xc5b357a6, "");
SYMBOL_CRC(__cfg80211_radar_event, 0x29c54136, "");
SYMBOL_CRC(cfg80211_cac_event, 0x94002200, "");
SYMBOL_CRC(cfg80211_background_cac_abort, 0x3cb66762, "");
SYMBOL_CRC(cfg80211_ibss_joined, 0xe92d9e17, "");
SYMBOL_CRC(cfg80211_connect_done, 0xd3922678, "");
SYMBOL_CRC(cfg80211_roamed, 0x9fb81438, "");
SYMBOL_CRC(cfg80211_port_authorized, 0x2d6a4ccb, "");
SYMBOL_CRC(cfg80211_disconnected, 0x749cc8b8, "");
SYMBOL_CRC(cfg80211_chandef_create, 0x23026b4b, "");
SYMBOL_CRC(nl80211_chan_width_to_mhz, 0x2c19c3c0, "");
SYMBOL_CRC(cfg80211_chandef_valid, 0x538f32f2, "");
SYMBOL_CRC(cfg80211_chandef_primary, 0x9ce5d166, "");
SYMBOL_CRC(cfg80211_chandef_compatible, 0xf7be8ee8, "");
SYMBOL_CRC(cfg80211_chandef_dfs_required, 0xf112a651, "");
SYMBOL_CRC(cfg80211_chandef_dfs_usable, 0x12644416, "");
SYMBOL_CRC(cfg80211_chandef_dfs_cac_time, 0x16cf4032, "");
SYMBOL_CRC(cfg80211_chandef_usable, 0x54da77b7, "");
SYMBOL_CRC(cfg80211_reg_check_beaconing, 0x13f62ff9, "");
SYMBOL_CRC(cfg80211_any_usable_channels, 0xe964af23, "");
SYMBOL_CRC(wdev_chandef, 0xbd0b1cf8, "");
SYMBOL_CRC(cfg80211_get_drvinfo, 0x185c4037, "");
SYMBOL_CRC(cfg80211_pmsr_complete, 0xdf5107db, "_gpl");
SYMBOL_CRC(cfg80211_pmsr_report, 0xa3cd1eb4, "_gpl");
SYMBOL_CRC(wiphy_read_of_freq_limits, 0x6172aff7, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8df82a4c, "trace_print_array_seq" },
	{ 0x19629d1d, "__sock_create" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x76bc28cd, "verify_pkcs7_signature" },
	{ 0x438717fb, "bpf_trace_run4" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0x4b401817, "iwe_stream_add_value" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x25f2b2c8, "kmemdup_array" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x92c856a3, "iwe_stream_add_event" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x3d1059ea, "__nla_validate" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x94721dcb, "nla_reserve" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x180cd0ba, "trace_raw_output_prep" },
	{ 0x48e9a84, "nla_put_64bit" },
	{ 0x143bd4d2, "bpf_trace_run6" },
	{ 0xa50bb103, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xfbfd5863, "trace_event_printf" },
	{ 0x96848186, "scnprintf" },
	{ 0xc0763484, "rfkill_blocked" },
	{ 0x16965a52, "device_initialize" },
	{ 0xfbcd121e, "genlmsg_put" },
	{ 0xe1bafd45, "trace_event_raw_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x9a38130e, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe1088e2b, "genlmsg_multicast_allns" },
	{ 0xe2964344, "__wake_up" },
	{ 0x35decc18, "unregister_netdevice_queue" },
	{ 0xffd547d8, "bpf_trace_run8" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6d569cec, "netlink_broadcast_filtered" },
	{ 0x7fcce083, "keyring_alloc" },
	{ 0x8502868b, "netdev_err" },
	{ 0x3f14f0db, "device_rename" },
	{ 0xea427052, "trace_event_buffer_commit" },
	{ 0xc4f8efb6, "eth_type_trans" },
	{ 0x1e8fac8e, "wireless_nlevent_flush" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x36dc6ece, "put_device" },
	{ 0x1bae0bab, "net_ns_type_operations" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xcb647be8, "sysfs_create_link" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xc781bd9f, "rfkill_resume_polling" },
	{ 0x85607460, "inet_csk_get_port" },
	{ 0xce33c7, "key_put" },
	{ 0x9f37e570, "kobject_uevent_env" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xf45bdd92, "__dev_get_by_index" },
	{ 0x91ac9254, "perf_trace_run_bpf_submit" },
	{ 0x669c413b, "_dev_err" },
	{ 0x1a6ab775, "init_net" },
	{ 0x8bbcc68f, "request_firmware_nowait" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7b1a51f0, "device_add" },
	{ 0x685bb4f9, "sysfs_remove_link" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xef29640e, "init_uts_ns" },
	{ 0x23e91bcc, "platform_device_unregister" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xf4889f04, "netlink_unicast" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4192b128, "dev_get_by_index" },
	{ 0x45eaee3f, "bpf_trace_run5" },
	{ 0x3958a712, "dev_close" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x83e9f61a, "wireless_send_event" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xfe479535, "trace_event_reg" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xcd279169, "nla_find" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0x7143a676, "class_unregister" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x84fc77f4, "unregister_pernet_device" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4ff61f23, "rfkill_alloc" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x11089ac7, "_ctype" },
	{ 0x564c900c, "bpf_trace_run1" },
	{ 0x73f49957, "device_del" },
	{ 0xfcd01236, "rfkill_set_hw_state_reason" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xdcb764ad, "memset" },
	{ 0x99cd0788, "param_ops_charp" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x4d24402, "iwe_stream_add_point" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x50d00458, "netif_rx" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8bd98638, "of_prop_next_u32" },
	{ 0xf2da001e, "bpf_trace_run3" },
	{ 0x44162dce, "__put_net" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf264b9a0, "get_net_ns_by_pid" },
	{ 0x78af0cdf, "debugfs_rename" },
	{ 0xdcbfa77, "platform_device_register_full" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x2f828d33, "trace_event_buffer_reserve" },
	{ 0xff282521, "rfkill_register" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x10bcb528, "x509_load_certificate_list" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xcebd4329, "sock_release" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x41e4f2cd, "genl_unregister_family" },
	{ 0xc86c3f91, "skb_add_rx_frag_netmem" },
	{ 0xea124bd1, "gcd" },
	{ 0x98cf60b3, "strlen" },
	{ 0x221829ad, "bpf_trace_run7" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0xce91aba6, "genl_register_family" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x5afea1a5, "__dev_change_net_namespace" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x5b390004, "register_pernet_device" },
	{ 0xe0899072, "get_net_ns_by_fd" },
	{ 0xa42d469b, "class_register" },
	{ 0x70526ef4, "bpf_trace_run11" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xcf015fa5, "register_netdevice" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rfkill");


MODULE_INFO(srcversion, "E58FBEFCA8F1E383E5D0E50");
