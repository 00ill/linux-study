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

MODULE_INFO(staging, "Y");



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x70b0605f, "usb_anchor_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x61420e14, "ieee80211_free_hw" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0xbb03e24b, "ieee80211_get_tkip_p2k" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4ff913b5, "ieee80211_register_hw" },
	{ 0xe83c2d4, "ieee80211_emulate_change_chanctx" },
	{ 0xa8d5e2d2, "ieee80211_ctstoself_duration" },
	{ 0x501ee2bd, "ieee80211_get_hdrlen_from_skb" },
	{ 0xf9c28a98, "ieee80211_generic_frame_duration" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x22fe87e5, "ieee80211_handle_wake_tx_queue" },
	{ 0x1499afed, "ieee80211_tx_status_irqsafe" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x7fcac341, "usb_reset_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0xabb61447, "ieee80211_wake_queues" },
	{ 0xb58c18e8, "ieee80211_free_txskb" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc87fd291, "ieee80211_alloc_hw_nm" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x38590bd4, "ieee80211_emulate_add_chanctx" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xb77e1ef3, "ieee80211_emulate_switch_vif_chanctx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x29c998f4, "usb_unanchor_urb" },
	{ 0x27b8aeb2, "ieee80211_stop_queues" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xf261f72a, "_dev_notice" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x24c4b1f8, "ieee80211_unregister_hw" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x20f09351, "ieee80211_beacon_get_tim" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xe3bafe79, "ieee80211_emulate_remove_chanctx" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x25fd7ebc, "ieee80211_rx_irqsafe" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x907e1522, "ieee80211_rts_duration" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

MODULE_ALIAS("usb:v160Ap3184d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9F04316EA345CC929C5A269");
