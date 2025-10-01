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
	{ 0xa3b6d95, "nft_chain_validate_hooks" },
	{ 0x33b58322, "skb_push" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xf7cfeffe, "nft_unregister_expr" },
	{ 0x259a907e, "nf_reject_skb_v4_unreach" },
	{ 0x9e38a464, "nf_reject_skb_v6_unreach" },
	{ 0xf82682a6, "br_forward" },
	{ 0xd81d0e48, "nf_reject_skb_v4_tcp_reset" },
	{ 0xd56e7b7e, "nf_reject_skb_v6_tcp_reset" },
	{ 0x1de558c1, "nft_reject_icmpv6_code" },
	{ 0xe2c84666, "nft_reject_icmp_code" },
	{ 0x7d3b99a1, "nft_reject_init" },
	{ 0xdf062324, "nft_reject_dump" },
	{ 0xcbcf13a1, "nft_reject_policy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_reject_ipv4,nf_reject_ipv6,bridge,nft_reject");


MODULE_INFO(srcversion, "01A1576275979166C0397EF");
