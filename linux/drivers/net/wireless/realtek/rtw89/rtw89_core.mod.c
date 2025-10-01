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

KSYMTAB_FUNC(rtw89_core_fill_txdesc, "", "");
KSYMTAB_FUNC(rtw89_core_fill_txdesc_v1, "", "");
KSYMTAB_FUNC(rtw89_core_fill_txdesc_v2, "", "");
KSYMTAB_FUNC(rtw89_core_fill_txdesc_fwcmd_v1, "", "");
KSYMTAB_FUNC(rtw89_core_fill_txdesc_fwcmd_v2, "", "");
KSYMTAB_FUNC(rtw89_core_query_rxdesc, "", "");
KSYMTAB_FUNC(rtw89_core_query_rxdesc_v2, "", "");
KSYMTAB_FUNC(rtw89_core_rx, "", "");
KSYMTAB_FUNC(rtw89_core_napi_start, "", "");
KSYMTAB_FUNC(rtw89_core_napi_stop, "", "");
KSYMTAB_FUNC(rtw89_core_napi_init, "", "");
KSYMTAB_FUNC(rtw89_core_napi_deinit, "", "");
KSYMTAB_FUNC(rtw89_check_quirks, "", "");
KSYMTAB_FUNC(rtw89_core_init, "", "");
KSYMTAB_FUNC(rtw89_core_deinit, "", "");
KSYMTAB_FUNC(rtw89_chip_info_setup, "", "");
KSYMTAB_FUNC(rtw89_core_register, "", "");
KSYMTAB_FUNC(rtw89_core_unregister, "", "");
KSYMTAB_FUNC(rtw89_alloc_ieee80211_hw, "", "");
KSYMTAB_FUNC(rtw89_free_ieee80211_hw, "", "");
KSYMTAB_DATA(rtw89_ops, "", "");
KSYMTAB_FUNC(rtw89_mac_get_err_status, "", "");
KSYMTAB_FUNC(rtw89_mac_set_err_status, "", "");
KSYMTAB_DATA(rtw89_mac_size, "", "");
KSYMTAB_FUNC(rtw89_mac_stop_sch_tx, "", "");
KSYMTAB_FUNC(rtw89_mac_stop_sch_tx_v1, "", "");
KSYMTAB_FUNC(rtw89_mac_resume_sch_tx, "", "");
KSYMTAB_FUNC(rtw89_mac_resume_sch_tx_v1, "", "");
KSYMTAB_FUNC(rtw89_mac_enable_bb_rf, "", "");
KSYMTAB_FUNC(rtw89_mac_disable_bb_rf, "", "");
KSYMTAB_FUNC(rtw89_mac_coex_init, "", "");
KSYMTAB_FUNC(rtw89_mac_coex_init_v1, "", "");
KSYMTAB_FUNC(rtw89_mac_cfg_gnt, "", "");
KSYMTAB_FUNC(rtw89_mac_cfg_gnt_v1, "", "");
KSYMTAB_FUNC(rtw89_mac_cfg_ctrl_path, "", "");
KSYMTAB_FUNC(rtw89_mac_cfg_ctrl_path_v1, "", "");
KSYMTAB_DATA(rtw89_mac_gen_ax, "", "");
KSYMTAB_FUNC(rtw89_mac_cfg_gnt_v2, "", "");
KSYMTAB_FUNC(rtw89_mac_cfg_ctrl_path_v2, "", "");
KSYMTAB_FUNC(rtw89_mac_stop_sch_tx_v2, "", "");
KSYMTAB_FUNC(rtw89_mac_resume_sch_tx_v2, "", "");
KSYMTAB_DATA(rtw89_mac_gen_be, "", "");
KSYMTAB_FUNC(rtw89_phy_get_txsc, "", "");
KSYMTAB_FUNC(rtw89_phy_get_txsb, "", "");
KSYMTAB_FUNC(rtw89_phy_read_rf, "", "");
KSYMTAB_FUNC(rtw89_phy_read_rf_v1, "", "");
KSYMTAB_FUNC(rtw89_phy_read_rf_v2, "", "");
KSYMTAB_FUNC(rtw89_phy_write_rf, "", "");
KSYMTAB_FUNC(rtw89_phy_write_rf_v1, "", "");
KSYMTAB_FUNC(rtw89_phy_write_rf_v2, "", "");
KSYMTAB_FUNC(rtw89_phy_config_rf_reg_v1, "", "");
KSYMTAB_FUNC(rtw89_phy_write32_idx, "", "");
KSYMTAB_FUNC(rtw89_phy_read32_idx, "", "");
KSYMTAB_FUNC(rtw89_phy_set_phy_regs, "", "");
KSYMTAB_FUNC(rtw89_phy_write_reg3_tbl, "", "");
KSYMTAB_FUNC(rtw89_phy_load_txpwr_byrate, "", "");
KSYMTAB_FUNC(rtw89_phy_read_txpwr_limit, "", "");
KSYMTAB_FUNC(rtw89_phy_rfk_pre_ntfy_and_wait, "", "");
KSYMTAB_FUNC(rtw89_phy_rfk_tssi_and_wait, "", "");
KSYMTAB_FUNC(rtw89_phy_rfk_iqk_and_wait, "", "");
KSYMTAB_FUNC(rtw89_phy_rfk_dpk_and_wait, "", "");
KSYMTAB_FUNC(rtw89_phy_rfk_txgapk_and_wait, "", "");
KSYMTAB_FUNC(rtw89_phy_rfk_dack_and_wait, "", "");
KSYMTAB_FUNC(rtw89_phy_rfk_rxdck_and_wait, "", "");
KSYMTAB_FUNC(rtw89_rfk_chan_lookup, "", "");
KSYMTAB_FUNC(rtw89_rfk_parser, "", "");
KSYMTAB_FUNC(rtw89_phy_tssi_ctrl_set_bandedge_cfg, "", "");
KSYMTAB_FUNC(rtw89_encode_chan_idx, "", "");
KSYMTAB_FUNC(rtw89_decode_chan_idx, "", "");
KSYMTAB_FUNC(rtw89_phy_get_kpath, "", "");
KSYMTAB_FUNC(rtw89_phy_get_syn_sel, "", "");
KSYMTAB_DATA(rtw89_phy_gen_ax, "", "");
KSYMTAB_DATA(rtw89_phy_gen_be, "", "");
KSYMTAB_DATA(rtw89_fw_blacklist_default, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_dctl_sec_cam_v1, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_dctl_sec_cam_v2, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_default_dmac_tbl_v2, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_ba_cam, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_ba_cam_v1, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_default_cmac_tbl, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_default_cmac_tbl_g7, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_assoc_cmac_tbl, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_assoc_cmac_tbl_g7, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_ampdu_cmac_tbl_g7, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_update_beacon, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_update_beacon_be, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_rf_ntfy_mcc, "", "");
KSYMTAB_FUNC(rtw89_read_efuse_ver, "", "");
KSYMTAB_FUNC(rtw89_efuse_read_fw_secure_be, "", "");
KSYMTAB_FUNC(rtw89_btc_set_policy, "", "");
KSYMTAB_FUNC(rtw89_btc_set_policy_v1, "", "");
KSYMTAB_FUNC(rtw89_btc_ntfy_wl_rfk, "", "");
KSYMTAB_FUNC(__rtw89_mgnt_chan_get, "", "");
KSYMTAB_FUNC(rtw89_ser_notify, "", "");
KSYMTAB_FUNC(rtw89_linear_2_db, "", "");
KSYMTAB_FUNC(rtw89_db_2_linear, "", "");

SYMBOL_CRC(rtw89_core_fill_txdesc, 0x5b8cf6ea, "");
SYMBOL_CRC(rtw89_core_fill_txdesc_v1, 0xff310fdf, "");
SYMBOL_CRC(rtw89_core_fill_txdesc_v2, 0x042da6d9, "");
SYMBOL_CRC(rtw89_core_fill_txdesc_fwcmd_v1, 0xdd4e8913, "");
SYMBOL_CRC(rtw89_core_fill_txdesc_fwcmd_v2, 0x26522015, "");
SYMBOL_CRC(rtw89_core_query_rxdesc, 0x71865b58, "");
SYMBOL_CRC(rtw89_core_query_rxdesc_v2, 0xff2b4ed8, "");
SYMBOL_CRC(rtw89_core_rx, 0x382a47f9, "");
SYMBOL_CRC(rtw89_core_napi_start, 0xd5efb3e1, "");
SYMBOL_CRC(rtw89_core_napi_stop, 0xe43e0508, "");
SYMBOL_CRC(rtw89_core_napi_init, 0x25eaf709, "");
SYMBOL_CRC(rtw89_core_napi_deinit, 0x262acac4, "");
SYMBOL_CRC(rtw89_check_quirks, 0x14600e17, "");
SYMBOL_CRC(rtw89_core_init, 0x4bc02827, "");
SYMBOL_CRC(rtw89_core_deinit, 0x4df99e2c, "");
SYMBOL_CRC(rtw89_chip_info_setup, 0xa700eddb, "");
SYMBOL_CRC(rtw89_core_register, 0x709dd278, "");
SYMBOL_CRC(rtw89_core_unregister, 0xc9880626, "");
SYMBOL_CRC(rtw89_alloc_ieee80211_hw, 0xa8cd99e6, "");
SYMBOL_CRC(rtw89_free_ieee80211_hw, 0xc9165291, "");
SYMBOL_CRC(rtw89_ops, 0x7ce59139, "");
SYMBOL_CRC(rtw89_mac_get_err_status, 0xaa34993e, "");
SYMBOL_CRC(rtw89_mac_set_err_status, 0xa1a4e910, "");
SYMBOL_CRC(rtw89_mac_size, 0x8042eefb, "");
SYMBOL_CRC(rtw89_mac_stop_sch_tx, 0x1db72389, "");
SYMBOL_CRC(rtw89_mac_stop_sch_tx_v1, 0x40718856, "");
SYMBOL_CRC(rtw89_mac_resume_sch_tx, 0x44572030, "");
SYMBOL_CRC(rtw89_mac_resume_sch_tx_v1, 0x0133e8e0, "");
SYMBOL_CRC(rtw89_mac_enable_bb_rf, 0x56d52b3c, "");
SYMBOL_CRC(rtw89_mac_disable_bb_rf, 0x425eecbb, "");
SYMBOL_CRC(rtw89_mac_coex_init, 0xed59b2bc, "");
SYMBOL_CRC(rtw89_mac_coex_init_v1, 0xc9413520, "");
SYMBOL_CRC(rtw89_mac_cfg_gnt, 0x282af7a4, "");
SYMBOL_CRC(rtw89_mac_cfg_gnt_v1, 0x2cf4e6c1, "");
SYMBOL_CRC(rtw89_mac_cfg_ctrl_path, 0xee2cf716, "");
SYMBOL_CRC(rtw89_mac_cfg_ctrl_path_v1, 0x82ecfe03, "");
SYMBOL_CRC(rtw89_mac_gen_ax, 0xea2eaa9f, "");
SYMBOL_CRC(rtw89_mac_cfg_gnt_v2, 0x457338f5, "");
SYMBOL_CRC(rtw89_mac_cfg_ctrl_path_v2, 0x40e13f6f, "");
SYMBOL_CRC(rtw89_mac_stop_sch_tx_v2, 0x528e4389, "");
SYMBOL_CRC(rtw89_mac_resume_sch_tx_v2, 0xf4b4410e, "");
SYMBOL_CRC(rtw89_mac_gen_be, 0xe6605b6b, "");
SYMBOL_CRC(rtw89_phy_get_txsc, 0x4c5e2dd1, "");
SYMBOL_CRC(rtw89_phy_get_txsb, 0x939092d8, "");
SYMBOL_CRC(rtw89_phy_read_rf, 0x0b855444, "");
SYMBOL_CRC(rtw89_phy_read_rf_v1, 0x8c76a5cb, "");
SYMBOL_CRC(rtw89_phy_read_rf_v2, 0xd1e80c87, "");
SYMBOL_CRC(rtw89_phy_write_rf, 0x6fdff43d, "");
SYMBOL_CRC(rtw89_phy_write_rf_v1, 0xfab23c2c, "");
SYMBOL_CRC(rtw89_phy_write_rf_v2, 0x458272e9, "");
SYMBOL_CRC(rtw89_phy_config_rf_reg_v1, 0xc8c589e7, "");
SYMBOL_CRC(rtw89_phy_write32_idx, 0xd26fc521, "");
SYMBOL_CRC(rtw89_phy_read32_idx, 0x39a59ead, "");
SYMBOL_CRC(rtw89_phy_set_phy_regs, 0xd8d1f2b8, "");
SYMBOL_CRC(rtw89_phy_write_reg3_tbl, 0xfd5c847a, "");
SYMBOL_CRC(rtw89_phy_load_txpwr_byrate, 0xe41a2c51, "");
SYMBOL_CRC(rtw89_phy_read_txpwr_limit, 0x79528f43, "");
SYMBOL_CRC(rtw89_phy_rfk_pre_ntfy_and_wait, 0x1be1e689, "");
SYMBOL_CRC(rtw89_phy_rfk_tssi_and_wait, 0xb6951cb9, "");
SYMBOL_CRC(rtw89_phy_rfk_iqk_and_wait, 0x47a0cff4, "");
SYMBOL_CRC(rtw89_phy_rfk_dpk_and_wait, 0xc59f1bc6, "");
SYMBOL_CRC(rtw89_phy_rfk_txgapk_and_wait, 0x6c5021c7, "");
SYMBOL_CRC(rtw89_phy_rfk_dack_and_wait, 0x79871712, "");
SYMBOL_CRC(rtw89_phy_rfk_rxdck_and_wait, 0x4b5cfc6c, "");
SYMBOL_CRC(rtw89_rfk_chan_lookup, 0x4ccca5cc, "");
SYMBOL_CRC(rtw89_rfk_parser, 0x697e774d, "");
SYMBOL_CRC(rtw89_phy_tssi_ctrl_set_bandedge_cfg, 0x3aa9cf14, "");
SYMBOL_CRC(rtw89_encode_chan_idx, 0x9af1f109, "");
SYMBOL_CRC(rtw89_decode_chan_idx, 0x3a8572e0, "");
SYMBOL_CRC(rtw89_phy_get_kpath, 0xd807561f, "");
SYMBOL_CRC(rtw89_phy_get_syn_sel, 0xdaf1c760, "");
SYMBOL_CRC(rtw89_phy_gen_ax, 0x9552c42e, "");
SYMBOL_CRC(rtw89_phy_gen_be, 0xcc67f3a1, "");
SYMBOL_CRC(rtw89_fw_blacklist_default, 0x46967a00, "");
SYMBOL_CRC(rtw89_fw_h2c_dctl_sec_cam_v1, 0x1f4fa63a, "");
SYMBOL_CRC(rtw89_fw_h2c_dctl_sec_cam_v2, 0x4512ac38, "");
SYMBOL_CRC(rtw89_fw_h2c_default_dmac_tbl_v2, 0x8544c06e, "");
SYMBOL_CRC(rtw89_fw_h2c_ba_cam, 0xac56fea9, "");
SYMBOL_CRC(rtw89_fw_h2c_ba_cam_v1, 0x4ad2fdb7, "");
SYMBOL_CRC(rtw89_fw_h2c_default_cmac_tbl, 0x2f8739ec, "");
SYMBOL_CRC(rtw89_fw_h2c_default_cmac_tbl_g7, 0x07d68eb2, "");
SYMBOL_CRC(rtw89_fw_h2c_assoc_cmac_tbl, 0x6d852cf4, "");
SYMBOL_CRC(rtw89_fw_h2c_assoc_cmac_tbl_g7, 0xcc58fb00, "");
SYMBOL_CRC(rtw89_fw_h2c_ampdu_cmac_tbl_g7, 0x597d8f6b, "");
SYMBOL_CRC(rtw89_fw_h2c_update_beacon, 0xd40e6c7a, "");
SYMBOL_CRC(rtw89_fw_h2c_update_beacon_be, 0x427e9719, "");
SYMBOL_CRC(rtw89_fw_h2c_rf_ntfy_mcc, 0x1c574ea8, "");
SYMBOL_CRC(rtw89_read_efuse_ver, 0xf0cb5b81, "");
SYMBOL_CRC(rtw89_efuse_read_fw_secure_be, 0x4ae23851, "");
SYMBOL_CRC(rtw89_btc_set_policy, 0x895100ca, "");
SYMBOL_CRC(rtw89_btc_set_policy_v1, 0x49a0f9f1, "");
SYMBOL_CRC(rtw89_btc_ntfy_wl_rfk, 0x1c969ca4, "");
SYMBOL_CRC(__rtw89_mgnt_chan_get, 0x77248bd2, "");
SYMBOL_CRC(rtw89_ser_notify, 0x409670ae, "");
SYMBOL_CRC(rtw89_linear_2_db, 0x8b2996f1, "");
SYMBOL_CRC(rtw89_db_2_linear, 0xe44a7282, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf18d82ec, "ieee80211_stop_tx_ba_session" },
	{ 0xe91f9b82, "ieee80211_gtk_rekey_notify" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xad68421f, "ieee80211_connection_loss" },
	{ 0x4365e3a8, "ieee80211_report_wowlan_wakeup" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xd4f54ddb, "__ieee80211_schedule_txq" },
	{ 0xdca0f8b3, "ieee80211_txq_get_depth" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xca61327c, "cfg80211_bss_iter" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xe2835923, "netif_napi_add_weight" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x61420e14, "ieee80211_free_hw" },
	{ 0x53734755, "ieee80211_probereq_get" },
	{ 0x410f79e4, "ieee80211_txq_schedule_start" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xf557ba8f, "ieee80211_iterate_stations_atomic" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
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
	{ 0x4c88a838, "__netif_napi_del" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x3c744e95, "cfg80211_calculate_bitrate" },
	{ 0x69509299, "ieee80211_find_sta" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xaeb9a917, "ieee80211_get_key_rx_seq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x3adfad74, "__napi_schedule" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x1dab0efe, "ieee80211_set_key_rx_seq" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0xaeb98a5e, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0xa724da05, "wiphy_to_ieee80211_hw" },
	{ 0xe9238966, "ieee80211_gtk_rekey_add" },
	{ 0x6ca3449c, "ieee80211_queue_delayed_work" },
	{ 0x669c413b, "_dev_err" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x3939f8f0, "rfkill_pause_polling" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xb60ef9cf, "ieee80211_next_txq" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5f5404d4, "ieee80211_remain_on_channel_expired" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x31bd7946, "napi_enable" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x3dfbc684, "seq_putc" },
	{ 0xabb61447, "ieee80211_wake_queues" },
	{ 0x24b49baa, "free_netdev" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9faf7c7e, "ieee80211_iter_keys_rcu" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb58c18e8, "ieee80211_free_txskb" },
	{ 0xf4da4505, "dev_coredumpv" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc87fd291, "ieee80211_alloc_hw_nm" },
	{ 0xa4df42a0, "ieee80211_tx_dequeue" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x38590bd4, "ieee80211_emulate_add_chanctx" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xb77e1ef3, "ieee80211_emulate_switch_vif_chanctx" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x21f0f8a, "ieee80211_ready_on_channel" },
	{ 0x27b8aeb2, "ieee80211_stop_queues" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x43f25734, "skb_unlink" },
	{ 0xda7db208, "wiphy_rfkill_set_hw_state_reason" },
	{ 0xfc4326dd, "wiphy_rfkill_start_polling" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xd5c95c69, "alloc_netdev_dummy" },
	{ 0x999e8297, "vfree" },
	{ 0xdf521442, "_find_next_zero_bit" },
	{ 0xe027e031, "ieee80211_scan_completed" },
	{ 0x2bf50a51, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x24c4b1f8, "ieee80211_unregister_hw" },
	{ 0xb53675e6, "seq_write" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x20f09351, "ieee80211_beacon_get_tim" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xac85f68f, "skb_copy" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x23026b4b, "cfg80211_chandef_create" },
	{ 0x686a6862, "ieee80211_cqm_rssi_notify" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x4559e78f, "ieee80211_queue_work" },
	{ 0xf7bbf8be, "napi_schedule_prep" },
	{ 0x98cf60b3, "strlen" },
	{ 0x6dc88bac, "napi_disable" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0xe3bafe79, "ieee80211_emulate_remove_chanctx" },
	{ 0xf9a482f9, "msleep" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2eeceda9, "ieee80211_rx_napi" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mac80211,cfg80211,rfkill");


MODULE_INFO(srcversion, "5A2A5CCECB267E38C96CF64");
