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

KSYMTAB_FUNC(ipvlan_count_rx, "_gpl", "");
KSYMTAB_FUNC(ipvlan_link_new, "_gpl", "");
KSYMTAB_FUNC(ipvlan_link_delete, "_gpl", "");
KSYMTAB_FUNC(ipvlan_link_setup, "_gpl", "");
KSYMTAB_FUNC(ipvlan_link_register, "_gpl", "");

SYMBOL_CRC(ipvlan_count_rx, 0x1119df0d, "_gpl");
SYMBOL_CRC(ipvlan_link_new, 0xc6d4711a, "_gpl");
SYMBOL_CRC(ipvlan_link_delete, 0xaee684f3, "_gpl");
SYMBOL_CRC(ipvlan_link_setup, 0x4784bb89, "_gpl");
SYMBOL_CRC(ipvlan_link_register, 0x5cb78e93, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3e6760b4, "__do_once_done" },
	{ 0xa85c1acc, "ip6_route_input_lookup" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0xfc9cff63, "dev_pre_changeaddr_notify" },
	{ 0x79f42125, "dev_mc_sync" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x538eaefd, "netdev_is_rx_handler_busy" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x170425fb, "netdev_update_features" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xaf99201, "ip6_local_out" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x1cde229e, "dev_uc_sync" },
	{ 0x9d12f712, "rtnl_link_register" },
	{ 0x917db7b1, "netif_inherit_tso_max" },
	{ 0xd1eda137, "eth_header_cache" },
	{ 0x37a0cba, "kfree" },
	{ 0x1e4fc92c, "ip_route_output_flow" },
	{ 0x35decc18, "unregister_netdevice_queue" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6ead29bd, "dev_uc_unsync" },
	{ 0xdd3b7072, "ether_setup" },
	{ 0x8502868b, "netdev_err" },
	{ 0x9f8c8f6, "netdev_upper_dev_link" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xc153072c, "eth_header_parse" },
	{ 0x646ffded, "netdev_rx_handler_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x82f8123d, "eth_header_cache_update" },
	{ 0x6fb0cf6f, "nf_register_net_hooks" },
	{ 0x3517a6a6, "ip6_route_output_flags" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x83dd3a68, "ip_route_input_noref" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xf45bdd92, "__dev_get_by_index" },
	{ 0x987c0c99, "rtnl_link_unregister" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x8441878, "netif_stacked_transfer_operstate" },
	{ 0x9449e14c, "netdev_upper_dev_unlink" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xffb7c514, "ida_free" },
	{ 0xac27974a, "ns_capable" },
	{ 0xa243d05d, "nf_unregister_net_hooks" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4295cec9, "ethtool_op_get_link" },
	{ 0x842cf66f, "__ethtool_get_link_ksettings" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xdcb764ad, "memset" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x50d00458, "netif_rx" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xdaff9136, "skb_scrub_packet" },
	{ 0x47c65bfc, "unregister_inet6addr_validator_notifier" },
	{ 0x341d7aad, "__dev_queue_xmit" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x797af024, "vlan_vid_add" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0xf661ea97, "call_netdevice_notifiers" },
	{ 0x4a4af06e, "vlan_vid_del" },
	{ 0x40a6abe5, "dev_set_allmulti" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0x68cdc97, "netdev_rx_handler_register" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xab63baa5, "unregister_inetaddr_validator_notifier" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xdbf248b6, "ip_local_out" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x7f4528b9, "eth_header_parse_protocol" },
	{ 0xc32c71af, "register_inetaddr_validator_notifier" },
	{ 0xf0956a5e, "dev_mc_unsync" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x86c98d4d, "dev_change_flags" },
	{ 0x474211c4, "netdev_core_stats_inc" },
	{ 0x491dab98, "dev_forward_skb" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xa77bfd29, "register_inet6addr_validator_notifier" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xcf015fa5, "register_netdevice" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "501E29E442A1CA91DB568B0");
