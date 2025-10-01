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
	{ 0xdcb764ad, "memset" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8a5bd71a, "tcf_block_put" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x37a0cba, "kfree" },
	{ 0xd3a5dcb, "gnet_stats_copy_queue" },
	{ 0x51ae611e, "gnet_stats_copy_app" },
	{ 0x1e1ea1b4, "unregister_qdisc" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xf1881132, "tcf_classify" },
	{ 0xcbbe707, "skb_get_hash_perturb" },
	{ 0x583762a7, "qdisc_tree_reduce_backlog" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x8f00b574, "tcf_block_get" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0xbc2f4b81, "rtnl_kfree_skbs" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C7EA0F7EEF15C1161E7920A");
