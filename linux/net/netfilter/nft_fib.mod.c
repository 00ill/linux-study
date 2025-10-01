#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_DATA(nft_fib_policy, "", "");
KSYMTAB_FUNC(nft_fib_validate, "_gpl", "");
KSYMTAB_FUNC(nft_fib_init, "_gpl", "");
KSYMTAB_FUNC(nft_fib_dump, "_gpl", "");
KSYMTAB_FUNC(nft_fib_store_result, "_gpl", "");
KSYMTAB_FUNC(nft_fib_reduce, "_gpl", "");

SYMBOL_CRC(nft_fib_policy, 0xbc8624cb, "");
SYMBOL_CRC(nft_fib_validate, 0xe7aaaffe, "_gpl");
SYMBOL_CRC(nft_fib_init, 0x5f49d06d, "_gpl");
SYMBOL_CRC(nft_fib_dump, 0x7dbfb2b4, "_gpl");
SYMBOL_CRC(nft_fib_store_result, 0x67d50e1d, "_gpl");
SYMBOL_CRC(nft_fib_reduce, 0x27587d6a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa3b6d95, "nft_chain_validate_hooks" },
	{ 0x5656375e, "nft_parse_register_store" },
	{ 0x34cab143, "nft_dump_register" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x7633854f, "nft_reg_track_update" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "4C88F5AEA97FC8AA8C68187");
