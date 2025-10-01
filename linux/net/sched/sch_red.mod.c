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
	{ 0x51ae611e, "gnet_stats_copy_app" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x95313763, "qdisc_reset" },
	{ 0x1e1ea1b4, "unregister_qdisc" },
	{ 0x602381d3, "qdisc_offload_dump_helper" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xa9c11614, "tcf_qevent_dump" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xd42d6598, "tcf_qevent_destroy" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x23e6e5f1, "qdisc_put" },
	{ 0x7d0394e3, "tcf_qevent_handle" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xca06e160, "noop_qdisc" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0x583762a7, "qdisc_tree_reduce_backlog" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6579b73e, "qdisc_offload_graft_helper" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x6eef6a2c, "bfifo_qdisc_ops" },
	{ 0xa9f6eb90, "fifo_create_dflt" },
	{ 0x7dbc193a, "qdisc_hash_add" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xdcb764ad, "memset" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x369c6768, "tcf_qevent_validate_change" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb5e1de44, "tcf_qevent_init" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3EC031B2FF64B0807121271");
