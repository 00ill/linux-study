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
	{ 0x1e1ea1b4, "unregister_qdisc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcbbe707, "skb_get_hash_perturb" },
	{ 0xdcb764ad, "memset" },
	{ 0x583762a7, "qdisc_tree_reduce_backlog" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xbc2f4b81, "rtnl_kfree_skbs" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "043B7230D3E46BAEBEA9329");
