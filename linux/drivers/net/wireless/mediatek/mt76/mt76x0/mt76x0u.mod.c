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
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x1f0aa8f7, "mt76x0_set_sar_specs" },
	{ 0x6c37e5, "firmware_request_nowarn" },
	{ 0x88ee7fda, "mt76x02_set_ethtool_fwver" },
	{ 0xe005f806, "mt76x02_set_key" },
	{ 0x286aaa08, "mt76_release_buffered_frames" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x5cb5519f, "mt76_get_txpower" },
	{ 0xc4366c7d, "mt76_wake_tx_queue" },
	{ 0x433af450, "mt76_get_antenna" },
	{ 0x37a0cba, "kfree" },
	{ 0xe83c2d4, "ieee80211_emulate_change_chanctx" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x61f1c9e, "mt76x02_sta_ps" },
	{ 0xd35d8be2, "mt76u_resume_rx" },
	{ 0x8a1f7d36, "mt76x02_sta_rate_tbl_update" },
	{ 0x8ef76798, "mt76_alloc_device" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x7fcac341, "usb_reset_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xca439be, "mt76x02_update_channel" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xdf4eb922, "mt76x02_configure_filter" },
	{ 0x84da3ef4, "mt76_free_device" },
	{ 0x49f2aaaa, "mt76x0_chip_onoff" },
	{ 0xf0e0d64f, "mt76x02_queue_rx_skb" },
	{ 0x658a8157, "mt76u_queues_deinit" },
	{ 0x6ca3449c, "ieee80211_queue_delayed_work" },
	{ 0xdf9f3b08, "mt76x0_config" },
	{ 0x718bf81d, "mt76x0_register_device" },
	{ 0x669c413b, "_dev_err" },
	{ 0xebc67570, "mt76x02u_mcu_fw_reset" },
	{ 0x37ba6e0, "mt76x0_phy_calibrate" },
	{ 0x5c66d38e, "mt76_set_tim" },
	{ 0xd474f2a8, "mt76x02_sw_scan_complete" },
	{ 0x766d7285, "mt76x02_tx" },
	{ 0x11d39e34, "mt76x02_sta_remove" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x68108d3a, "mt76x02_tx_status_data" },
	{ 0xc7c8fa9e, "mt76x02_sta_add" },
	{ 0xdff2ed39, "mt76x0_mac_stop" },
	{ 0xf3f4325c, "mt76x02u_mcu_fw_send_data" },
	{ 0x63e1634b, "mt76u_init" },
	{ 0x98fca8d0, "mt76_get_survey" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x38590bd4, "ieee80211_emulate_add_chanctx" },
	{ 0x6b627712, "mt76x02u_init_mcu" },
	{ 0x755efd66, "mt76x0_set_channel" },
	{ 0x8ef9cdc3, "mt76x02u_tx_prepare_skb" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xb77e1ef3, "ieee80211_emulate_switch_vif_chanctx" },
	{ 0xec99583, "mt76x02_set_rts_threshold" },
	{ 0xe43249b6, "mt76_sta_state" },
	{ 0xf7c2df80, "mt76x0_init_hardware" },
	{ 0xc64ea10d, "mt76x02u_mac_start" },
	{ 0x1a1aae2a, "mt76x02_bss_info_changed" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x22b5830a, "mt76u_alloc_queues" },
	{ 0x52b314bb, "mt76u_stop_tx" },
	{ 0xafcc52b9, "mt76x02u_init_beacon_config" },
	{ 0x24c4b1f8, "ieee80211_unregister_hw" },
	{ 0x13526b87, "mt76u_vendor_request" },
	{ 0xaa427a85, "mt76x02_add_interface" },
	{ 0xa2c08f22, "____mt76_poll_msec" },
	{ 0x5940aff9, "mt76x02u_exit_beacon_config" },
	{ 0x6e010221, "mt76u_stop_rx" },
	{ 0x26532f, "mt76x02_ampdu_action" },
	{ 0xe2abda58, "mt76x02_conf_tx" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xa1e982bc, "mt76_sw_scan" },
	{ 0x1e16c16, "mt76_sta_pre_rcu_remove" },
	{ 0x88ec4249, "__mt76_poll" },
	{ 0xe3bafe79, "ieee80211_emulate_remove_chanctx" },
	{ 0xedddf6e6, "mt76x02_remove_interface" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mt76x02-usb,mt76x0-common,mt76x02-lib,mt76,mac80211,mt76-usb");

MODULE_ALIAS("usb:v148Fp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp761Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17DBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0075d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3425d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0951d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v293Cp5702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p806Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pC711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7630d*dc*dsc*dp*icFFisc02ipFFin*");
MODULE_ALIAS("usb:v0E8Dp7650d*dc*dsc*dp*icFFisc02ipFFin*");

MODULE_INFO(srcversion, "F10BBD90FBF5C8BD690829F");
