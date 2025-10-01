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

KSYMTAB_FUNC(mt76x2_read_rx_gain, "_gpl", "");
KSYMTAB_FUNC(mt76x2_get_rate_power, "_gpl", "");
KSYMTAB_FUNC(mt76x2_get_power_info, "_gpl", "");
KSYMTAB_FUNC(mt76x2_get_temp_comp, "_gpl", "");
KSYMTAB_FUNC(mt76x2_eeprom_init, "_gpl", "");
KSYMTAB_FUNC(mt76x2_mac_stop, "_gpl", "");
KSYMTAB_FUNC(mt76x2_set_sar_specs, "_gpl", "");
KSYMTAB_FUNC(mt76x2_reset_wlan, "_gpl", "");
KSYMTAB_FUNC(mt76_write_mac_initvals, "_gpl", "");
KSYMTAB_FUNC(mt76x2_init_txpower, "_gpl", "");
KSYMTAB_FUNC(mt76x2_apply_gain_adj, "_gpl", "");
KSYMTAB_FUNC(mt76x2_phy_set_txpower_regs, "_gpl", "");
KSYMTAB_FUNC(mt76x2_phy_set_txpower, "_gpl", "");
KSYMTAB_FUNC(mt76x2_configure_tx_delay, "_gpl", "");
KSYMTAB_FUNC(mt76x2_phy_tssi_compensate, "_gpl", "");
KSYMTAB_FUNC(mt76x2_phy_update_channel_gain, "_gpl", "");
KSYMTAB_FUNC(mt76x2_mcu_set_channel, "_gpl", "");
KSYMTAB_FUNC(mt76x2_mcu_load_cr, "_gpl", "");
KSYMTAB_FUNC(mt76x2_mcu_init_gain, "_gpl", "");
KSYMTAB_FUNC(mt76x2_mcu_tssi_comp, "_gpl", "");

SYMBOL_CRC(mt76x2_read_rx_gain, 0x56f438c7, "_gpl");
SYMBOL_CRC(mt76x2_get_rate_power, 0x90198adb, "_gpl");
SYMBOL_CRC(mt76x2_get_power_info, 0xda534fd9, "_gpl");
SYMBOL_CRC(mt76x2_get_temp_comp, 0xadba0247, "_gpl");
SYMBOL_CRC(mt76x2_eeprom_init, 0x1af3faf9, "_gpl");
SYMBOL_CRC(mt76x2_mac_stop, 0x8ed18b82, "_gpl");
SYMBOL_CRC(mt76x2_set_sar_specs, 0x0718dc35, "_gpl");
SYMBOL_CRC(mt76x2_reset_wlan, 0xe43d6b61, "_gpl");
SYMBOL_CRC(mt76_write_mac_initvals, 0x091181ba, "_gpl");
SYMBOL_CRC(mt76x2_init_txpower, 0x48e20925, "_gpl");
SYMBOL_CRC(mt76x2_apply_gain_adj, 0x127f4799, "_gpl");
SYMBOL_CRC(mt76x2_phy_set_txpower_regs, 0x7e8c7fc5, "_gpl");
SYMBOL_CRC(mt76x2_phy_set_txpower, 0xc37836f8, "_gpl");
SYMBOL_CRC(mt76x2_configure_tx_delay, 0xd12ebcf6, "_gpl");
SYMBOL_CRC(mt76x2_phy_tssi_compensate, 0x3b0845be, "_gpl");
SYMBOL_CRC(mt76x2_phy_update_channel_gain, 0x239f80d8, "_gpl");
SYMBOL_CRC(mt76x2_mcu_set_channel, 0x16c5b9d5, "_gpl");
SYMBOL_CRC(mt76x2_mcu_load_cr, 0x83745cd6, "_gpl");
SYMBOL_CRC(mt76x2_mcu_init_gain, 0x4374bb43, "_gpl");
SYMBOL_CRC(mt76x2_mcu_tssi_comp, 0xf41546ed, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x84c8285a, "mt76_init_sar_power" },
	{ 0xe1b0d9db, "mt76x02_phy_adjust_vga_gain" },
	{ 0xd49bfa3c, "mt76x02_phy_dfs_adjust_agc" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x538f32f2, "cfg80211_chandef_valid" },
	{ 0xbc34dce2, "mt76x02_ext_pa_enabled" },
	{ 0x53634030, "mt76x02_get_efuse_data" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x55761422, "mt76x02_get_rx_gain" },
	{ 0x75fef85d, "mt76x02_add_rate_power_offset" },
	{ 0x3f8d88c7, "mt76_eeprom_init" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x93c7aad7, "mt76x02_eeprom_parse_hw_cap" },
	{ 0xab1a00a2, "mt76_mcu_send_and_get_msg" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0xcabae421, "mt76_eeprom_override" },
	{ 0x28a84ba5, "mt76x02_get_lna_gain" },
	{ 0xdcb764ad, "memset" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x682d24a7, "mt76_get_sar_power" },
	{ 0xe9fd1202, "mt76x02_eeprom_copy" },
	{ 0x991c75dc, "mt76x02_mcu_calibrate" },
	{ 0x6540df7c, "mt76x02_phy_set_txpower" },
	{ 0xad5d3ba8, "mt76x02_get_max_rate_power" },
	{ 0x93c479bc, "mt76x02_limit_rate_power" },
	{ 0xd55598d3, "mt76_get_min_avg_rssi" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mt76,mt76x02-lib,cfg80211");


MODULE_INFO(srcversion, "539D28121D9F13BE1DFE0F3");
