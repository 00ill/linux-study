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
	{ 0x68c68a55, "nft_fwd_dup_netdev_offload" },
	{ 0xa3b6d95, "nft_chain_validate_hooks" },
	{ 0x34cab143, "nft_dump_register" },
	{ 0x27187ea8, "nft_parse_register_load" },
	{ 0xdc3f7850, "nf_fwd_netdev_egress" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf7cfeffe, "nft_unregister_expr" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0xbde17400, "dev_get_by_index_rcu" },
	{ 0x7a63f4, "neigh_xmit" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_dup_netdev");


MODULE_INFO(srcversion, "D1883B874E3D6BD55913DFC");
