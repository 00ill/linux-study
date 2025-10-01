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
	{ 0x6df81e6b, "register_tcf_proto_ops" },
	{ 0xa7cfcbe, "unregister_tcf_proto_ops" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x48e9a84, "nla_put_64bit" },
	{ 0x811d8eed, "tcf_exts_dump" },
	{ 0xb7b49e63, "tcf_em_tree_dump" },
	{ 0x4081efad, "tcf_exts_dump_stats" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x95545824, "tcf_exts_destroy" },
	{ 0x97cdfebc, "tcf_em_tree_destroy" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x37a0cba, "kfree" },
	{ 0x44162dce, "__put_net" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xa935f5f7, "tcf_action_exec" },
	{ 0x9dc37519, "__tcf_em_tree_match" },
	{ 0xdcb764ad, "memset" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x72943f72, "tcf_exts_init_ex" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x982b7fe9, "tcf_exts_validate" },
	{ 0xd2e8bfd1, "tcf_em_tree_validate" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0x56470118, "__warn_printk" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "113F5F21F6982D57D8F1ECC");
