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
	{ 0xe2a03a1, "register_qdisc" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1e1ea1b4, "unregister_qdisc" },
	{ 0x8f00b574, "tcf_block_get" },
	{ 0x117093be, "qdisc_class_hash_init" },
	{ 0xdcb764ad, "memset" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb4d0272e, "gnet_stats_copy_basic" },
	{ 0x900c6acb, "gnet_stats_copy_rate_est" },
	{ 0xd3a5dcb, "gnet_stats_copy_queue" },
	{ 0x51ae611e, "gnet_stats_copy_app" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0x95313763, "qdisc_reset" },
	{ 0x583762a7, "qdisc_tree_reduce_backlog" },
	{ 0xf6871d1, "pfifo_qdisc_ops" },
	{ 0xba601a8b, "qdisc_create_dflt" },
	{ 0xca06e160, "noop_qdisc" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a5bd71a, "tcf_block_put" },
	{ 0xded39a6b, "gen_kill_estimator" },
	{ 0x23e6e5f1, "qdisc_put" },
	{ 0xf53d4c26, "qdisc_class_hash_destroy" },
	{ 0x4c0de954, "qdisc_class_hash_remove" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x91692b55, "qdisc_warn_nonwc" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xf1881132, "tcf_classify" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x866a62b2, "gnet_stats_basic_sync_init" },
	{ 0x5e9a01ce, "gen_new_estimator" },
	{ 0x7dbc193a, "qdisc_hash_add" },
	{ 0xf630261, "gen_replace_estimator" },
	{ 0x86c94be7, "qdisc_class_hash_grow" },
	{ 0x7b9d9306, "qdisc_class_hash_insert" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "546547EE716C358518BDF96");
