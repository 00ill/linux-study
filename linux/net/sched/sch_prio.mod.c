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
	{ 0x602381d3, "qdisc_offload_dump_helper" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x95313763, "qdisc_reset" },
	{ 0xf1881132, "tcf_classify" },
	{ 0xb4d0272e, "gnet_stats_copy_basic" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xd3a5dcb, "gnet_stats_copy_queue" },
	{ 0x1e1ea1b4, "unregister_qdisc" },
	{ 0x8a5bd71a, "tcf_block_put" },
	{ 0x23e6e5f1, "qdisc_put" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0x583762a7, "qdisc_tree_reduce_backlog" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6579b73e, "qdisc_offload_graft_helper" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf6871d1, "pfifo_qdisc_ops" },
	{ 0xba601a8b, "qdisc_create_dflt" },
	{ 0x7dbc193a, "qdisc_hash_add" },
	{ 0xca06e160, "noop_qdisc" },
	{ 0xdcb764ad, "memset" },
	{ 0x8f00b574, "tcf_block_get" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C1AFCC08B4DC1420E1A2F2E");
