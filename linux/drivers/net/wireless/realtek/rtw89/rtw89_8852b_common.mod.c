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

KSYMTAB_DATA(rtw8852bx_info, "", "");

SYMBOL_CRC(rtw8852bx_info, 0x6a895528, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe44a7282, "rtw89_db_2_linear" },
	{ 0x39a59ead, "rtw89_phy_read32_idx" },
	{ 0x3a8572e0, "rtw89_decode_chan_idx" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x4c5e2dd1, "rtw89_phy_get_txsc" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xed59b2bc, "rtw89_mac_coex_init" },
	{ 0xd26fc521, "rtw89_phy_write32_idx" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xfd5c847a, "rtw89_phy_write_reg3_tbl" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9af1f109, "rtw89_encode_chan_idx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0x8b2996f1, "rtw89_linear_2_db" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rtw89_core,cfg80211");


MODULE_INFO(srcversion, "CC3409CDF5841B0E1EF89AD");
