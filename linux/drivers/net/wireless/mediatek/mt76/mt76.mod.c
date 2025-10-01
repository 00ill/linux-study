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

KSYMTAB_FUNC(mt76_set_irq_mask, "_gpl", "");
KSYMTAB_FUNC(mt76_mmio_init, "_gpl", "");
KSYMTAB_FUNC(__mt76_poll, "_gpl", "");
KSYMTAB_FUNC(____mt76_poll_msec, "_gpl", "");
KSYMTAB_FUNC(mt76_wcid_alloc, "_gpl", "");
KSYMTAB_FUNC(mt76_get_min_avg_rssi, "_gpl", "");
KSYMTAB_FUNC(__mt76_worker_fn, "_gpl", "");
KSYMTAB_DATA(__tracepoint_mac_txdone, "_gpl", "");
KSYMTAB_FUNC(__traceiter_mac_txdone, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_mac_txdone, "_gpl", "");
KSYMTAB_DATA(__tracepoint_dev_irq, "_gpl", "");
KSYMTAB_FUNC(__traceiter_dev_irq, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_dev_irq, "_gpl", "");
KSYMTAB_FUNC(mt76_get_rxwi, "_gpl", "");
KSYMTAB_FUNC(mt76_put_txwi, "_gpl", "");
KSYMTAB_FUNC(mt76_put_rxwi, "_gpl", "");
KSYMTAB_FUNC(mt76_free_pending_rxwi, "_gpl", "");
KSYMTAB_FUNC(mt76_dma_rx_poll, "_gpl", "");
KSYMTAB_FUNC(mt76_dma_attach, "_gpl", "");
KSYMTAB_FUNC(mt76_dma_cleanup, "_gpl", "");
KSYMTAB_DATA(mt76_rates, "_gpl", "");
KSYMTAB_FUNC(mt76_set_stream_caps, "_gpl", "");
KSYMTAB_FUNC(mt76_alloc_phy, "_gpl", "");
KSYMTAB_FUNC(mt76_register_phy, "_gpl", "");
KSYMTAB_FUNC(mt76_unregister_phy, "_gpl", "");
KSYMTAB_FUNC(mt76_create_page_pool, "_gpl", "");
KSYMTAB_FUNC(mt76_alloc_device, "_gpl", "");
KSYMTAB_FUNC(mt76_register_device, "_gpl", "");
KSYMTAB_FUNC(mt76_unregister_device, "_gpl", "");
KSYMTAB_FUNC(mt76_free_device, "_gpl", "");
KSYMTAB_FUNC(mt76_rx, "_gpl", "");
KSYMTAB_FUNC(mt76_has_tx_pending, "_gpl", "");
KSYMTAB_FUNC(mt76_update_survey_active_time, "_gpl", "");
KSYMTAB_FUNC(mt76_update_survey, "_gpl", "");
KSYMTAB_FUNC(mt76_update_channel, "_gpl", "");
KSYMTAB_FUNC(mt76_get_survey, "_gpl", "");
KSYMTAB_FUNC(mt76_wcid_key_setup, "", "");
KSYMTAB_FUNC(mt76_rx_signal, "", "");
KSYMTAB_FUNC(mt76_rx_poll_complete, "_gpl", "");
KSYMTAB_FUNC(__mt76_sta_remove, "_gpl", "");
KSYMTAB_FUNC(mt76_sta_state, "_gpl", "");
KSYMTAB_FUNC(mt76_sta_pre_rcu_remove, "_gpl", "");
KSYMTAB_FUNC(mt76_wcid_init, "_gpl", "");
KSYMTAB_FUNC(mt76_wcid_cleanup, "_gpl", "");
KSYMTAB_FUNC(mt76_get_txpower, "_gpl", "");
KSYMTAB_FUNC(mt76_init_sar_power, "_gpl", "");
KSYMTAB_FUNC(mt76_get_sar_power, "_gpl", "");
KSYMTAB_FUNC(mt76_csa_finish, "_gpl", "");
KSYMTAB_FUNC(mt76_csa_check, "_gpl", "");
KSYMTAB_FUNC(mt76_set_tim, "_gpl", "");
KSYMTAB_FUNC(mt76_insert_ccmp_hdr, "_gpl", "");
KSYMTAB_FUNC(mt76_get_rate, "_gpl", "");
KSYMTAB_FUNC(mt76_sw_scan, "_gpl", "");
KSYMTAB_FUNC(mt76_sw_scan_complete, "_gpl", "");
KSYMTAB_FUNC(mt76_get_antenna, "_gpl", "");
KSYMTAB_FUNC(mt76_init_queue, "_gpl", "");
KSYMTAB_FUNC(mt76_calculate_default_rate, "_gpl", "");
KSYMTAB_FUNC(mt76_ethtool_worker, "_gpl", "");
KSYMTAB_FUNC(mt76_ethtool_page_pool_stats, "_gpl", "");
KSYMTAB_FUNC(mt76_phy_dfs_state, "_gpl", "");
KSYMTAB_FUNC(mt76_queues_read, "_gpl", "");
KSYMTAB_FUNC(mt76_seq_puts_array, "_gpl", "");
KSYMTAB_FUNC(mt76_register_debugfs_fops, "_gpl", "");
KSYMTAB_FUNC(mt76_get_of_data_from_mtd, "_gpl", "");
KSYMTAB_FUNC(mt76_get_of_data_from_nvmem, "_gpl", "");
KSYMTAB_FUNC(mt76_eeprom_override, "_gpl", "");
KSYMTAB_FUNC(mt76_find_power_limits_node, "_gpl", "");
KSYMTAB_FUNC(mt76_find_channel_node, "_gpl", "");
KSYMTAB_FUNC(mt76_get_rate_power_limits, "_gpl", "");
KSYMTAB_FUNC(mt76_eeprom_init, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_check_agg_ssn, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_status_lock, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_status_unlock, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_status_skb_done, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_status_skb_add, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_status_skb_get, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_status_check, "_gpl", "");
KSYMTAB_FUNC(__mt76_tx_complete_skb, "_gpl", "");
KSYMTAB_FUNC(mt76_tx, "_gpl", "");
KSYMTAB_FUNC(mt76_release_buffered_frames, "_gpl", "");
KSYMTAB_FUNC(mt76_txq_schedule, "_gpl", "");
KSYMTAB_FUNC(mt76_txq_schedule_all, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_worker_run, "_gpl", "");
KSYMTAB_FUNC(mt76_stop_tx_queues, "_gpl", "");
KSYMTAB_FUNC(mt76_wake_tx_queue, "_gpl", "");
KSYMTAB_FUNC(mt76_ac_to_hwq, "_gpl", "");
KSYMTAB_FUNC(mt76_skb_adjust_pad, "_gpl", "");
KSYMTAB_FUNC(mt76_queue_tx_complete, "_gpl", "");
KSYMTAB_FUNC(__mt76_set_tx_blocked, "_gpl", "");
KSYMTAB_FUNC(mt76_token_consume, "_gpl", "");
KSYMTAB_FUNC(mt76_rx_token_consume, "_gpl", "");
KSYMTAB_FUNC(mt76_token_release, "_gpl", "");
KSYMTAB_FUNC(mt76_rx_token_release, "_gpl", "");
KSYMTAB_FUNC(mt76_rx_aggr_start, "_gpl", "");
KSYMTAB_FUNC(mt76_rx_aggr_stop, "_gpl", "");
KSYMTAB_FUNC(__mt76_mcu_msg_alloc, "_gpl", "");
KSYMTAB_FUNC(mt76_mcu_get_response, "_gpl", "");
KSYMTAB_FUNC(mt76_mcu_rx_event, "_gpl", "");
KSYMTAB_FUNC(mt76_mcu_send_and_get_msg, "_gpl", "");
KSYMTAB_FUNC(mt76_mcu_skb_send_and_get_msg, "_gpl", "");
KSYMTAB_FUNC(__mt76_mcu_send_firmware, "_gpl", "");
KSYMTAB_FUNC(mt76_wed_release_rx_buf, "_gpl", "");
KSYMTAB_FUNC(mt76_wed_offload_disable, "_gpl", "");
KSYMTAB_FUNC(mt76_wed_reset_complete, "_gpl", "");
KSYMTAB_FUNC(mt76_wed_net_setup_tc, "_gpl", "");
KSYMTAB_FUNC(mt76_wed_dma_reset, "_gpl", "");
KSYMTAB_FUNC(mt76_pci_disable_aspm, "_gpl", "");
KSYMTAB_FUNC(mt76_pci_aspm_supported, "_gpl", "");

SYMBOL_CRC(mt76_set_irq_mask, 0x2053afc1, "_gpl");
SYMBOL_CRC(mt76_mmio_init, 0x1803d75b, "_gpl");
SYMBOL_CRC(__mt76_poll, 0x88ec4249, "_gpl");
SYMBOL_CRC(____mt76_poll_msec, 0xa2c08f22, "_gpl");
SYMBOL_CRC(mt76_wcid_alloc, 0xe40b66ef, "_gpl");
SYMBOL_CRC(mt76_get_min_avg_rssi, 0xd55598d3, "_gpl");
SYMBOL_CRC(__mt76_worker_fn, 0x1ec57b4f, "_gpl");
SYMBOL_CRC(__tracepoint_mac_txdone, 0x9d28c26e, "_gpl");
SYMBOL_CRC(__traceiter_mac_txdone, 0xd1f5f2d5, "_gpl");
SYMBOL_CRC(__SCK__tp_func_mac_txdone, 0xc6315d8e, "_gpl");
SYMBOL_CRC(__tracepoint_dev_irq, 0xb608bb75, "_gpl");
SYMBOL_CRC(__traceiter_dev_irq, 0xfcf25a72, "_gpl");
SYMBOL_CRC(__SCK__tp_func_dev_irq, 0x805fc13a, "_gpl");
SYMBOL_CRC(mt76_get_rxwi, 0x98f3370f, "_gpl");
SYMBOL_CRC(mt76_put_txwi, 0x5808f0c9, "_gpl");
SYMBOL_CRC(mt76_put_rxwi, 0x125b8feb, "_gpl");
SYMBOL_CRC(mt76_free_pending_rxwi, 0x30af2778, "_gpl");
SYMBOL_CRC(mt76_dma_rx_poll, 0x898ec434, "_gpl");
SYMBOL_CRC(mt76_dma_attach, 0xec1ecd82, "_gpl");
SYMBOL_CRC(mt76_dma_cleanup, 0x09365998, "_gpl");
SYMBOL_CRC(mt76_rates, 0x17f568e9, "_gpl");
SYMBOL_CRC(mt76_set_stream_caps, 0x6ab0bd12, "_gpl");
SYMBOL_CRC(mt76_alloc_phy, 0x471a1c5f, "_gpl");
SYMBOL_CRC(mt76_register_phy, 0xbe466d46, "_gpl");
SYMBOL_CRC(mt76_unregister_phy, 0xe6e3fc92, "_gpl");
SYMBOL_CRC(mt76_create_page_pool, 0x3aa9ebe3, "_gpl");
SYMBOL_CRC(mt76_alloc_device, 0x8ef76798, "_gpl");
SYMBOL_CRC(mt76_register_device, 0xc9309635, "_gpl");
SYMBOL_CRC(mt76_unregister_device, 0xac0e1ce5, "_gpl");
SYMBOL_CRC(mt76_free_device, 0x84da3ef4, "_gpl");
SYMBOL_CRC(mt76_rx, 0x84588585, "_gpl");
SYMBOL_CRC(mt76_has_tx_pending, 0x378805b6, "_gpl");
SYMBOL_CRC(mt76_update_survey_active_time, 0x62a6998f, "_gpl");
SYMBOL_CRC(mt76_update_survey, 0xc11ab7d3, "_gpl");
SYMBOL_CRC(mt76_update_channel, 0xdc760bb4, "_gpl");
SYMBOL_CRC(mt76_get_survey, 0x98fca8d0, "_gpl");
SYMBOL_CRC(mt76_wcid_key_setup, 0x75850bb7, "");
SYMBOL_CRC(mt76_rx_signal, 0x327a9822, "");
SYMBOL_CRC(mt76_rx_poll_complete, 0x8df43a93, "_gpl");
SYMBOL_CRC(__mt76_sta_remove, 0xfe6b8e4f, "_gpl");
SYMBOL_CRC(mt76_sta_state, 0xe43249b6, "_gpl");
SYMBOL_CRC(mt76_sta_pre_rcu_remove, 0x01e16c16, "_gpl");
SYMBOL_CRC(mt76_wcid_init, 0x718c5ec7, "_gpl");
SYMBOL_CRC(mt76_wcid_cleanup, 0x1a6e83da, "_gpl");
SYMBOL_CRC(mt76_get_txpower, 0x5cb5519f, "_gpl");
SYMBOL_CRC(mt76_init_sar_power, 0x84c8285a, "_gpl");
SYMBOL_CRC(mt76_get_sar_power, 0x682d24a7, "_gpl");
SYMBOL_CRC(mt76_csa_finish, 0x533f34d3, "_gpl");
SYMBOL_CRC(mt76_csa_check, 0x80728658, "_gpl");
SYMBOL_CRC(mt76_set_tim, 0x5c66d38e, "_gpl");
SYMBOL_CRC(mt76_insert_ccmp_hdr, 0x6181210e, "_gpl");
SYMBOL_CRC(mt76_get_rate, 0x05b721b4, "_gpl");
SYMBOL_CRC(mt76_sw_scan, 0xa1e982bc, "_gpl");
SYMBOL_CRC(mt76_sw_scan_complete, 0x1742f898, "_gpl");
SYMBOL_CRC(mt76_get_antenna, 0x433af450, "_gpl");
SYMBOL_CRC(mt76_init_queue, 0x40d54980, "_gpl");
SYMBOL_CRC(mt76_calculate_default_rate, 0x7d91801c, "_gpl");
SYMBOL_CRC(mt76_ethtool_worker, 0xab9d88b8, "_gpl");
SYMBOL_CRC(mt76_ethtool_page_pool_stats, 0x6a88f4bc, "_gpl");
SYMBOL_CRC(mt76_phy_dfs_state, 0x89be8374, "_gpl");
SYMBOL_CRC(mt76_queues_read, 0xfc79af8d, "_gpl");
SYMBOL_CRC(mt76_seq_puts_array, 0x092e6094, "_gpl");
SYMBOL_CRC(mt76_register_debugfs_fops, 0x7e756333, "_gpl");
SYMBOL_CRC(mt76_get_of_data_from_mtd, 0x40643391, "_gpl");
SYMBOL_CRC(mt76_get_of_data_from_nvmem, 0xb12bdbb9, "_gpl");
SYMBOL_CRC(mt76_eeprom_override, 0xcabae421, "_gpl");
SYMBOL_CRC(mt76_find_power_limits_node, 0xce9e59c6, "_gpl");
SYMBOL_CRC(mt76_find_channel_node, 0x4fa8c44a, "_gpl");
SYMBOL_CRC(mt76_get_rate_power_limits, 0x6fa74b97, "_gpl");
SYMBOL_CRC(mt76_eeprom_init, 0x3f8d88c7, "_gpl");
SYMBOL_CRC(mt76_tx_check_agg_ssn, 0xafbb1eda, "_gpl");
SYMBOL_CRC(mt76_tx_status_lock, 0xdd034165, "_gpl");
SYMBOL_CRC(mt76_tx_status_unlock, 0x80711def, "_gpl");
SYMBOL_CRC(mt76_tx_status_skb_done, 0xb6574433, "_gpl");
SYMBOL_CRC(mt76_tx_status_skb_add, 0x5495c001, "_gpl");
SYMBOL_CRC(mt76_tx_status_skb_get, 0x62c7eaae, "_gpl");
SYMBOL_CRC(mt76_tx_status_check, 0x975c6780, "_gpl");
SYMBOL_CRC(__mt76_tx_complete_skb, 0xe093d9fc, "_gpl");
SYMBOL_CRC(mt76_tx, 0xa1ba9225, "_gpl");
SYMBOL_CRC(mt76_release_buffered_frames, 0x286aaa08, "_gpl");
SYMBOL_CRC(mt76_txq_schedule, 0xa1510933, "_gpl");
SYMBOL_CRC(mt76_txq_schedule_all, 0x58f3924e, "_gpl");
SYMBOL_CRC(mt76_tx_worker_run, 0xe888fc60, "_gpl");
SYMBOL_CRC(mt76_stop_tx_queues, 0x31d30247, "_gpl");
SYMBOL_CRC(mt76_wake_tx_queue, 0xc4366c7d, "_gpl");
SYMBOL_CRC(mt76_ac_to_hwq, 0xc6634315, "_gpl");
SYMBOL_CRC(mt76_skb_adjust_pad, 0xc74b49a3, "_gpl");
SYMBOL_CRC(mt76_queue_tx_complete, 0xfd8da42d, "_gpl");
SYMBOL_CRC(__mt76_set_tx_blocked, 0x56cebf17, "_gpl");
SYMBOL_CRC(mt76_token_consume, 0xb389ca88, "_gpl");
SYMBOL_CRC(mt76_rx_token_consume, 0x9696a071, "_gpl");
SYMBOL_CRC(mt76_token_release, 0xea4fe3bd, "_gpl");
SYMBOL_CRC(mt76_rx_token_release, 0x472d02d2, "_gpl");
SYMBOL_CRC(mt76_rx_aggr_start, 0xd5e99826, "_gpl");
SYMBOL_CRC(mt76_rx_aggr_stop, 0x2f7813a7, "_gpl");
SYMBOL_CRC(__mt76_mcu_msg_alloc, 0xa7817566, "_gpl");
SYMBOL_CRC(mt76_mcu_get_response, 0x075a9950, "_gpl");
SYMBOL_CRC(mt76_mcu_rx_event, 0x0cf48e2a, "_gpl");
SYMBOL_CRC(mt76_mcu_send_and_get_msg, 0xab1a00a2, "_gpl");
SYMBOL_CRC(mt76_mcu_skb_send_and_get_msg, 0x1e3a4a79, "_gpl");
SYMBOL_CRC(__mt76_mcu_send_firmware, 0x6ce9f0e8, "_gpl");
SYMBOL_CRC(mt76_wed_release_rx_buf, 0x2a310631, "_gpl");
SYMBOL_CRC(mt76_wed_offload_disable, 0xda4fd8c4, "_gpl");
SYMBOL_CRC(mt76_wed_reset_complete, 0x4958cfc1, "_gpl");
SYMBOL_CRC(mt76_wed_net_setup_tc, 0x7b943f8f, "_gpl");
SYMBOL_CRC(mt76_wed_dma_reset, 0x3546d3c1, "_gpl");
SYMBOL_CRC(mt76_pci_disable_aspm, 0xb72d79a7, "_gpl");
SYMBOL_CRC(mt76_pci_aspm_supported, 0x14c76f65, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4ae8caa7, "ieee80211_sta_register_airtime" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x4897a742, "pcie_capability_read_word" },
	{ 0x42e2b350, "__skb_pad" },
	{ 0x27c66375, "simple_attr_open" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xd4f54ddb, "__ieee80211_schedule_txq" },
	{ 0x3c57e074, "debugfs_attr_write" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x469438cc, "of_node_put" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe93aaf05, "page_pool_alloc_frag" },
	{ 0x2d569990, "__iowrite32_copy_full" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xe2835923, "netif_napi_add_weight" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x15fe7e9b, "dmam_alloc_attrs" },
	{ 0x180cd0ba, "trace_raw_output_prep" },
	{ 0x6b8bf149, "netif_receive_skb_list" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa50bb103, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x61420e14, "ieee80211_free_hw" },
	{ 0xbd232569, "dma_unmap_page_attrs" },
	{ 0x410f79e4, "ieee80211_txq_schedule_start" },
	{ 0xfbfd5863, "trace_event_printf" },
	{ 0x5676cb2b, "ieee80211_tx_status_ext" },
	{ 0x46ee9a75, "debugfs_create_blob" },
	{ 0xe1bafd45, "trace_event_raw_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xf95322f4, "kthread_parkme" },
	{ 0x4c10c0b0, "page_pool_destroy" },
	{ 0x4ff913b5, "ieee80211_register_hw" },
	{ 0xe3dcebe7, "led_classdev_unregister" },
	{ 0xa6cc04a6, "__ieee80211_create_tpt_led_trigger" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x5b67576f, "ieee80211_sta_eosp" },
	{ 0x501ee2bd, "ieee80211_get_hdrlen_from_skb" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4c88a838, "__netif_napi_del" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbbc442b1, "kthread_park" },
	{ 0xa89db49f, "sched_set_fifo_low" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x79defbe1, "kthread_should_park" },
	{ 0x7a1c2aba, "of_get_property" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0xea427052, "trace_event_buffer_commit" },
	{ 0x9df57208, "dma_map_page_attrs" },
	{ 0x85540ebc, "nvmem_cell_put" },
	{ 0x36184085, "napi_complete_done" },
	{ 0x69ddc472, "ieee80211_get_tx_rates" },
	{ 0xf6060c12, "ieee80211_send_bar" },
	{ 0x13f62ff9, "cfg80211_reg_check_beaconing" },
	{ 0xaeb9a917, "ieee80211_get_key_rx_seq" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x1569940e, "ieee80211_sta_uapsd_trigger" },
	{ 0x50a58b43, "of_get_next_child" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfc28cd6b, "debugfs_create_devm_seqfile" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xc9fddddf, "pci_disable_link_state" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xdd5d727c, "napi_gro_receive" },
	{ 0x87ed7397, "of_get_mac_address" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x99f018c4, "nvmem_cell_read" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xc56c18c0, "kthread_unpark" },
	{ 0xad560971, "dev_set_threaded" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xec905c5d, "of_get_child_by_name" },
	{ 0xa861d6a8, "debugfs_attr_read" },
	{ 0xd99c6ae, "__dma_sync_single_for_cpu" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6ca3449c, "ieee80211_queue_delayed_work" },
	{ 0x4679d10c, "devm_kmemdup" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x91ac9254, "perf_trace_run_bpf_submit" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x4fcebbd7, "of_prop_next_string" },
	{ 0x83d92544, "debugfs_create_file_unsafe" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x2ef9e47d, "simple_attr_release" },
	{ 0xfcb7e930, "ieee80211_calc_rx_airtime" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa70378e3, "ieee80211_find_sta_by_ifaddr" },
	{ 0xb60ef9cf, "ieee80211_next_txq" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x91bed876, "pcie_capability_clear_and_set_word_locked" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x31bd7946, "napi_enable" },
	{ 0x13c0013, "ieee80211_beacon_cntdwn_is_complete" },
	{ 0x3dfbc684, "seq_putc" },
	{ 0xfe479535, "trace_event_reg" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xc3858fb3, "ieee80211_sta_pspoll" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x3801776b, "__ioread32_copy" },
	{ 0x6172aff7, "wiphy_read_of_freq_limits" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0x7137b995, "page_pool_put_unrefed_netmem" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0xb58c18e8, "ieee80211_free_txskb" },
	{ 0x37c9d5fc, "led_classdev_register_ext" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x775294d7, "of_device_is_available" },
	{ 0xc87fd291, "ieee80211_alloc_hw_nm" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xa4df42a0, "ieee80211_tx_dequeue" },
	{ 0xda2768de, "ieee80211_rx_list" },
	{ 0x56faa867, "page_pool_create" },
	{ 0xdcb764ad, "memset" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0x3f302749, "debugfs_create_u32" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0xf2da001e, "bpf_trace_run3" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xd5c95c69, "alloc_netdev_dummy" },
	{ 0x2f828d33, "trace_event_buffer_reserve" },
	{ 0x2bf50a51, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe792d1b4, "__dma_sync_single_for_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x24c4b1f8, "ieee80211_unregister_hw" },
	{ 0x60c15559, "napi_build_skb" },
	{ 0xb53675e6, "seq_write" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x286af43a, "of_nvmem_cell_get" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc86c3f91, "skb_add_rx_frag_netmem" },
	{ 0x6dc88bac, "napi_disable" },
	{ 0x42c9a3f7, "ieee80211_sta_ps_transition" },
	{ 0x571ab022, "debugfs_create_u8" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xd9eb2768, "ieee80211_csa_finish" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "A20A78BC4C78841768BD539");
