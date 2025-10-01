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

KSYMTAB_DATA(rtw8822c_hw_spec, "", "");

SYMBOL_CRC(rtw8822c_hw_spec, 0x23ec629f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xaf46e406, "rtw_phy_config_swing_table" },
	{ 0xbd71b283, "rtw_phy_init" },
	{ 0xcbb432e6, "rtw_fw_inform_rfk_status" },
	{ 0x390b2a7e, "rtw_dump_reg" },
	{ 0x3c89c466, "rtw_parse_tbl_phy_cond" },
	{ 0x41de0330, "rtw_phy_pwrtrack_get_pwridx" },
	{ 0x1979e856, "rtw_phy_cfg_mac" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xa667ddf0, "rtw_coex_write_indirect_reg" },
	{ 0x3afd40da, "check_hw_ready" },
	{ 0x944ae17b, "rtw_phy_pwrtrack_get_delta" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa7892f9, "rtw_phy_cfg_rf" },
	{ 0xe91f9113, "rtw_phy_cfg_bb" },
	{ 0x944a76a1, "rtw_restore_reg" },
	{ 0x911a4ea0, "rtw_bf_cfg_csi_rate" },
	{ 0x26182c49, "rtw_set_rx_freq_band" },
	{ 0x669c413b, "_dev_err" },
	{ 0xb92f2953, "rtw_bf_remove_bfee_mu" },
	{ 0xf1f8a113, "rtw_bf_remove_bfee_su" },
	{ 0xc49804bf, "rtw_bf_enable_bfee_mu" },
	{ 0xbc62b6ac, "rtw_coex_read_indirect_reg" },
	{ 0xa66ac6c6, "rtw_phy_cfg_agc" },
	{ 0x43f3cb5a, "rtw_phy_pwrtrack_need_lck" },
	{ 0xf485f978, "rtw_phy_read_rf" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xacc9db, "rtw_phy_parsing_cfo" },
	{ 0xca625403, "rtw_dump_fw" },
	{ 0xbdce8285, "rtw_bf_enable_bfee_su" },
	{ 0xf9e3596c, "rtw_read8_physical_efuse" },
	{ 0x2e94dc29, "rtw_fw_do_iqk" },
	{ 0x58210e60, "rtw_rate_section" },
	{ 0x83783cf, "rtw_phy_pwrtrack_avg" },
	{ 0x440b7589, "rtw_phy_rf_power_2_rssi" },
	{ 0xf88afade, "rtw_bf_set_gid_table" },
	{ 0x519c8ba9, "rtw_rate_size" },
	{ 0x47c6b033, "rtw_parse_tbl_txpwr_lmt" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfdab54b6, "rtw_phy_set_edcca_th" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4e00d9a5, "rtw_bf_phy_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0x80351814, "rtw_phy_load_tables" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xfc1c5526, "rtw_rx_fill_rx_status" },
	{ 0x88a73743, "rtw_parse_tbl_bb_pg" },
	{ 0x64fb3ec7, "rtw_phy_write_rf_reg_mix" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb171bd00, "rtw_set_channel_mac" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rtw88_core");


MODULE_INFO(srcversion, "00C00B5F15090D69C242F05");
