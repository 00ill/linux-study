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

KSYMTAB_DATA(nf_br_ops, "_gpl", "");
KSYMTAB_FUNC(br_fdb_find_port, "_gpl", "");
KSYMTAB_FUNC(br_fdb_clear_offload, "_gpl", "");
KSYMTAB_FUNC(br_dev_queue_push_xmit, "_gpl", "");
KSYMTAB_FUNC(br_forward_finish, "_gpl", "");
KSYMTAB_FUNC(br_forward, "_gpl", "");
KSYMTAB_FUNC(br_port_flag_is_set, "_gpl", "");
KSYMTAB_FUNC(br_handle_frame_finish, "_gpl", "");
KSYMTAB_FUNC(br_port_get_stp_state, "_gpl", "");
KSYMTAB_FUNC(br_get_ageing_time, "_gpl", "");
KSYMTAB_FUNC(br_multicast_enabled, "_gpl", "");
KSYMTAB_FUNC(br_multicast_router, "_gpl", "");
KSYMTAB_FUNC(br_multicast_list_adjacent, "_gpl", "");
KSYMTAB_FUNC(br_multicast_has_querier_anywhere, "_gpl", "");
KSYMTAB_FUNC(br_multicast_has_querier_adjacent, "_gpl", "");
KSYMTAB_FUNC(br_multicast_has_router_adjacent, "_gpl", "");
KSYMTAB_FUNC(br_vlan_enabled, "_gpl", "");
KSYMTAB_FUNC(br_vlan_get_proto, "_gpl", "");
KSYMTAB_FUNC(br_vlan_get_pvid, "_gpl", "");
KSYMTAB_FUNC(br_vlan_get_pvid_rcu, "_gpl", "");
KSYMTAB_FUNC(br_vlan_get_info, "_gpl", "");
KSYMTAB_FUNC(br_vlan_get_info_rcu, "_gpl", "");
KSYMTAB_FUNC(br_mst_enabled, "_gpl", "");
KSYMTAB_FUNC(br_mst_get_info, "_gpl", "");
KSYMTAB_FUNC(br_mst_get_state, "_gpl", "");

SYMBOL_CRC(nf_br_ops, 0x29628e4e, "_gpl");
SYMBOL_CRC(br_fdb_find_port, 0x02c13cd4, "_gpl");
SYMBOL_CRC(br_fdb_clear_offload, 0xfd4574be, "_gpl");
SYMBOL_CRC(br_dev_queue_push_xmit, 0x08a0dc5d, "_gpl");
SYMBOL_CRC(br_forward_finish, 0x2ccb574b, "_gpl");
SYMBOL_CRC(br_forward, 0xf82682a6, "_gpl");
SYMBOL_CRC(br_port_flag_is_set, 0x26516747, "_gpl");
SYMBOL_CRC(br_handle_frame_finish, 0x6cf1de35, "_gpl");
SYMBOL_CRC(br_port_get_stp_state, 0x2f88d73c, "_gpl");
SYMBOL_CRC(br_get_ageing_time, 0x0c0d1ab2, "_gpl");
SYMBOL_CRC(br_multicast_enabled, 0x8b15310c, "_gpl");
SYMBOL_CRC(br_multicast_router, 0xb3851dfc, "_gpl");
SYMBOL_CRC(br_multicast_list_adjacent, 0x752a6d30, "_gpl");
SYMBOL_CRC(br_multicast_has_querier_anywhere, 0xb8fcbe2f, "_gpl");
SYMBOL_CRC(br_multicast_has_querier_adjacent, 0x8ec5a58f, "_gpl");
SYMBOL_CRC(br_multicast_has_router_adjacent, 0x80b7846c, "_gpl");
SYMBOL_CRC(br_vlan_enabled, 0xef913887, "_gpl");
SYMBOL_CRC(br_vlan_get_proto, 0xe8ec188d, "_gpl");
SYMBOL_CRC(br_vlan_get_pvid, 0xd0ce027e, "_gpl");
SYMBOL_CRC(br_vlan_get_pvid_rcu, 0xa0e17f31, "_gpl");
SYMBOL_CRC(br_vlan_get_info, 0x1bef08f8, "_gpl");
SYMBOL_CRC(br_vlan_get_info_rcu, 0x376c0cfd, "_gpl");
SYMBOL_CRC(br_mst_enabled, 0xefb47ce2, "_gpl");
SYMBOL_CRC(br_mst_get_info, 0x4ef8ad2f, "_gpl");
SYMBOL_CRC(br_mst_get_state, 0xa30524a5, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x89cb18c5, "netdev_lower_get_next" },
	{ 0xa4513f41, "dev_set_mtu" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xfc9cff63, "dev_pre_changeaddr_notify" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0x7a71a0be, "__nlmsg_put" },
	{ 0xad590944, "switchdev_port_attr_set" },
	{ 0x26b145d, "ipv6_mc_check_mld" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x916aefbe, "__percpu_counter_init_many" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x82789cfd, "call_switchdev_notifiers" },
	{ 0xe811d67, "sysfs_create_file_ns" },
	{ 0x2c834418, "static_key_slow_inc" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x170425fb, "netdev_update_features" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1224949e, "__traceiter_br_fdb_add" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9d0c91cd, "__netpoll_free" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x48e9a84, "nla_put_64bit" },
	{ 0x98c30e48, "__traceiter_br_fdb_update" },
	{ 0xed4befdf, "dev_uc_del" },
	{ 0x14a3f3d9, "netpoll_send_skb" },
	{ 0x9d12f712, "rtnl_link_register" },
	{ 0xe2b3207a, "unregister_switchdev_notifier" },
	{ 0x5ab2418a, "sysfs_create_bin_file" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xdb2e4f7d, "percpu_counter_destroy_many" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf2d5a7e0, "switchdev_port_obj_act_is_deferred" },
	{ 0x13e1d679, "dev_get_iflink" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d2feca6, "dev_set_promiscuity" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x35decc18, "unregister_netdevice_queue" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xce2ca9c8, "netdev_state_change" },
	{ 0xcde2f9d8, "__pskb_copy_fclone" },
	{ 0x11df2052, "__dev_get_by_name" },
	{ 0xdd3b7072, "ether_setup" },
	{ 0x8502868b, "netdev_err" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0x6fde0612, "brioctl_set" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xb912560d, "static_key_disable" },
	{ 0xa01c9ec7, "arp_xmit" },
	{ 0xb59812ff, "__traceiter_br_mdb_full" },
	{ 0xb67fb8b4, "alloc_netdev_mqs" },
	{ 0xcb0fc076, "passthru_features_check" },
	{ 0x1c06a7eb, "nla_put_nohdr" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x646ffded, "netdev_rx_handler_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xccc98218, "rtnl_af_register" },
	{ 0x7cce902d, "__tracepoint_br_mdb_full" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xc5f0d93e, "rtnl_set_sk_err" },
	{ 0xe07f1167, "skb_vlan_pop" },
	{ 0xb390ea4b, "rtnl_unicast" },
	{ 0xcb647be8, "sysfs_create_link" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x824a1ea8, "ipv6_dev_get_saddr" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x616ad95a, "nla_reserve_64bit" },
	{ 0x31c7a637, "__ip_mc_dec_group" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0xf45bdd92, "__dev_get_by_index" },
	{ 0x987c0c99, "rtnl_link_unregister" },
	{ 0x7e3191f6, "try_to_del_timer_sync" },
	{ 0x36242943, "switchdev_deferred_process" },
	{ 0x38846fd1, "dev_get_port_parent_id" },
	{ 0x1a6ab775, "init_net" },
	{ 0x2ce72391, "ipv6_stub" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xfa4c33b8, "inet_confirm_addr" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x685bb4f9, "sysfs_remove_link" },
	{ 0x39107e9f, "skb_vlan_untag" },
	{ 0x8677245d, "unregister_switchdev_blocking_notifier" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x273e94fd, "rtnl_af_unregister" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa7eedcc4, "call_usermodehelper" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0x446dfb15, "arp_send" },
	{ 0xbde17400, "dev_get_by_index_rcu" },
	{ 0x77ff80d3, "__tracepoint_br_fdb_add" },
	{ 0x8bbf16a7, "__traceiter_fdb_delete" },
	{ 0x652032cb, "mac_pton" },
	{ 0x33b58322, "skb_push" },
	{ 0x4a3c8253, "kmem_cache_free" },
	{ 0x63d909f8, "ndo_dflt_fdb_dump" },
	{ 0x5a921311, "strncmp" },
	{ 0x9449e14c, "netdev_upper_dev_unlink" },
	{ 0x2e7b0048, "netif_receive_skb" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xc155e9db, "llc_mac_hdr_init" },
	{ 0x66b9636e, "__rtnl_register_many" },
	{ 0x24b49baa, "free_netdev" },
	{ 0xcd279169, "nla_find" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x2d5b0050, "kobject_init_and_add" },
	{ 0xf37a3f0b, "__skb_warn_lro_forwarding" },
	{ 0xac27974a, "ns_capable" },
	{ 0xaa4a1b23, "inet_select_addr" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xed85cddf, "sysfs_create_group" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4295cec9, "ethtool_op_get_link" },
	{ 0x6d294e43, "clock_t_to_jiffies" },
	{ 0x2323690a, "arp_create" },
	{ 0x842cf66f, "__ethtool_get_link_ksettings" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xa40c4c58, "stp_proto_register" },
	{ 0x3e6d9d64, "__tracepoint_br_fdb_update" },
	{ 0x8fe47a08, "sysfs_rename_link_ns" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xdcb764ad, "memset" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x6f61551b, "kmem_cache_alloc_noprof" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x2f80097f, "switchdev_port_obj_add" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0xa89a25ba, "dev_get_tstats64" },
	{ 0xad645234, "register_switchdev_notifier" },
	{ 0x50d00458, "netif_rx" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0xece784c2, "rb_first" },
	{ 0x39fa6b91, "ip_mc_check_igmp" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0x8450a53a, "__kmem_cache_create_args" },
	{ 0xf7aeb6c9, "switchdev_port_obj_del" },
	{ 0x189e289a, "netdev_master_upper_dev_link" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xad811a0a, "kobject_create_and_add" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x4ecd0187, "nf_hook_slow" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb7052de, "__ip_mc_inc_group" },
	{ 0xd1fdefb2, "netdev_walk_all_upper_dev_rcu" },
	{ 0x374b3c83, "sysfs_remove_group" },
	{ 0x3ef28c5c, "__traceiter_br_fdb_external_learn_add" },
	{ 0x17ca5b9b, "in_dev_finish_destroy" },
	{ 0xd83898d5, "nf_hooks_needed" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd9b19aa5, "__tracepoint_fdb_delete" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x3f341791, "__netpoll_setup" },
	{ 0x341d7aad, "__dev_queue_xmit" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x797af024, "vlan_vid_add" },
	{ 0xc9ddfdb8, "neigh_destroy" },
	{ 0x48c35c9e, "__tracepoint_br_fdb_external_learn_add" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0xc503a308, "kobject_del" },
	{ 0x28839c12, "rhashtable_init_noprof" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf661ea97, "call_netdevice_notifiers" },
	{ 0x60b7dab4, "is_skb_forwardable" },
	{ 0x4a4af06e, "vlan_vid_del" },
	{ 0x40a6abe5, "dev_set_allmulti" },
	{ 0xe88d2a42, "net_ns_get_ownership" },
	{ 0xee38ef57, "register_switchdev_blocking_notifier" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x5d9d076f, "netdev_master_upper_dev_get" },
	{ 0x8a2f1ef8, "ipv6_dev_mc_inc" },
	{ 0xeafb39b6, "rtnl_notify" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x828a01bc, "netif_carrier_off" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa1952ab0, "__vlan_find_dev_deep_rcu" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0xba75ce42, "metadata_dst_alloc" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0xffc50605, "netif_carrier_on" },
	{ 0x32700730, "kobject_uevent" },
	{ 0x17b32e54, "arp_tbl" },
	{ 0xae5f6087, "ipv6_dev_mc_dec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x68cdc97, "netdev_rx_handler_register" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xcd98ec55, "dev_uc_add" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xaa88432a, "netif_set_tso_max_size" },
	{ 0xfd5a7546, "dev_disable_lro" },
	{ 0xeddaec7e, "ipv6_chk_addr" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9723a8ad, "dev_get_flags" },
	{ 0x50032390, "__rtnl_unregister_many" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xd3468e06, "netdev_notice" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0xa95ab702, "nf_queue" },
	{ 0x20eadeb6, "ip_compute_csum" },
	{ 0xa6d671b1, "netif_set_tso_max_segs" },
	{ 0x349cba85, "strchr" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x13c88f85, "sysfs_remove_bin_file" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x14a0cd53, "stp_proto_unregister" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x685b0483, "neigh_lookup" },
	{ 0x656f612b, "kmem_cache_destroy" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x317df83, "kobject_put" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xcf015fa5, "register_netdevice" },
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ipv6,llc,stp");


MODULE_INFO(srcversion, "9E656A82B10351004625971");
