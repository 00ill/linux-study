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

KSYMTAB_FUNC(p54_parse_eeprom, "_gpl", "");
KSYMTAB_FUNC(p54_read_eeprom, "_gpl", "");
KSYMTAB_FUNC(p54_parse_firmware, "_gpl", "");
KSYMTAB_FUNC(p54_free_skb, "_gpl", "");
KSYMTAB_FUNC(p54_rx, "_gpl", "");
KSYMTAB_FUNC(p54_init_common, "_gpl", "");
KSYMTAB_FUNC(p54_register_common, "_gpl", "");
KSYMTAB_FUNC(p54_free_common, "_gpl", "");
KSYMTAB_FUNC(p54_unregister_common, "_gpl", "");

SYMBOL_CRC(p54_parse_eeprom, 0xe5c47112, "_gpl");
SYMBOL_CRC(p54_read_eeprom, 0x1cbfdf8d, "_gpl");
SYMBOL_CRC(p54_parse_firmware, 0x016c4ed9, "_gpl");
SYMBOL_CRC(p54_free_skb, 0x81154e52, "_gpl");
SYMBOL_CRC(p54_rx, 0xdfb1f48e, "_gpl");
SYMBOL_CRC(p54_init_common, 0x490540d4, "_gpl");
SYMBOL_CRC(p54_register_common, 0x86af1c9d, "_gpl");
SYMBOL_CRC(p54_free_common, 0x02119154, "_gpl");
SYMBOL_CRC(p54_unregister_common, 0xf7f05550, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4367c3a1, "skb_put" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x61420e14, "ieee80211_free_hw" },
	{ 0x4829a47e, "memcpy" },
	{ 0xfb1f865e, "ieee80211_beacon_loss" },
	{ 0xa6636aff, "regulatory_hint" },
	{ 0x37a0cba, "kfree" },
	{ 0xe3dcebe7, "led_classdev_unregister" },
	{ 0x4ff913b5, "ieee80211_register_hw" },
	{ 0xe83c2d4, "ieee80211_emulate_change_chanctx" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x501ee2bd, "ieee80211_get_hdrlen_from_skb" },
	{ 0x32d7ef55, "__ieee80211_get_radio_led_name" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x71b6ad08, "ieee80211_wake_queue" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x94293e46, "__ieee80211_get_tx_led_name" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x22fe87e5, "ieee80211_handle_wake_tx_queue" },
	{ 0x1499afed, "ieee80211_tx_status_irqsafe" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa916b694, "strnlen" },
	{ 0x993e9495, "__ieee80211_get_rx_led_name" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x6ca3449c, "ieee80211_queue_delayed_work" },
	{ 0x669c413b, "_dev_err" },
	{ 0xb7c0f443, "sort" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xb58c18e8, "ieee80211_free_txskb" },
	{ 0x37c9d5fc, "led_classdev_register_ext" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc87fd291, "ieee80211_alloc_hw_nm" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x38590bd4, "ieee80211_emulate_add_chanctx" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xb77e1ef3, "ieee80211_emulate_switch_vif_chanctx" },
	{ 0x1e052696, "ieee80211_stop_queue" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x43f25734, "skb_unlink" },
	{ 0xda7db208, "wiphy_rfkill_set_hw_state_reason" },
	{ 0xadb38c78, "__ieee80211_get_assoc_led_name" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x24c4b1f8, "ieee80211_unregister_hw" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x20f09351, "ieee80211_beacon_get_tim" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x374647f3, "_dev_printk" },
	{ 0xe3bafe79, "ieee80211_emulate_remove_chanctx" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x25fd7ebc, "ieee80211_rx_irqsafe" },
	{ 0x910b3446, "skb_queue_head" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mac80211,cfg80211,crc-ccitt");


MODULE_INFO(srcversion, "8342CBDB8DFBEEFF8CA0EC7");
