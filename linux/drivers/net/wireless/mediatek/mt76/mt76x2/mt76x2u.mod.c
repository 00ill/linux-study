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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3c6e27e8, "mt76x02u_tx_complete_skb" },
	{ 0xdc760bb4, "mt76_update_channel" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x88ee7fda, "mt76x02_set_ethtool_fwver" },
	{ 0xe005f806, "mt76x02_set_key" },
	{ 0x286aaa08, "mt76_release_buffered_frames" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x5cb5519f, "mt76_get_txpower" },
	{ 0x91181ba, "mt76_write_mac_initvals" },
	{ 0xe43d6b61, "mt76x2_reset_wlan" },
	{ 0x16c5b9d5, "mt76x2_mcu_set_channel" },
	{ 0x863be6b4, "mt76x02_mcu_set_radio_state" },
	{ 0xc4366c7d, "mt76_wake_tx_queue" },
	{ 0x433af450, "mt76_get_antenna" },
	{ 0x127f4799, "mt76x2_apply_gain_adj" },
	{ 0xe83c2d4, "ieee80211_emulate_change_chanctx" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x61f1c9e, "mt76x02_sta_ps" },
	{ 0x718dc35, "mt76x2_set_sar_specs" },
	{ 0xd35d8be2, "mt76u_resume_rx" },
	{ 0x8a1f7d36, "mt76x02_sta_rate_tbl_update" },
	{ 0x8ef76798, "mt76_alloc_device" },
	{ 0x420200c6, "mt76x02_mac_shared_key_setup" },
	{ 0xbc34dce2, "mt76x02_ext_pa_enabled" },
	{ 0x8ed18b82, "mt76x2_mac_stop" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x7fcac341, "usb_reset_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xca439be, "mt76x02_update_channel" },
	{ 0xd12ebcf6, "mt76x2_configure_tx_delay" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xdf4eb922, "mt76x02_configure_filter" },
	{ 0x84da3ef4, "mt76_free_device" },
	{ 0xf0e0d64f, "mt76x02_queue_rx_skb" },
	{ 0x658a8157, "mt76u_queues_deinit" },
	{ 0x6ca3449c, "ieee80211_queue_delayed_work" },
	{ 0x669c413b, "_dev_err" },
	{ 0xebc67570, "mt76x02u_mcu_fw_reset" },
	{ 0x9be4e640, "mt76x02_mac_setaddr" },
	{ 0xc9309635, "mt76_register_device" },
	{ 0x5c66d38e, "mt76_set_tim" },
	{ 0xd474f2a8, "mt76x02_sw_scan_complete" },
	{ 0xf9b49641, "mt76x02_phy_set_bw" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x778edb41, "mt76x02_phy_set_band" },
	{ 0xa637aa71, "mt76x02_init_device" },
	{ 0x766d7285, "mt76x02_tx" },
	{ 0x93c7aad7, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x11d39e34, "mt76x02_sta_remove" },
	{ 0x74c5cbcd, "mt76x02_phy_set_rxpath" },
	{ 0xfc9f3d76, "mt76x02_edcca_init" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x68108d3a, "mt76x02_tx_status_data" },
	{ 0xc7c8fa9e, "mt76x02_sta_add" },
	{ 0x83745cd6, "mt76x2_mcu_load_cr" },
	{ 0x48e20925, "mt76x2_init_txpower" },
	{ 0xf3f4325c, "mt76x02u_mcu_fw_send_data" },
	{ 0x63e1634b, "mt76u_init" },
	{ 0x98fca8d0, "mt76_get_survey" },
	{ 0x93587edd, "mt76x02_init_debugfs" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x38590bd4, "ieee80211_emulate_add_chanctx" },
	{ 0x6b627712, "mt76x02u_init_mcu" },
	{ 0x8ef9cdc3, "mt76x02u_tx_prepare_skb" },
	{ 0xb77e1ef3, "ieee80211_emulate_switch_vif_chanctx" },
	{ 0x4374bb43, "mt76x2_mcu_init_gain" },
	{ 0xe43249b6, "mt76_sta_state" },
	{ 0x3b0845be, "mt76x2_phy_tssi_compensate" },
	{ 0x18adfa01, "mt76x02_mac_cc_reset" },
	{ 0xc64ea10d, "mt76x02u_mac_start" },
	{ 0x1a1aae2a, "mt76x02_bss_info_changed" },
	{ 0xde6d9e4c, "mt76x02_init_agc_gain" },
	{ 0x239f80d8, "mt76x2_phy_update_channel_gain" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x22b5830a, "mt76u_alloc_queues" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x52b314bb, "mt76u_stop_tx" },
	{ 0xafcc52b9, "mt76x02u_init_beacon_config" },
	{ 0x24c4b1f8, "ieee80211_unregister_hw" },
	{ 0x13526b87, "mt76u_vendor_request" },
	{ 0xaa427a85, "mt76x02_add_interface" },
	{ 0xa2c08f22, "____mt76_poll_msec" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x682d24a7, "mt76_get_sar_power" },
	{ 0x6e010221, "mt76u_stop_rx" },
	{ 0x26532f, "mt76x02_ampdu_action" },
	{ 0x991c75dc, "mt76x02_mcu_calibrate" },
	{ 0xe2abda58, "mt76x02_conf_tx" },
	{ 0x9c6043c4, "mt76x02_mcu_function_select" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xa1e982bc, "mt76_sw_scan" },
	{ 0x1e16c16, "mt76_sta_pre_rcu_remove" },
	{ 0xc3135740, "mt76x02_mac_wcid_setup" },
	{ 0x88ec4249, "__mt76_poll" },
	{ 0x56f438c7, "mt76x2_read_rx_gain" },
	{ 0x7e8c7fc5, "mt76x2_phy_set_txpower_regs" },
	{ 0xc37836f8, "mt76x2_phy_set_txpower" },
	{ 0x56a36ff1, "mt76x02_phy_set_txdac" },
	{ 0xe3bafe79, "ieee80211_emulate_remove_chanctx" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0xf9a482f9, "msleep" },
	{ 0xedddf6e6, "mt76x02_remove_interface" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mt76x02-usb,mt76,mt76x02-lib,mt76x2-common,mac80211,mt76-usb");

MODULE_ALIAS("usb:v0B05p1833d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17EBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p180Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p2126d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p7600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C4Ep0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02E6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02FEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0137d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "04C16D7C96A7216F8017552");
