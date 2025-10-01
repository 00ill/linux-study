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

KSYMTAB_FUNC(rtl_usb_probe, "", "");
KSYMTAB_FUNC(rtl_usb_disconnect, "", "");
KSYMTAB_FUNC(rtl_usb_suspend, "", "");
KSYMTAB_FUNC(rtl_usb_resume, "", "");

SYMBOL_CRC(rtl_usb_probe, 0x2d134cd9, "");
SYMBOL_CRC(rtl_usb_disconnect, 0x82a27ab7, "");
SYMBOL_CRC(rtl_usb_suspend, 0x2e0ca29b, "");
SYMBOL_CRC(rtl_usb_resume, 0xc6014ec2, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x70b0605f, "usb_anchor_urb" },
	{ 0x319e5c75, "rtl_beacon_statistic" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x98434f46, "usb_alloc_coherent" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x61420e14, "ieee80211_free_hw" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4ff913b5, "ieee80211_register_hw" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0xafc5f548, "_rtl_dbg_print" },
	{ 0x122c3a7e, "_printk" },
	{ 0x66a572fb, "rtl_ops" },
	{ 0x1499afed, "ieee80211_tx_status_irqsafe" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x6db3ba37, "rtl_update_beacon_work_callback" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x9fe3744, "rtl_init_sw_leds" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x669c413b, "_dev_err" },
	{ 0xd8f2fce2, "usb_free_coherent" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x3489ef13, "rtl_init_rx_config" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x2d32cdfc, "rtl_lps_change_work_callback" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x2acc8adb, "rtl_action_proc" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xfdfb26a0, "rtl_init_core" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc87fd291, "ieee80211_alloc_hw_nm" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x29c998f4, "usb_unanchor_urb" },
	{ 0x24c4b1f8, "ieee80211_unregister_hw" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa1311ba2, "usb_get_from_anchor" },
	{ 0x705c8463, "rtl_deinit_core" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x5346e965, "rtl_deinit_deferred_work" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x2eeceda9, "ieee80211_rx_napi" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rtlwifi,mac80211");


MODULE_INFO(srcversion, "0D3F1A1DFA08849609DA346");
