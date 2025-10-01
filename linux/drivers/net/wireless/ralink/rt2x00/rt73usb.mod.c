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
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6f06a487, "rt2x00usb_regbusy_read" },
	{ 0x1fd39416, "rt2x00usb_vendor_req_buff_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0xd819a524, "crc_itu_t_table" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcd2b4ace, "rt2x00usb_vendor_request" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdeaac6aa, "rt2x00usb_vendor_request_buff" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x669c413b, "_dev_err" },
	{ 0x33b58322, "skb_push" },
	{ 0x42e2b350, "__skb_pad" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x6cb3ec99, "rt2x00mac_conf_tx" },
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

MODULE_ALIAS("usb:v07B8pB21Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB21Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB21Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB21Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB21Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18C5p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0722d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1723d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1724d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp705Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp905Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp905Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631pC019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00D8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00D9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00E6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00F4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0119d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0137d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v178Dp02BEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p9022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p9032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C22d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp002Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7318d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7618d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p3701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A9p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p800Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1472p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p4600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6874d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA874d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p7318d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp093Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2573d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2671d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0812p3101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6196d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6229d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6238d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p4471d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p7100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p002Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p90ACd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p9712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p31F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6933p5001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p200Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB50d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7167p3840d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp001Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3415d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BC0364D8018CDCF58BF4576");
