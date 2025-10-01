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
	{ 0x122c3a7e, "_printk" },
	{ 0xe2a03a1, "register_qdisc" },
	{ 0x2c01461a, "qdisc_watchdog_cancel" },
	{ 0x23e6e5f1, "qdisc_put" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xece784c2, "rb_first" },
	{ 0xca9360b5, "rb_next" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xbc2f4b81, "rtnl_kfree_skbs" },
	{ 0x95313763, "qdisc_reset" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1e1ea1b4, "unregister_qdisc" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0x583762a7, "qdisc_tree_reduce_backlog" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1a9a433c, "prandom_u32_state" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8f990f65, "kfree_skb_list_reason" },
	{ 0x879c6e28, "qdisc_watchdog_schedule_range_ns" },
	{ 0xdcb764ad, "memset" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xe3ff2c41, "get_random_u64" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0xc1e72b49, "qdisc_watchdog_init" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x48e9a84, "nla_put_64bit" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xf4138ceb, "skb_orphan_partial" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x86017efc, "netif_skb_features" },
	{ 0x46589386, "__skb_gso_segment" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x9858f364, "get_random_u8" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0xac85f68f, "skb_copy" },
	{ 0x1301cc57, "skb_checksum_help" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9A366B8C8FCDF8AF5C71DF9");
