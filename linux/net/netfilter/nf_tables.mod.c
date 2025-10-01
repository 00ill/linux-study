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

KSYMTAB_FUNC(nft_do_chain, "_gpl", "");
KSYMTAB_FUNC(nft_reg_track_update, "_gpl", "");
KSYMTAB_FUNC(nft_reg_track_cancel, "_gpl", "");
KSYMTAB_FUNC(__nft_reg_track_cancel, "_gpl", "");
KSYMTAB_FUNC(nft_request_module, "_gpl", "");
KSYMTAB_FUNC(nft_register_chain_type, "_gpl", "");
KSYMTAB_FUNC(nft_unregister_chain_type, "_gpl", "");
KSYMTAB_FUNC(nft_register_expr, "_gpl", "");
KSYMTAB_FUNC(nft_unregister_expr, "_gpl", "");
KSYMTAB_FUNC(nft_chain_validate, "_gpl", "");
KSYMTAB_FUNC(nft_set_lookup_global, "_gpl", "");
KSYMTAB_FUNC(nf_tables_bind_set, "_gpl", "");
KSYMTAB_FUNC(nf_tables_activate_set, "_gpl", "");
KSYMTAB_FUNC(nf_tables_deactivate_set, "_gpl", "");
KSYMTAB_FUNC(nf_tables_destroy_set, "_gpl", "");
KSYMTAB_FUNC(nft_set_elem_destroy, "_gpl", "");
KSYMTAB_FUNC(nft_set_catchall_lookup, "_gpl", "");
KSYMTAB_FUNC(nft_register_obj, "_gpl", "");
KSYMTAB_FUNC(nft_unregister_obj, "_gpl", "");
KSYMTAB_FUNC(nft_obj_lookup, "_gpl", "");
KSYMTAB_FUNC(nft_obj_notify, "_gpl", "");
KSYMTAB_FUNC(nft_register_flowtable_type, "_gpl", "");
KSYMTAB_FUNC(nft_unregister_flowtable_type, "_gpl", "");
KSYMTAB_FUNC(nft_flowtable_lookup, "_gpl", "");
KSYMTAB_FUNC(nf_tables_deactivate_flowtable, "_gpl", "");
KSYMTAB_FUNC(nf_tables_trans_destroy_flush_work, "_gpl", "");
KSYMTAB_FUNC(nft_chain_validate_dependency, "_gpl", "");
KSYMTAB_FUNC(nft_chain_validate_hooks, "_gpl", "");
KSYMTAB_FUNC(nft_parse_u32_check, "_gpl", "");
KSYMTAB_FUNC(nft_dump_register, "_gpl", "");
KSYMTAB_FUNC(nft_parse_register_load, "_gpl", "");
KSYMTAB_FUNC(nft_parse_register_store, "_gpl", "");
KSYMTAB_FUNC(nft_data_init, "_gpl", "");
KSYMTAB_FUNC(nft_data_release, "_gpl", "");
KSYMTAB_FUNC(nft_data_dump, "_gpl", "");
KSYMTAB_FUNC(__nft_release_basechain, "_gpl", "");
KSYMTAB_DATA(nft_trace_enabled, "_gpl", "");
KSYMTAB_FUNC(nft_expr_reduce_bitwise, "_gpl", "");
KSYMTAB_FUNC(nft_set_do_lookup, "_gpl", "");
KSYMTAB_FUNC(nft_meta_get_eval, "_gpl", "");
KSYMTAB_FUNC(nft_meta_set_eval, "_gpl", "");
KSYMTAB_DATA(nft_meta_policy, "_gpl", "");
KSYMTAB_FUNC(nft_meta_get_init, "_gpl", "");
KSYMTAB_FUNC(nft_meta_set_validate, "_gpl", "");
KSYMTAB_FUNC(nft_meta_set_init, "_gpl", "");
KSYMTAB_FUNC(nft_meta_get_dump, "_gpl", "");
KSYMTAB_FUNC(nft_meta_set_dump, "_gpl", "");
KSYMTAB_FUNC(nft_meta_set_destroy, "_gpl", "");
KSYMTAB_FUNC(nft_meta_get_reduce, "_gpl", "");
KSYMTAB_FUNC(nft_meta_inner_eval, "_gpl", "");

SYMBOL_CRC(nft_do_chain, 0x658a274f, "_gpl");
SYMBOL_CRC(nft_reg_track_update, 0x7633854f, "_gpl");
SYMBOL_CRC(nft_reg_track_cancel, 0x7a5a9a2e, "_gpl");
SYMBOL_CRC(__nft_reg_track_cancel, 0x38894c29, "_gpl");
SYMBOL_CRC(nft_request_module, 0xb20a946e, "_gpl");
SYMBOL_CRC(nft_register_chain_type, 0x8d941294, "_gpl");
SYMBOL_CRC(nft_unregister_chain_type, 0x9ab77949, "_gpl");
SYMBOL_CRC(nft_register_expr, 0x05b221cd, "_gpl");
SYMBOL_CRC(nft_unregister_expr, 0xf7cfeffe, "_gpl");
SYMBOL_CRC(nft_chain_validate, 0x35cf4e0d, "_gpl");
SYMBOL_CRC(nft_set_lookup_global, 0xc1fbf801, "_gpl");
SYMBOL_CRC(nf_tables_bind_set, 0xd0e42f13, "_gpl");
SYMBOL_CRC(nf_tables_activate_set, 0x96d9e0ae, "_gpl");
SYMBOL_CRC(nf_tables_deactivate_set, 0x2845b3a3, "_gpl");
SYMBOL_CRC(nf_tables_destroy_set, 0x2d942541, "_gpl");
SYMBOL_CRC(nft_set_elem_destroy, 0x87716c8c, "_gpl");
SYMBOL_CRC(nft_set_catchall_lookup, 0xfdd0e6ce, "_gpl");
SYMBOL_CRC(nft_register_obj, 0xcbfd1d19, "_gpl");
SYMBOL_CRC(nft_unregister_obj, 0x90fe0bd5, "_gpl");
SYMBOL_CRC(nft_obj_lookup, 0x609b1649, "_gpl");
SYMBOL_CRC(nft_obj_notify, 0x913d54a5, "_gpl");
SYMBOL_CRC(nft_register_flowtable_type, 0xa38fae7f, "_gpl");
SYMBOL_CRC(nft_unregister_flowtable_type, 0xeb6f869d, "_gpl");
SYMBOL_CRC(nft_flowtable_lookup, 0xbd1414b3, "_gpl");
SYMBOL_CRC(nf_tables_deactivate_flowtable, 0xb667ae47, "_gpl");
SYMBOL_CRC(nf_tables_trans_destroy_flush_work, 0x28391cc3, "_gpl");
SYMBOL_CRC(nft_chain_validate_dependency, 0x3acacbd6, "_gpl");
SYMBOL_CRC(nft_chain_validate_hooks, 0x0a3b6d95, "_gpl");
SYMBOL_CRC(nft_parse_u32_check, 0xde57b5f5, "_gpl");
SYMBOL_CRC(nft_dump_register, 0x34cab143, "_gpl");
SYMBOL_CRC(nft_parse_register_load, 0x27187ea8, "_gpl");
SYMBOL_CRC(nft_parse_register_store, 0x5656375e, "_gpl");
SYMBOL_CRC(nft_data_init, 0xdb0bfa52, "_gpl");
SYMBOL_CRC(nft_data_release, 0xed84fe5b, "_gpl");
SYMBOL_CRC(nft_data_dump, 0x6f519187, "_gpl");
SYMBOL_CRC(__nft_release_basechain, 0x661de2c8, "_gpl");
SYMBOL_CRC(nft_trace_enabled, 0x41b71e65, "_gpl");
SYMBOL_CRC(nft_expr_reduce_bitwise, 0x95bf715c, "_gpl");
SYMBOL_CRC(nft_set_do_lookup, 0x33f46777, "_gpl");
SYMBOL_CRC(nft_meta_get_eval, 0xaf73368e, "_gpl");
SYMBOL_CRC(nft_meta_set_eval, 0xcc7a455c, "_gpl");
SYMBOL_CRC(nft_meta_policy, 0xe2c74001, "_gpl");
SYMBOL_CRC(nft_meta_get_init, 0x7a8e7fb2, "_gpl");
SYMBOL_CRC(nft_meta_set_validate, 0x5da4b58b, "_gpl");
SYMBOL_CRC(nft_meta_set_init, 0x4d559285, "_gpl");
SYMBOL_CRC(nft_meta_get_dump, 0xca2bdec6, "_gpl");
SYMBOL_CRC(nft_meta_set_dump, 0x0aa9381b, "_gpl");
SYMBOL_CRC(nft_meta_set_destroy, 0x014d7530, "_gpl");
SYMBOL_CRC(nft_meta_get_reduce, 0x44f987c6, "_gpl");
SYMBOL_CRC(nft_meta_inner_eval, 0x79bcbeb8, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3e6760b4, "__do_once_done" },
	{ 0x7ac71ae4, "__netlink_dump_start" },
	{ 0x1c0b3367, "flow_rule_alloc" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x5afc722e, "__audit_log_nfcfg" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0x7a71a0be, "__nlmsg_put" },
	{ 0x4367c3a1, "skb_put" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2c834418, "static_key_slow_inc" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xedbaee5e, "nla_strcmp" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x94721dcb, "nla_reserve" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7a53a06d, "flow_indr_dev_exists" },
	{ 0x48e9a84, "nla_put_64bit" },
	{ 0xca9360b5, "rb_next" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xa987348f, "nfnetlink_set_err" },
	{ 0x75d0deb9, "nsecs_to_jiffies64" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x6d7c7dcc, "bitmap_cut" },
	{ 0xf9cd5007, "flow_block_cb_free" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x5578a646, "nfnetlink_subsys_register" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xeca957d1, "__bitmap_and" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xd8940511, "__module_get" },
	{ 0x148653, "vsnprintf" },
	{ 0xe5ce1a56, "rhashtable_walk_enter" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x11df2052, "__dev_get_by_name" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0x51f013a2, "__ip_options_compile" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x3c0e137d, "nf_route" },
	{ 0xa916b694, "strnlen" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x13fbc60, "nf_ipv6_ops" },
	{ 0x618911fc, "numa_node" },
	{ 0x9d9e8944, "module_put" },
	{ 0x8f14d45b, "get_zeroed_page_noprof" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0xa5aa16ad, "nf_unregister_net_hook" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xe4054c2d, "nf_register_net_hook" },
	{ 0x2e536d3e, "__skb_get_hash_net" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xa07a37f0, "memchr" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x51a647d4, "ip_route_me_harder" },
	{ 0x8999f8d4, "skb_store_bits" },
	{ 0xbde17400, "dev_get_by_index_rcu" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x129e5945, "nfnetlink_unicast" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x60abba40, "skb_ensure_writable" },
	{ 0xc0ff12fb, "nla_strdup" },
	{ 0x9a5dce5c, "rhashtable_walk_start_check" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x576859e6, "flow_indr_dev_setup_offload" },
	{ 0x9cd7551a, "rhashtable_walk_stop" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x838d2bc8, "siphash_3u32" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x7f6cee89, "rhashtable_free_and_destroy" },
	{ 0xb58cf5d9, "skb_checksum" },
	{ 0xdcb764ad, "memset" },
	{ 0x92ec510d, "jiffies64_to_msecs" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0xcc5b23bc, "nfnetlink_send" },
	{ 0x15d6eb2f, "__get_task_comm" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0xece784c2, "rb_first" },
	{ 0xa4217810, "nfnetlink_subsys_unregister" },
	{ 0xe4151e2c, "from_kgid_munged" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x44162dce, "__put_net" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0xe2ece698, "ipv6_find_hdr" },
	{ 0xb15b4109, "crc32c" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x8d2f7c81, "rhltable_init_noprof" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x28839c12, "rhashtable_init_noprof" },
	{ 0xa814ed34, "__skb_checksum" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7bd389f4, "inet_proto_csum_replace4" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0x54651f9b, "rhashtable_walk_next" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x10d63cce, "from_kuid_munged" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x98cf60b3, "strlen" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x349cba85, "strchr" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0xf188a662, "rhashtable_walk_exit" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7500c497, "nfnetlink_has_listeners" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "B49F0D2F5289CC406903671");
