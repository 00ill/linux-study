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
	{ 0xa728742c, "usb_register_driver" },
	{ 0x84a4c390, "rt2x00usb_probe" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1fd39416, "rt2x00usb_vendor_req_buff_lock" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdeaac6aa, "rt2x00usb_vendor_request_buff" },
	{ 0x33b58322, "skb_push" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcd2b4ace, "rt2x00usb_vendor_request" },
	{ 0x808a82f2, "rt2x00usb_disable_radio" },
	{ 0x872c0d0e, "rt2x00lib_set_mac_address" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xfc6a5d41, "rt2x00usb_initialize" },
	{ 0x939998cd, "rt2x00usb_uninitialize" },
	{ 0xe9ad7a26, "rt2x00usb_clear_entry" },
	{ 0x1c92bd1b, "rt2x00usb_watchdog" },
	{ 0x8838a70e, "rt2x00usb_kick_queue" },
	{ 0x9b9b7b90, "rt2x00usb_flush_queue" },
	{ 0x8a9b013e, "rt2x00mac_tx" },
	{ 0xf872c8ab, "rt2x00mac_start" },
	{ 0x1e23fee4, "rt2x00mac_stop" },
	{ 0xf271573c, "rt2x00mac_add_interface" },
	{ 0xb6b66ea0, "rt2x00mac_remove_interface" },
	{ 0x9686b151, "rt2x00mac_config" },
	{ 0xd4c50afc, "rt2x00mac_bss_info_changed" },
	{ 0x4cd6d96c, "rt2x00mac_configure_filter" },
	{ 0xf39a920c, "rt2x00mac_set_tim" },
	{ 0x21a17945, "rt2x00mac_set_key" },
	{ 0x4acafd2f, "rt2x00mac_sw_scan_start" },
	{ 0xa3c515f5, "rt2x00mac_sw_scan_complete" },
	{ 0x3d713045, "rt2x00mac_get_stats" },
	{ 0x6cb3ec99, "rt2x00mac_conf_tx" },
	{ 0xcb63c639, "rt2x00mac_rfkill_poll" },
	{ 0xcde16b8c, "rt2x00mac_flush" },
	{ 0x63a60b1d, "rt2x00mac_set_antenna" },
	{ 0xe2e024ad, "rt2x00mac_get_antenna" },
	{ 0x86cc259c, "rt2x00mac_get_ringparam" },
	{ 0xed0d8687, "rt2x00mac_tx_frames_pending" },
	{ 0x38590bd4, "ieee80211_emulate_add_chanctx" },
	{ 0xe3bafe79, "ieee80211_emulate_remove_chanctx" },
	{ 0xe83c2d4, "ieee80211_emulate_change_chanctx" },
	{ 0xb77e1ef3, "ieee80211_emulate_switch_vif_chanctx" },
	{ 0x22fe87e5, "ieee80211_handle_wake_tx_queue" },
	{ 0xe98cb648, "rt2x00usb_disconnect" },
	{ 0x655736c7, "rt2x00usb_suspend" },
	{ 0x93dd3398, "rt2x00usb_resume" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rt2x00usb,rt2x00lib,mac80211");

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0234C22C669DF15F609D12B");
