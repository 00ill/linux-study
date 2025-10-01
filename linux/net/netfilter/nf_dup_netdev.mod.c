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

KSYMTAB_FUNC(nf_fwd_netdev_egress, "_gpl", "");
KSYMTAB_FUNC(nf_dup_netdev_egress, "_gpl", "");
KSYMTAB_FUNC(nft_fwd_dup_netdev_offload, "_gpl", "");

SYMBOL_CRC(nf_fwd_netdev_egress, 0xdc3f7850, "_gpl");
SYMBOL_CRC(nf_dup_netdev_egress, 0xb47e5363, "_gpl");
SYMBOL_CRC(nft_fwd_dup_netdev_offload, 0x68c68a55, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4192b128, "dev_get_by_index" },
	{ 0x341d7aad, "__dev_queue_xmit" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x33b58322, "skb_push" },
	{ 0xbde17400, "dev_get_by_index_rcu" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EC86D6F639B3D2CC64BDE33");
