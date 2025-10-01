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

KSYMTAB_FUNC(dm_restorepowerindex, "_gpl", "");
KSYMTAB_FUNC(dm_writepowerindex, "_gpl", "");
KSYMTAB_FUNC(dm_savepowerindex, "_gpl", "");
KSYMTAB_FUNC(rtl92c_dm_write_dig, "", "");
KSYMTAB_FUNC(rtl92c_dm_init_edca_turbo, "", "");
KSYMTAB_FUNC(rtl92c_dm_check_txpower_tracking, "", "");
KSYMTAB_FUNC(rtl92c_dm_init_rate_adaptive_mask, "", "");
KSYMTAB_FUNC(rtl92c_dm_rf_saving, "", "");
KSYMTAB_FUNC(rtl92c_dm_init, "", "");
KSYMTAB_FUNC(rtl92c_dm_watchdog, "", "");
KSYMTAB_FUNC(rtl92c_bt_rssi_state_change, "", "");
KSYMTAB_FUNC(rtl92c_dm_bt_coexist, "", "");
KSYMTAB_FUNC(rtl92c_download_fw, "", "");
KSYMTAB_FUNC(rtl92c_fill_h2c_cmd, "", "");
KSYMTAB_FUNC(rtl92c_firmware_selfreset, "", "");
KSYMTAB_FUNC(rtl92c_set_fw_pwrmode_cmd, "", "");
KSYMTAB_FUNC(rtl92c_set_fw_rsvdpagepkt, "", "");
KSYMTAB_FUNC(rtl92c_set_fw_joinbss_report_cmd, "", "");
KSYMTAB_FUNC(rtl92c_set_p2p_ps_offload_cmd, "_gpl", "");
KSYMTAB_FUNC(rtl92c_phy_query_bb_reg, "", "");
KSYMTAB_FUNC(rtl92c_phy_set_bb_reg, "", "");
KSYMTAB_FUNC(_rtl92c_phy_fw_rf_serial_read, "", "");
KSYMTAB_FUNC(_rtl92c_phy_fw_rf_serial_write, "", "");
KSYMTAB_FUNC(_rtl92c_phy_rf_serial_read, "", "");
KSYMTAB_FUNC(_rtl92c_phy_rf_serial_write, "", "");
KSYMTAB_FUNC(rtl92c_phy_rf_config, "", "");
KSYMTAB_FUNC(_rtl92c_phy_bb8192c_config_parafile, "", "");
KSYMTAB_FUNC(_rtl92c_store_pwrindex_diffrate_offset, "", "");
KSYMTAB_FUNC(_rtl92c_phy_init_bb_rf_register_definition, "", "");
KSYMTAB_FUNC(rtl92c_phy_set_txpower_level, "", "");
KSYMTAB_FUNC(rtl92c_phy_update_txpower_dbm, "", "");
KSYMTAB_FUNC(_rtl92c_phy_dbm_to_txpwr_idx, "", "");
KSYMTAB_FUNC(_rtl92c_phy_txpwr_idx_to_dbm, "", "");
KSYMTAB_FUNC(rtl92c_phy_set_bw_mode, "", "");
KSYMTAB_FUNC(rtl92c_phy_sw_chnl_callback, "", "");
KSYMTAB_FUNC(rtl92c_phy_sw_chnl, "", "");
KSYMTAB_FUNC(rtl8192_phy_check_is_legal_rfpath, "", "");
KSYMTAB_FUNC(rtl92c_phy_iq_calibrate, "", "");
KSYMTAB_FUNC(rtl92c_phy_lc_calibrate, "", "");
KSYMTAB_FUNC(rtl92c_phy_ap_calibrate, "", "");
KSYMTAB_FUNC(rtl92c_phy_set_rfpath_switch, "", "");
KSYMTAB_FUNC(rtl92c_phy_set_io_cmd, "", "");
KSYMTAB_FUNC(rtl92c_phy_set_io, "", "");
KSYMTAB_FUNC(rtl92ce_phy_set_rf_on, "", "");
KSYMTAB_FUNC(_rtl92c_phy_set_rf_sleep, "", "");

SYMBOL_CRC(dm_restorepowerindex, 0x33c2abff, "_gpl");
SYMBOL_CRC(dm_writepowerindex, 0x406d264f, "_gpl");
SYMBOL_CRC(dm_savepowerindex, 0xf6fcbc02, "_gpl");
SYMBOL_CRC(rtl92c_dm_write_dig, 0xd0a6f1ac, "");
SYMBOL_CRC(rtl92c_dm_init_edca_turbo, 0x313dc054, "");
SYMBOL_CRC(rtl92c_dm_check_txpower_tracking, 0xed284ac7, "");
SYMBOL_CRC(rtl92c_dm_init_rate_adaptive_mask, 0x6ac8a075, "");
SYMBOL_CRC(rtl92c_dm_rf_saving, 0x31db8fe1, "");
SYMBOL_CRC(rtl92c_dm_init, 0x0be5bc0a, "");
SYMBOL_CRC(rtl92c_dm_watchdog, 0x461ae56e, "");
SYMBOL_CRC(rtl92c_bt_rssi_state_change, 0x1c4ebe69, "");
SYMBOL_CRC(rtl92c_dm_bt_coexist, 0x561a7ca3, "");
SYMBOL_CRC(rtl92c_download_fw, 0xc2c4156c, "");
SYMBOL_CRC(rtl92c_fill_h2c_cmd, 0xb67fd96d, "");
SYMBOL_CRC(rtl92c_firmware_selfreset, 0x204cc4bc, "");
SYMBOL_CRC(rtl92c_set_fw_pwrmode_cmd, 0x1798757e, "");
SYMBOL_CRC(rtl92c_set_fw_rsvdpagepkt, 0x865670cf, "");
SYMBOL_CRC(rtl92c_set_fw_joinbss_report_cmd, 0x253c84ba, "");
SYMBOL_CRC(rtl92c_set_p2p_ps_offload_cmd, 0x412bc823, "_gpl");
SYMBOL_CRC(rtl92c_phy_query_bb_reg, 0xbee279b2, "");
SYMBOL_CRC(rtl92c_phy_set_bb_reg, 0x9e004829, "");
SYMBOL_CRC(_rtl92c_phy_fw_rf_serial_read, 0xa8d8e9de, "");
SYMBOL_CRC(_rtl92c_phy_fw_rf_serial_write, 0x062b0e84, "");
SYMBOL_CRC(_rtl92c_phy_rf_serial_read, 0x0fc03048, "");
SYMBOL_CRC(_rtl92c_phy_rf_serial_write, 0xde2b3568, "");
SYMBOL_CRC(rtl92c_phy_rf_config, 0x3f7fc37d, "");
SYMBOL_CRC(_rtl92c_phy_bb8192c_config_parafile, 0x864471a5, "");
SYMBOL_CRC(_rtl92c_store_pwrindex_diffrate_offset, 0x83758fc8, "");
SYMBOL_CRC(_rtl92c_phy_init_bb_rf_register_definition, 0xd20a5ca2, "");
SYMBOL_CRC(rtl92c_phy_set_txpower_level, 0x7903bb71, "");
SYMBOL_CRC(rtl92c_phy_update_txpower_dbm, 0x8ffef890, "");
SYMBOL_CRC(_rtl92c_phy_dbm_to_txpwr_idx, 0x3db4ac56, "");
SYMBOL_CRC(_rtl92c_phy_txpwr_idx_to_dbm, 0x69a7d71e, "");
SYMBOL_CRC(rtl92c_phy_set_bw_mode, 0x7e793461, "");
SYMBOL_CRC(rtl92c_phy_sw_chnl_callback, 0x6f5ff473, "");
SYMBOL_CRC(rtl92c_phy_sw_chnl, 0xaac829be, "");
SYMBOL_CRC(rtl8192_phy_check_is_legal_rfpath, 0xabeec1b7, "");
SYMBOL_CRC(rtl92c_phy_iq_calibrate, 0x9090fcf6, "");
SYMBOL_CRC(rtl92c_phy_lc_calibrate, 0x31e96383, "");
SYMBOL_CRC(rtl92c_phy_ap_calibrate, 0x3ff8d06b, "");
SYMBOL_CRC(rtl92c_phy_set_rfpath_switch, 0x843cba38, "");
SYMBOL_CRC(rtl92c_phy_set_io_cmd, 0xc213b70e, "");
SYMBOL_CRC(rtl92c_phy_set_io, 0xe83a128c, "");
SYMBOL_CRC(rtl92ce_phy_set_rf_on, 0x41f152f4, "");
SYMBOL_CRC(_rtl92c_phy_set_rf_sleep, 0x2713374c, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4367c3a1, "skb_put" },
	{ 0xcca82f1, "rtl_fw_block_write" },
	{ 0x4829a47e, "memcpy" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xafc5f548, "_rtl_dbg_print" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x24fa6687, "rtl_cmd_send_packet" },
	{ 0x27acbf49, "_rtl_dbg_print_data" },
	{ 0xae973240, "rtl_fw_page_write" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffdc071e, "rtl_dm_diginit" },
	{ 0x2e5382f9, "rtl_fill_dummy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rtlwifi");


MODULE_INFO(srcversion, "B08EAA805B0AB0630BCBC30");
