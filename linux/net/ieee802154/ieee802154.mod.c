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

KSYMTAB_FUNC(wpan_phy_find, "", "");
KSYMTAB_FUNC(wpan_phy_for_each, "", "");
KSYMTAB_FUNC(wpan_phy_new, "", "");
KSYMTAB_FUNC(wpan_phy_register, "", "");
KSYMTAB_FUNC(wpan_phy_unregister, "", "");
KSYMTAB_FUNC(wpan_phy_free, "", "");
KSYMTAB_FUNC(ieee802154_hdr_push, "_gpl", "");
KSYMTAB_FUNC(ieee802154_mac_cmd_push, "_gpl", "");
KSYMTAB_FUNC(ieee802154_beacon_push, "_gpl", "");
KSYMTAB_FUNC(ieee802154_hdr_pull, "_gpl", "");
KSYMTAB_FUNC(ieee802154_mac_cmd_pl_pull, "_gpl", "");
KSYMTAB_FUNC(ieee802154_hdr_peek_addrs, "_gpl", "");
KSYMTAB_FUNC(ieee802154_hdr_peek, "_gpl", "");
KSYMTAB_FUNC(ieee802154_max_payload, "_gpl", "");
KSYMTAB_FUNC(nl802154_scan_event, "_gpl", "");
KSYMTAB_FUNC(nl802154_scan_started, "_gpl", "");
KSYMTAB_FUNC(nl802154_scan_done, "_gpl", "");
KSYMTAB_FUNC(nl802154_beaconing_done, "_gpl", "");
KSYMTAB_FUNC(cfg802154_device_is_parent, "_gpl", "");
KSYMTAB_FUNC(cfg802154_device_is_child, "_gpl", "");
KSYMTAB_FUNC(cfg802154_get_free_short_addr, "_gpl", "");
KSYMTAB_FUNC(cfg802154_set_max_associations, "_gpl", "");

SYMBOL_CRC(wpan_phy_find, 0xf9854128, "");
SYMBOL_CRC(wpan_phy_for_each, 0x39c13cd7, "");
SYMBOL_CRC(wpan_phy_new, 0x20574af5, "");
SYMBOL_CRC(wpan_phy_register, 0x4baafaac, "");
SYMBOL_CRC(wpan_phy_unregister, 0x542beccc, "");
SYMBOL_CRC(wpan_phy_free, 0x0dd5037b, "");
SYMBOL_CRC(ieee802154_hdr_push, 0xddaed53b, "_gpl");
SYMBOL_CRC(ieee802154_mac_cmd_push, 0x82408f43, "_gpl");
SYMBOL_CRC(ieee802154_beacon_push, 0x76f472ee, "_gpl");
SYMBOL_CRC(ieee802154_hdr_pull, 0x4e5cd016, "_gpl");
SYMBOL_CRC(ieee802154_mac_cmd_pl_pull, 0x81ec5361, "_gpl");
SYMBOL_CRC(ieee802154_hdr_peek_addrs, 0x1e3c0529, "_gpl");
SYMBOL_CRC(ieee802154_hdr_peek, 0xd9d852c7, "_gpl");
SYMBOL_CRC(ieee802154_max_payload, 0x87e2553b, "_gpl");
SYMBOL_CRC(nl802154_scan_event, 0x437e9ed5, "_gpl");
SYMBOL_CRC(nl802154_scan_started, 0x86a81283, "_gpl");
SYMBOL_CRC(nl802154_scan_done, 0x8e59c16c, "_gpl");
SYMBOL_CRC(nl802154_beaconing_done, 0x11f28985, "_gpl");
SYMBOL_CRC(cfg802154_device_is_parent, 0xdb741623, "_gpl");
SYMBOL_CRC(cfg802154_device_is_child, 0x4404fd2a, "_gpl");
SYMBOL_CRC(cfg802154_get_free_short_addr, 0x9175fca9, "_gpl");
SYMBOL_CRC(cfg802154_set_max_associations, 0x8957e7a3, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x438717fb, "bpf_trace_run4" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0xc11c74b1, "trace_output_call" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x180cd0ba, "trace_raw_output_prep" },
	{ 0x48e9a84, "nla_put_64bit" },
	{ 0xa50bb103, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xfbfd5863, "trace_event_printf" },
	{ 0x16965a52, "device_initialize" },
	{ 0xfbcd121e, "genlmsg_put" },
	{ 0xe1bafd45, "trace_event_raw_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a38130e, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x99ed6ef6, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6d569cec, "netlink_broadcast_filtered" },
	{ 0x3f14f0db, "device_rename" },
	{ 0xea427052, "trace_event_buffer_commit" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x36dc6ece, "put_device" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xaf4e2fa9, "class_for_each_device" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xf45bdd92, "__dev_get_by_index" },
	{ 0x91ac9254, "perf_trace_run_bpf_submit" },
	{ 0x1a6ab775, "init_net" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7b1a51f0, "device_add" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xf4889f04, "netlink_unicast" },
	{ 0x4192b128, "dev_get_by_index" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xfe479535, "trace_event_reg" },
	{ 0x7143a676, "class_unregister" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x84fc77f4, "unregister_pernet_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x564c900c, "bpf_trace_run1" },
	{ 0x73f49957, "device_del" },
	{ 0x9e0d80d8, "dev_set_mac_address" },
	{ 0xdcb764ad, "memset" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf2da001e, "bpf_trace_run3" },
	{ 0x44162dce, "__put_net" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf264b9a0, "get_net_ns_by_pid" },
	{ 0x2f828d33, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x6fb37fe8, "device_match_name" },
	{ 0xf43f04b4, "dev_get_by_name" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x41e4f2cd, "genl_unregister_family" },
	{ 0x98cf60b3, "strlen" },
	{ 0xce91aba6, "genl_register_family" },
	{ 0x5afea1a5, "__dev_change_net_namespace" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x5b390004, "register_pernet_device" },
	{ 0xe0899072, "get_net_ns_by_fd" },
	{ 0xa42d469b, "class_register" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xcf5fbd79, "class_find_device" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "41E7773C1AA1DB2EE13E023");
