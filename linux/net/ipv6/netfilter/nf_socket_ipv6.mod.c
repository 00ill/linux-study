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

KSYMTAB_FUNC(nf_sk_lookup_slow_v6, "_gpl", "");

SYMBOL_CRC(nf_sk_lookup_slow_v6, 0xcd4a4bb3, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe2ece698, "ipv6_find_hdr" },
	{ 0x155a24ab, "udp6_lib_lookup" },
	{ 0x69bb6790, "ipv6_skip_exthdr" },
	{ 0xb4124809, "inet6_lookup" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "2A63CCE254F1FD7443CE581");
