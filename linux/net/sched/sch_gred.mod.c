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
	{ 0x37a0cba, "kfree" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xbc2f4b81, "rtnl_kfree_skbs" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1e1ea1b4, "unregister_qdisc" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x122c3a7e, "_printk" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3d1059ea, "__nla_validate" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x866a62b2, "gnet_stats_basic_sync_init" },
	{ 0x602381d3, "qdisc_offload_dump_helper" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xd35112a, "nla_append" },
	{ 0x48e9a84, "nla_put_64bit" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F4D77906FA95B60A9549575");
