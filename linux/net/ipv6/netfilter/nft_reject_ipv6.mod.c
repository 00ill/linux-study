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
	{ 0xf7d552ae, "nf_send_reset6" },
	{ 0xfcbbd98a, "nf_send_unreach6" },
	{ 0xf7cfeffe, "nft_unregister_expr" },
	{ 0x7d3b99a1, "nft_reject_init" },
	{ 0xdf062324, "nft_reject_dump" },
	{ 0x8b13cda4, "nft_reject_validate" },
	{ 0xcbcf13a1, "nft_reject_policy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_reject_ipv6,nft_reject");


MODULE_INFO(srcversion, "FDDA493DF129F1F6915CD66");
