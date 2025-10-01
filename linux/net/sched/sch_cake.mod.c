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
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x2c01461a, "qdisc_watchdog_cancel" },
	{ 0x8a5bd71a, "tcf_block_put" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x44f0ad9, "get_random_u16" },
	{ 0x1e1ea1b4, "unregister_qdisc" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x48e9a84, "nla_put_64bit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xeff39aad, "flow_keys_dissector" },
	{ 0x6ccc56b7, "__skb_flow_dissect" },
	{ 0x98e72181, "nf_ct_get_tuple_skb" },
	{ 0x460f4a34, "flow_hash_from_keys" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc1e72b49, "qdisc_watchdog_init" },
	{ 0x8f00b574, "tcf_block_get" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x583762a7, "qdisc_tree_reduce_backlog" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x879c6e28, "qdisc_watchdog_schedule_range_ns" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0xd3a5dcb, "gnet_stats_copy_queue" },
	{ 0xf1881132, "tcf_classify" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x86017efc, "netif_skb_features" },
	{ 0x46589386, "__skb_gso_segment" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1C4F4ABFEEB02C3FBDFCD2E");
