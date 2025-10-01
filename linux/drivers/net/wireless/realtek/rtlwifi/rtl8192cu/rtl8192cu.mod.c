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
	{ 0x666afef9, "param_ops_ullong" },
	{ 0x1b945315, "rtl_addr_delay" },
	{ 0xaac829be, "rtl92c_phy_sw_chnl" },
	{ 0xb67fd96d, "rtl92c_fill_h2c_cmd" },
	{ 0x864471a5, "_rtl92c_phy_bb8192c_config_parafile" },
	{ 0x52faee13, "efuse_read_1byte" },
	{ 0x33c2abff, "dm_restorepowerindex" },
	{ 0x615beb4a, "rtl_process_phyinfo" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf3a19245, "rtl_cam_reset_all_entry" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0xbee279b2, "rtl92c_phy_query_bb_reg" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x41f152f4, "rtl92ce_phy_set_rf_on" },
	{ 0xa1775e72, "rtl_cam_empty_entry" },
	{ 0x65638934, "rtl_cam_del_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f7fc37d, "rtl92c_phy_rf_config" },
	{ 0x4de2a00d, "rtl_cam_mark_invalid" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xafc5f548, "_rtl_dbg_print" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc213b70e, "rtl92c_phy_set_io_cmd" },
	{ 0x83758fc8, "_rtl92c_store_pwrindex_diffrate_offset" },
	{ 0x4c846cbb, "rtl_rfreg_delay" },
	{ 0xc2c4156c, "rtl92c_download_fw" },
	{ 0x253c84ba, "rtl92c_set_fw_joinbss_report_cmd" },
	{ 0xf4b3386b, "rtlwifi_rate_mapping" },
	{ 0x8bbcc68f, "request_firmware_nowait" },
	{ 0x2713374c, "_rtl92c_phy_set_rf_sleep" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xdeeb5082, "rtl_signal_scale_mapping" },
	{ 0x27acbf49, "_rtl_dbg_print_data" },
	{ 0x62b0e84, "_rtl92c_phy_fw_rf_serial_write" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x406d264f, "dm_writepowerindex" },
	{ 0x1798757e, "rtl92c_set_fw_pwrmode_cmd" },
	{ 0x31db8fe1, "rtl92c_dm_rf_saving" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf4a6def3, "rtl_get_hwinfo" },
	{ 0x7157371b, "rtl_ps_enable_nic" },
	{ 0xdcb764ad, "memset" },
	{ 0x9e004829, "rtl92c_phy_set_bb_reg" },
	{ 0x2d134cd9, "rtl_usb_probe" },
	{ 0xbe5bc0a, "rtl92c_dm_init" },
	{ 0x9090fcf6, "rtl92c_phy_iq_calibrate" },
	{ 0x313dc054, "rtl92c_dm_init_edca_turbo" },
	{ 0x9f593884, "rtl_phy_scan_operation_backup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xed7c8cf2, "rtl_evm_db_to_percentage" },
	{ 0x58c44918, "rtl_cam_add_one_entry" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x30a956d7, "rtl_query_rxpwrpercentage" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x31e96383, "rtl92c_phy_lc_calibrate" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7e793461, "rtl92c_phy_set_bw_mode" },
	{ 0xfc03048, "_rtl92c_phy_rf_serial_read" },
	{ 0x303b7e68, "rtl_get_tcb_desc" },
	{ 0xde2b3568, "_rtl92c_phy_rf_serial_write" },
	{ 0xd20a5ca2, "_rtl92c_phy_init_bb_rf_register_definition" },
	{ 0x461ae56e, "rtl92c_dm_watchdog" },
	{ 0x5d61593d, "rtl_ps_disable_nic" },
	{ 0xed284ac7, "rtl92c_dm_check_txpower_tracking" },
	{ 0x865670cf, "rtl92c_set_fw_rsvdpagepkt" },
	{ 0x7903bb71, "rtl92c_phy_set_txpower_level" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xa8d8e9de, "_rtl92c_phy_fw_rf_serial_read" },
	{ 0x82a27ab7, "rtl_usb_disconnect" },
	{ 0x843cba38, "rtl92c_phy_set_rfpath_switch" },
	{ 0x9751ea3d, "rtl_cam_get_free_entry" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x8ea60059, "rtl_fw_cb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xda861c4, "rtl_cam_delete_one_entry" },
	{ 0x2eeceda9, "ieee80211_rx_napi" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rtlwifi,rtl8192c-common,rtl_usb,mac80211");

MODULE_ALIAS("usb:v0BDAp8191d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp018Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8176d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8177d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp818Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp819Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8754d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp11F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8188d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8189d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17BAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp5088d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p005Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0077d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4856p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v103Cp1629d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3357d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p4902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p648Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3358d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3359d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp317Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p341Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846pF001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17ABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8186d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p624Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7822d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C0156F396D4B436BC55D6C4");
