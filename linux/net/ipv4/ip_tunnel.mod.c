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

KSYMTAB_FUNC(ip_tunnel_lookup, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_md_udp_encap, "", "");
KSYMTAB_FUNC(ip_tunnel_rcv, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_encap_add_ops, "", "");
KSYMTAB_FUNC(ip_tunnel_encap_del_ops, "", "");
KSYMTAB_FUNC(ip_tunnel_encap_setup, "_gpl", "");
KSYMTAB_FUNC(ip_md_tunnel_xmit, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_xmit, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_ctl, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_parm_from_user, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_parm_to_user, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_siocdevprivate, "_gpl", "");
KSYMTAB_FUNC(__ip_tunnel_change_mtu, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_change_mtu, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_dellink, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_get_link_net, "", "");
KSYMTAB_FUNC(ip_tunnel_get_iflink, "", "");
KSYMTAB_FUNC(ip_tunnel_init_net, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_delete_nets, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_newlink, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_changelink, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_init, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_uninit, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_setup, "_gpl", "");

SYMBOL_CRC(ip_tunnel_lookup, 0xdbd2bf11, "_gpl");
SYMBOL_CRC(ip_tunnel_md_udp_encap, 0x39673755, "");
SYMBOL_CRC(ip_tunnel_rcv, 0x0ef7d953, "_gpl");
SYMBOL_CRC(ip_tunnel_encap_add_ops, 0x1098f2cb, "");
SYMBOL_CRC(ip_tunnel_encap_del_ops, 0xaaffb6d4, "");
SYMBOL_CRC(ip_tunnel_encap_setup, 0x8d0950f9, "_gpl");
SYMBOL_CRC(ip_md_tunnel_xmit, 0x49d4d094, "_gpl");
SYMBOL_CRC(ip_tunnel_xmit, 0x3368392d, "_gpl");
SYMBOL_CRC(ip_tunnel_ctl, 0xdf7f9b8b, "_gpl");
SYMBOL_CRC(ip_tunnel_parm_from_user, 0x7f835b87, "_gpl");
SYMBOL_CRC(ip_tunnel_parm_to_user, 0xfca8744d, "_gpl");
SYMBOL_CRC(ip_tunnel_siocdevprivate, 0x9cfb4b8f, "_gpl");
SYMBOL_CRC(__ip_tunnel_change_mtu, 0x9d10e864, "_gpl");
SYMBOL_CRC(ip_tunnel_change_mtu, 0x46eeb694, "_gpl");
SYMBOL_CRC(ip_tunnel_dellink, 0xfa25e213, "_gpl");
SYMBOL_CRC(ip_tunnel_get_link_net, 0xa1c553d7, "");
SYMBOL_CRC(ip_tunnel_get_iflink, 0xe52eec5f, "");
SYMBOL_CRC(ip_tunnel_init_net, 0xbd3a6a67, "_gpl");
SYMBOL_CRC(ip_tunnel_delete_nets, 0xcd6f30ce, "_gpl");
SYMBOL_CRC(ip_tunnel_newlink, 0x59ad7137, "_gpl");
SYMBOL_CRC(ip_tunnel_changelink, 0xb3e61854, "_gpl");
SYMBOL_CRC(ip_tunnel_init, 0xc78b8651, "_gpl");
SYMBOL_CRC(ip_tunnel_uninit, 0x16a319c7, "_gpl");
SYMBOL_CRC(ip_tunnel_setup, 0x11609193, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe1058d8b, "iptun_encaps" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xb4ee29e9, "icmpv6_ndo_send" },
	{ 0x14853efb, "icmp_ndo_send" },
	{ 0x98cf60b3, "strlen" },
	{ 0x4829a47e, "memcpy" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xb67fb8b4, "alloc_netdev_mqs" },
	{ 0xcf015fa5, "register_netdevice" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x35decc18, "unregister_netdevice_queue" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x80b20089, "gro_cells_init" },
	{ 0xdcb764ad, "memset" },
	{ 0x1e4fc92c, "ip_route_output_flow" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf45bdd92, "__dev_get_by_index" },
	{ 0x9b7d9ad3, "l3mdev_master_upper_ifindex_by_index_rcu" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xce2ca9c8, "netdev_state_change" },
	{ 0xac27974a, "ns_capable" },
	{ 0xa4513f41, "dev_set_mtu" },
	{ 0x1a6ab775, "init_net" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x6cb681e1, "iptunnel_xmit" },
	{ 0x1e578091, "dst_cache_get_ip4" },
	{ 0x5cd2b55c, "dst_cache_set_ip4" },
	{ 0x2e536d3e, "__skb_get_hash_net" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xc9ddfdb8, "neigh_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0xdaff9136, "skb_scrub_packet" },
	{ 0x1755587b, "gro_cells_receive" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0xc4f8efb6, "eth_type_trans" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4B5C7FB22D4262CC96E6EF7");
