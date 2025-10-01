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
	{ 0x5b221cd, "nft_register_expr" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x3faa382a, "nft_fib6_eval" },
	{ 0x4083d473, "nft_fib4_eval_type" },
	{ 0x29edf203, "nft_fib4_eval" },
	{ 0x695016f1, "nft_fib6_eval_type" },
	{ 0xf7cfeffe, "nft_unregister_expr" },
	{ 0x5f49d06d, "nft_fib_init" },
	{ 0x7dbfb2b4, "nft_fib_dump" },
	{ 0xe7aaaffe, "nft_fib_validate" },
	{ 0x27587d6a, "nft_fib_reduce" },
	{ 0xbc8624cb, "nft_fib_policy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,ipv6,nft_fib_ipv6,nft_fib_ipv4,nft_fib");


MODULE_INFO(srcversion, "6D3D641032F3BF84C9C77AB");
