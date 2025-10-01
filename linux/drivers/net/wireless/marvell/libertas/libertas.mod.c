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

KSYMTAB_FUNC(lbs_cmd_copyback, "_gpl", "");
KSYMTAB_FUNC(lbs_host_sleep_cfg, "_gpl", "");
KSYMTAB_FUNC(__lbs_cmd, "_gpl", "");
KSYMTAB_DATA(lbs_debug, "_gpl", "");
KSYMTAB_FUNC(lbs_host_to_card_done, "_gpl", "");
KSYMTAB_FUNC(lbs_suspend, "_gpl", "");
KSYMTAB_FUNC(lbs_resume, "_gpl", "");
KSYMTAB_FUNC(lbs_add_card, "_gpl", "");
KSYMTAB_FUNC(lbs_remove_card, "_gpl", "");
KSYMTAB_FUNC(lbs_start_card, "_gpl", "");
KSYMTAB_FUNC(lbs_stop_card, "_gpl", "");
KSYMTAB_FUNC(lbs_queue_event, "_gpl", "");
KSYMTAB_FUNC(lbs_notify_command_response, "_gpl", "");
KSYMTAB_FUNC(lbs_process_rxed_packet, "_gpl", "");
KSYMTAB_FUNC(lbs_send_tx_feedback, "_gpl", "");
KSYMTAB_FUNC(lbs_get_firmware_async, "_gpl", "");
KSYMTAB_FUNC(lbs_get_firmware, "_gpl", "");

SYMBOL_CRC(lbs_cmd_copyback, 0xcf877b1b, "_gpl");
SYMBOL_CRC(lbs_host_sleep_cfg, 0xe15cdaa4, "_gpl");
SYMBOL_CRC(__lbs_cmd, 0x00a145cf, "_gpl");
SYMBOL_CRC(lbs_debug, 0xf64277de, "_gpl");
SYMBOL_CRC(lbs_host_to_card_done, 0xf0966828, "_gpl");
SYMBOL_CRC(lbs_suspend, 0x900967f0, "_gpl");
SYMBOL_CRC(lbs_resume, 0xe7cdc413, "_gpl");
SYMBOL_CRC(lbs_add_card, 0x57177e62, "_gpl");
SYMBOL_CRC(lbs_remove_card, 0xfdc7cc13, "_gpl");
SYMBOL_CRC(lbs_start_card, 0x6d5cae35, "_gpl");
SYMBOL_CRC(lbs_stop_card, 0x80a97487, "_gpl");
SYMBOL_CRC(lbs_queue_event, 0xf97f0d2f, "_gpl");
SYMBOL_CRC(lbs_notify_command_response, 0xe00a776c, "_gpl");
SYMBOL_CRC(lbs_process_rxed_packet, 0xb8825ddc, "_gpl");
SYMBOL_CRC(lbs_send_tx_feedback, 0x62bad9a1, "_gpl");
SYMBOL_CRC(lbs_get_firmware_async, 0x59eb97f9, "_gpl");
SYMBOL_CRC(lbs_get_firmware, 0x5cec746f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x3700ec41, "cfg80211_scan_done" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x385fa099, "unregister_netdev" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa6636aff, "regulatory_hint" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xad25b856, "dev_kfree_skb_irq_reason" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x749cc8b8, "cfg80211_disconnected" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xdd3b7072, "ether_setup" },
	{ 0x8502868b, "netdev_err" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xc4f8efb6, "eth_type_trans" },
	{ 0xb67fb8b4, "alloc_netdev_mqs" },
	{ 0xb5c8842d, "wiphy_new_nm" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x79b82a71, "cfg80211_find_vendor_elem" },
	{ 0x4c4130b, "wiphy_register" },
	{ 0xfeed4c75, "cfg80211_put_bss" },
	{ 0xbb8ce2ef, "netif_device_detach" },
	{ 0x64707a9c, "netif_device_attach" },
	{ 0x5ed3bbcd, "ieee80211_get_channel_khz" },
	{ 0x8f14d45b, "get_zeroed_page_noprof" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x669c413b, "_dev_err" },
	{ 0xe92d9e17, "cfg80211_ibss_joined" },
	{ 0x8bbcc68f, "request_firmware_nowait" },
	{ 0x5d809a68, "simple_open" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x62345ccc, "cfg80211_michael_mic_failure" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x219f96ce, "register_netdev" },
	{ 0x2ce1c952, "wiphy_unregister" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xdcb764ad, "memset" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x50d00458, "netif_rx" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa65f95f6, "netdev_alert" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x828a01bc, "netif_carrier_off" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xffc50605, "netif_carrier_on" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x357d9e3, "cfg80211_inform_bss_data" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x5cba2be4, "ieee80211_bss_get_elem" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0xe9af6d33, "generic_file_llseek" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xd3922678, "cfg80211_connect_done" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xa7999ec7, "__cfg80211_get_bss" },
	{ 0x3b842f0a, "wiphy_free" },
	{ 0xa11e9994, "ieee80211_get_num_supported_channels" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x67bbcda, "netdev_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "F3A0DAF154FD6B58E17A11F");
