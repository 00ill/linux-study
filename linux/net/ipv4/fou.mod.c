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

KSYMTAB_FUNC(fou_encap_hlen, "", "");
KSYMTAB_FUNC(gue_encap_hlen, "", "");
KSYMTAB_FUNC(__fou_build_header, "", "");
KSYMTAB_FUNC(__gue_build_header, "", "");

SYMBOL_CRC(fou_encap_hlen, 0x1757d1a4, "");
SYMBOL_CRC(gue_encap_hlen, 0xf13914b3, "");
SYMBOL_CRC(__fou_build_header, 0xe1fe813a, "");
SYMBOL_CRC(__gue_build_header, 0xa04b2526, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf4f1057e, "__skb_checksum_complete" },
	{ 0x1098f2cb, "ip_tunnel_encap_add_ops" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x96263940, "udp_sock_create4" },
	{ 0xfbcd121e, "genlmsg_put" },
	{ 0xb920d0f6, "udp_set_csum" },
	{ 0x37a0cba, "kfree" },
	{ 0x4e657c52, "inet_offloads" },
	{ 0xec62be21, "inet_protos" },
	{ 0x8a131a79, "iptunnel_handle_offloads" },
	{ 0xac3201b0, "udp_flow_hashrnd" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x2e536d3e, "__skb_get_hash_net" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xf4889f04, "netlink_unicast" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x84fc77f4, "unregister_pernet_device" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xaaffb6d4, "ip_tunnel_encap_del_ops" },
	{ 0xdcb764ad, "memset" },
	{ 0x9110eb3, "udp_tunnel_sock_release" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x4218afb3, "register_btf_kfunc_id_set" },
	{ 0x56c9ef33, "setup_udp_tunnel_sock" },
	{ 0x98800de0, "udp_sock_create6" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xfdfcd121, "inet6_offloads" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x41e4f2cd, "genl_unregister_family" },
	{ 0xce91aba6, "genl_register_family" },
	{ 0x5b390004, "register_pernet_device" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ip_tunnel,udp_tunnel,ip6_udp_tunnel");


MODULE_INFO(srcversion, "FA681621000C1259BBE8990");
