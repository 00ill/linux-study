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

KSYMTAB_FUNC(ip_vs_conn_in_get_proto, "_gpl", "");
KSYMTAB_FUNC(ip_vs_conn_out_get_proto, "_gpl", "");
KSYMTAB_FUNC(register_ip_vs_scheduler, "", "");
KSYMTAB_FUNC(unregister_ip_vs_scheduler, "", "");
KSYMTAB_FUNC(ip_vs_proto_name, "", "");
KSYMTAB_FUNC(ip_vs_conn_new, "", "");
KSYMTAB_FUNC(ip_vs_conn_in_get, "", "");
KSYMTAB_FUNC(ip_vs_conn_out_get, "", "");
KSYMTAB_FUNC(ip_vs_tcp_conn_listen, "", "");
KSYMTAB_FUNC(ip_vs_conn_put, "", "");
KSYMTAB_FUNC(ip_vs_new_conn_out, "", "");
KSYMTAB_FUNC(ip_vs_scheduler_err, "", "");
KSYMTAB_FUNC(register_ip_vs_app, "", "");
KSYMTAB_FUNC(unregister_ip_vs_app, "", "");
KSYMTAB_FUNC(register_ip_vs_app_inc, "", "");
KSYMTAB_FUNC(ip_vs_proto_get, "", "");
KSYMTAB_FUNC(ip_vs_proto_data_get, "", "");
KSYMTAB_FUNC(register_ip_vs_pe, "_gpl", "");
KSYMTAB_FUNC(unregister_ip_vs_pe, "_gpl", "");
KSYMTAB_FUNC(ip_vs_nfct_expect_related, "", "");

SYMBOL_CRC(ip_vs_conn_in_get_proto, 0xbb9b5e33, "_gpl");
SYMBOL_CRC(ip_vs_conn_out_get_proto, 0x75fffd94, "_gpl");
SYMBOL_CRC(register_ip_vs_scheduler, 0x40f8a274, "");
SYMBOL_CRC(unregister_ip_vs_scheduler, 0x6d578e07, "");
SYMBOL_CRC(ip_vs_proto_name, 0xd831a1a2, "");
SYMBOL_CRC(ip_vs_conn_new, 0x73e44def, "");
SYMBOL_CRC(ip_vs_conn_in_get, 0x0a47ebf0, "");
SYMBOL_CRC(ip_vs_conn_out_get, 0x9d11793d, "");
SYMBOL_CRC(ip_vs_tcp_conn_listen, 0xcc2bd9b0, "");
SYMBOL_CRC(ip_vs_conn_put, 0x3031016e, "");
SYMBOL_CRC(ip_vs_new_conn_out, 0xc67d252d, "");
SYMBOL_CRC(ip_vs_scheduler_err, 0x2496af9a, "");
SYMBOL_CRC(register_ip_vs_app, 0x7957b64e, "");
SYMBOL_CRC(unregister_ip_vs_app, 0xe2c47745, "");
SYMBOL_CRC(register_ip_vs_app_inc, 0x9f485720, "");
SYMBOL_CRC(ip_vs_proto_get, 0xcb48b1da, "");
SYMBOL_CRC(ip_vs_proto_data_get, 0x2c19d8b5, "");
SYMBOL_CRC(register_ip_vs_pe, 0x97f330c4, "_gpl");
SYMBOL_CRC(unregister_ip_vs_pe, 0xb9a12675, "_gpl");
SYMBOL_CRC(ip_vs_nfct_expect_related, 0x3a020a07, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xeb43153, "nf_ct_ext_add" },
	{ 0xe914e41e, "strcpy" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0x90cb3152, "nf_conntrack_find_get" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0xc5adef84, "__ip_select_ident" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x27fa66e1, "nr_free_buffer_pages" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xa459061b, "xfrm_lookup" },
	{ 0xac4038d6, "proc_dointvec_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x6060ee96, "housekeeping_cpumask" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xaf99201, "ip6_local_out" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4ecddc94, "nf_register_sockopt" },
	{ 0x48e9a84, "nla_put_64bit" },
	{ 0x23defc63, "nf_ct_netns_get" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0x96848186, "scnprintf" },
	{ 0x2b8298a9, "kernel_bind" },
	{ 0xc1ea4986, "set_user_nice" },
	{ 0xfbcd121e, "genlmsg_put" },
	{ 0xb920d0f6, "udp_set_csum" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x17f9e370, "ip6_route_me_harder" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xd8940511, "__module_get" },
	{ 0x1e4fc92c, "ip_route_output_flow" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x8a131a79, "iptunnel_handle_offloads" },
	{ 0xac3201b0, "udp_flow_hashrnd" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x11df2052, "__dev_get_by_name" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x9ed72da3, "proc_create_net_data" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x9ae47436, "_find_last_bit" },
	{ 0x7861b279, "register_net_sysctl_sz" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xa7be890d, "nf_unregister_sockopt" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x6fb0cf6f, "nf_register_net_hooks" },
	{ 0x3517a6a6, "ip6_route_output_flags" },
	{ 0xa916b694, "strnlen" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x3004289a, "ipv6_sock_mc_join" },
	{ 0x9d9e8944, "module_put" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0xfac8865f, "sysctl_wmem_max" },
	{ 0xb05fc310, "sysctl_rmem_max" },
	{ 0x824a1ea8, "ipv6_dev_get_saddr" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x2e536d3e, "__skb_get_hash_net" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1a6ab775, "init_net" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xf4889f04, "netlink_unicast" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8b0e920e, "nf_ct_expect_related_report" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0x51a647d4, "ip_route_me_harder" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x4a3c8253, "kmem_cache_free" },
	{ 0xa6a9242, "set_cpus_allowed_ptr" },
	{ 0x3dfbc684, "seq_putc" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x896c49d8, "proc_doulongvec_minmax" },
	{ 0x76e331cf, "nf_ct_expect_alloc" },
	{ 0x60abba40, "skb_ensure_writable" },
	{ 0xff65ed11, "iov_iter_kvec" },
	{ 0xa21205e8, "ip_mc_join_group" },
	{ 0x2d10edf5, "nf_ct_expect_put" },
	{ 0xac27974a, "ns_capable" },
	{ 0xa243d05d, "nf_unregister_net_hooks" },
	{ 0xaa4a1b23, "inet_select_addr" },
	{ 0x84fc77f4, "unregister_pernet_device" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0x158e0589, "inet_addr_type" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf00b1f86, "__nf_conntrack_confirm" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xafaba172, "kernel_connect" },
	{ 0xb58cf5d9, "skb_checksum" },
	{ 0xdcb764ad, "memset" },
	{ 0x9fe3c28b, "ip_defrag" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x6f61551b, "kmem_cache_alloc_noprof" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc9124148, "__icmpv6_send" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0xda16d8d5, "nf_ct_delete" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x8450a53a, "__kmem_cache_create_args" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x4ecd0187, "nf_hook_slow" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0x46adc07d, "nf_ct_deliver_cached_events" },
	{ 0xd4ab7847, "skb_realloc_headroom" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe2ece698, "ipv6_find_hdr" },
	{ 0xb15b4109, "crc32c" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x80e970df, "__icmp_send" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0xa5a853f, "skb_set_owner_w" },
	{ 0xa814ed34, "__skb_checksum" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x93482612, "sock_create_kern" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x771f0565, "init_user_ns" },
	{ 0xfeb7f1cc, "nf_ct_expect_init" },
	{ 0xb53675e6, "seq_write" },
	{ 0xa0e24b52, "remove_proc_entry" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x4542181e, "sock_recvmsg" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xeb670f5, "proc_create_net_single" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x38e36658, "ipv4_update_pmtu" },
	{ 0x29df7741, "nf_defrag_ipv6_enable" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0xcebd4329, "sock_release" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf943375f, "proc_dointvec" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x5ac8c04c, "unregister_net_sysctl_table" },
	{ 0xdbf248b6, "ip_local_out" },
	{ 0x41e4f2cd, "genl_unregister_family" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x98cf60b3, "strlen" },
	{ 0xcd27abad, "udp6_set_csum" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xce91aba6, "genl_register_family" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x68a638e7, "kernel_sendmsg" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x5eab8ad3, "nf_ct_netns_put" },
	{ 0x5b390004, "register_pernet_device" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x847188e8, "krealloc_noprof" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x656f612b, "kmem_cache_destroy" },
	{ 0xd2d80c01, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3eca0c01, "proc_dointvec_minmax" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,ipv6,nf_defrag_ipv6");


MODULE_INFO(srcversion, "A6A21A223AEDE5ADCF0A9D6");
