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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe0e90a2d, "ieee80211_queue_stopped" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x70b0605f, "usb_anchor_urb" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x61420e14, "ieee80211_free_hw" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xe3dcebe7, "led_classdev_unregister" },
	{ 0x4ff913b5, "ieee80211_register_hw" },
	{ 0xe83c2d4, "ieee80211_emulate_change_chanctx" },
	{ 0xad25b856, "dev_kfree_skb_irq_reason" },
	{ 0xa8d5e2d2, "ieee80211_ctstoself_duration" },
	{ 0x32d7ef55, "__ieee80211_get_radio_led_name" },
	{ 0xf9c28a98, "ieee80211_generic_frame_duration" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x94293e46, "__ieee80211_get_tx_led_name" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x22fe87e5, "ieee80211_handle_wake_tx_queue" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1499afed, "ieee80211_tx_status_irqsafe" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x7fcac341, "usb_reset_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x993e9495, "__ieee80211_get_rx_led_name" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x6ca3449c, "ieee80211_queue_delayed_work" },
	{ 0x669c413b, "_dev_err" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x3939f8f0, "rfkill_pause_polling" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x4b0b05dc, "eeprom_93cx6_multiread" },
	{ 0x37c9d5fc, "led_classdev_register_ext" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc87fd291, "ieee80211_alloc_hw_nm" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x38590bd4, "ieee80211_emulate_add_chanctx" },
	{ 0xb77e1ef3, "ieee80211_emulate_switch_vif_chanctx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x29c998f4, "usb_unanchor_urb" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x43f25734, "skb_unlink" },
	{ 0xda7db208, "wiphy_rfkill_set_hw_state_reason" },
	{ 0xfc4326dd, "wiphy_rfkill_start_polling" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x24c4b1f8, "ieee80211_unregister_hw" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x20f09351, "ieee80211_beacon_get_tim" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0xe3bafe79, "ieee80211_emulate_remove_chanctx" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x25fd7ebc, "ieee80211_rx_irqsafe" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa51e8d0d, "eeprom_93cx6_read" },
	{ 0x907e1522, "ieee80211_rts_duration" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mac80211,rfkill,eeprom_93cx6,cfg80211");

MODULE_ALIAS("usb:v0B05p171Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp705Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8189d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8198d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p010Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p6100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p6A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0pCA02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p9401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D1pABE6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6232d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p8187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0073d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "63BE017A748FE578ACDBB9F");
