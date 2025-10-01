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

KSYMTAB_FUNC(ath_rxbuf_alloc, "", "");
KSYMTAB_FUNC(ath_is_mybeacon, "", "");
KSYMTAB_FUNC(ath_printk, "", "");
KSYMTAB_DATA(ath_bus_type_strings, "", "");
KSYMTAB_FUNC(ath_is_world_regd, "", "");
KSYMTAB_FUNC(ath_is_49ghz_allowed, "", "");
KSYMTAB_FUNC(ath_regd_find_country_by_name, "", "");
KSYMTAB_FUNC(ath_reg_notifier_apply, "", "");
KSYMTAB_FUNC(ath_regd_init, "", "");
KSYMTAB_FUNC(ath_regd_get_band_ctl, "", "");
KSYMTAB_FUNC(ath_hw_setbssidmask, "", "");
KSYMTAB_FUNC(ath_hw_cycle_counters_update, "", "");
KSYMTAB_FUNC(ath_hw_get_listen_time, "", "");
KSYMTAB_FUNC(ath_hw_keyreset, "", "");
KSYMTAB_FUNC(ath_hw_keysetmac, "", "");
KSYMTAB_FUNC(ath_key_config, "", "");
KSYMTAB_FUNC(ath_key_delete, "", "");
KSYMTAB_FUNC(dfs_pattern_detector_init, "", "");

SYMBOL_CRC(ath_rxbuf_alloc, 0x5781ebee, "");
SYMBOL_CRC(ath_is_mybeacon, 0x88f87e52, "");
SYMBOL_CRC(ath_printk, 0x3cb475fa, "");
SYMBOL_CRC(ath_bus_type_strings, 0xb6588ba6, "");
SYMBOL_CRC(ath_is_world_regd, 0x4571aea8, "");
SYMBOL_CRC(ath_is_49ghz_allowed, 0x108b188f, "");
SYMBOL_CRC(ath_regd_find_country_by_name, 0xa18f224e, "");
SYMBOL_CRC(ath_reg_notifier_apply, 0x46049065, "");
SYMBOL_CRC(ath_regd_init, 0xb3e9f5d1, "");
SYMBOL_CRC(ath_regd_get_band_ctl, 0x0b1ab353, "");
SYMBOL_CRC(ath_hw_setbssidmask, 0xc143af0f, "");
SYMBOL_CRC(ath_hw_cycle_counters_update, 0x82af835d, "");
SYMBOL_CRC(ath_hw_get_listen_time, 0xece74d0a, "");
SYMBOL_CRC(ath_hw_keyreset, 0xa18f03aa, "");
SYMBOL_CRC(ath_hw_keysetmac, 0x727df950, "");
SYMBOL_CRC(ath_key_config, 0xdcb65baf, "");
SYMBOL_CRC(ath_key_delete, 0xf90a7a6d, "");
SYMBOL_CRC(dfs_pattern_detector_init, 0xc8d75a1c, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x122c3a7e, "_printk" },
	{ 0xdba126c1, "reg_initiator_name" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x5ed3bbcd, "ieee80211_get_channel_khz" },
	{ 0x96bd2420, "wiphy_apply_custom_regulatory" },
	{ 0xdcb764ad, "memset" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x38d52607, "freq_reg_info" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "AD9B92BEFF633DDCAFC2A25");
