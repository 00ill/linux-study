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
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6514c1e6, "flow_get_u32_src" },
	{ 0xa7cfcbe, "unregister_tcf_proto_ops" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x811d8eed, "tcf_exts_dump" },
	{ 0xb7b49e63, "tcf_em_tree_dump" },
	{ 0x4081efad, "tcf_exts_dump_stats" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5a99a0d7, "flow_get_u32_dst" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0x95545824, "tcf_exts_destroy" },
	{ 0x97cdfebc, "tcf_em_tree_destroy" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x37a0cba, "kfree" },
	{ 0x44162dce, "__put_net" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xdcb764ad, "memset" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x771f0565, "init_user_ns" },
	{ 0xd2e8bfd1, "tcf_em_tree_validate" },
	{ 0x72943f72, "tcf_exts_init_ex" },
	{ 0x982b7fe9, "tcf_exts_validate" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd32ca758, "tcf_block_netif_keep_dst" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xa935f5f7, "tcf_action_exec" },
	{ 0x59cd6602, "from_kgid" },
	{ 0x29a43bb2, "from_kuid" },
	{ 0x9dc37519, "__tcf_em_tree_match" },
	{ 0xeff39aad, "flow_keys_dissector" },
	{ 0x6ccc56b7, "__skb_flow_dissect" },
	{ 0x2e536d3e, "__skb_get_hash_net" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B7070FE9033647013B15F05");
