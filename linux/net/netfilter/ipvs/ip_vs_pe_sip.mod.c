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
	{ 0x97f330c4, "register_ip_vs_pe" },
	{ 0xc67d252d, "ip_vs_new_conn_out" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb9a12675, "unregister_ip_vs_pe" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xdcb764ad, "memset" },
	{ 0x8aa3babe, "ct_sip_get_header" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xe2ece698, "ipv6_find_hdr" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ip_vs,nf_conntrack_sip");


MODULE_INFO(srcversion, "763CDAD377A88E8D5FEFF50");
