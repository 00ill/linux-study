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

KSYMTAB_FUNC(rt2800_mcu_request, "_gpl", "");
KSYMTAB_FUNC(rt2800_wait_csr_ready, "_gpl", "");
KSYMTAB_FUNC(rt2800_wait_wpdma_ready, "_gpl", "");
KSYMTAB_FUNC(rt2800_disable_wpdma, "_gpl", "");
KSYMTAB_FUNC(rt2800_get_txwi_rxwi_size, "_gpl", "");
KSYMTAB_FUNC(rt2800_check_firmware, "_gpl", "");
KSYMTAB_FUNC(rt2800_load_firmware, "_gpl", "");
KSYMTAB_FUNC(rt2800_write_tx_data, "_gpl", "");
KSYMTAB_FUNC(rt2800_process_rxwi, "_gpl", "");
KSYMTAB_FUNC(rt2800_txdone_entry, "_gpl", "");
KSYMTAB_FUNC(rt2800_txdone, "_gpl", "");
KSYMTAB_FUNC(rt2800_txstatus_timeout, "_gpl", "");
KSYMTAB_FUNC(rt2800_txstatus_pending, "_gpl", "");
KSYMTAB_FUNC(rt2800_txdone_nostatus, "_gpl", "");
KSYMTAB_FUNC(rt2800_watchdog, "_gpl", "");
KSYMTAB_FUNC(rt2800_write_beacon, "_gpl", "");
KSYMTAB_FUNC(rt2800_clear_beacon, "_gpl", "");
KSYMTAB_FUNC(rt2800_rfkill_poll, "_gpl", "");
KSYMTAB_FUNC(rt2800_config_shared_key, "_gpl", "");
KSYMTAB_FUNC(rt2800_config_pairwise_key, "_gpl", "");
KSYMTAB_FUNC(rt2800_sta_add, "_gpl", "");
KSYMTAB_FUNC(rt2800_sta_remove, "_gpl", "");
KSYMTAB_FUNC(rt2800_pre_reset_hw, "_gpl", "");
KSYMTAB_FUNC(rt2800_config_filter, "_gpl", "");
KSYMTAB_FUNC(rt2800_config_intf, "_gpl", "");
KSYMTAB_FUNC(rt2800_config_erp, "_gpl", "");
KSYMTAB_FUNC(rt2800_config_ant, "_gpl", "");
KSYMTAB_FUNC(rt2800_gain_calibration, "_gpl", "");
KSYMTAB_FUNC(rt2800_vco_calibration, "_gpl", "");
KSYMTAB_FUNC(rt2800_config, "_gpl", "");
KSYMTAB_FUNC(rt2800_link_stats, "_gpl", "");
KSYMTAB_FUNC(rt2800_reset_tuner, "_gpl", "");
KSYMTAB_FUNC(rt2800_link_tuner, "_gpl", "");
KSYMTAB_FUNC(rt2800_enable_radio, "_gpl", "");
KSYMTAB_FUNC(rt2800_disable_radio, "_gpl", "");
KSYMTAB_FUNC(rt2800_efuse_detect, "_gpl", "");
KSYMTAB_FUNC(rt2800_read_eeprom_efuse, "_gpl", "");
KSYMTAB_FUNC(rt2800_probe_hw, "_gpl", "");
KSYMTAB_FUNC(rt2800_get_key_seq, "_gpl", "");
KSYMTAB_FUNC(rt2800_set_rts_threshold, "_gpl", "");
KSYMTAB_FUNC(rt2800_conf_tx, "_gpl", "");
KSYMTAB_FUNC(rt2800_get_tsf, "_gpl", "");
KSYMTAB_FUNC(rt2800_ampdu_action, "_gpl", "");
KSYMTAB_FUNC(rt2800_get_survey, "_gpl", "");

SYMBOL_CRC(rt2800_mcu_request, 0xe4c5eaec, "_gpl");
SYMBOL_CRC(rt2800_wait_csr_ready, 0x82ba91a5, "_gpl");
SYMBOL_CRC(rt2800_wait_wpdma_ready, 0xfd3883e4, "_gpl");
SYMBOL_CRC(rt2800_disable_wpdma, 0x1d426057, "_gpl");
SYMBOL_CRC(rt2800_get_txwi_rxwi_size, 0x9ce95213, "_gpl");
SYMBOL_CRC(rt2800_check_firmware, 0xed7f5f4d, "_gpl");
SYMBOL_CRC(rt2800_load_firmware, 0xaf12a281, "_gpl");
SYMBOL_CRC(rt2800_write_tx_data, 0x1dff4787, "_gpl");
SYMBOL_CRC(rt2800_process_rxwi, 0xd2ef7425, "_gpl");
SYMBOL_CRC(rt2800_txdone_entry, 0x03b1fc16, "_gpl");
SYMBOL_CRC(rt2800_txdone, 0x042af0d4, "_gpl");
SYMBOL_CRC(rt2800_txstatus_timeout, 0x7e4739c1, "_gpl");
SYMBOL_CRC(rt2800_txstatus_pending, 0x339ab187, "_gpl");
SYMBOL_CRC(rt2800_txdone_nostatus, 0x44319820, "_gpl");
SYMBOL_CRC(rt2800_watchdog, 0x216aed85, "_gpl");
SYMBOL_CRC(rt2800_write_beacon, 0x76f6893a, "_gpl");
SYMBOL_CRC(rt2800_clear_beacon, 0x0f2d7f5e, "_gpl");
SYMBOL_CRC(rt2800_rfkill_poll, 0x9ddd8354, "_gpl");
SYMBOL_CRC(rt2800_config_shared_key, 0xe7b5b630, "_gpl");
SYMBOL_CRC(rt2800_config_pairwise_key, 0xa5b4d01e, "_gpl");
SYMBOL_CRC(rt2800_sta_add, 0x3f8f8f3b, "_gpl");
SYMBOL_CRC(rt2800_sta_remove, 0x9e07588c, "_gpl");
SYMBOL_CRC(rt2800_pre_reset_hw, 0x4412c6e4, "_gpl");
SYMBOL_CRC(rt2800_config_filter, 0x622a2f16, "_gpl");
SYMBOL_CRC(rt2800_config_intf, 0xfedac242, "_gpl");
SYMBOL_CRC(rt2800_config_erp, 0xc9d29e62, "_gpl");
SYMBOL_CRC(rt2800_config_ant, 0xc7823a53, "_gpl");
SYMBOL_CRC(rt2800_gain_calibration, 0x275161ba, "_gpl");
SYMBOL_CRC(rt2800_vco_calibration, 0x3ee7b6cf, "_gpl");
SYMBOL_CRC(rt2800_config, 0x3aee1423, "_gpl");
SYMBOL_CRC(rt2800_link_stats, 0xe849fe07, "_gpl");
SYMBOL_CRC(rt2800_reset_tuner, 0x6ae370d5, "_gpl");
SYMBOL_CRC(rt2800_link_tuner, 0x7c765493, "_gpl");
SYMBOL_CRC(rt2800_enable_radio, 0x684ba7d8, "_gpl");
SYMBOL_CRC(rt2800_disable_radio, 0xf48e7ef7, "_gpl");
SYMBOL_CRC(rt2800_efuse_detect, 0x441d860d, "_gpl");
SYMBOL_CRC(rt2800_read_eeprom_efuse, 0x49547482, "_gpl");
SYMBOL_CRC(rt2800_probe_hw, 0xad9747de, "_gpl");
SYMBOL_CRC(rt2800_get_key_seq, 0xcf1c5e8c, "_gpl");
SYMBOL_CRC(rt2800_set_rts_threshold, 0x8cc1f333, "_gpl");
SYMBOL_CRC(rt2800_conf_tx, 0xf92fd4b6, "_gpl");
SYMBOL_CRC(rt2800_get_tsf, 0x46084c3c, "_gpl");
SYMBOL_CRC(rt2800_ampdu_action, 0x49154e72, "_gpl");
SYMBOL_CRC(rt2800_get_survey, 0xc6c44deb, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x669c413b, "_dev_err" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xfb86fc23, "rt2x00lib_txdone_nomatch" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x9922e6a2, "rt2x00lib_txdone" },
	{ 0xd76f3f4d, "rt2x00queue_get_entry" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x229ae0a3, "rt2x00lib_get_bssidx" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x6cb3ec99, "rt2x00mac_conf_tx" },
	{ 0xaeb98a5e, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd10b6bdc, "rt2x00lib_txdone_noinfo" },
	{ 0x33b58322, "skb_push" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x42e2b350, "__skb_pad" },
	{ 0x14ceba88, "ieee80211_restart_hw" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x872c0d0e, "rt2x00lib_set_mac_address" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x37a0cba, "kfree" },
	{ 0xec4d9e3a, "clk_get_sys" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "crc-ccitt,rt2x00lib,mac80211");


MODULE_INFO(srcversion, "9E1A111AF9AF06F91AEF468");
