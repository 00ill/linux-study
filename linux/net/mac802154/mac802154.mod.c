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

KSYMTAB_FUNC(ieee802154_alloc_hw, "", "");
KSYMTAB_FUNC(ieee802154_configure_durations, "", "");
KSYMTAB_FUNC(ieee802154_free_hw, "", "");
KSYMTAB_FUNC(ieee802154_register_hw, "", "");
KSYMTAB_FUNC(ieee802154_unregister_hw, "", "");
KSYMTAB_FUNC(ieee802154_rx_irqsafe, "", "");
KSYMTAB_FUNC(ieee802154_xmit_complete, "", "");
KSYMTAB_FUNC(ieee802154_xmit_error, "", "");
KSYMTAB_FUNC(ieee802154_xmit_hw_error, "", "");

SYMBOL_CRC(ieee802154_alloc_hw, 0x1c1e5d83, "");
SYMBOL_CRC(ieee802154_configure_durations, 0xc036ce0a, "");
SYMBOL_CRC(ieee802154_free_hw, 0xfa5ff2fa, "");
SYMBOL_CRC(ieee802154_register_hw, 0x130237d0, "");
SYMBOL_CRC(ieee802154_unregister_hw, 0xe488f1c0, "");
SYMBOL_CRC(ieee802154_rx_irqsafe, 0x9ac95d3b, "");
SYMBOL_CRC(ieee802154_xmit_complete, 0x76fb22db, "");
SYMBOL_CRC(ieee802154_xmit_error, 0xfc235c02, "");
SYMBOL_CRC(ieee802154_xmit_hw_error, 0xb8243e5e, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x82beb0e5, "crypto_skcipher_encrypt" },
	{ 0x87e2553b, "ieee802154_max_payload" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x438717fb, "bpf_trace_run4" },
	{ 0x11f28985, "nl802154_beaconing_done" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x180cd0ba, "trace_raw_output_prep" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa50bb103, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xfbfd5863, "trace_event_printf" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x9e22a835, "dev_alloc_name" },
	{ 0xe1bafd45, "trace_event_raw_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x82408f43, "ieee802154_mac_cmd_push" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x43babd19, "sg_init_one" },
	{ 0xfb1e5d5c, "crypto_alloc_aead" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x9a38130e, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x87e7c8e4, "netdev_warn" },
	{ 0xefe669ed, "crypto_aead_setauthsize" },
	{ 0xbddb0e1d, "crypto_aead_decrypt" },
	{ 0xe2964344, "__wake_up" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0xeadbccbc, "crypto_skcipher_setkey" },
	{ 0x35decc18, "unregister_netdevice_queue" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1e3c0529, "ieee802154_hdr_peek_addrs" },
	{ 0x542beccc, "wpan_phy_unregister" },
	{ 0xea427052, "trace_event_buffer_commit" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xc35aaa13, "crypto_destroy_tfm" },
	{ 0xb67fb8b4, "alloc_netdev_mqs" },
	{ 0x8e59c16c, "nl802154_scan_done" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x86a81283, "nl802154_scan_started" },
	{ 0x256958c5, "crypto_skcipher_decrypt" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xbd395e28, "skb_copy_expand" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x44c4c527, "crypto_aead_setkey" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x91ac9254, "perf_trace_run_bpf_submit" },
	{ 0x9175fca9, "cfg802154_get_free_short_addr" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x4baafaac, "wpan_phy_register" },
	{ 0x8957e7a3, "cfg802154_set_max_associations" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x30cd443b, "crypto_aead_encrypt" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0xd9d852c7, "ieee802154_hdr_peek" },
	{ 0xdd5037b, "wpan_phy_free" },
	{ 0x2e7b0048, "netif_receive_skb" },
	{ 0xfe479535, "trace_event_reg" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x564c900c, "bpf_trace_run1" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x4e5cd016, "ieee802154_hdr_pull" },
	{ 0x437e9ed5, "nl802154_scan_event" },
	{ 0x59793001, "crypto_alloc_sync_skcipher" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf2da001e, "bpf_trace_run3" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x2f828d33, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x726bc3c7, "wait_for_completion_killable_timeout" },
	{ 0x76f472ee, "ieee802154_beacon_push" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x81ec5361, "ieee802154_mac_cmd_pl_pull" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x20574af5, "wpan_phy_new" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xddaed53b, "ieee802154_hdr_push" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0xdb741623, "cfg802154_device_is_parent" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x4404fd2a, "cfg802154_device_is_child" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xcf015fa5, "register_netdevice" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ieee802154,crc-ccitt");


MODULE_INFO(srcversion, "DC1138AE16B2B32E5FDFC74");
