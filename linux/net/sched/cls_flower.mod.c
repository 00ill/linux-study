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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x6df81e6b, "register_tcf_proto_ops" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x20978fb9, "idr_find" },
	{ 0xdcb764ad, "memset" },
	{ 0x1c0b3367, "flow_rule_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x82f9219d, "skb_flow_dissector_init" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0x9d9e8944, "module_put" },
	{ 0xa7cfcbe, "unregister_tcf_proto_ops" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x95545824, "tcf_exts_destroy" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x44162dce, "__put_net" },
	{ 0x7dc5ffa7, "tc_skb_ext_tc_disable" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xea1b8a72, "tc_setup_cb_call" },
	{ 0x4829a47e, "memcpy" },
	{ 0x642424d0, "tc_setup_cb_destroy" },
	{ 0x7dffefe7, "tcf_exts_num_actions" },
	{ 0x8882a77c, "tc_setup_offload_action" },
	{ 0xd1c2760c, "tc_setup_cb_add" },
	{ 0xbe9c0665, "tc_cleanup_offload_action" },
	{ 0xfcedf0b1, "tcf_action_update_hw_stats" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x28839c12, "rhashtable_init_noprof" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0xb017b1e5, "skb_flow_dissect_tunnel_info" },
	{ 0x9ebac5a8, "skb_flow_dissect_ct" },
	{ 0x8c2272c4, "skb_flow_dissect_hash" },
	{ 0x6ccc56b7, "__skb_flow_dissect" },
	{ 0x14686005, "skb_flow_dissect_meta" },
	{ 0xa935f5f7, "tcf_action_exec" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x544725fa, "tc_setup_cb_reoffload" },
	{ 0x56470118, "__warn_printk" },
	{ 0xcc1b882a, "idr_get_next_ul" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xd8940511, "__module_get" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0x43306eda, "tcf_exts_terse_dump" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x48e9a84, "nla_put_64bit" },
	{ 0xf45bdd92, "__dev_get_by_index" },
	{ 0x98cf60b3, "strlen" },
	{ 0x811d8eed, "tcf_exts_dump" },
	{ 0x4081efad, "tcf_exts_dump_stats" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0x11df2052, "__dev_get_by_name" },
	{ 0x3d1059ea, "__nla_validate" },
	{ 0x72943f72, "tcf_exts_init_ex" },
	{ 0x51421fd1, "tcf_exts_validate_ex" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x86dd708d, "tc_skb_ext_tc_enable" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FC390C33F49DAB3C8AD7338");
