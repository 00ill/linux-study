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

KSYMTAB_FUNC(rt2x00lib_get_bssidx, "_gpl", "");
KSYMTAB_FUNC(rt2x00lib_beacondone, "_gpl", "");
KSYMTAB_FUNC(rt2x00lib_pretbtt, "_gpl", "");
KSYMTAB_FUNC(rt2x00lib_dmastart, "_gpl", "");
KSYMTAB_FUNC(rt2x00lib_dmadone, "_gpl", "");
KSYMTAB_FUNC(rt2x00lib_txdone_nomatch, "_gpl", "");
KSYMTAB_FUNC(rt2x00lib_txdone, "_gpl", "");
KSYMTAB_FUNC(rt2x00lib_txdone_noinfo, "_gpl", "");
KSYMTAB_FUNC(rt2x00lib_rxdone, "_gpl", "");
KSYMTAB_FUNC(rt2x00lib_set_mac_address, "_gpl", "");
KSYMTAB_FUNC(rt2x00lib_probe_dev, "_gpl", "");
KSYMTAB_FUNC(rt2x00lib_remove_dev, "_gpl", "");
KSYMTAB_FUNC(rt2x00lib_suspend, "_gpl", "");
KSYMTAB_FUNC(rt2x00lib_resume, "_gpl", "");
KSYMTAB_FUNC(rt2x00mac_tx, "_gpl", "");
KSYMTAB_FUNC(rt2x00mac_start, "_gpl", "");
KSYMTAB_FUNC(rt2x00mac_stop, "_gpl", "");
KSYMTAB_FUNC(rt2x00mac_reconfig_complete, "_gpl", "");
KSYMTAB_FUNC(rt2x00mac_add_interface, "_gpl", "");
KSYMTAB_FUNC(rt2x00mac_remove_interface, "_gpl", "");
KSYMTAB_FUNC(rt2x00mac_config, "_gpl", "");
KSYMTAB_FUNC(rt2x00mac_configure_filter, "_gpl", "");
KSYMTAB_FUNC(rt2x00mac_set_tim, "_gpl", "");
KSYMTAB_FUNC(rt2x00mac_set_key, "_gpl", "");
KSYMTAB_FUNC(rt2x00mac_sw_scan_start, "_gpl", "");
KSYMTAB_FUNC(rt2x00mac_sw_scan_complete, "_gpl", "");
KSYMTAB_FUNC(rt2x00mac_get_stats, "_gpl", "");
KSYMTAB_FUNC(rt2x00mac_bss_info_changed, "_gpl", "");
KSYMTAB_FUNC(rt2x00mac_conf_tx, "_gpl", "");
KSYMTAB_FUNC(rt2x00mac_rfkill_poll, "_gpl", "");
KSYMTAB_FUNC(rt2x00mac_flush, "_gpl", "");
KSYMTAB_FUNC(rt2x00mac_set_antenna, "_gpl", "");
KSYMTAB_FUNC(rt2x00mac_get_antenna, "_gpl", "");
KSYMTAB_FUNC(rt2x00mac_get_ringparam, "_gpl", "");
KSYMTAB_FUNC(rt2x00mac_tx_frames_pending, "_gpl", "");
KSYMTAB_FUNC(rt2x00queue_map_txskb, "_gpl", "");
KSYMTAB_FUNC(rt2x00queue_unmap_skb, "_gpl", "");
KSYMTAB_FUNC(rt2x00queue_for_each_entry, "_gpl", "");
KSYMTAB_FUNC(rt2x00queue_get_entry, "_gpl", "");
KSYMTAB_FUNC(rt2x00queue_pause_queue, "_gpl", "");
KSYMTAB_FUNC(rt2x00queue_unpause_queue, "_gpl", "");
KSYMTAB_FUNC(rt2x00queue_start_queue, "_gpl", "");
KSYMTAB_FUNC(rt2x00queue_stop_queue, "_gpl", "");
KSYMTAB_FUNC(rt2x00queue_flush_queue, "_gpl", "");
KSYMTAB_FUNC(rt2x00queue_start_queues, "_gpl", "");
KSYMTAB_FUNC(rt2x00queue_stop_queues, "_gpl", "");
KSYMTAB_FUNC(rt2x00queue_flush_queues, "_gpl", "");

SYMBOL_CRC(rt2x00lib_get_bssidx, 0x229ae0a3, "_gpl");
SYMBOL_CRC(rt2x00lib_beacondone, 0xcf743d9b, "_gpl");
SYMBOL_CRC(rt2x00lib_pretbtt, 0xf9d18665, "_gpl");
SYMBOL_CRC(rt2x00lib_dmastart, 0xf77544c2, "_gpl");
SYMBOL_CRC(rt2x00lib_dmadone, 0xd45234f9, "_gpl");
SYMBOL_CRC(rt2x00lib_txdone_nomatch, 0xfb86fc23, "_gpl");
SYMBOL_CRC(rt2x00lib_txdone, 0x9922e6a2, "_gpl");
SYMBOL_CRC(rt2x00lib_txdone_noinfo, 0xd10b6bdc, "_gpl");
SYMBOL_CRC(rt2x00lib_rxdone, 0xb8d41780, "_gpl");
SYMBOL_CRC(rt2x00lib_set_mac_address, 0x872c0d0e, "_gpl");
SYMBOL_CRC(rt2x00lib_probe_dev, 0x6af8dfaf, "_gpl");
SYMBOL_CRC(rt2x00lib_remove_dev, 0xb53ecaa7, "_gpl");
SYMBOL_CRC(rt2x00lib_suspend, 0xa8c6093f, "_gpl");
SYMBOL_CRC(rt2x00lib_resume, 0x6766726f, "_gpl");
SYMBOL_CRC(rt2x00mac_tx, 0x8a9b013e, "_gpl");
SYMBOL_CRC(rt2x00mac_start, 0xf872c8ab, "_gpl");
SYMBOL_CRC(rt2x00mac_stop, 0x1e23fee4, "_gpl");
SYMBOL_CRC(rt2x00mac_reconfig_complete, 0xbe5f9af4, "_gpl");
SYMBOL_CRC(rt2x00mac_add_interface, 0xf271573c, "_gpl");
SYMBOL_CRC(rt2x00mac_remove_interface, 0xb6b66ea0, "_gpl");
SYMBOL_CRC(rt2x00mac_config, 0x9686b151, "_gpl");
SYMBOL_CRC(rt2x00mac_configure_filter, 0x4cd6d96c, "_gpl");
SYMBOL_CRC(rt2x00mac_set_tim, 0xf39a920c, "_gpl");
SYMBOL_CRC(rt2x00mac_set_key, 0x21a17945, "_gpl");
SYMBOL_CRC(rt2x00mac_sw_scan_start, 0x4acafd2f, "_gpl");
SYMBOL_CRC(rt2x00mac_sw_scan_complete, 0xa3c515f5, "_gpl");
SYMBOL_CRC(rt2x00mac_get_stats, 0x3d713045, "_gpl");
SYMBOL_CRC(rt2x00mac_bss_info_changed, 0xd4c50afc, "_gpl");
SYMBOL_CRC(rt2x00mac_conf_tx, 0x6cb3ec99, "_gpl");
SYMBOL_CRC(rt2x00mac_rfkill_poll, 0xcb63c639, "_gpl");
SYMBOL_CRC(rt2x00mac_flush, 0xcde16b8c, "_gpl");
SYMBOL_CRC(rt2x00mac_set_antenna, 0x63a60b1d, "_gpl");
SYMBOL_CRC(rt2x00mac_get_antenna, 0xe2e024ad, "_gpl");
SYMBOL_CRC(rt2x00mac_get_ringparam, 0x86cc259c, "_gpl");
SYMBOL_CRC(rt2x00mac_tx_frames_pending, 0xed0d8687, "_gpl");
SYMBOL_CRC(rt2x00queue_map_txskb, 0xbaf0fffd, "_gpl");
SYMBOL_CRC(rt2x00queue_unmap_skb, 0x0b0db57b, "_gpl");
SYMBOL_CRC(rt2x00queue_for_each_entry, 0x3dc82dbe, "_gpl");
SYMBOL_CRC(rt2x00queue_get_entry, 0xd76f3f4d, "_gpl");
SYMBOL_CRC(rt2x00queue_pause_queue, 0x404be68a, "_gpl");
SYMBOL_CRC(rt2x00queue_unpause_queue, 0x39e23db1, "_gpl");
SYMBOL_CRC(rt2x00queue_start_queue, 0xe82535b5, "_gpl");
SYMBOL_CRC(rt2x00queue_stop_queue, 0xea361172, "_gpl");
SYMBOL_CRC(rt2x00queue_flush_queue, 0x1a9c68f5, "_gpl");
SYMBOL_CRC(rt2x00queue_start_queues, 0x37d318d3, "_gpl");
SYMBOL_CRC(rt2x00queue_stop_queues, 0x32d15ce4, "_gpl");
SYMBOL_CRC(rt2x00queue_flush_queues, 0x36b61625, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xcc985438, "ieee80211_iterate_interfaces" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xbd232569, "dma_unmap_page_attrs" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xeab29c41, "led_classdev_suspend" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x5676cb2b, "ieee80211_tx_status_ext" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xe3dcebe7, "led_classdev_unregister" },
	{ 0x4ff913b5, "ieee80211_register_hw" },
	{ 0xa6cc04a6, "__ieee80211_create_tpt_led_trigger" },
	{ 0x501ee2bd, "ieee80211_get_hdrlen_from_skb" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x71b6ad08, "ieee80211_wake_queue" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0x650d4708, "ieee80211_tx_status_skb" },
	{ 0xecfea7ae, "ieee80211_get_buffered_bc" },
	{ 0x9df57208, "dma_map_page_attrs" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x87ed7397, "of_get_mac_address" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x6ca3449c, "ieee80211_queue_delayed_work" },
	{ 0x669c413b, "_dev_err" },
	{ 0x859e5b45, "ieee80211_ctstoself_get" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x3939f8f0, "rfkill_pause_polling" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb58c18e8, "ieee80211_free_txskb" },
	{ 0x37c9d5fc, "led_classdev_register_ext" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x1e052696, "ieee80211_stop_queue" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x27b8aeb2, "ieee80211_stop_queues" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xda7db208, "wiphy_rfkill_set_hw_state_reason" },
	{ 0xfc4326dd, "wiphy_rfkill_start_polling" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x2bf50a51, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x66d81d36, "led_classdev_resume" },
	{ 0x24c4b1f8, "ieee80211_unregister_hw" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x20f09351, "ieee80211_beacon_get_tim" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd1bf26d6, "ieee80211_rts_get" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x4559e78f, "ieee80211_queue_work" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x2eeceda9, "ieee80211_rx_napi" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mac80211,cfg80211,rfkill");


MODULE_INFO(srcversion, "B16CEB370F2FF5D0EAD3FAB");
