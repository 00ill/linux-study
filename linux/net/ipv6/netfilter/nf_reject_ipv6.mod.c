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

KSYMTAB_FUNC(nf_reject_skb_v6_tcp_reset, "_gpl", "");
KSYMTAB_FUNC(nf_reject_skb_v6_unreach, "_gpl", "");
KSYMTAB_FUNC(nf_reject_ip6_tcphdr_get, "_gpl", "");
KSYMTAB_FUNC(nf_reject_ip6hdr_put, "_gpl", "");
KSYMTAB_FUNC(nf_reject_ip6_tcphdr_put, "_gpl", "");
KSYMTAB_FUNC(nf_send_reset6, "_gpl", "");
KSYMTAB_FUNC(nf_send_unreach6, "_gpl", "");

SYMBOL_CRC(nf_reject_skb_v6_tcp_reset, 0xd56e7b7e, "_gpl");
SYMBOL_CRC(nf_reject_skb_v6_unreach, 0x9e38a464, "_gpl");
SYMBOL_CRC(nf_reject_ip6_tcphdr_get, 0x096185f7, "_gpl");
SYMBOL_CRC(nf_reject_ip6hdr_put, 0x972a7cbc, "_gpl");
SYMBOL_CRC(nf_reject_ip6_tcphdr_put, 0x0392ea37, "_gpl");
SYMBOL_CRC(nf_send_reset6, 0xf7d552ae, "_gpl");
SYMBOL_CRC(nf_send_unreach6, 0xfcbbd98a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4367c3a1, "skb_put" },
	{ 0x69bb6790, "ipv6_skip_exthdr" },
	{ 0x94fb8d6d, "nf_ip6_checksum" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc9124148, "__icmpv6_send" },
	{ 0xdcb764ad, "memset" },
	{ 0x13fbc60, "nf_ipv6_ops" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4795ed98, "pskb_trim_rcsum_slow" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf4b3b396, "l3mdev_master_ifindex_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3517a6a6, "ip6_route_output_flags" },
	{ 0xa459061b, "xfrm_lookup" },
	{ 0x5996ea0, "ip6_dst_hoplimit" },
	{ 0x4a439f25, "nf_ct_attach" },
	{ 0x2e7887d2, "nf_ct_set_closing" },
	{ 0xbde17400, "dev_get_by_index_rcu" },
	{ 0x341d7aad, "__dev_queue_xmit" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0xaf99201, "ip6_local_out" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "03563A5F054F0E2EE5686C7");
