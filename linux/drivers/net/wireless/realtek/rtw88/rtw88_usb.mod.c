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

KSYMTAB_FUNC(rtw_usb_probe, "", "");
KSYMTAB_FUNC(rtw_usb_disconnect, "", "");

SYMBOL_CRC(rtw_usb_probe, 0x260757b6, "");
SYMBOL_CRC(rtw_usb_disconnect, 0x40793bdf, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x232d9b7f, "rtw_tx_report_enqueue" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x61420e14, "ieee80211_free_hw" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0x1499afed, "ieee80211_tx_status_irqsafe" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x7fcac341, "usb_reset_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0xee2afcb0, "rtw_chip_info_setup" },
	{ 0xf8c04bee, "ieee80211_purge_tx_queue" },
	{ 0x6d683dbc, "rtw_unregister_hw" },
	{ 0x669c413b, "_dev_err" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xcb1b156c, "rtw_tx_fill_tx_desc" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x33b58322, "skb_push" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x2929676c, "rtw_core_init" },
	{ 0xc87fd291, "ieee80211_alloc_hw_nm" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x166d0d51, "rtw_update_rx_freq_from_ie" },
	{ 0xdcb764ad, "memset" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x7e1bc3ad, "rtw_rx_stats" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xb641717d, "rtw_register_hw" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0x5d6ba6e3, "rtw_core_deinit" },
	{ 0x5deb5694, "rtw_ops" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xb8688652, "rtw_fw_c2h_cmd_rx_irqsafe" },
	{ 0x25fd7ebc, "ieee80211_rx_irqsafe" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rtw88_core,mac80211");


MODULE_INFO(srcversion, "C8F533B3CC2526ED746B3E8");
