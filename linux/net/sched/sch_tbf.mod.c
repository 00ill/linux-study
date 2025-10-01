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
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe2a03a1, "register_qdisc" },
	{ 0x602381d3, "qdisc_offload_dump_helper" },
	{ 0x2c01461a, "qdisc_watchdog_cancel" },
	{ 0x23e6e5f1, "qdisc_put" },
	{ 0x95313763, "qdisc_reset" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x2af17741, "skb_gso_validate_mac_len" },
	{ 0x86017efc, "netif_skb_features" },
	{ 0x46589386, "__skb_gso_segment" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x583762a7, "qdisc_tree_reduce_backlog" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x1e1ea1b4, "unregister_qdisc" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x48e9a84, "nla_put_64bit" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xca06e160, "noop_qdisc" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6579b73e, "qdisc_offload_graft_helper" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xb6e36ce2, "psched_ratecfg_precompute" },
	{ 0x702aee68, "fifo_set_limit" },
	{ 0x8c459bf3, "qdisc_get_rtab" },
	{ 0xa61ced89, "qdisc_put_rtab" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x6eef6a2c, "bfifo_qdisc_ops" },
	{ 0xa9f6eb90, "fifo_create_dflt" },
	{ 0x7dbc193a, "qdisc_hash_add" },
	{ 0xc1e72b49, "qdisc_watchdog_init" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x879c6e28, "qdisc_watchdog_schedule_range_ns" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5B73BAA5C34475CAFE8BDAB");
