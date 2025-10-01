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
	{ 0x122c3a7e, "_printk" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x94b134e, "led_trigger_register_simple" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x61420e14, "ieee80211_free_hw" },
	{ 0x24c4b1f8, "ieee80211_unregister_hw" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x33b58322, "skb_push" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x669c413b, "_dev_err" },
	{ 0x27b8aeb2, "ieee80211_stop_queues" },
	{ 0xdcb764ad, "memset" },
	{ 0x6ca3449c, "ieee80211_queue_delayed_work" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4559e78f, "ieee80211_queue_work" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x1499afed, "ieee80211_tx_status_irqsafe" },
	{ 0xabb61447, "ieee80211_wake_queues" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x3f65e843, "led_trigger_unregister_simple" },
	{ 0x3e7cf756, "led_trigger_event" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0x25fd7ebc, "ieee80211_rx_irqsafe" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xe027e031, "ieee80211_scan_completed" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x374647f3, "_dev_printk" },
	{ 0xc87fd291, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4ff913b5, "ieee80211_register_hw" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7fcac341, "usb_reset_device" },
	{ 0x38590bd4, "ieee80211_emulate_add_chanctx" },
	{ 0xe3bafe79, "ieee80211_emulate_remove_chanctx" },
	{ 0xe83c2d4, "ieee80211_emulate_change_chanctx" },
	{ 0xb77e1ef3, "ieee80211_emulate_switch_vif_chanctx" },
	{ 0x22fe87e5, "ieee80211_handle_wake_tx_queue" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

MODULE_ALIAS("usb:v03EBp7603d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0864p4100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B3Bp1612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p011Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D5CpA001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DDpFF31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0919d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0821d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7604d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055DpA000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0321d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v077Bp2219d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v077Bp2227d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0864p4102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p7605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp4102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p5743d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0506p0A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p001Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p3220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp0032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DDpFF35d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap3501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D5CpA002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7606d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1915p2233d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12FDp1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp7613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p1020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7614d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7617d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7615d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6F683FF649D60913D9CF9AB");
