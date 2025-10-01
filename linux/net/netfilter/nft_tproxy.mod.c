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
	{ 0x6ece03a9, "nla_put" },
	{ 0x34cab143, "nft_dump_register" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x97d992e8, "nf_defrag_ipv4_enable" },
	{ 0x29df7741, "nf_defrag_ipv6_enable" },
	{ 0x27187ea8, "nft_parse_register_load" },
	{ 0xf7cfeffe, "nft_unregister_expr" },
	{ 0xe4a7b2ec, "nf_defrag_ipv4_disable" },
	{ 0x6f25365e, "nf_defrag_ipv6_disable" },
	{ 0x19a193c1, "nf_tproxy_get_sock_v4" },
	{ 0x353a29fd, "nf_tproxy_laddr4" },
	{ 0x525928de, "sock_gen_put" },
	{ 0x41393d59, "nf_tproxy_get_sock_v6" },
	{ 0x97fcb9d2, "nf_tproxy_laddr6" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xc0776766, "sock_edemux" },
	{ 0xebe57130, "nf_tproxy_handle_time_wait6" },
	{ 0xd6342173, "nf_tproxy_handle_time_wait4" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_defrag_ipv4,nf_defrag_ipv6,nf_tproxy_ipv4,nf_tproxy_ipv6");


MODULE_INFO(srcversion, "61087D9C492E10CB2A0A279");
