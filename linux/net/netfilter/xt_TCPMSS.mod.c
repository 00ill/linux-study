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
	{ 0xf4a0aaa, "xt_register_targets" },
	{ 0x60abba40, "skb_ensure_writable" },
	{ 0x7bd389f4, "inet_proto_csum_replace4" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xdcb764ad, "memset" },
	{ 0x3c0e137d, "nf_route" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x69bb6790, "ipv6_skip_exthdr" },
	{ 0x93e774d2, "xt_unregister_targets" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "50681C6649058C7B3410F5A");
