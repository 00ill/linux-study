#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(ath9k_cmn_rx_accept, "", "");
KSYMTAB_FUNC(ath9k_cmn_rx_skb_postprocess, "", "");
KSYMTAB_FUNC(ath9k_cmn_process_rate, "", "");
KSYMTAB_FUNC(ath9k_cmn_process_rssi, "", "");
KSYMTAB_FUNC(ath9k_cmn_get_hw_crypto_keytype, "", "");
KSYMTAB_FUNC(ath9k_cmn_get_channel, "", "");
KSYMTAB_FUNC(ath9k_cmn_count_streams, "", "");
KSYMTAB_FUNC(ath9k_cmn_update_txpow, "", "");
KSYMTAB_FUNC(ath9k_cmn_init_crypto, "", "");
KSYMTAB_FUNC(ath9k_cmn_init_channels_rates, "", "");
KSYMTAB_FUNC(ath9k_cmn_setup_ht_cap, "", "");
KSYMTAB_FUNC(ath9k_cmn_reload_chainmask, "", "");
KSYMTAB_FUNC(ath9k_cmn_beacon_config_sta, "", "");
KSYMTAB_FUNC(ath9k_cmn_beacon_config_adhoc, "", "");
KSYMTAB_FUNC(ath9k_cmn_beacon_config_ap, "", "");

SYMBOL_CRC(ath9k_cmn_rx_accept, 0xa6c5e39f, "");
SYMBOL_CRC(ath9k_cmn_rx_skb_postprocess, 0x7782f7c4, "");
SYMBOL_CRC(ath9k_cmn_process_rate, 0x0eda2db4, "");
SYMBOL_CRC(ath9k_cmn_process_rssi, 0x1f2d80d9, "");
SYMBOL_CRC(ath9k_cmn_get_hw_crypto_keytype, 0xc49442ff, "");
SYMBOL_CRC(ath9k_cmn_get_channel, 0x53cc6bb8, "");
SYMBOL_CRC(ath9k_cmn_count_streams, 0xd2981357, "");
SYMBOL_CRC(ath9k_cmn_update_txpow, 0x4e851912, "");
SYMBOL_CRC(ath9k_cmn_init_crypto, 0xdd09ef4d, "");
SYMBOL_CRC(ath9k_cmn_init_channels_rates, 0x69bb359f, "");
SYMBOL_CRC(ath9k_cmn_setup_ht_cap, 0x428120b7, "");
SYMBOL_CRC(ath9k_cmn_reload_chainmask, 0x6a36eb98, "");
SYMBOL_CRC(ath9k_cmn_beacon_config_sta, 0xec9743e1, "");
SYMBOL_CRC(ath9k_cmn_beacon_config_adhoc, 0x74327932, "");
SYMBOL_CRC(ath9k_cmn_beacon_config_ap, 0x37ca3cc1, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x98b07fdc, "ath9k_hw_set_txpowerlimit" },
	{ 0xa18f03aa, "ath_hw_keyreset" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x4829a47e, "memcpy" },
	{ 0x501ee2bd, "ieee80211_get_hdrlen_from_skb" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xdcb764ad, "memset" },
	{ 0x27204d83, "ath9k_hw_gettsf64" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ath9k_hw,ath,cfg80211");


MODULE_INFO(srcversion, "6AB875ABAF703AC5629CAD0");
