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
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xece784c2, "rb_first" },
	{ 0xca9360b5, "rb_next" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xbc2f4b81, "rtnl_kfree_skbs" },
	{ 0x8450a53a, "__kmem_cache_create_args" },
	{ 0xe2a03a1, "register_qdisc" },
	{ 0x656f612b, "kmem_cache_destroy" },
	{ 0x1e1ea1b4, "unregister_qdisc" },
	{ 0x4a3c8253, "kmem_cache_free" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x2c01461a, "qdisc_watchdog_cancel" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xdcb764ad, "memset" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x12d0273c, "kmem_cache_free_bulk" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x6f61551b, "kmem_cache_alloc_noprof" },
	{ 0x2e536d3e, "__skb_get_hash_net" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x51ae611e, "gnet_stats_copy_app" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x879c6e28, "qdisc_watchdog_schedule_range_ns" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x583762a7, "qdisc_tree_reduce_backlog" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x122c3a7e, "_printk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x64bada6, "sch_default_prio2band" },
	{ 0x812e5221, "qdisc_watchdog_init_clockid" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "83B2198B929DA5E4D0EE724");
