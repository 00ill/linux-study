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
	{ 0x5b221cd, "nft_register_expr" },
	{ 0x5578a646, "nfnetlink_subsys_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf7cfeffe, "nft_unregister_expr" },
	{ 0x9d9e8944, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa3b6d95, "nft_chain_validate_hooks" },
	{ 0xa4217810, "nfnetlink_subsys_unregister" },
	{ 0x94721dcb, "nla_reserve" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x28391cc3, "nf_tables_trans_destroy_flush_work" },
	{ 0x54180bf3, "xt_check_match" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x4037d922, "xt_check_target" },
	{ 0xb20a946e, "nft_request_module" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x7a71a0be, "__nlmsg_put" },
	{ 0x98cf60b3, "strlen" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x129e5945, "nfnetlink_unicast" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x50076cff, "xt_request_find_target" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xa39721f, "xt_request_find_match" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nfnetlink,x_tables");


MODULE_INFO(srcversion, "E2B4BEC8D7E5893BD72CDB1");
