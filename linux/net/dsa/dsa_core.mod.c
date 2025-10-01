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

KSYMTAB_FUNC(dsa_devlink_param_get, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_param_set, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_params_register, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_params_unregister, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_resource_register, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_resources_unregister, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_resource_occ_get_register, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_resource_occ_get_unregister, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_region_create, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_port_region_create, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_region_destroy, "_gpl", "");
KSYMTAB_FUNC(dsa_flush_workqueue, "_gpl", "");
KSYMTAB_FUNC(dsa_switch_find, "_gpl", "");
KSYMTAB_FUNC(dsa_register_switch, "_gpl", "");
KSYMTAB_FUNC(dsa_unregister_switch, "_gpl", "");
KSYMTAB_FUNC(dsa_switch_shutdown, "_gpl", "");
KSYMTAB_FUNC(dsa_port_from_netdev, "_gpl", "");
KSYMTAB_FUNC(dsa_fdb_present_in_other_db, "_gpl", "");
KSYMTAB_FUNC(dsa_mdb_present_in_other_db, "_gpl", "");
KSYMTAB_FUNC(dsa_supports_eee, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_drivers_register, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_drivers_unregister, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_8021q_bridge_vid, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_8021q_standalone_vid, "_gpl", "");
KSYMTAB_FUNC(dsa_8021q_rx_switch_id, "_gpl", "");
KSYMTAB_FUNC(dsa_8021q_rx_source_port, "_gpl", "");
KSYMTAB_FUNC(vid_is_dsa_8021q, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_8021q_bridge_join, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_8021q_bridge_leave, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_8021q_register, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_8021q_unregister, "_gpl", "");
KSYMTAB_FUNC(dsa_8021q_xmit, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_8021q_find_user, "_gpl", "");
KSYMTAB_FUNC(dsa_8021q_rcv, "_gpl", "");
KSYMTAB_FUNC(dsa_enqueue_skb, "_gpl", "");
KSYMTAB_FUNC(dsa_port_phylink_mac_change, "_gpl", "");
KSYMTAB_FUNC(dsa_user_dev_check, "_gpl", "");

SYMBOL_CRC(dsa_devlink_param_get, 0xd077e855, "_gpl");
SYMBOL_CRC(dsa_devlink_param_set, 0x6e50d33a, "_gpl");
SYMBOL_CRC(dsa_devlink_params_register, 0x00808071, "_gpl");
SYMBOL_CRC(dsa_devlink_params_unregister, 0x19669390, "_gpl");
SYMBOL_CRC(dsa_devlink_resource_register, 0xd6f8532a, "_gpl");
SYMBOL_CRC(dsa_devlink_resources_unregister, 0x4722af8d, "_gpl");
SYMBOL_CRC(dsa_devlink_resource_occ_get_register, 0x8939f8ef, "_gpl");
SYMBOL_CRC(dsa_devlink_resource_occ_get_unregister, 0x6b007d1b, "_gpl");
SYMBOL_CRC(dsa_devlink_region_create, 0x30a02322, "_gpl");
SYMBOL_CRC(dsa_devlink_port_region_create, 0x7c022949, "_gpl");
SYMBOL_CRC(dsa_devlink_region_destroy, 0xc23e8d5f, "_gpl");
SYMBOL_CRC(dsa_flush_workqueue, 0x0c6039ac, "_gpl");
SYMBOL_CRC(dsa_switch_find, 0x6cfc832a, "_gpl");
SYMBOL_CRC(dsa_register_switch, 0xcbbbcbdc, "_gpl");
SYMBOL_CRC(dsa_unregister_switch, 0xb2ae9830, "_gpl");
SYMBOL_CRC(dsa_switch_shutdown, 0x44f7e565, "_gpl");
SYMBOL_CRC(dsa_port_from_netdev, 0x5316109b, "_gpl");
SYMBOL_CRC(dsa_fdb_present_in_other_db, 0x2b2185cc, "_gpl");
SYMBOL_CRC(dsa_mdb_present_in_other_db, 0xd32e79ce, "_gpl");
SYMBOL_CRC(dsa_supports_eee, 0x1b3791ef, "_gpl");
SYMBOL_CRC(dsa_tag_drivers_register, 0x63435bce, "_gpl");
SYMBOL_CRC(dsa_tag_drivers_unregister, 0x95c01ae9, "_gpl");
SYMBOL_CRC(dsa_tag_8021q_bridge_vid, 0x45ca5090, "_gpl");
SYMBOL_CRC(dsa_tag_8021q_standalone_vid, 0x457a0f1c, "_gpl");
SYMBOL_CRC(dsa_8021q_rx_switch_id, 0x417d1fed, "_gpl");
SYMBOL_CRC(dsa_8021q_rx_source_port, 0x9e59271d, "_gpl");
SYMBOL_CRC(vid_is_dsa_8021q, 0xf13e1803, "_gpl");
SYMBOL_CRC(dsa_tag_8021q_bridge_join, 0xe88c8613, "_gpl");
SYMBOL_CRC(dsa_tag_8021q_bridge_leave, 0xe12e6820, "_gpl");
SYMBOL_CRC(dsa_tag_8021q_register, 0xc3fbcaa7, "_gpl");
SYMBOL_CRC(dsa_tag_8021q_unregister, 0x6c74cd76, "_gpl");
SYMBOL_CRC(dsa_8021q_xmit, 0x1e770374, "_gpl");
SYMBOL_CRC(dsa_tag_8021q_find_user, 0x41306caa, "_gpl");
SYMBOL_CRC(dsa_8021q_rcv, 0xe82557fe, "_gpl");
SYMBOL_CRC(dsa_enqueue_skb, 0x6c292793, "_gpl");
SYMBOL_CRC(dsa_port_phylink_mac_change, 0x86de40bf, "_gpl");
SYMBOL_CRC(dsa_user_dev_check, 0x470ba2fd, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x56e92ac8, "mdiobus_alloc_size" },
	{ 0xd06524ba, "raw_notifier_chain_unregister" },
	{ 0x89cb18c5, "netdev_lower_get_next" },
	{ 0x2b0f18b6, "flow_block_cb_lookup" },
	{ 0x6faf35, "switchdev_handle_port_obj_add_foreign" },
	{ 0xa5499b9f, "devlink_resource_occ_get_unregister" },
	{ 0xa4513f41, "dev_set_mtu" },
	{ 0xef913887, "br_vlan_enabled" },
	{ 0x42e2b350, "__skb_pad" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc77e7ada, "skb_ensure_writable_head_tail" },
	{ 0x438717fb, "bpf_trace_run4" },
	{ 0x5cab1aaf, "devlink_unregister" },
	{ 0x7a71a0be, "__nlmsg_put" },
	{ 0xa851973a, "raw_notifier_call_chain" },
	{ 0xa410a295, "devlink_region_destroy" },
	{ 0x26516747, "br_port_flag_is_set" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x469438cc, "of_node_put" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x82789cfd, "call_switchdev_notifiers" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x2f88d73c, "br_port_get_stp_state" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x1db41cf8, "dev_add_pack" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9d0c91cd, "__netpoll_free" },
	{ 0x180cd0ba, "trace_raw_output_prep" },
	{ 0xe8ec188d, "br_vlan_get_proto" },
	{ 0xa30524a5, "br_mst_get_state" },
	{ 0x385fa099, "unregister_netdev" },
	{ 0xa50bb103, "__trace_trigger_soft_disabled" },
	{ 0xfbfd5863, "trace_event_printf" },
	{ 0xed4befdf, "dev_uc_del" },
	{ 0x14a3f3d9, "netpoll_send_skb" },
	{ 0x9d12f712, "rtnl_link_register" },
	{ 0x58b4645c, "dev_close_many" },
	{ 0xe2b3207a, "unregister_switchdev_notifier" },
	{ 0xf2358cd2, "devlink_params_unregister" },
	{ 0x67d6c622, "devlink_port_attrs_set" },
	{ 0xc090c376, "net_selftest_get_strings" },
	{ 0xe1bafd45, "trace_event_raw_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xf25a665e, "devlink_alloc_ns" },
	{ 0x8d2feca6, "dev_set_promiscuity" },
	{ 0x669862a1, "devlink_register" },
	{ 0xdd6f08b9, "devlink_free" },
	{ 0x30616764, "of_phandle_iterator_next" },
	{ 0x80b20089, "gro_cells_init" },
	{ 0x9a38130e, "bpf_trace_run2" },
	{ 0x87e7c8e4, "netdev_warn" },
	{ 0x35decc18, "unregister_netdevice_queue" },
	{ 0x99ed6ef6, "get_device" },
	{ 0x4716832b, "of_get_next_available_child" },
	{ 0x594477ee, "skb_pull_rcsum" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xdd3b7072, "ether_setup" },
	{ 0x579904f9, "switchdev_handle_fdb_event_to_device" },
	{ 0xdc9fa232, "raw_notifier_chain_register" },
	{ 0x7a1c2aba, "of_get_property" },
	{ 0x8502868b, "netdev_err" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x9f8c8f6, "netdev_upper_dev_link" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0xc9dfea7b, "switchdev_handle_port_attr_set" },
	{ 0xc591171e, "phylink_create" },
	{ 0xea27477d, "vlan_for_each" },
	{ 0x3963064d, "netdev_port_same_parent_id" },
	{ 0xea427052, "trace_event_buffer_commit" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xc4f8efb6, "eth_type_trans" },
	{ 0xb67fb8b4, "alloc_netdev_mqs" },
	{ 0xd02a9cb4, "of_device_compatible_match" },
	{ 0x122c3a7e, "_printk" },
	{ 0x4ef8ad2f, "br_mst_get_info" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x13e4510, "vlan_dev_vlan_proto" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x36dc6ece, "put_device" },
	{ 0x2cbd0e55, "devlink_resource_register" },
	{ 0x75f95572, "netdev_upper_get_next_dev_rcu" },
	{ 0x6fa426d2, "phylink_ethtool_nway_reset" },
	{ 0xbb8ce2ef, "netif_device_detach" },
	{ 0xaab7ed5f, "switchdev_bridge_port_offload" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x87ed7397, "of_get_mac_address" },
	{ 0x64707a9c, "netif_device_attach" },
	{ 0x73c1803d, "phylink_ethtool_get_eee" },
	{ 0x9d9e8944, "module_put" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x9ba72289, "ptp_classify_raw" },
	{ 0xec905c5d, "of_get_child_by_name" },
	{ 0x72e7f8aa, "dev_open" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x746ed041, "devlink_region_create" },
	{ 0x1ceecc7d, "vlan_dev_real_dev" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xf45bdd92, "__dev_get_by_index" },
	{ 0x987c0c99, "rtnl_link_unregister" },
	{ 0x91ac9254, "perf_trace_run_bpf_submit" },
	{ 0x5483b71a, "devlink_port_unregister" },
	{ 0x669c413b, "_dev_err" },
	{ 0x1a6ab775, "init_net" },
	{ 0xca06e160, "noop_qdisc" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0xc1abdd68, "phy_ethtool_get_strings" },
	{ 0x39107e9f, "skb_vlan_untag" },
	{ 0x8677245d, "unregister_switchdev_blocking_notifier" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0x8bff47bb, "dev_remove_pack" },
	{ 0x45eaee3f, "bpf_trace_run5" },
	{ 0x983276da, "phylink_disconnect_phy" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1755587b, "gro_cells_receive" },
	{ 0x2e20cc7b, "switchdev_handle_port_obj_del_foreign" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf8fe5642, "phylink_ethtool_get_pauseparam" },
	{ 0x33b58322, "skb_push" },
	{ 0x9449e14c, "netdev_upper_dev_unlink" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xb19dafd8, "dev_mc_del" },
	{ 0xfe479535, "trace_event_reg" },
	{ 0x1bef08f8, "br_vlan_get_info" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0x911fcd6c, "phylink_start" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xe10409c1, "mdiobus_free" },
	{ 0xed85cddf, "sysfs_create_group" },
	{ 0xa211ecb3, "devlink_resource_occ_get_register" },
	{ 0x84cc8244, "of_find_net_device_by_node" },
	{ 0x4295cec9, "ethtool_op_get_link" },
	{ 0x15c4e3e2, "phylink_ethtool_set_pauseparam" },
	{ 0x880dffdd, "device_find_child" },
	{ 0x6d294e43, "clock_t_to_jiffies" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb6bcee9d, "phylink_ethtool_set_eee" },
	{ 0x8213956, "phylink_ethtool_get_wol" },
	{ 0x6eb65ced, "devlink_port_fini" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x8b15e5ae, "switchdev_bridge_port_unoffload" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x5d40bf92, "phy_ethtool_get_stats" },
	{ 0xdcb0a2c0, "phylink_stop" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xdfd8110c, "flow_block_cb_is_busy" },
	{ 0xa89a25ba, "dev_get_tstats64" },
	{ 0xad645234, "register_switchdev_notifier" },
	{ 0x50d00458, "netif_rx" },
	{ 0x914eac52, "dev_mc_add" },
	{ 0x411d90db, "flow_block_cb_alloc" },
	{ 0xa0e17f31, "br_vlan_get_pvid_rcu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x374b3c83, "sysfs_remove_group" },
	{ 0xdb319b68, "net_selftest" },
	{ 0xf2da001e, "bpf_trace_run3" },
	{ 0xe1e82627, "mdiobus_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd170e4d2, "phylink_ethtool_ksettings_set" },
	{ 0x70c679a7, "devlink_port_init" },
	{ 0xa603d80e, "of_get_phy_mode" },
	{ 0x3f341791, "__netpoll_setup" },
	{ 0x341d7aad, "__dev_queue_xmit" },
	{ 0x797af024, "vlan_vid_add" },
	{ 0x6eaac340, "devlink_params_register" },
	{ 0x2f828d33, "trace_event_buffer_reserve" },
	{ 0x376c0cfd, "br_vlan_get_info_rcu" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x12135396, "phylink_mac_change" },
	{ 0x4a4af06e, "vlan_vid_del" },
	{ 0x40a6abe5, "dev_set_allmulti" },
	{ 0xee38ef57, "register_switchdev_blocking_notifier" },
	{ 0x8ad97ded, "devlink_resources_unregister" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x5d9d076f, "netdev_master_upper_dev_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x828a01bc, "netif_carrier_off" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa1952ab0, "__vlan_find_dev_deep_rcu" },
	{ 0xea028be, "devlink_port_region_create" },
	{ 0x35f0f788, "devlink_priv" },
	{ 0xac85f68f, "skb_copy" },
	{ 0x54c75e4, "__hw_addr_sync_dev" },
	{ 0xc5a862af, "devlink_port_register_with_ops" },
	{ 0xeba72416, "mdiobus_get_phy" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0xf3083a1d, "phylink_destroy" },
	{ 0xf54d2460, "__mdiobus_register" },
	{ 0xe6020f33, "phylink_ethtool_ksettings_get" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xcd98ec55, "dev_uc_add" },
	{ 0x8cf39fe, "vlan_dev_vlan_id" },
	{ 0x62104126, "phylink_ethtool_set_wol" },
	{ 0xefb47ce2, "br_mst_enabled" },
	{ 0xa2a7f612, "of_phandle_iterator_init" },
	{ 0xd2ef6a40, "phylink_mii_ioctl" },
	{ 0xc28e38d, "phylink_of_phy_connect" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x8e6b1a9e, "net_selftest_get_count" },
	{ 0x710d6806, "device_link_add" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0xceab0311, "strchrnul" },
	{ 0xf2ea54f3, "dsa_stubs" },
	{ 0x1b3dac93, "phy_ethtool_get_sset_count" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xa23993d3, "__skb_vlan_pop" },
	{ 0xc544357c, "of_phy_is_fixed_link" },
	{ 0x8281ff34, "phylink_connect_phy" },
	{ 0xc0d1ab2, "br_get_ageing_time" },
	{ 0xcf015fa5, "register_netdevice" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "bridge");


MODULE_INFO(srcversion, "ED55DA9F473230ABDCC572A");
