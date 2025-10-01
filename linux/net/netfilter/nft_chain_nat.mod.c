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
	{ 0x8d941294, "nft_register_chain_type" },
	{ 0xee13ea55, "nf_nat_inet_unregister_fn" },
	{ 0x41d38004, "nf_nat_inet_register_fn" },
	{ 0xe2ece698, "ipv6_find_hdr" },
	{ 0x658a274f, "nft_do_chain" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9ab77949, "nft_unregister_chain_type" },
	{ 0xe3cebc95, "nf_nat_ipv6_register_fn" },
	{ 0xa9268f94, "nf_nat_ipv6_unregister_fn" },
	{ 0xaaba5777, "nf_nat_ipv4_register_fn" },
	{ 0xf2b66c7e, "nf_nat_ipv4_unregister_fn" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_nat");


MODULE_INFO(srcversion, "F5531FADE4F6799C010395C");
