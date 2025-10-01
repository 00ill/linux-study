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
	{ 0x7f404da7, "dev_graft_qdisc" },
	{ 0x23e6e5f1, "qdisc_put" },
	{ 0x7dbc193a, "qdisc_hash_add" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c006640, "netdev_set_num_tc" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa59d46b5, "mqprio_fp_to_offload" },
	{ 0xb4d0272e, "gnet_stats_copy_basic" },
	{ 0xd3a5dcb, "gnet_stats_copy_queue" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x866a62b2, "gnet_stats_basic_sync_init" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfa042227, "gnet_stats_add_basic" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0xa24b7081, "netdev_txq_to_tc" },
	{ 0xd29bfd9c, "dev_deactivate" },
	{ 0xc8e05ada, "dev_activate" },
	{ 0x1e1ea1b4, "unregister_qdisc" },
	{ 0x76d9f7fb, "ethtool_dev_mm_supported" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x9f2e29d5, "qdisc_offload_query_caps" },
	{ 0xadf36ff1, "mqprio_validate_qopt" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x7c30db20, "pfifo_fast_ops" },
	{ 0x466d8229, "default_qdisc_ops" },
	{ 0xba601a8b, "qdisc_create_dflt" },
	{ 0x7cc6c399, "netdev_set_tc_queue" },
	{ 0xd8e439d6, "mqprio_qopt_reconstruct" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xac0f216f, "mq_change_real_num_tx" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "sch_mqprio_lib");


MODULE_INFO(srcversion, "7266CFB10D454048164C8C3");
