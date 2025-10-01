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

KSYMTAB_DATA(rtw8922a_chip_info, "", "");

SYMBOL_CRC(rtw8922a_chip_info, 0xd29f0267, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4ad2fdb7, "rtw89_fw_h2c_ba_cam_v1" },
	{ 0x1be1e689, "rtw89_phy_rfk_pre_ntfy_and_wait" },
	{ 0x42da6d9, "rtw89_core_fill_txdesc_v2" },
	{ 0x47a0cff4, "rtw89_phy_rfk_iqk_and_wait" },
	{ 0xd8d1f2b8, "rtw89_phy_set_phy_regs" },
	{ 0x597d8f6b, "rtw89_fw_h2c_ampdu_cmac_tbl_g7" },
	{ 0x3a8572e0, "rtw89_decode_chan_idx" },
	{ 0xe6605b6b, "rtw89_mac_gen_be" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x4b5cfc6c, "rtw89_phy_rfk_rxdck_and_wait" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc59f1bc6, "rtw89_phy_rfk_dpk_and_wait" },
	{ 0xb6951cb9, "rtw89_phy_rfk_tssi_and_wait" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x40e13f6f, "rtw89_mac_cfg_ctrl_path_v2" },
	{ 0x458272e9, "rtw89_phy_write_rf_v2" },
	{ 0xff2b4ed8, "rtw89_core_query_rxdesc_v2" },
	{ 0xd1e80c87, "rtw89_phy_read_rf_v2" },
	{ 0x457338f5, "rtw89_mac_cfg_gnt_v2" },
	{ 0xd26fc521, "rtw89_phy_write32_idx" },
	{ 0x49a0f9f1, "rtw89_btc_set_policy_v1" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x939092d8, "rtw89_phy_get_txsb" },
	{ 0x46967a00, "rtw89_fw_blacklist_default" },
	{ 0x26522015, "rtw89_core_fill_txdesc_fwcmd_v2" },
	{ 0x1c969ca4, "rtw89_btc_ntfy_wl_rfk" },
	{ 0x4ae23851, "rtw89_efuse_read_fw_secure_be" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9af1f109, "rtw89_encode_chan_idx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8544c06e, "rtw89_fw_h2c_default_dmac_tbl_v2" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7d68eb2, "rtw89_fw_h2c_default_cmac_tbl_g7" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0x8042eefb, "rtw89_mac_size" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x79871712, "rtw89_phy_rfk_dack_and_wait" },
	{ 0x427e9719, "rtw89_fw_h2c_update_beacon_be" },
	{ 0xcc58fb00, "rtw89_fw_h2c_assoc_cmac_tbl_g7" },
	{ 0x528e4389, "rtw89_mac_stop_sch_tx_v2" },
	{ 0xf4b4410e, "rtw89_mac_resume_sch_tx_v2" },
	{ 0x6c5021c7, "rtw89_phy_rfk_txgapk_and_wait" },
	{ 0xdaf1c760, "rtw89_phy_get_syn_sel" },
	{ 0x4512ac38, "rtw89_fw_h2c_dctl_sec_cam_v2" },
	{ 0xcc67f3a1, "rtw89_phy_gen_be" },
	{ 0x4ccca5cc, "rtw89_rfk_chan_lookup" },
	{ 0xd807561f, "rtw89_phy_get_kpath" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rtw89_core,cfg80211");


MODULE_INFO(srcversion, "75CB9207A34235D867FC286");
