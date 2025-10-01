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

KSYMTAB_FUNC(macvlan_common_setup, "_gpl", "");
KSYMTAB_FUNC(macvlan_common_newlink, "_gpl", "");
KSYMTAB_FUNC(macvlan_dellink, "_gpl", "");
KSYMTAB_FUNC(macvlan_link_register, "_gpl", "");

SYMBOL_CRC(macvlan_common_setup, 0xc9c464d1, "_gpl");
SYMBOL_CRC(macvlan_common_newlink, 0x40f9aa15, "_gpl");
SYMBOL_CRC(macvlan_dellink, 0xa129e053, "_gpl");
SYMBOL_CRC(macvlan_link_register, 0x87c9c9e0, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdd3b7072, "ether_setup" },
	{ 0x842cf66f, "__ethtool_get_link_ksettings" },
	{ 0x9d5f0a39, "ethtool_get_ts_info_by_layer" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x1a6ab775, "init_net" },
	{ 0xb0e0e151, "generic_hwtstamp_set_lower" },
	{ 0xa5acf34, "generic_hwtstamp_get_lower" },
	{ 0xb19dafd8, "dev_mc_del" },
	{ 0xed4befdf, "dev_uc_del" },
	{ 0xfa7ad7ab, "dev_mc_add_excl" },
	{ 0x4c44085c, "dev_uc_add_excl" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x9d0c91cd, "__netpoll_free" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x4a4af06e, "vlan_vid_del" },
	{ 0x797af024, "vlan_vid_add" },
	{ 0x40a6abe5, "dev_set_allmulti" },
	{ 0x8d2feca6, "dev_set_promiscuity" },
	{ 0x6ead29bd, "dev_uc_unsync" },
	{ 0xf0956a5e, "dev_mc_unsync" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9d12f712, "rtnl_link_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x987c0c99, "rtnl_link_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x3f341791, "__netpoll_setup" },
	{ 0x37a0cba, "kfree" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x35decc18, "unregister_netdevice_queue" },
	{ 0x9449e14c, "netdev_upper_dev_unlink" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xcd98ec55, "dev_uc_add" },
	{ 0x9e0d80d8, "dev_set_mac_address" },
	{ 0xa4513f41, "dev_set_mtu" },
	{ 0xf661ea97, "call_netdevice_notifiers" },
	{ 0x917db7b1, "netif_inherit_tso_max" },
	{ 0x170425fb, "netdev_update_features" },
	{ 0x8441878, "netif_stacked_transfer_operstate" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x1cde229e, "dev_uc_sync" },
	{ 0x79f42125, "dev_mc_sync" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0x50d00458, "netif_rx" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x1ff2634c, "__dev_forward_skb" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x646ffded, "netdev_rx_handler_unregister" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xf45bdd92, "__dev_get_by_index" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x538eaefd, "netdev_is_rx_handler_busy" },
	{ 0x68cdc97, "netdev_rx_handler_register" },
	{ 0xcf015fa5, "register_netdevice" },
	{ 0x9f8c8f6, "netdev_upper_dev_link" },
	{ 0x3d3bd24f, "linkwatch_fire_event" },
	{ 0x341d7aad, "__dev_queue_xmit" },
	{ 0x491dab98, "dev_forward_skb" },
	{ 0x14a3f3d9, "netpoll_send_skb" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0xd04c1027, "__netif_rx" },
	{ 0xf5298464, "ip_check_defrag" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x474211c4, "netdev_core_stats_inc" },
	{ 0xcb0fc076, "passthru_features_check" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0x63d909f8, "ndo_dflt_fdb_dump" },
	{ 0xc153072c, "eth_header_parse" },
	{ 0xd1eda137, "eth_header_cache" },
	{ 0x82f8123d, "eth_header_cache_update" },
	{ 0x7f4528b9, "eth_header_parse_protocol" },
	{ 0x4295cec9, "ethtool_op_get_link" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AC2F2998AE48C1601910740");
