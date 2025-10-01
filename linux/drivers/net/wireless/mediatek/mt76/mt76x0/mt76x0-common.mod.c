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

KSYMTAB_FUNC(mt76x0_chip_onoff, "_gpl", "");
KSYMTAB_FUNC(mt76x0_mac_stop, "_gpl", "");
KSYMTAB_FUNC(mt76x0_init_hardware, "_gpl", "");
KSYMTAB_FUNC(mt76x0_register_device, "_gpl", "");
KSYMTAB_FUNC(mt76x0_set_channel, "_gpl", "");
KSYMTAB_FUNC(mt76x0_set_sar_specs, "_gpl", "");
KSYMTAB_FUNC(mt76x0_config, "_gpl", "");
KSYMTAB_FUNC(mt76x0_phy_calibrate, "_gpl", "");

SYMBOL_CRC(mt76x0_chip_onoff, 0x49f2aaaa, "_gpl");
SYMBOL_CRC(mt76x0_mac_stop, 0xdff2ed39, "_gpl");
SYMBOL_CRC(mt76x0_init_hardware, 0xf7c2df80, "_gpl");
SYMBOL_CRC(mt76x0_register_device, 0x718bf81d, "_gpl");
SYMBOL_CRC(mt76x0_set_channel, 0x755efd66, "_gpl");
SYMBOL_CRC(mt76x0_set_sar_specs, 0x1f0aa8f7, "_gpl");
SYMBOL_CRC(mt76x0_config, 0xdf9f3b08, "_gpl");
SYMBOL_CRC(mt76x0_phy_calibrate, 0x037ba6e0, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdc760bb4, "mt76_update_channel" },
	{ 0x84c8285a, "mt76_init_sar_power" },
	{ 0xe1b0d9db, "mt76x02_phy_adjust_vga_gain" },
	{ 0xd49bfa3c, "mt76x02_phy_dfs_adjust_agc" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x538f32f2, "cfg80211_chandef_valid" },
	{ 0x420200c6, "mt76x02_mac_shared_key_setup" },
	{ 0xbc34dce2, "mt76x02_ext_pa_enabled" },
	{ 0x53634030, "mt76x02_get_efuse_data" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x55761422, "mt76x02_get_rx_gain" },
	{ 0x75fef85d, "mt76x02_add_rate_power_offset" },
	{ 0x6ca3449c, "ieee80211_queue_delayed_work" },
	{ 0x3f8d88c7, "mt76_eeprom_init" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9be4e640, "mt76x02_mac_setaddr" },
	{ 0xc9309635, "mt76_register_device" },
	{ 0xf9b49641, "mt76x02_phy_set_bw" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x778edb41, "mt76x02_phy_set_band" },
	{ 0xa637aa71, "mt76x02_init_device" },
	{ 0x93c7aad7, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x74c5cbcd, "mt76x02_phy_set_rxpath" },
	{ 0xfc9f3d76, "mt76x02_edcca_init" },
	{ 0xcabae421, "mt76_eeprom_override" },
	{ 0x28a84ba5, "mt76x02_get_lna_gain" },
	{ 0x93587edd, "mt76x02_init_debugfs" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x18adfa01, "mt76x02_mac_cc_reset" },
	{ 0xde6d9e4c, "mt76x02_init_agc_gain" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa2c08f22, "____mt76_poll_msec" },
	{ 0x534afc4e, "mt76x02_dfs_init_params" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xaf8fc79c, "mt76x02_config_mac_addr_list" },
	{ 0x682d24a7, "mt76_get_sar_power" },
	{ 0xe9fd1202, "mt76x02_eeprom_copy" },
	{ 0x991c75dc, "mt76x02_mcu_calibrate" },
	{ 0x9c6043c4, "mt76x02_mcu_function_select" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x6540df7c, "mt76x02_phy_set_txpower" },
	{ 0xad5d3ba8, "mt76x02_get_max_rate_power" },
	{ 0xc3135740, "mt76x02_mac_wcid_setup" },
	{ 0x88ec4249, "__mt76_poll" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x56a36ff1, "mt76x02_phy_set_txdac" },
	{ 0x93c479bc, "mt76x02_limit_rate_power" },
	{ 0xd55598d3, "mt76_get_min_avg_rssi" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0xf9a482f9, "msleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mt76,mt76x02-lib,cfg80211,mac80211");


MODULE_INFO(srcversion, "F55B773250042EFF4C9B69C");
