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

KSYMTAB_FUNC(gretap_fb_dev_create, "_gpl", "");

SYMBOL_CRC(gretap_fb_dev_create, 0x5f3a0377, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8d0950f9, "ip_tunnel_encap_setup" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdd3b7072, "ether_setup" },
	{ 0x11609193, "ip_tunnel_setup" },
	{ 0xc78b8651, "ip_tunnel_init" },
	{ 0x122c3a7e, "_printk" },
	{ 0x5b390004, "register_pernet_device" },
	{ 0xd4431319, "gre_add_protocol" },
	{ 0x9d12f712, "rtnl_link_register" },
	{ 0x987c0c99, "rtnl_link_unregister" },
	{ 0x82fc154, "gre_del_protocol" },
	{ 0x84fc77f4, "unregister_pernet_device" },
	{ 0xcd6f30ce, "ip_tunnel_delete_nets" },
	{ 0xbd3a6a67, "ip_tunnel_init_net" },
	{ 0x33b58322, "skb_push" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xad20fdf0, "gre_parse_header" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xdbd2bf11, "ip_tunnel_lookup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x43323257, "ipv4_redirect" },
	{ 0x38e36658, "ipv4_update_pmtu" },
	{ 0x3e6df8dc, "ip6_err_gen_icmpv6_unreach" },
	{ 0x57378234, "__iptunnel_pull_header" },
	{ 0xba75ce42, "metadata_dst_alloc" },
	{ 0xef7d953, "ip_tunnel_rcv" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xdcb764ad, "memset" },
	{ 0x1e4fc92c, "ip_route_output_flow" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0x2e536d3e, "__skb_get_hash_net" },
	{ 0x80e970df, "__icmp_send" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x3368392d, "ip_tunnel_xmit" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x8a131a79, "iptunnel_handle_offloads" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0xe19fdf44, "___pskb_trim" },
	{ 0x49d4d094, "ip_md_tunnel_xmit" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x59ad7137, "ip_tunnel_newlink" },
	{ 0x50b4a9b2, "rtnl_create_link" },
	{ 0x9d10e864, "__ip_tunnel_change_mtu" },
	{ 0xfa25e213, "ip_tunnel_dellink" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x1494dbbb, "rtnl_configure_link" },
	{ 0x24b49baa, "free_netdev" },
	{ 0xb3e61854, "ip_tunnel_changelink" },
	{ 0xdf7f9b8b, "ip_tunnel_ctl" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x16a319c7, "ip_tunnel_uninit" },
	{ 0xd4f784c4, "eth_mac_addr" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0x46eeb694, "ip_tunnel_change_mtu" },
	{ 0xa89a25ba, "dev_get_tstats64" },
	{ 0xe52eec5f, "ip_tunnel_get_iflink" },
	{ 0x9cfb4b8f, "ip_tunnel_siocdevprivate" },
	{ 0xa1c553d7, "ip_tunnel_get_link_net" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ip_tunnel,gre,ipv6");


MODULE_INFO(srcversion, "1C6C4CA7ADA5C5F732BB851");
