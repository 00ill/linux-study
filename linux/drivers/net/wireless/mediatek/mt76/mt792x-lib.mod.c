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

KSYMTAB_FUNC(mt792x_tx, "_gpl", "");
KSYMTAB_FUNC(mt792x_stop, "_gpl", "");
KSYMTAB_FUNC(mt792x_mac_link_bss_remove, "_gpl", "");
KSYMTAB_FUNC(mt792x_remove_interface, "_gpl", "");
KSYMTAB_FUNC(mt792x_conf_tx, "_gpl", "");
KSYMTAB_FUNC(mt792x_get_stats, "_gpl", "");
KSYMTAB_FUNC(mt792x_get_tsf, "_gpl", "");
KSYMTAB_FUNC(mt792x_set_tsf, "_gpl", "");
KSYMTAB_FUNC(mt792x_tx_worker, "_gpl", "");
KSYMTAB_FUNC(mt792x_roc_timer, "_gpl", "");
KSYMTAB_FUNC(mt792x_flush, "_gpl", "");
KSYMTAB_FUNC(mt792x_assign_vif_chanctx, "_gpl", "");
KSYMTAB_FUNC(mt792x_unassign_vif_chanctx, "_gpl", "");
KSYMTAB_FUNC(mt792x_set_wakeup, "_gpl", "");
KSYMTAB_FUNC(mt792x_get_et_strings, "_gpl", "");
KSYMTAB_FUNC(mt792x_get_et_sset_count, "_gpl", "");
KSYMTAB_FUNC(mt792x_get_et_stats, "_gpl", "");
KSYMTAB_FUNC(mt792x_sta_statistics, "_gpl", "");
KSYMTAB_FUNC(mt792x_set_coverage_class, "_gpl", "");
KSYMTAB_FUNC(mt792x_init_wiphy, "_gpl", "");
KSYMTAB_FUNC(mt792x_get_mac80211_ops, "_gpl", "");
KSYMTAB_FUNC(mt792x_init_wcid, "_gpl", "");
KSYMTAB_FUNC(mt792x_mcu_drv_pmctrl, "_gpl", "");
KSYMTAB_FUNC(mt792x_mcu_fw_pmctrl, "_gpl", "");
KSYMTAB_FUNC(__mt792xe_mcu_drv_pmctrl, "_gpl", "");
KSYMTAB_FUNC(mt792xe_mcu_drv_pmctrl, "_gpl", "");
KSYMTAB_FUNC(mt792xe_mcu_fw_pmctrl, "_gpl", "");
KSYMTAB_FUNC(mt792x_load_firmware, "_gpl", "");
KSYMTAB_FUNC(mt792x_mac_work, "_gpl", "");
KSYMTAB_FUNC(mt792x_mac_set_timeing, "_gpl", "");
KSYMTAB_FUNC(mt792x_mac_update_mib_stats, "_gpl", "");
KSYMTAB_FUNC(mt792x_rx_get_wcid, "_gpl", "");
KSYMTAB_FUNC(mt792x_mac_assoc_rssi, "_gpl", "");
KSYMTAB_FUNC(mt792x_mac_reset_counters, "_gpl", "");
KSYMTAB_FUNC(mt792x_update_channel, "_gpl", "");
KSYMTAB_FUNC(mt792x_reset, "_gpl", "");
KSYMTAB_FUNC(mt792x_mac_init_band, "_gpl", "");
KSYMTAB_FUNC(mt792x_pm_wake_work, "_gpl", "");
KSYMTAB_FUNC(mt792x_pm_power_save_work, "_gpl", "");
KSYMTAB_DATA(__tracepoint_lp_event, "_gpl", "");
KSYMTAB_FUNC(__traceiter_lp_event, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_lp_event, "_gpl", "");
KSYMTAB_FUNC(mt792x_tx_stats_show, "_gpl", "");
KSYMTAB_FUNC(mt792x_queues_acq, "_gpl", "");
KSYMTAB_FUNC(mt792x_queues_read, "_gpl", "");
KSYMTAB_FUNC(mt792x_pm_stats, "_gpl", "");
KSYMTAB_FUNC(mt792x_pm_idle_timeout_set, "_gpl", "");
KSYMTAB_FUNC(mt792x_pm_idle_timeout_get, "_gpl", "");
KSYMTAB_FUNC(mt792x_irq_handler, "_gpl", "");
KSYMTAB_FUNC(mt792x_irq_tasklet, "_gpl", "");
KSYMTAB_FUNC(mt792x_rx_poll_complete, "_gpl", "");
KSYMTAB_FUNC(mt792x_dma_enable, "_gpl", "");
KSYMTAB_FUNC(mt792x_wpdma_reset, "_gpl", "");
KSYMTAB_FUNC(mt792x_wpdma_reinit_cond, "_gpl", "");
KSYMTAB_FUNC(mt792x_dma_disable, "_gpl", "");
KSYMTAB_FUNC(mt792x_dma_cleanup, "_gpl", "");
KSYMTAB_FUNC(mt792x_poll_tx, "_gpl", "");
KSYMTAB_FUNC(mt792x_poll_rx, "_gpl", "");
KSYMTAB_FUNC(mt792x_wfsys_reset, "_gpl", "");

SYMBOL_CRC(mt792x_tx, 0xd8aa80c5, "_gpl");
SYMBOL_CRC(mt792x_stop, 0x9b63f646, "_gpl");
SYMBOL_CRC(mt792x_mac_link_bss_remove, 0x64e39ac7, "_gpl");
SYMBOL_CRC(mt792x_remove_interface, 0x65950b37, "_gpl");
SYMBOL_CRC(mt792x_conf_tx, 0x7ef66c7a, "_gpl");
SYMBOL_CRC(mt792x_get_stats, 0x0b604f1d, "_gpl");
SYMBOL_CRC(mt792x_get_tsf, 0xa76bb0b4, "_gpl");
SYMBOL_CRC(mt792x_set_tsf, 0x731aeaa1, "_gpl");
SYMBOL_CRC(mt792x_tx_worker, 0x53a605f7, "_gpl");
SYMBOL_CRC(mt792x_roc_timer, 0x9c06d4d5, "_gpl");
SYMBOL_CRC(mt792x_flush, 0x31fe408c, "_gpl");
SYMBOL_CRC(mt792x_assign_vif_chanctx, 0x97028f7b, "_gpl");
SYMBOL_CRC(mt792x_unassign_vif_chanctx, 0xfec4599f, "_gpl");
SYMBOL_CRC(mt792x_set_wakeup, 0xcfe0f50e, "_gpl");
SYMBOL_CRC(mt792x_get_et_strings, 0x7c25e8d3, "_gpl");
SYMBOL_CRC(mt792x_get_et_sset_count, 0xabd80dc9, "_gpl");
SYMBOL_CRC(mt792x_get_et_stats, 0x83fb6862, "_gpl");
SYMBOL_CRC(mt792x_sta_statistics, 0x5d379c81, "_gpl");
SYMBOL_CRC(mt792x_set_coverage_class, 0x99752555, "_gpl");
SYMBOL_CRC(mt792x_init_wiphy, 0x98a3ee72, "_gpl");
SYMBOL_CRC(mt792x_get_mac80211_ops, 0x3c7c7878, "_gpl");
SYMBOL_CRC(mt792x_init_wcid, 0x4a55f887, "_gpl");
SYMBOL_CRC(mt792x_mcu_drv_pmctrl, 0x12dc2118, "_gpl");
SYMBOL_CRC(mt792x_mcu_fw_pmctrl, 0x5552e1fe, "_gpl");
SYMBOL_CRC(__mt792xe_mcu_drv_pmctrl, 0xed8d7e04, "_gpl");
SYMBOL_CRC(mt792xe_mcu_drv_pmctrl, 0x15bc2afc, "_gpl");
SYMBOL_CRC(mt792xe_mcu_fw_pmctrl, 0x589d1cfa, "_gpl");
SYMBOL_CRC(mt792x_load_firmware, 0x160a9f73, "_gpl");
SYMBOL_CRC(mt792x_mac_work, 0xe731fec5, "_gpl");
SYMBOL_CRC(mt792x_mac_set_timeing, 0x6a6cc7c5, "_gpl");
SYMBOL_CRC(mt792x_mac_update_mib_stats, 0x6289b038, "_gpl");
SYMBOL_CRC(mt792x_rx_get_wcid, 0x10ee30c1, "_gpl");
SYMBOL_CRC(mt792x_mac_assoc_rssi, 0x77764ee7, "_gpl");
SYMBOL_CRC(mt792x_mac_reset_counters, 0x37134f35, "_gpl");
SYMBOL_CRC(mt792x_update_channel, 0x54a23221, "_gpl");
SYMBOL_CRC(mt792x_reset, 0x09ac5e3f, "_gpl");
SYMBOL_CRC(mt792x_mac_init_band, 0x6e0a2327, "_gpl");
SYMBOL_CRC(mt792x_pm_wake_work, 0x0df73a34, "_gpl");
SYMBOL_CRC(mt792x_pm_power_save_work, 0xe4ccb149, "_gpl");
SYMBOL_CRC(__tracepoint_lp_event, 0x5f2194f6, "_gpl");
SYMBOL_CRC(__traceiter_lp_event, 0x6b774c73, "_gpl");
SYMBOL_CRC(__SCK__tp_func_lp_event, 0xb9749f8d, "_gpl");
SYMBOL_CRC(mt792x_tx_stats_show, 0xc4ca34eb, "_gpl");
SYMBOL_CRC(mt792x_queues_acq, 0xff42b891, "_gpl");
SYMBOL_CRC(mt792x_queues_read, 0xac7f5729, "_gpl");
SYMBOL_CRC(mt792x_pm_stats, 0x6cab16b1, "_gpl");
SYMBOL_CRC(mt792x_pm_idle_timeout_set, 0x5a7b5c38, "_gpl");
SYMBOL_CRC(mt792x_pm_idle_timeout_get, 0xc3a0fb62, "_gpl");
SYMBOL_CRC(mt792x_irq_handler, 0xbd22e98c, "_gpl");
SYMBOL_CRC(mt792x_irq_tasklet, 0x8e471e29, "_gpl");
SYMBOL_CRC(mt792x_rx_poll_complete, 0x4b2a87fb, "_gpl");
SYMBOL_CRC(mt792x_dma_enable, 0x5316cd79, "_gpl");
SYMBOL_CRC(mt792x_wpdma_reset, 0x8d836d61, "_gpl");
SYMBOL_CRC(mt792x_wpdma_reinit_cond, 0x673fe68d, "_gpl");
SYMBOL_CRC(mt792x_dma_disable, 0xce477578, "_gpl");
SYMBOL_CRC(mt792x_dma_cleanup, 0x6219192f, "_gpl");
SYMBOL_CRC(mt792x_poll_tx, 0xd407b951, "_gpl");
SYMBOL_CRC(mt792x_poll_rx, 0x1a4a45f5, "_gpl");
SYMBOL_CRC(mt792x_wfsys_reset, 0x04aa8bc1, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x898ec434, "mt76_dma_rx_poll" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x180cd0ba, "trace_raw_output_prep" },
	{ 0xa50bb103, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xde0ae918, "mt76_connac_mcu_uni_add_dev" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xfbfd5863, "trace_event_printf" },
	{ 0xf557ba8f, "ieee80211_iterate_stations_atomic" },
	{ 0xd93c9c73, "mt76_connac_pm_wake" },
	{ 0xfcf25a72, "__traceiter_dev_irq" },
	{ 0xe1bafd45, "trace_event_raw_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x378805b6, "mt76_has_tx_pending" },
	{ 0xe83c2d4, "ieee80211_emulate_change_chanctx" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x9a38130e, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x9365998, "mt76_dma_cleanup" },
	{ 0xbcde9105, "mt76_connac_pm_queue_skb" },
	{ 0x975c6780, "mt76_tx_status_check" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0xae57145c, "mt76_connac_free_pending_tx_skbs" },
	{ 0x45168a4e, "mt76_connac_power_save_sched" },
	{ 0xea427052, "trace_event_buffer_commit" },
	{ 0x36184085, "napi_complete_done" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xa1ba9225, "mt76_tx" },
	{ 0x3adfad74, "__napi_schedule" },
	{ 0xb2110948, "mt76_connac_mcu_set_mac_enable" },
	{ 0xe40b66ef, "mt76_wcid_alloc" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6ca3449c, "ieee80211_queue_delayed_work" },
	{ 0x4679d10c, "devm_kmemdup" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x91ac9254, "perf_trace_run_bpf_submit" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x439eb4de, "mt76_connac2_load_ram" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3dfbc684, "seq_putc" },
	{ 0xfe479535, "trace_event_reg" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xc11ab7d3, "mt76_update_survey" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xabb61447, "ieee80211_wake_queues" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x908ca40c, "mt76_connac_wowlan_support" },
	{ 0x2053afc1, "mt76_set_irq_mask" },
	{ 0x7701b9e5, "mt76_connac_pm_dequeue_skbs" },
	{ 0xdcb764ad, "memset" },
	{ 0x38590bd4, "ieee80211_emulate_add_chanctx" },
	{ 0xb77e1ef3, "ieee80211_emulate_switch_vif_chanctx" },
	{ 0x6a88f4bc, "mt76_ethtool_page_pool_stats" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb608bb75, "__tracepoint_dev_irq" },
	{ 0x2f828d33, "trace_event_buffer_reserve" },
	{ 0x2bf50a51, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x58f3924e, "mt76_txq_schedule_all" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7c2353c9, "mt76_connac2_load_patch" },
	{ 0xb53675e6, "seq_write" },
	{ 0xa2c08f22, "____mt76_poll_msec" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x1a6e83da, "mt76_wcid_cleanup" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4559e78f, "ieee80211_queue_work" },
	{ 0xf7bbf8be, "napi_schedule_prep" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0xe3bafe79, "ieee80211_emulate_remove_chanctx" },
	{ 0xab9d88b8, "mt76_ethtool_worker" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mt76,mt76-connac-lib,mac80211");


MODULE_INFO(srcversion, "CDBED5EE8B20A6FCA7DA71D");
