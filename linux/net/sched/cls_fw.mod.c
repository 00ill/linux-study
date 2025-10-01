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
	{ 0xa935f5f7, "tcf_action_exec" },
	{ 0xa7cfcbe, "unregister_tcf_proto_ops" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x811d8eed, "tcf_exts_dump" },
	{ 0x4081efad, "tcf_exts_dump_stats" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xf45bdd92, "__dev_get_by_index" },
	{ 0x98cf60b3, "strlen" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x95545824, "tcf_exts_destroy" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x44162dce, "__put_net" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x982b7fe9, "tcf_exts_validate" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0x11df2052, "__dev_get_by_name" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x72943f72, "tcf_exts_init_ex" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "33F214F7260295B88773C43");
