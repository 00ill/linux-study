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

KSYMTAB_DATA(rtw8852c_chip_info, "", "");

SYMBOL_CRC(rtw8852c_chip_info, 0x2ee4b1da, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x2cf4e6c1, "rtw89_mac_cfg_gnt_v1" },
	{ 0xfab23c2c, "rtw89_phy_write_rf_v1" },
	{ 0x3aa9cf14, "rtw89_phy_tssi_ctrl_set_bandedge_cfg" },
	{ 0x2f8739ec, "rtw89_fw_h2c_default_cmac_tbl" },
	{ 0x3a8572e0, "rtw89_decode_chan_idx" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x4c5e2dd1, "rtw89_phy_get_txsc" },
	{ 0xe41a2c51, "rtw89_phy_load_txpwr_byrate" },
	{ 0x1f4fa63a, "rtw89_fw_h2c_dctl_sec_cam_v1" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xea2eaa9f, "rtw89_mac_gen_ax" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x71865b58, "rtw89_core_query_rxdesc" },
	{ 0xd26fc521, "rtw89_phy_write32_idx" },
	{ 0x49a0f9f1, "rtw89_btc_set_policy_v1" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x40718856, "rtw89_mac_stop_sch_tx_v1" },
	{ 0x133e8e0, "rtw89_mac_resume_sch_tx_v1" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x46967a00, "rtw89_fw_blacklist_default" },
	{ 0xc9413520, "rtw89_mac_coex_init_v1" },
	{ 0x9552c42e, "rtw89_phy_gen_ax" },
	{ 0xdd4e8913, "rtw89_core_fill_txdesc_fwcmd_v1" },
	{ 0x1c574ea8, "rtw89_fw_h2c_rf_ntfy_mcc" },
	{ 0x6d852cf4, "rtw89_fw_h2c_assoc_cmac_tbl" },
	{ 0xd40e6c7a, "rtw89_fw_h2c_update_beacon" },
	{ 0x1c969ca4, "rtw89_btc_ntfy_wl_rfk" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x697e774d, "rtw89_rfk_parser" },
	{ 0x9af1f109, "rtw89_encode_chan_idx" },
	{ 0x82ecfe03, "rtw89_mac_cfg_ctrl_path_v1" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0x8c76a5cb, "rtw89_phy_read_rf_v1" },
	{ 0x8042eefb, "rtw89_mac_size" },
	{ 0xac56fea9, "rtw89_fw_h2c_ba_cam" },
	{ 0xff310fdf, "rtw89_core_fill_txdesc_v1" },
	{ 0x4ccca5cc, "rtw89_rfk_chan_lookup" },
	{ 0xc8c589e7, "rtw89_phy_config_rf_reg_v1" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rtw89_core,cfg80211");


MODULE_INFO(srcversion, "A33F3F45D2281CBB808753A");
