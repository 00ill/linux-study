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

KSYMTAB_FUNC(rt2x00usb_vendor_request, "_gpl", "");
KSYMTAB_FUNC(rt2x00usb_vendor_req_buff_lock, "_gpl", "");
KSYMTAB_FUNC(rt2x00usb_vendor_request_buff, "_gpl", "");
KSYMTAB_FUNC(rt2x00usb_regbusy_read, "_gpl", "");
KSYMTAB_FUNC(rt2x00usb_register_read_async, "_gpl", "");
KSYMTAB_FUNC(rt2x00usb_kick_queue, "_gpl", "");
KSYMTAB_FUNC(rt2x00usb_flush_queue, "_gpl", "");
KSYMTAB_FUNC(rt2x00usb_watchdog, "_gpl", "");
KSYMTAB_FUNC(rt2x00usb_disable_radio, "_gpl", "");
KSYMTAB_FUNC(rt2x00usb_clear_entry, "_gpl", "");
KSYMTAB_FUNC(rt2x00usb_initialize, "_gpl", "");
KSYMTAB_FUNC(rt2x00usb_uninitialize, "_gpl", "");
KSYMTAB_FUNC(rt2x00usb_probe, "_gpl", "");
KSYMTAB_FUNC(rt2x00usb_disconnect, "_gpl", "");
KSYMTAB_FUNC(rt2x00usb_suspend, "_gpl", "");
KSYMTAB_FUNC(rt2x00usb_resume, "_gpl", "");

SYMBOL_CRC(rt2x00usb_vendor_request, 0xcd2b4ace, "_gpl");
SYMBOL_CRC(rt2x00usb_vendor_req_buff_lock, 0x1fd39416, "_gpl");
SYMBOL_CRC(rt2x00usb_vendor_request_buff, 0xdeaac6aa, "_gpl");
SYMBOL_CRC(rt2x00usb_regbusy_read, 0x6f06a487, "_gpl");
SYMBOL_CRC(rt2x00usb_register_read_async, 0xd69b746a, "_gpl");
SYMBOL_CRC(rt2x00usb_kick_queue, 0x8838a70e, "_gpl");
SYMBOL_CRC(rt2x00usb_flush_queue, 0x9b9b7b90, "_gpl");
SYMBOL_CRC(rt2x00usb_watchdog, 0x1c92bd1b, "_gpl");
SYMBOL_CRC(rt2x00usb_disable_radio, 0x808a82f2, "_gpl");
SYMBOL_CRC(rt2x00usb_clear_entry, 0xe9ad7a26, "_gpl");
SYMBOL_CRC(rt2x00usb_initialize, 0xfc6a5d41, "_gpl");
SYMBOL_CRC(rt2x00usb_uninitialize, 0x939998cd, "_gpl");
SYMBOL_CRC(rt2x00usb_probe, 0x84a4c390, "_gpl");
SYMBOL_CRC(rt2x00usb_disconnect, 0xe98cb648, "_gpl");
SYMBOL_CRC(rt2x00usb_suspend, 0x655736c7, "_gpl");
SYMBOL_CRC(rt2x00usb_resume, 0x93dd3398, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x669c413b, "_dev_err" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x70b0605f, "usb_anchor_urb" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x29c998f4, "usb_unanchor_urb" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0xf77544c2, "rt2x00lib_dmastart" },
	{ 0xd45234f9, "rt2x00lib_dmadone" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x42e2b350, "__skb_pad" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3dc82dbe, "rt2x00queue_for_each_entry" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xd76f3f4d, "rt2x00queue_get_entry" },
	{ 0xea361172, "rt2x00queue_stop_queue" },
	{ 0x1a9c68f5, "rt2x00queue_flush_queue" },
	{ 0xe82535b5, "rt2x00queue_start_queue" },
	{ 0xd10b6bdc, "rt2x00lib_txdone_noinfo" },
	{ 0xb8d41780, "rt2x00lib_rxdone" },
	{ 0xa8c6093f, "rt2x00lib_suspend" },
	{ 0x6766726f, "rt2x00lib_resume" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb53ecaa7, "rt2x00lib_remove_dev" },
	{ 0x61420e14, "ieee80211_free_hw" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x7fcac341, "usb_reset_device" },
	{ 0xc87fd291, "ieee80211_alloc_hw_nm" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6af8dfaf, "rt2x00lib_probe_dev" },
	{ 0x122c3a7e, "_printk" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rt2x00lib,mac80211");


MODULE_INFO(srcversion, "67421242C6BCF3999A68E20");
