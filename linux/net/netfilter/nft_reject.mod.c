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

KSYMTAB_DATA(nft_reject_policy, "_gpl", "");
KSYMTAB_FUNC(nft_reject_validate, "_gpl", "");
KSYMTAB_FUNC(nft_reject_init, "_gpl", "");
KSYMTAB_FUNC(nft_reject_dump, "_gpl", "");
KSYMTAB_FUNC(nft_reject_icmp_code, "_gpl", "");
KSYMTAB_FUNC(nft_reject_icmpv6_code, "_gpl", "");

SYMBOL_CRC(nft_reject_policy, 0xcbcf13a1, "_gpl");
SYMBOL_CRC(nft_reject_validate, 0x8b13cda4, "_gpl");
SYMBOL_CRC(nft_reject_init, 0x7d3b99a1, "_gpl");
SYMBOL_CRC(nft_reject_dump, 0xdf062324, "_gpl");
SYMBOL_CRC(nft_reject_icmp_code, 0xe2c84666, "_gpl");
SYMBOL_CRC(nft_reject_icmpv6_code, 0x1de558c1, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa3b6d95, "nft_chain_validate_hooks" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "A5F97376B7ED42D8175595B");
