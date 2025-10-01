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

KSYMTAB_DATA(rtw8852bt_chip_info, "", "");

SYMBOL_CRC(rtw8852bt_chip_info, 0x711c9b5d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x282af7a4, "rtw89_mac_cfg_gnt" },
	{ 0xfab23c2c, "rtw89_phy_write_rf_v1" },
	{ 0x2f8739ec, "rtw89_fw_h2c_default_cmac_tbl" },
	{ 0x5b8cf6ea, "rtw89_core_fill_txdesc" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xea2eaa9f, "rtw89_mac_gen_ax" },
	{ 0x6a895528, "rtw8852bx_info" },
	{ 0x71865b58, "rtw89_core_query_rxdesc" },
	{ 0xd26fc521, "rtw89_phy_write32_idx" },
	{ 0x49a0f9f1, "rtw89_btc_set_policy_v1" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdcb764ad, "memset" },
	{ 0x46967a00, "rtw89_fw_blacklist_default" },
	{ 0x9552c42e, "rtw89_phy_gen_ax" },
	{ 0x6d852cf4, "rtw89_fw_h2c_assoc_cmac_tbl" },
	{ 0xd40e6c7a, "rtw89_fw_h2c_update_beacon" },
	{ 0x1c969ca4, "rtw89_btc_ntfy_wl_rfk" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x697e774d, "rtw89_rfk_parser" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x44572030, "rtw89_mac_resume_sch_tx" },
	{ 0x8c76a5cb, "rtw89_phy_read_rf_v1" },
	{ 0xee2cf716, "rtw89_mac_cfg_ctrl_path" },
	{ 0x8042eefb, "rtw89_mac_size" },
	{ 0xac56fea9, "rtw89_fw_h2c_ba_cam" },
	{ 0x1db72389, "rtw89_mac_stop_sch_tx" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rtw89_core,rtw89_8852b_common");


MODULE_INFO(srcversion, "C01A19326F4E419433599D0");
