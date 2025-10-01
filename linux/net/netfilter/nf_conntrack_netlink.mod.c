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
	{ 0x5578a646, "nfnetlink_subsys_register" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa4217810, "nfnetlink_subsys_unregister" },
	{ 0x128e1318, "nf_conntrack_unregister_notifier" },
	{ 0x98bba67b, "nf_conntrack_register_notifier" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0xe17678a, "siphash_4u64" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x3e6760b4, "__do_once_done" },
	{ 0xdcb764ad, "memset" },
	{ 0x7ac71ae4, "__netlink_dump_start" },
	{ 0x2d10edf5, "nf_ct_expect_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x88ec913f, "nf_nat_hook" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x575674e8, "nf_connlabels_replace" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xa444f77c, "nf_ct_l4proto_find" },
	{ 0x3d1059ea, "__nla_validate" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x521b2f16, "nf_ct_expect_find_get" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x69a6be37, "nf_ct_unlink_expect_report" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd9daecfc, "nf_ct_expect_iterate_net" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x7a71a0be, "__nlmsg_put" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x48e9a84, "nla_put_64bit" },
	{ 0x76e331cf, "nf_ct_expect_alloc" },
	{ 0xc70db806, "nf_ct_helper_expectfn_find_by_name" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x831822b8, "nf_ct_helper_expectfn_find_by_symbol" },
	{ 0xc18ac88d, "nf_ct_expect_hsize" },
	{ 0xec8beba6, "nf_ct_expect_hash" },
	{ 0x7500c497, "nfnetlink_has_listeners" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xa987348f, "nfnetlink_set_err" },
	{ 0xcc5b23bc, "nfnetlink_send" },
	{ 0x59868d03, "nf_conntrack_count" },
	{ 0xf38bcdf3, "nf_conntrack_max" },
	{ 0x129e5945, "nfnetlink_unicast" },
	{ 0xecf5b4af, "nf_ct_get_id" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0xaf0847f0, "nf_conntrack_locks" },
	{ 0xdba7326b, "nf_conntrack_lock" },
	{ 0x28eff409, "nf_conntrack_hash" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xda16d8d5, "nf_ct_delete" },
	{ 0x254ad00e, "nla_policy_len" },
	{ 0x90cb3152, "nf_conntrack_find_get" },
	{ 0xe172ac2f, "__nf_conntrack_helper_find" },
	{ 0x8b0e920e, "nf_ct_expect_related_report" },
	{ 0x3cac73c0, "__nf_ct_expect_find" },
	{ 0x24d273d1, "add_timer" },
	{ 0x2f50c22f, "nf_ct_iterate_cleanup_net" },
	{ 0x52218525, "nf_conn_pernet_ecache" },
	{ 0x9af4f8c1, "nf_conntrack_alloc" },
	{ 0x9029198e, "nf_ct_helper_ext_add" },
	{ 0xeb43153, "nf_ct_ext_add" },
	{ 0x3a4114ea, "nf_ct_ecache_ext_add" },
	{ 0x7f881220, "nf_ct_change_status_common" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xfff947b5, "nf_conntrack_hash_check_insert" },
	{ 0x20a649d6, "nf_conntrack_free" },
	{ 0x8bc1f5d0, "nf_conntrack_eventmask_report" },
	{ 0x20a2e1b5, "__nf_ct_change_timeout" },
	{ 0xf2636df, "nf_ct_remove_expectations" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink,nf_conntrack");


MODULE_INFO(srcversion, "0D2CB16042EA9F051D9EB64");
