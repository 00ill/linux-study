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
	{ 0x1e1ea1b4, "unregister_qdisc" },
	{ 0x7c581f4c, "mini_qdisc_pair_swap" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x2c3054f9, "net_inc_ingress_queue" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe7c154e3, "mini_qdisc_pair_init" },
	{ 0xc08e71ce, "tcf_block_get_ext" },
	{ 0x1a69a137, "mini_qdisc_pair_block_init" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xdcb764ad, "memset" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7be6905, "net_inc_egress_queue" },
	{ 0x92d5a752, "tcf_block_put_ext" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x46013233, "net_dec_ingress_queue" },
	{ 0x86f85114, "net_dec_egress_queue" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "380C7CB304F8E171E1DDC3A");
