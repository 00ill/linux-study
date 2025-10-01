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

KSYMTAB_FUNC(nft_fib6_eval_type, "_gpl", "");
KSYMTAB_FUNC(nft_fib6_eval, "_gpl", "");

SYMBOL_CRC(nft_fib6_eval_type, 0x695016f1, "_gpl");
SYMBOL_CRC(nft_fib6_eval, 0x3faa382a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xf4b3b396, "l3mdev_master_ifindex_rcu" },
	{ 0x5b221cd, "nft_register_expr" },
	{ 0xf7cfeffe, "nft_unregister_expr" },
	{ 0xdcb764ad, "memset" },
	{ 0x8d732959, "make_kuid" },
	{ 0x67d50e1d, "nft_fib_store_result" },
	{ 0x1bcc6b46, "ip6_route_lookup" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x13fbc60, "nf_ipv6_ops" },
	{ 0x5f49d06d, "nft_fib_init" },
	{ 0x7dbfb2b4, "nft_fib_dump" },
	{ 0xe7aaaffe, "nft_fib_validate" },
	{ 0x27587d6a, "nft_fib_reduce" },
	{ 0xbc8624cb, "nft_fib_policy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nft_fib,ipv6");


MODULE_INFO(srcversion, "3390CAD26156B444A73F095");
