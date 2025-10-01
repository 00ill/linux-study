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
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x122c3a7e, "_printk" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0xdcb764ad, "memset" },
	{ 0x6df81e6b, "register_tcf_proto_ops" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xa7cfcbe, "unregister_tcf_proto_ops" },
	{ 0x642424d0, "tc_setup_cb_destroy" },
	{ 0xd1c2760c, "tc_setup_cb_add" },
	{ 0xea1b8a72, "tc_setup_cb_call" },
	{ 0x544725fa, "tc_setup_cb_reoffload" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa935f5f7, "tcf_action_exec" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x811d8eed, "tcf_exts_dump" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x48e9a84, "nla_put_64bit" },
	{ 0x37a0cba, "kfree" },
	{ 0x4081efad, "tcf_exts_dump_stats" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xf45bdd92, "__dev_get_by_index" },
	{ 0x98cf60b3, "strlen" },
	{ 0x95545824, "tcf_exts_destroy" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x91f44510, "idr_alloc_cyclic" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x44162dce, "__put_net" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x51421fd1, "tcf_exts_validate_ex" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0x11df2052, "__dev_get_by_name" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x4829a47e, "memcpy" },
	{ 0x72943f72, "tcf_exts_init_ex" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1DA13A9E7C8DBC8A1E4CE81");
