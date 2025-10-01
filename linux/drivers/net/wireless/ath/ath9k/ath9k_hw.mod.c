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

KSYMTAB_FUNC(ath9k_hw_wait, "", "");
KSYMTAB_FUNC(ath9k_hw_computetxtime, "", "");
KSYMTAB_FUNC(ath9k_hw_init, "", "");
KSYMTAB_FUNC(ar9003_get_pll_sqsum_dvc, "", "");
KSYMTAB_FUNC(ath9k_hw_init_global_settings, "", "");
KSYMTAB_FUNC(ath9k_hw_deinit, "", "");
KSYMTAB_FUNC(ath9k_hw_check_nav, "", "");
KSYMTAB_FUNC(ath9k_hw_check_alive, "", "");
KSYMTAB_FUNC(ath9k_hw_get_tsf_offset, "", "");
KSYMTAB_FUNC(ath9k_hw_reset, "", "");
KSYMTAB_FUNC(ath9k_hw_setpower, "", "");
KSYMTAB_FUNC(ath9k_hw_beaconinit, "", "");
KSYMTAB_FUNC(ath9k_hw_set_sta_beacon_timers, "", "");
KSYMTAB_FUNC(ath9k_hw_gpio_request_in, "", "");
KSYMTAB_FUNC(ath9k_hw_gpio_request_out, "", "");
KSYMTAB_FUNC(ath9k_hw_gpio_free, "", "");
KSYMTAB_FUNC(ath9k_hw_gpio_get, "", "");
KSYMTAB_FUNC(ath9k_hw_set_gpio, "", "");
KSYMTAB_FUNC(ath9k_hw_setantenna, "", "");
KSYMTAB_FUNC(ath9k_hw_getrxfilter, "", "");
KSYMTAB_FUNC(ath9k_hw_setrxfilter, "", "");
KSYMTAB_FUNC(ath9k_hw_phy_disable, "", "");
KSYMTAB_FUNC(ath9k_hw_disable, "", "");
KSYMTAB_FUNC(ath9k_hw_set_txpowerlimit, "", "");
KSYMTAB_FUNC(ath9k_hw_setopmode, "", "");
KSYMTAB_FUNC(ath9k_hw_setmcastfilter, "", "");
KSYMTAB_FUNC(ath9k_hw_write_associd, "", "");
KSYMTAB_FUNC(ath9k_hw_gettsf64, "", "");
KSYMTAB_FUNC(ath9k_hw_settsf64, "", "");
KSYMTAB_FUNC(ath9k_hw_reset_tsf, "", "");
KSYMTAB_FUNC(ath9k_hw_set_tsfadjust, "", "");
KSYMTAB_FUNC(ath9k_hw_gettsf32, "", "");
KSYMTAB_FUNC(ath_gen_timer_alloc, "", "");
KSYMTAB_FUNC(ath9k_hw_gen_timer_start, "", "");
KSYMTAB_FUNC(ath9k_hw_gen_timer_stop, "", "");
KSYMTAB_FUNC(ath_gen_timer_free, "", "");
KSYMTAB_FUNC(ath_gen_timer_isr, "", "");
KSYMTAB_FUNC(ath9k_hw_name, "", "");
KSYMTAB_FUNC(ar9003_hw_bb_watchdog_check, "", "");
KSYMTAB_FUNC(ar9003_hw_bb_watchdog_dbg_info, "", "");
KSYMTAB_FUNC(ar9003_hw_disable_phy_restart, "", "");
KSYMTAB_FUNC(ath9k_hw_getchan_noise, "", "");
KSYMTAB_FUNC(ath9k_hw_reset_calvalid, "", "");
KSYMTAB_FUNC(ath9k_hw_loadnf, "", "");
KSYMTAB_FUNC(ath9k_hw_getnf, "", "");
KSYMTAB_FUNC(ath9k_hw_bstuck_nfcal, "", "");
KSYMTAB_FUNC(ath9k_hw_ani_monitor, "", "");
KSYMTAB_FUNC(ath9k_hw_disable_mib_counters, "", "");
KSYMTAB_FUNC(ath9k_hw_gettxbuf, "", "");
KSYMTAB_FUNC(ath9k_hw_puttxbuf, "", "");
KSYMTAB_FUNC(ath9k_hw_txstart, "", "");
KSYMTAB_FUNC(ath9k_hw_numtxpending, "", "");
KSYMTAB_FUNC(ath9k_hw_updatetxtriglevel, "", "");
KSYMTAB_FUNC(ath9k_hw_abort_tx_dma, "", "");
KSYMTAB_FUNC(ath9k_hw_stop_dma_queue, "", "");
KSYMTAB_FUNC(ath9k_hw_set_txq_props, "", "");
KSYMTAB_FUNC(ath9k_hw_get_txq_props, "", "");
KSYMTAB_FUNC(ath9k_hw_setuptxqueue, "", "");
KSYMTAB_FUNC(ath9k_hw_releasetxqueue, "", "");
KSYMTAB_FUNC(ath9k_hw_resettxqueue, "", "");
KSYMTAB_FUNC(ath9k_hw_rxprocdesc, "", "");
KSYMTAB_FUNC(ath9k_hw_setrxabort, "", "");
KSYMTAB_FUNC(ath9k_hw_putrxbuf, "", "");
KSYMTAB_FUNC(ath9k_hw_startpcureceive, "", "");
KSYMTAB_FUNC(ath9k_hw_abortpcurecv, "", "");
KSYMTAB_FUNC(ath9k_hw_stopdmarecv, "", "");
KSYMTAB_FUNC(ath9k_hw_beaconq_setup, "", "");
KSYMTAB_FUNC(ath9k_hw_intrpend, "", "");
KSYMTAB_FUNC(ath9k_hw_kill_interrupts, "", "");
KSYMTAB_FUNC(ath9k_hw_disable_interrupts, "", "");
KSYMTAB_FUNC(ath9k_hw_resume_interrupts, "", "");
KSYMTAB_FUNC(ath9k_hw_enable_interrupts, "", "");
KSYMTAB_FUNC(ath9k_hw_set_interrupts, "", "");
KSYMTAB_FUNC(ath9k_hw_set_tx_filter, "", "");
KSYMTAB_FUNC(ath9k_hw_setuprxdesc, "", "");
KSYMTAB_FUNC(ath9k_hw_set_rx_bufsize, "", "");
KSYMTAB_FUNC(ath9k_hw_addrxbuf_edma, "", "");
KSYMTAB_FUNC(ath9k_hw_process_rxdesc_edma, "", "");
KSYMTAB_FUNC(ath9k_hw_setup_statusring, "", "");
KSYMTAB_FUNC(ar9003_paprd_enable, "", "");
KSYMTAB_FUNC(ar9003_paprd_populate_single_table, "", "");
KSYMTAB_FUNC(ar9003_paprd_setup_gain_table, "", "");
KSYMTAB_FUNC(ar9003_paprd_create_curve, "", "");
KSYMTAB_FUNC(ar9003_paprd_init_table, "", "");
KSYMTAB_FUNC(ar9003_paprd_is_done, "", "");
KSYMTAB_FUNC(ar9003_is_paprd_enabled, "", "");
KSYMTAB_FUNC(ath9k_hw_init_btcoex_hw, "", "");
KSYMTAB_FUNC(ath9k_hw_btcoex_init_scheme, "", "");
KSYMTAB_FUNC(ath9k_hw_btcoex_init_2wire, "", "");
KSYMTAB_FUNC(ath9k_hw_btcoex_init_3wire, "", "");
KSYMTAB_FUNC(ath9k_hw_btcoex_deinit, "", "");
KSYMTAB_FUNC(ath9k_hw_btcoex_init_mci, "", "");
KSYMTAB_FUNC(ath9k_hw_btcoex_set_weight, "", "");
KSYMTAB_FUNC(ath9k_hw_btcoex_enable, "", "");
KSYMTAB_FUNC(ath9k_hw_btcoex_disable, "", "");
KSYMTAB_FUNC(ath9k_hw_btcoex_bt_stomp, "", "");
KSYMTAB_FUNC(ath9k_hw_btcoex_set_concur_txprio, "", "");
KSYMTAB_FUNC(ar9003_mci_get_interrupt, "", "");
KSYMTAB_FUNC(ar9003_mci_send_message, "", "");
KSYMTAB_FUNC(ar9003_mci_setup, "", "");
KSYMTAB_FUNC(ar9003_mci_cleanup, "", "");
KSYMTAB_FUNC(ar9003_mci_state, "", "");
KSYMTAB_FUNC(ar9003_mci_get_next_gpm_offset, "", "");
KSYMTAB_FUNC(ar9003_mci_set_bt_version, "", "");
KSYMTAB_FUNC(ar9003_mci_send_wlan_channels, "", "");

SYMBOL_CRC(ath9k_hw_wait, 0x38c2883f, "");
SYMBOL_CRC(ath9k_hw_computetxtime, 0x89d6418c, "");
SYMBOL_CRC(ath9k_hw_init, 0xd8e3d534, "");
SYMBOL_CRC(ar9003_get_pll_sqsum_dvc, 0x808e64dc, "");
SYMBOL_CRC(ath9k_hw_init_global_settings, 0xf2235e29, "");
SYMBOL_CRC(ath9k_hw_deinit, 0xc0c66822, "");
SYMBOL_CRC(ath9k_hw_check_nav, 0x5d281d4e, "");
SYMBOL_CRC(ath9k_hw_check_alive, 0xf13e3814, "");
SYMBOL_CRC(ath9k_hw_get_tsf_offset, 0x0f77dafc, "");
SYMBOL_CRC(ath9k_hw_reset, 0x07731c52, "");
SYMBOL_CRC(ath9k_hw_setpower, 0xf11a951c, "");
SYMBOL_CRC(ath9k_hw_beaconinit, 0xdeb78556, "");
SYMBOL_CRC(ath9k_hw_set_sta_beacon_timers, 0xbdde7b52, "");
SYMBOL_CRC(ath9k_hw_gpio_request_in, 0x617a818c, "");
SYMBOL_CRC(ath9k_hw_gpio_request_out, 0x4b88d7a6, "");
SYMBOL_CRC(ath9k_hw_gpio_free, 0x23bac0bc, "");
SYMBOL_CRC(ath9k_hw_gpio_get, 0x8498f8c9, "");
SYMBOL_CRC(ath9k_hw_set_gpio, 0xdf861bc3, "");
SYMBOL_CRC(ath9k_hw_setantenna, 0xe6336e6d, "");
SYMBOL_CRC(ath9k_hw_getrxfilter, 0xc4db9bab, "");
SYMBOL_CRC(ath9k_hw_setrxfilter, 0x5c7c7d40, "");
SYMBOL_CRC(ath9k_hw_phy_disable, 0xc9dc01b8, "");
SYMBOL_CRC(ath9k_hw_disable, 0x97d29a6d, "");
SYMBOL_CRC(ath9k_hw_set_txpowerlimit, 0x98b07fdc, "");
SYMBOL_CRC(ath9k_hw_setopmode, 0x20ce06a9, "");
SYMBOL_CRC(ath9k_hw_setmcastfilter, 0x81286ef3, "");
SYMBOL_CRC(ath9k_hw_write_associd, 0xff1b6615, "");
SYMBOL_CRC(ath9k_hw_gettsf64, 0x27204d83, "");
SYMBOL_CRC(ath9k_hw_settsf64, 0xaf37eb04, "");
SYMBOL_CRC(ath9k_hw_reset_tsf, 0x48f0bbf1, "");
SYMBOL_CRC(ath9k_hw_set_tsfadjust, 0x06d09751, "");
SYMBOL_CRC(ath9k_hw_gettsf32, 0x7d6d8ce4, "");
SYMBOL_CRC(ath_gen_timer_alloc, 0x7532dfa0, "");
SYMBOL_CRC(ath9k_hw_gen_timer_start, 0x3ff93d36, "");
SYMBOL_CRC(ath9k_hw_gen_timer_stop, 0xd13ea995, "");
SYMBOL_CRC(ath_gen_timer_free, 0x266c2915, "");
SYMBOL_CRC(ath_gen_timer_isr, 0x756fffa3, "");
SYMBOL_CRC(ath9k_hw_name, 0x1d5ff0ca, "");
SYMBOL_CRC(ar9003_hw_bb_watchdog_check, 0x977591e9, "");
SYMBOL_CRC(ar9003_hw_bb_watchdog_dbg_info, 0xa11599e5, "");
SYMBOL_CRC(ar9003_hw_disable_phy_restart, 0xc871aa95, "");
SYMBOL_CRC(ath9k_hw_getchan_noise, 0xda097b1c, "");
SYMBOL_CRC(ath9k_hw_reset_calvalid, 0x09f470df, "");
SYMBOL_CRC(ath9k_hw_loadnf, 0xb8ea05ba, "");
SYMBOL_CRC(ath9k_hw_getnf, 0xb219f60a, "");
SYMBOL_CRC(ath9k_hw_bstuck_nfcal, 0x55bb18e5, "");
SYMBOL_CRC(ath9k_hw_ani_monitor, 0x62fa365e, "");
SYMBOL_CRC(ath9k_hw_disable_mib_counters, 0x543620b9, "");
SYMBOL_CRC(ath9k_hw_gettxbuf, 0xead42f9c, "");
SYMBOL_CRC(ath9k_hw_puttxbuf, 0xf516a51c, "");
SYMBOL_CRC(ath9k_hw_txstart, 0xc5415100, "");
SYMBOL_CRC(ath9k_hw_numtxpending, 0xfcf4d4d0, "");
SYMBOL_CRC(ath9k_hw_updatetxtriglevel, 0x60c13fbd, "");
SYMBOL_CRC(ath9k_hw_abort_tx_dma, 0xa3013f34, "");
SYMBOL_CRC(ath9k_hw_stop_dma_queue, 0x976bcc09, "");
SYMBOL_CRC(ath9k_hw_set_txq_props, 0xf7a97ddf, "");
SYMBOL_CRC(ath9k_hw_get_txq_props, 0x7f7ee680, "");
SYMBOL_CRC(ath9k_hw_setuptxqueue, 0x895a4266, "");
SYMBOL_CRC(ath9k_hw_releasetxqueue, 0x5f2b57bf, "");
SYMBOL_CRC(ath9k_hw_resettxqueue, 0xeb9660f4, "");
SYMBOL_CRC(ath9k_hw_rxprocdesc, 0x443be5b6, "");
SYMBOL_CRC(ath9k_hw_setrxabort, 0x22e3abb9, "");
SYMBOL_CRC(ath9k_hw_putrxbuf, 0x23793f0f, "");
SYMBOL_CRC(ath9k_hw_startpcureceive, 0x33bdaea8, "");
SYMBOL_CRC(ath9k_hw_abortpcurecv, 0x82fc5cf6, "");
SYMBOL_CRC(ath9k_hw_stopdmarecv, 0xec636e49, "");
SYMBOL_CRC(ath9k_hw_beaconq_setup, 0x72429a8c, "");
SYMBOL_CRC(ath9k_hw_intrpend, 0xb114a450, "");
SYMBOL_CRC(ath9k_hw_kill_interrupts, 0xe2fe7d7e, "");
SYMBOL_CRC(ath9k_hw_disable_interrupts, 0xaf3653c6, "");
SYMBOL_CRC(ath9k_hw_resume_interrupts, 0x5d05776d, "");
SYMBOL_CRC(ath9k_hw_enable_interrupts, 0xf8483678, "");
SYMBOL_CRC(ath9k_hw_set_interrupts, 0x3e67b07d, "");
SYMBOL_CRC(ath9k_hw_set_tx_filter, 0x1f50caf6, "");
SYMBOL_CRC(ath9k_hw_setuprxdesc, 0x540c3420, "");
SYMBOL_CRC(ath9k_hw_set_rx_bufsize, 0x86a3688a, "");
SYMBOL_CRC(ath9k_hw_addrxbuf_edma, 0xb5142323, "");
SYMBOL_CRC(ath9k_hw_process_rxdesc_edma, 0x6eb27d00, "");
SYMBOL_CRC(ath9k_hw_setup_statusring, 0xcd12855c, "");
SYMBOL_CRC(ar9003_paprd_enable, 0xd55d53e0, "");
SYMBOL_CRC(ar9003_paprd_populate_single_table, 0xe2f03bd8, "");
SYMBOL_CRC(ar9003_paprd_setup_gain_table, 0xd1e77002, "");
SYMBOL_CRC(ar9003_paprd_create_curve, 0xf06c2d85, "");
SYMBOL_CRC(ar9003_paprd_init_table, 0xa66bfd7e, "");
SYMBOL_CRC(ar9003_paprd_is_done, 0x603e70a4, "");
SYMBOL_CRC(ar9003_is_paprd_enabled, 0xdb7018de, "");
SYMBOL_CRC(ath9k_hw_init_btcoex_hw, 0x09eee677, "");
SYMBOL_CRC(ath9k_hw_btcoex_init_scheme, 0xcd32f57e, "");
SYMBOL_CRC(ath9k_hw_btcoex_init_2wire, 0x37d230e3, "");
SYMBOL_CRC(ath9k_hw_btcoex_init_3wire, 0x3ef80ef0, "");
SYMBOL_CRC(ath9k_hw_btcoex_deinit, 0x82337d83, "");
SYMBOL_CRC(ath9k_hw_btcoex_init_mci, 0x9952ccd7, "");
SYMBOL_CRC(ath9k_hw_btcoex_set_weight, 0x51afc111, "");
SYMBOL_CRC(ath9k_hw_btcoex_enable, 0x679b53ee, "");
SYMBOL_CRC(ath9k_hw_btcoex_disable, 0xb7c2f69e, "");
SYMBOL_CRC(ath9k_hw_btcoex_bt_stomp, 0x0eae0de1, "");
SYMBOL_CRC(ath9k_hw_btcoex_set_concur_txprio, 0x6ce56f0f, "");
SYMBOL_CRC(ar9003_mci_get_interrupt, 0x6125a139, "");
SYMBOL_CRC(ar9003_mci_send_message, 0x7b136fe8, "");
SYMBOL_CRC(ar9003_mci_setup, 0x5744c635, "");
SYMBOL_CRC(ar9003_mci_cleanup, 0x7d5aa3d4, "");
SYMBOL_CRC(ar9003_mci_state, 0x8b233f30, "");
SYMBOL_CRC(ar9003_mci_get_next_gpm_offset, 0xc6acdadb, "");
SYMBOL_CRC(ar9003_mci_set_bt_version, 0x15027074, "");
SYMBOL_CRC(ar9003_mci_send_wlan_channels, 0x0bdfd71f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x3cc87760, "gpiod_get_raw_value" },
	{ 0x96848186, "scnprintf" },
	{ 0xe8bf741f, "gpiod_set_raw_value" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xc143af0f, "ath_hw_setbssidmask" },
	{ 0x82af835d, "ath_hw_cycle_counters_update" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb1ab353, "ath_regd_get_band_ctl" },
	{ 0xece74d0a, "ath_hw_get_listen_time" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xc529465e, "devm_gpio_request_one" },
	{ 0x669c413b, "_dev_err" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xdcb764ad, "memset" },
	{ 0x3cb475fa, "ath_printk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x44056010, "gpio_to_desc" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ath");


MODULE_INFO(srcversion, "02F6FE40A64D84A32E871D1");
