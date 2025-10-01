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

KSYMTAB_FUNC(nf_ct_nat_ext_add, "_gpl", "");
KSYMTAB_FUNC(nf_nat_setup_info, "", "");
KSYMTAB_FUNC(nf_nat_alloc_null_binding, "_gpl", "");
KSYMTAB_FUNC(nf_nat_packet, "_gpl", "");
KSYMTAB_FUNC(nf_nat_inet_fn, "_gpl", "");
KSYMTAB_FUNC(nf_nat_icmp_reply_translation, "_gpl", "");
KSYMTAB_FUNC(nf_nat_ipv4_register_fn, "_gpl", "");
KSYMTAB_FUNC(nf_nat_ipv4_unregister_fn, "_gpl", "");
KSYMTAB_FUNC(nf_nat_icmpv6_reply_translation, "_gpl", "");
KSYMTAB_FUNC(nf_nat_ipv6_register_fn, "_gpl", "");
KSYMTAB_FUNC(nf_nat_ipv6_unregister_fn, "_gpl", "");
KSYMTAB_FUNC(nf_nat_inet_register_fn, "_gpl", "");
KSYMTAB_FUNC(nf_nat_inet_unregister_fn, "_gpl", "");
KSYMTAB_FUNC(__nf_nat_mangle_tcp_packet, "", "");
KSYMTAB_FUNC(nf_nat_mangle_udp_packet, "", "");
KSYMTAB_FUNC(nf_nat_follow_master, "", "");
KSYMTAB_FUNC(nf_nat_exp_find_port, "_gpl", "");
KSYMTAB_FUNC(nf_nat_redirect_ipv4, "_gpl", "");
KSYMTAB_FUNC(nf_nat_redirect_ipv6, "_gpl", "");
KSYMTAB_FUNC(nf_nat_masquerade_ipv4, "_gpl", "");
KSYMTAB_FUNC(nf_nat_masquerade_ipv6, "_gpl", "");
KSYMTAB_FUNC(nf_nat_masquerade_inet_register_notifiers, "_gpl", "");
KSYMTAB_FUNC(nf_nat_masquerade_inet_unregister_notifiers, "_gpl", "");
KSYMTAB_FUNC(nf_ct_nat, "_gpl", "");

SYMBOL_CRC(nf_ct_nat_ext_add, 0x3fba28e1, "_gpl");
SYMBOL_CRC(nf_nat_setup_info, 0x6ff996e1, "");
SYMBOL_CRC(nf_nat_alloc_null_binding, 0xe5bce5ce, "_gpl");
SYMBOL_CRC(nf_nat_packet, 0xdbcb8fba, "_gpl");
SYMBOL_CRC(nf_nat_inet_fn, 0x84ef816b, "_gpl");
SYMBOL_CRC(nf_nat_icmp_reply_translation, 0x4baafd8c, "_gpl");
SYMBOL_CRC(nf_nat_ipv4_register_fn, 0xaaba5777, "_gpl");
SYMBOL_CRC(nf_nat_ipv4_unregister_fn, 0xf2b66c7e, "_gpl");
SYMBOL_CRC(nf_nat_icmpv6_reply_translation, 0xc3de4f61, "_gpl");
SYMBOL_CRC(nf_nat_ipv6_register_fn, 0xe3cebc95, "_gpl");
SYMBOL_CRC(nf_nat_ipv6_unregister_fn, 0xa9268f94, "_gpl");
SYMBOL_CRC(nf_nat_inet_register_fn, 0x41d38004, "_gpl");
SYMBOL_CRC(nf_nat_inet_unregister_fn, 0xee13ea55, "_gpl");
SYMBOL_CRC(__nf_nat_mangle_tcp_packet, 0xdf2b2b87, "");
SYMBOL_CRC(nf_nat_mangle_udp_packet, 0x9e71d046, "");
SYMBOL_CRC(nf_nat_follow_master, 0xc4373c03, "");
SYMBOL_CRC(nf_nat_exp_find_port, 0x9a13babd, "_gpl");
SYMBOL_CRC(nf_nat_redirect_ipv4, 0xb904cebf, "_gpl");
SYMBOL_CRC(nf_nat_redirect_ipv6, 0x6012b6c3, "_gpl");
SYMBOL_CRC(nf_nat_masquerade_ipv4, 0x9dce77c1, "_gpl");
SYMBOL_CRC(nf_nat_masquerade_ipv6, 0x0b7f5339, "_gpl");
SYMBOL_CRC(nf_nat_masquerade_inet_register_notifiers, 0x3bc17c49, "_gpl");
SYMBOL_CRC(nf_nat_masquerade_inet_unregister_notifiers, 0xd9c25654, "_gpl");
SYMBOL_CRC(nf_ct_nat, 0x7acd5193, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xeb43153, "nf_ct_ext_add" },
	{ 0x3e6760b4, "__do_once_done" },
	{ 0x90cb3152, "nf_conntrack_find_get" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x94fb8d6d, "nf_ip6_checksum" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xf1fbda01, "nf_hook_entries_insert_raw" },
	{ 0xa459061b, "xfrm_lookup" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0x17a8b535, "nf_ct_seqadj_set" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x25f2b2c8, "kmemdup_array" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9e1a227e, "nf_ct_helper_expectfn_unregister" },
	{ 0xcdb21e67, "__xfrm_decode_session" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0x569cf674, "nf_ct_helper_expectfn_register" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x44f0ad9, "get_random_u16" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0x24e0c9a1, "nf_conntrack_tuple_taken" },
	{ 0x122c3a7e, "_printk" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0x2f50c22f, "nf_ct_iterate_cleanup_net" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x69bb6790, "ipv6_skip_exthdr" },
	{ 0x6fb0cf6f, "nf_register_net_hooks" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x13fbc60, "nf_ipv6_ops" },
	{ 0x9d9e8944, "module_put" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0x8b0e920e, "nf_ct_expect_related_report" },
	{ 0x51a647d4, "ip_route_me_harder" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x68e7cca8, "nf_hook_entries_delete_raw" },
	{ 0x60abba40, "skb_ensure_writable" },
	{ 0xa243d05d, "nf_unregister_net_hooks" },
	{ 0xaa4a1b23, "inet_select_addr" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x460ec0f, "nf_ct_invert_tuple" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0xb58cf5d9, "skb_checksum" },
	{ 0xdcb764ad, "memset" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xda16d8d5, "nf_ct_delete" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x2949864c, "nf_ip_checksum" },
	{ 0xaed9e3fe, "nf_ct_iterate_destroy" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0x7767faae, "inet_proto_csum_replace16" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x44162dce, "__put_net" },
	{ 0xb15b4109, "crc32c" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xa814ed34, "__skb_checksum" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7bd389f4, "inet_proto_csum_replace4" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0xa444f77c, "nf_ct_l4proto_find" },
	{ 0x8e535618, "nf_ct_kill_acct" },
	{ 0x289c3714, "nf_ct_alloc_hashtable" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x88ec913f, "nf_nat_hook" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "E6B71BEB9EF8647F5368C84");
