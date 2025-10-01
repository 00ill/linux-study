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

KSYMTAB_FUNC(flow_offload_alloc, "_gpl", "");
KSYMTAB_FUNC(flow_offload_route_init, "_gpl", "");
KSYMTAB_FUNC(flow_offload_free, "_gpl", "");
KSYMTAB_FUNC(flow_offload_add, "_gpl", "");
KSYMTAB_FUNC(flow_offload_refresh, "_gpl", "");
KSYMTAB_FUNC(flow_offload_teardown, "_gpl", "");
KSYMTAB_FUNC(flow_offload_lookup, "_gpl", "");
KSYMTAB_FUNC(nf_flow_snat_port, "_gpl", "");
KSYMTAB_FUNC(nf_flow_dnat_port, "_gpl", "");
KSYMTAB_FUNC(nf_flow_table_init, "_gpl", "");
KSYMTAB_FUNC(nf_flow_table_cleanup, "_gpl", "");
KSYMTAB_FUNC(nf_flow_table_free, "_gpl", "");
KSYMTAB_FUNC(nf_flow_offload_ip_hook, "_gpl", "");
KSYMTAB_FUNC(nf_flow_offload_ipv6_hook, "_gpl", "");
KSYMTAB_FUNC(nf_flow_rule_route_ipv4, "_gpl", "");
KSYMTAB_FUNC(nf_flow_rule_route_ipv6, "_gpl", "");
KSYMTAB_FUNC(nf_flow_table_offload_setup, "_gpl", "");

SYMBOL_CRC(flow_offload_alloc, 0x03ccf381, "_gpl");
SYMBOL_CRC(flow_offload_route_init, 0xc96e2ac6, "_gpl");
SYMBOL_CRC(flow_offload_free, 0xeadbaf98, "_gpl");
SYMBOL_CRC(flow_offload_add, 0xca09832c, "_gpl");
SYMBOL_CRC(flow_offload_refresh, 0xeb57e38a, "_gpl");
SYMBOL_CRC(flow_offload_teardown, 0xa16af4f4, "_gpl");
SYMBOL_CRC(flow_offload_lookup, 0x582234f3, "_gpl");
SYMBOL_CRC(nf_flow_snat_port, 0x69a90cef, "_gpl");
SYMBOL_CRC(nf_flow_dnat_port, 0xe04fb8df, "_gpl");
SYMBOL_CRC(nf_flow_table_init, 0x0c1b2fa7, "_gpl");
SYMBOL_CRC(nf_flow_table_cleanup, 0x5f3d6fe7, "_gpl");
SYMBOL_CRC(nf_flow_table_free, 0xb08b0957, "_gpl");
SYMBOL_CRC(nf_flow_offload_ip_hook, 0x6dc3183f, "_gpl");
SYMBOL_CRC(nf_flow_offload_ipv6_hook, 0xdd41b06e, "_gpl");
SYMBOL_CRC(nf_flow_rule_route_ipv4, 0x46ce0c1a, "_gpl");
SYMBOL_CRC(nf_flow_rule_route_ipv6, 0x1820fe57, "_gpl");
SYMBOL_CRC(nf_flow_table_offload_setup, 0x197dabf7, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x200b2041, "in6addr_any" },
	{ 0x1c0b3367, "flow_rule_alloc" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0xb48c8bee, "skb_gso_validate_network_len" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7a63f4, "neigh_xmit" },
	{ 0xf9cd5007, "flow_block_cb_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xe5ce1a56, "rhashtable_walk_enter" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4192b128, "dev_get_by_index" },
	{ 0xbde17400, "dev_get_by_index_rcu" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9a5dce5c, "rhashtable_walk_start_check" },
	{ 0x576859e6, "flow_indr_dev_setup_offload" },
	{ 0x9cd7551a, "rhashtable_walk_stop" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0xdcb764ad, "memset" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0x668b19a1, "down_read" },
	{ 0x7767faae, "inet_proto_csum_replace16" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0x341d7aad, "__dev_queue_xmit" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xc9ddfdb8, "neigh_destroy" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x28839c12, "rhashtable_init_noprof" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7bd389f4, "inet_proto_csum_replace4" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xa8b92b8f, "nf_ct_acct_add" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0x54651f9b, "rhashtable_walk_next" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x53b954a2, "up_read" },
	{ 0xf188a662, "rhashtable_walk_exit" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "921C77977DD18392F8D82FC");
