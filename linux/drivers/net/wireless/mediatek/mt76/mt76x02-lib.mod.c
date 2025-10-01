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

KSYMTAB_DATA(mt76x02_rates, "_gpl", "");
KSYMTAB_FUNC(mt76x02_init_device, "_gpl", "");
KSYMTAB_FUNC(mt76x02_configure_filter, "_gpl", "");
KSYMTAB_FUNC(mt76x02_sta_add, "_gpl", "");
KSYMTAB_FUNC(mt76x02_sta_remove, "_gpl", "");
KSYMTAB_FUNC(mt76x02_add_interface, "_gpl", "");
KSYMTAB_FUNC(mt76x02_remove_interface, "_gpl", "");
KSYMTAB_FUNC(mt76x02_ampdu_action, "_gpl", "");
KSYMTAB_FUNC(mt76x02_set_key, "_gpl", "");
KSYMTAB_FUNC(mt76x02_conf_tx, "_gpl", "");
KSYMTAB_FUNC(mt76x02_set_tx_ackto, "_gpl", "");
KSYMTAB_FUNC(mt76x02_set_coverage_class, "_gpl", "");
KSYMTAB_FUNC(mt76x02_set_rts_threshold, "_gpl", "");
KSYMTAB_FUNC(mt76x02_sta_rate_tbl_update, "_gpl", "");
KSYMTAB_FUNC(mt76x02_remove_hdr_pad, "_gpl", "");
KSYMTAB_FUNC(mt76x02_sw_scan_complete, "_gpl", "");
KSYMTAB_FUNC(mt76x02_sta_ps, "_gpl", "");
KSYMTAB_FUNC(mt76x02_bss_info_changed, "_gpl", "");
KSYMTAB_FUNC(mt76x02_config_mac_addr_list, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mac_reset_counters, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mac_shared_key_setup, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mac_wcid_setup, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mac_write_txwi, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mac_setaddr, "_gpl", "");
KSYMTAB_FUNC(mt76x02_tx_complete_skb, "_gpl", "");
KSYMTAB_FUNC(mt76x02_update_channel, "_gpl", "");
KSYMTAB_FUNC(mt76x02_edcca_init, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mac_cc_reset, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mcu_parse_response, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mcu_msg_send, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mcu_function_select, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mcu_set_radio_state, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mcu_calibrate, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mcu_cleanup, "_gpl", "");
KSYMTAB_FUNC(mt76x02_set_ethtool_fwver, "_gpl", "");
KSYMTAB_FUNC(mt76x02_eeprom_copy, "_gpl", "");
KSYMTAB_FUNC(mt76x02_get_efuse_data, "_gpl", "");
KSYMTAB_FUNC(mt76x02_eeprom_parse_hw_cap, "_gpl", "");
KSYMTAB_FUNC(mt76x02_ext_pa_enabled, "_gpl", "");
KSYMTAB_FUNC(mt76x02_get_rx_gain, "_gpl", "");
KSYMTAB_FUNC(mt76x02_get_lna_gain, "_gpl", "");
KSYMTAB_FUNC(mt76x02_phy_set_rxpath, "_gpl", "");
KSYMTAB_FUNC(mt76x02_phy_set_txdac, "_gpl", "");
KSYMTAB_FUNC(mt76x02_get_max_rate_power, "_gpl", "");
KSYMTAB_FUNC(mt76x02_limit_rate_power, "_gpl", "");
KSYMTAB_FUNC(mt76x02_add_rate_power_offset, "_gpl", "");
KSYMTAB_FUNC(mt76x02_phy_set_txpower, "_gpl", "");
KSYMTAB_FUNC(mt76x02_phy_set_bw, "_gpl", "");
KSYMTAB_FUNC(mt76x02_phy_set_band, "_gpl", "");
KSYMTAB_FUNC(mt76x02_phy_adjust_vga_gain, "_gpl", "");
KSYMTAB_FUNC(mt76x02_init_agc_gain, "_gpl", "");
KSYMTAB_FUNC(mt76x02e_init_beacon_config, "_gpl", "");
KSYMTAB_FUNC(mt76x02_dma_init, "_gpl", "");
KSYMTAB_FUNC(mt76x02_rx_poll_complete, "_gpl", "");
KSYMTAB_FUNC(mt76x02_irq_handler, "_gpl", "");
KSYMTAB_FUNC(mt76x02_dma_disable, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mac_start, "_gpl", "");
KSYMTAB_FUNC(mt76x02_reconfig_complete, "_gpl", "");
KSYMTAB_FUNC(mt76x02_tx, "_gpl", "");
KSYMTAB_FUNC(mt76x02_queue_rx_skb, "_gpl", "");
KSYMTAB_FUNC(mt76x02_tx_set_txpwr_auto, "_gpl", "");
KSYMTAB_FUNC(mt76x02_tx_status_data, "_gpl", "");
KSYMTAB_FUNC(mt76x02_tx_prepare_skb, "_gpl", "");
KSYMTAB_FUNC(mt76x02_init_debugfs, "_gpl", "");
KSYMTAB_FUNC(mt76x02_phy_dfs_adjust_agc, "_gpl", "");
KSYMTAB_FUNC(mt76x02_dfs_init_params, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mac_set_beacon, "_gpl", "");
KSYMTAB_FUNC(mt76x02_resync_beacon_timer, "_gpl", "");
KSYMTAB_FUNC(mt76x02_update_beacon_iter, "_gpl", "");
KSYMTAB_FUNC(mt76x02_enqueue_buffered_bc, "_gpl", "");
KSYMTAB_FUNC(mt76x02_init_beacon_config, "_gpl", "");

SYMBOL_CRC(mt76x02_rates, 0x5bd84fd5, "_gpl");
SYMBOL_CRC(mt76x02_init_device, 0xa637aa71, "_gpl");
SYMBOL_CRC(mt76x02_configure_filter, 0xdf4eb922, "_gpl");
SYMBOL_CRC(mt76x02_sta_add, 0xc7c8fa9e, "_gpl");
SYMBOL_CRC(mt76x02_sta_remove, 0x11d39e34, "_gpl");
SYMBOL_CRC(mt76x02_add_interface, 0xaa427a85, "_gpl");
SYMBOL_CRC(mt76x02_remove_interface, 0xedddf6e6, "_gpl");
SYMBOL_CRC(mt76x02_ampdu_action, 0x0026532f, "_gpl");
SYMBOL_CRC(mt76x02_set_key, 0xe005f806, "_gpl");
SYMBOL_CRC(mt76x02_conf_tx, 0xe2abda58, "_gpl");
SYMBOL_CRC(mt76x02_set_tx_ackto, 0x7e69ebdc, "_gpl");
SYMBOL_CRC(mt76x02_set_coverage_class, 0x4e811df9, "_gpl");
SYMBOL_CRC(mt76x02_set_rts_threshold, 0x0ec99583, "_gpl");
SYMBOL_CRC(mt76x02_sta_rate_tbl_update, 0x8a1f7d36, "_gpl");
SYMBOL_CRC(mt76x02_remove_hdr_pad, 0x655e1736, "_gpl");
SYMBOL_CRC(mt76x02_sw_scan_complete, 0xd474f2a8, "_gpl");
SYMBOL_CRC(mt76x02_sta_ps, 0x061f1c9e, "_gpl");
SYMBOL_CRC(mt76x02_bss_info_changed, 0x1a1aae2a, "_gpl");
SYMBOL_CRC(mt76x02_config_mac_addr_list, 0xaf8fc79c, "_gpl");
SYMBOL_CRC(mt76x02_mac_reset_counters, 0xf8df0248, "_gpl");
SYMBOL_CRC(mt76x02_mac_shared_key_setup, 0x420200c6, "_gpl");
SYMBOL_CRC(mt76x02_mac_wcid_setup, 0xc3135740, "_gpl");
SYMBOL_CRC(mt76x02_mac_write_txwi, 0x18540475, "_gpl");
SYMBOL_CRC(mt76x02_mac_setaddr, 0x9be4e640, "_gpl");
SYMBOL_CRC(mt76x02_tx_complete_skb, 0x82580a0a, "_gpl");
SYMBOL_CRC(mt76x02_update_channel, 0x0ca439be, "_gpl");
SYMBOL_CRC(mt76x02_edcca_init, 0xfc9f3d76, "_gpl");
SYMBOL_CRC(mt76x02_mac_cc_reset, 0x18adfa01, "_gpl");
SYMBOL_CRC(mt76x02_mcu_parse_response, 0xde72dc78, "_gpl");
SYMBOL_CRC(mt76x02_mcu_msg_send, 0x9dcc7d51, "_gpl");
SYMBOL_CRC(mt76x02_mcu_function_select, 0x9c6043c4, "_gpl");
SYMBOL_CRC(mt76x02_mcu_set_radio_state, 0x863be6b4, "_gpl");
SYMBOL_CRC(mt76x02_mcu_calibrate, 0x991c75dc, "_gpl");
SYMBOL_CRC(mt76x02_mcu_cleanup, 0xa5e5736a, "_gpl");
SYMBOL_CRC(mt76x02_set_ethtool_fwver, 0x88ee7fda, "_gpl");
SYMBOL_CRC(mt76x02_eeprom_copy, 0xe9fd1202, "_gpl");
SYMBOL_CRC(mt76x02_get_efuse_data, 0x53634030, "_gpl");
SYMBOL_CRC(mt76x02_eeprom_parse_hw_cap, 0x93c7aad7, "_gpl");
SYMBOL_CRC(mt76x02_ext_pa_enabled, 0xbc34dce2, "_gpl");
SYMBOL_CRC(mt76x02_get_rx_gain, 0x55761422, "_gpl");
SYMBOL_CRC(mt76x02_get_lna_gain, 0x28a84ba5, "_gpl");
SYMBOL_CRC(mt76x02_phy_set_rxpath, 0x74c5cbcd, "_gpl");
SYMBOL_CRC(mt76x02_phy_set_txdac, 0x56a36ff1, "_gpl");
SYMBOL_CRC(mt76x02_get_max_rate_power, 0xad5d3ba8, "_gpl");
SYMBOL_CRC(mt76x02_limit_rate_power, 0x93c479bc, "_gpl");
SYMBOL_CRC(mt76x02_add_rate_power_offset, 0x75fef85d, "_gpl");
SYMBOL_CRC(mt76x02_phy_set_txpower, 0x6540df7c, "_gpl");
SYMBOL_CRC(mt76x02_phy_set_bw, 0xf9b49641, "_gpl");
SYMBOL_CRC(mt76x02_phy_set_band, 0x778edb41, "_gpl");
SYMBOL_CRC(mt76x02_phy_adjust_vga_gain, 0xe1b0d9db, "_gpl");
SYMBOL_CRC(mt76x02_init_agc_gain, 0xde6d9e4c, "_gpl");
SYMBOL_CRC(mt76x02e_init_beacon_config, 0xb449ce76, "_gpl");
SYMBOL_CRC(mt76x02_dma_init, 0x0fec2bc8, "_gpl");
SYMBOL_CRC(mt76x02_rx_poll_complete, 0x29ec0132, "_gpl");
SYMBOL_CRC(mt76x02_irq_handler, 0x91d5b9ee, "_gpl");
SYMBOL_CRC(mt76x02_dma_disable, 0xd4313e01, "_gpl");
SYMBOL_CRC(mt76x02_mac_start, 0xf3f0f0eb, "_gpl");
SYMBOL_CRC(mt76x02_reconfig_complete, 0xe9e9cebe, "_gpl");
SYMBOL_CRC(mt76x02_tx, 0x766d7285, "_gpl");
SYMBOL_CRC(mt76x02_queue_rx_skb, 0xf0e0d64f, "_gpl");
SYMBOL_CRC(mt76x02_tx_set_txpwr_auto, 0x971c6469, "_gpl");
SYMBOL_CRC(mt76x02_tx_status_data, 0x68108d3a, "_gpl");
SYMBOL_CRC(mt76x02_tx_prepare_skb, 0xd037db43, "_gpl");
SYMBOL_CRC(mt76x02_init_debugfs, 0x93587edd, "_gpl");
SYMBOL_CRC(mt76x02_phy_dfs_adjust_agc, 0xd49bfa3c, "_gpl");
SYMBOL_CRC(mt76x02_dfs_init_params, 0x534afc4e, "_gpl");
SYMBOL_CRC(mt76x02_mac_set_beacon, 0x5e3da7fe, "_gpl");
SYMBOL_CRC(mt76x02_resync_beacon_timer, 0x5a1162bd, "_gpl");
SYMBOL_CRC(mt76x02_update_beacon_iter, 0x291a65c2, "_gpl");
SYMBOL_CRC(mt76x02_enqueue_buffered_bc, 0x4c6d848a, "_gpl");
SYMBOL_CRC(mt76x02_init_beacon_config, 0xaff0aace, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4ae8caa7, "ieee80211_sta_register_airtime" },
	{ 0xd1f5f2d5, "__traceiter_mac_txdone" },
	{ 0x898ec434, "mt76_dma_rx_poll" },
	{ 0x80711def, "mt76_tx_status_unlock" },
	{ 0x27c66375, "simple_attr_open" },
	{ 0x3c57e074, "debugfs_attr_write" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xe2835923, "netif_napi_add_weight" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x62c7eaae, "mt76_tx_status_skb_get" },
	{ 0x180cd0ba, "trace_raw_output_prep" },
	{ 0xdd034165, "mt76_tx_status_lock" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0xa50bb103, "__trace_trigger_soft_disabled" },
	{ 0xfbfd5863, "trace_event_printf" },
	{ 0x80728658, "mt76_csa_check" },
	{ 0x5495c001, "mt76_tx_status_skb_add" },
	{ 0x9d28c26e, "__tracepoint_mac_txdone" },
	{ 0xfcf25a72, "__traceiter_dev_irq" },
	{ 0xafbb1eda, "mt76_tx_check_agg_ssn" },
	{ 0x5676cb2b, "ieee80211_tx_status_ext" },
	{ 0x31d30247, "mt76_stop_tx_queues" },
	{ 0xe19fdf44, "___pskb_trim" },
	{ 0xe1bafd45, "trace_event_raw_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe093d9fc, "__mt76_tx_complete_skb" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x14ceba88, "ieee80211_restart_hw" },
	{ 0x9a38130e, "bpf_trace_run2" },
	{ 0x501ee2bd, "ieee80211_get_hdrlen_from_skb" },
	{ 0xbbc442b1, "kthread_park" },
	{ 0xcf48e2a, "mt76_mcu_rx_event" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x718c5ec7, "mt76_wcid_init" },
	{ 0x975c6780, "mt76_tx_status_check" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0xea427052, "trace_event_buffer_commit" },
	{ 0xecfea7ae, "ieee80211_get_buffered_bc" },
	{ 0x36184085, "napi_complete_done" },
	{ 0x69ddc472, "ieee80211_get_tx_rates" },
	{ 0xf6060c12, "ieee80211_send_bar" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfc28cd6b, "debugfs_create_devm_seqfile" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xa1ba9225, "mt76_tx" },
	{ 0x3adfad74, "__napi_schedule" },
	{ 0x533f34d3, "mt76_csa_finish" },
	{ 0xe40b66ef, "mt76_wcid_alloc" },
	{ 0x75850bb7, "mt76_wcid_key_setup" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xaeb98a5e, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x84588585, "mt76_rx" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xc56c18c0, "kthread_unpark" },
	{ 0x89be8374, "mt76_phy_dfs_state" },
	{ 0xa724da05, "wiphy_to_ieee80211_hw" },
	{ 0x40d54980, "mt76_init_queue" },
	{ 0xa861d6a8, "debugfs_attr_read" },
	{ 0xfe6b8e4f, "__mt76_sta_remove" },
	{ 0xb6574433, "mt76_tx_status_skb_done" },
	{ 0x6ca3449c, "ieee80211_queue_delayed_work" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x91ac9254, "perf_trace_run_bpf_submit" },
	{ 0x669c413b, "_dev_err" },
	{ 0xe8d05413, "debugfs_create_bool" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x2ef9e47d, "simple_attr_release" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x31bd7946, "napi_enable" },
	{ 0x3dfbc684, "seq_putc" },
	{ 0xfe479535, "trace_event_reg" },
	{ 0xc11ab7d3, "mt76_update_survey" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xc6634315, "mt76_ac_to_hwq" },
	{ 0xabb61447, "ieee80211_wake_queues" },
	{ 0xab1a00a2, "mt76_mcu_send_and_get_msg" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x9faf7c7e, "ieee80211_iter_keys_rcu" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0xa7817566, "__mt76_mcu_msg_alloc" },
	{ 0x2053afc1, "mt76_set_irq_mask" },
	{ 0x564c900c, "bpf_trace_run1" },
	{ 0xdcb764ad, "memset" },
	{ 0x2760adc4, "ieee80211_calc_tx_airtime" },
	{ 0x3f302749, "debugfs_create_u32" },
	{ 0x92e6094, "mt76_seq_puts_array" },
	{ 0x27b8aeb2, "ieee80211_stop_queues" },
	{ 0xbd462b55, "__kfifo_init" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb608bb75, "__tracepoint_dev_irq" },
	{ 0x661256ad, "seq_read" },
	{ 0x75a9950, "mt76_mcu_get_response" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x2f828d33, "trace_event_buffer_reserve" },
	{ 0x2bf50a51, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x58f3924e, "mt76_txq_schedule_all" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd5e99826, "mt76_rx_aggr_start" },
	{ 0xb53675e6, "seq_write" },
	{ 0xa2c08f22, "____mt76_poll_msec" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x20f09351, "ieee80211_beacon_get_tim" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x1a6e83da, "mt76_wcid_cleanup" },
	{ 0xaa131280, "ieee80211_radar_detected" },
	{ 0x10139ad8, "single_release" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xfc79af8d, "mt76_queues_read" },
	{ 0x7e756333, "mt76_register_debugfs_fops" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xf7bbf8be, "napi_schedule_prep" },
	{ 0x6dc88bac, "napi_disable" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x88ec4249, "__mt76_poll" },
	{ 0x2f7813a7, "mt76_rx_aggr_stop" },
	{ 0x571ab022, "debugfs_create_u8" },
	{ 0x71c90ddc, "single_open" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xec1ecd82, "mt76_dma_attach" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mac80211,mt76,cfg80211");


MODULE_INFO(srcversion, "9C540D395A98BDC7A36D19C");
