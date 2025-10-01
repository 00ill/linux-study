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

KSYMTAB_DATA(synproxy_net_id, "_gpl", "");
KSYMTAB_FUNC(synproxy_parse_options, "_gpl", "");
KSYMTAB_FUNC(synproxy_init_timestamp_cookie, "_gpl", "");
KSYMTAB_FUNC(synproxy_send_client_synack, "_gpl", "");
KSYMTAB_FUNC(synproxy_recv_client_ack, "_gpl", "");
KSYMTAB_FUNC(ipv4_synproxy_hook, "_gpl", "");
KSYMTAB_FUNC(nf_synproxy_ipv4_init, "_gpl", "");
KSYMTAB_FUNC(nf_synproxy_ipv4_fini, "_gpl", "");
KSYMTAB_FUNC(synproxy_send_client_synack_ipv6, "_gpl", "");
KSYMTAB_FUNC(synproxy_recv_client_ack_ipv6, "_gpl", "");
KSYMTAB_FUNC(ipv6_synproxy_hook, "_gpl", "");
KSYMTAB_FUNC(nf_synproxy_ipv6_init, "_gpl", "");
KSYMTAB_FUNC(nf_synproxy_ipv6_fini, "_gpl", "");

SYMBOL_CRC(synproxy_net_id, 0xca9fc082, "_gpl");
SYMBOL_CRC(synproxy_parse_options, 0xb00a4e27, "_gpl");
SYMBOL_CRC(synproxy_init_timestamp_cookie, 0x1f099794, "_gpl");
SYMBOL_CRC(synproxy_send_client_synack, 0xb07919a1, "_gpl");
SYMBOL_CRC(synproxy_recv_client_ack, 0xd4349ffb, "_gpl");
SYMBOL_CRC(ipv4_synproxy_hook, 0x5dacb580, "_gpl");
SYMBOL_CRC(nf_synproxy_ipv4_init, 0x6f2a64f9, "_gpl");
SYMBOL_CRC(nf_synproxy_ipv4_fini, 0xf24afe72, "_gpl");
SYMBOL_CRC(synproxy_send_client_synack_ipv6, 0xe02c8545, "_gpl");
SYMBOL_CRC(synproxy_recv_client_ack_ipv6, 0x7ded7ff9, "_gpl");
SYMBOL_CRC(ipv6_synproxy_hook, 0x1226a570, "_gpl");
SYMBOL_CRC(nf_synproxy_ipv6_init, 0x3dc8dd8b, "_gpl");
SYMBOL_CRC(nf_synproxy_ipv6_fini, 0xa0a84700, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb43f9365, "ktime_get" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0x6fb0cf6f, "nf_register_net_hooks" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xb53675e6, "seq_write" },
	{ 0xa243d05d, "nf_unregister_net_hooks" },
	{ 0xdcb764ad, "memset" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x13fbc60, "nf_ipv6_ops" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xa459061b, "xfrm_lookup" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xaf99201, "ip6_local_out" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x60abba40, "skb_ensure_writable" },
	{ 0x7bd389f4, "inet_proto_csum_replace4" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0x51a647d4, "ip_route_me_harder" },
	{ 0xdbf248b6, "ip_local_out" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0xa0e24b52, "remove_proc_entry" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x30b59088, "nf_ct_tmpl_alloc" },
	{ 0xeb43153, "nf_ct_ext_add" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x9ed72da3, "proc_create_net_data" },
	{ 0xeabb2511, "nf_ct_tmpl_free" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x7ca64a0b, "__cookie_v4_init_sequence" },
	{ 0x2d0143e8, "__cookie_v4_check" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x690759, "nf_ct_seqadj_init" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x69bb6790, "ipv6_skip_exthdr" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "99ED6856364D3689D02666F");
