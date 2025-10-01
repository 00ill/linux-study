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

KSYMTAB_FUNC(udp_sock_create6, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel6_xmit_skb, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel6_dst_lookup, "_gpl", "");

SYMBOL_CRC(udp_sock_create6, 0x98800de0, "_gpl");
SYMBOL_CRC(udp_tunnel6_xmit_skb, 0x3fbcb8ac, "_gpl");
SYMBOL_CRC(udp_tunnel6_dst_lookup, 0x036efdd4, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x93482612, "sock_create_kern" },
	{ 0xf6b8e34, "sock_bindtoindex" },
	{ 0x2b8298a9, "kernel_bind" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xa3e70c7e, "kernel_sock_shutdown" },
	{ 0xcebd4329, "sock_release" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0xd2d80c01, "release_sock" },
	{ 0xafaba172, "kernel_connect" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xcd27abad, "udp6_set_csum" },
	{ 0xaf99201, "ip6_local_out" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xdcb764ad, "memset" },
	{ 0xa0bc743e, "dst_cache_get_ip6" },
	{ 0x2ce72391, "ipv6_stub" },
	{ 0x2ab8b837, "dst_cache_set_ip6" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A273B3FB1F70512F25117E8");
