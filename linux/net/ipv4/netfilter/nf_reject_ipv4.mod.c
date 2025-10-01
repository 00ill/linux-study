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

KSYMTAB_FUNC(nf_reject_skb_v4_tcp_reset, "_gpl", "");
KSYMTAB_FUNC(nf_reject_skb_v4_unreach, "_gpl", "");
KSYMTAB_FUNC(nf_reject_ip_tcphdr_get, "_gpl", "");
KSYMTAB_FUNC(nf_reject_iphdr_put, "_gpl", "");
KSYMTAB_FUNC(nf_reject_ip_tcphdr_put, "_gpl", "");
KSYMTAB_FUNC(nf_send_reset, "_gpl", "");
KSYMTAB_FUNC(nf_send_unreach, "_gpl", "");

SYMBOL_CRC(nf_reject_skb_v4_tcp_reset, 0xd81d0e48, "_gpl");
SYMBOL_CRC(nf_reject_skb_v4_unreach, 0x259a907e, "_gpl");
SYMBOL_CRC(nf_reject_ip_tcphdr_get, 0xfa6448c2, "_gpl");
SYMBOL_CRC(nf_reject_iphdr_put, 0x08604015, "_gpl");
SYMBOL_CRC(nf_reject_ip_tcphdr_put, 0x99ddf9cc, "_gpl");
SYMBOL_CRC(nf_send_reset, 0x75f65074, "_gpl");
SYMBOL_CRC(nf_send_unreach, 0x3b8aaf78, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4367c3a1, "skb_put" },
	{ 0xdcb764ad, "memset" },
	{ 0x2b8f11e0, "nf_ip_route" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2949864c, "nf_ip_checksum" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x51a647d4, "ip_route_me_harder" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x4a439f25, "nf_ct_attach" },
	{ 0x2e7887d2, "nf_ct_set_closing" },
	{ 0xbde17400, "dev_get_by_index_rcu" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0x341d7aad, "__dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xdbf248b6, "ip_local_out" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x80e970df, "__icmp_send" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x4795ed98, "pskb_trim_rcsum_slow" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F1E80B14453DAFAD00F1251");
