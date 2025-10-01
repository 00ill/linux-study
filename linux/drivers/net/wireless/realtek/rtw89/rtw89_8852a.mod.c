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

KSYMTAB_DATA(rtw8852a_chip_info, "", "");

SYMBOL_CRC(rtw8852a_chip_info, 0xc2df2f45, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x56d52b3c, "rtw89_mac_enable_bb_rf" },
	{ 0x282af7a4, "rtw89_mac_cfg_gnt" },
	{ 0x2f8739ec, "rtw89_fw_h2c_default_cmac_tbl" },
	{ 0x5b8cf6ea, "rtw89_core_fill_txdesc" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x4c5e2dd1, "rtw89_phy_get_txsc" },
	{ 0xe41a2c51, "rtw89_phy_load_txpwr_byrate" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xea2eaa9f, "rtw89_mac_gen_ax" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xed59b2bc, "rtw89_mac_coex_init" },
	{ 0xb855444, "rtw89_phy_read_rf" },
	{ 0x71865b58, "rtw89_core_query_rxdesc" },
	{ 0xd26fc521, "rtw89_phy_write32_idx" },
	{ 0x79528f43, "rtw89_phy_read_txpwr_limit" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xfd5c847a, "rtw89_phy_write_reg3_tbl" },
	{ 0x9552c42e, "rtw89_phy_gen_ax" },
	{ 0x6d852cf4, "rtw89_fw_h2c_assoc_cmac_tbl" },
	{ 0xd40e6c7a, "rtw89_fw_h2c_update_beacon" },
	{ 0x425eecbb, "rtw89_mac_disable_bb_rf" },
	{ 0x1c969ca4, "rtw89_btc_ntfy_wl_rfk" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x697e774d, "rtw89_rfk_parser" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0x44572030, "rtw89_mac_resume_sch_tx" },
	{ 0x6fdff43d, "rtw89_phy_write_rf" },
	{ 0xee2cf716, "rtw89_mac_cfg_ctrl_path" },
	{ 0x8042eefb, "rtw89_mac_size" },
	{ 0xac56fea9, "rtw89_fw_h2c_ba_cam" },
	{ 0x1db72389, "rtw89_mac_stop_sch_tx" },
	{ 0x895100ca, "rtw89_btc_set_policy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rtw89_core,cfg80211");


MODULE_INFO(srcversion, "DA7D8D75899FA6C7DE40CDF");
