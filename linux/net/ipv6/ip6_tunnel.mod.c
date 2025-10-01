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

KSYMTAB_FUNC(ip6_tnl_parse_tlv_enc_lim, "", "");
KSYMTAB_FUNC(ip6_tnl_get_cap, "", "");
KSYMTAB_FUNC(ip6_tnl_rcv_ctl, "_gpl", "");
KSYMTAB_FUNC(ip6_tnl_rcv, "", "");
KSYMTAB_FUNC(ip6_tnl_xmit_ctl, "_gpl", "");
KSYMTAB_FUNC(ip6_tnl_xmit, "", "");
KSYMTAB_FUNC(ip6_tnl_change_mtu, "", "");
KSYMTAB_FUNC(ip6_tnl_get_iflink, "", "");
KSYMTAB_FUNC(ip6_tnl_encap_add_ops, "", "");
KSYMTAB_FUNC(ip6_tnl_encap_del_ops, "", "");
KSYMTAB_FUNC(ip6_tnl_encap_setup, "_gpl", "");
KSYMTAB_FUNC(ip6_tnl_get_link_net, "", "");

SYMBOL_CRC(ip6_tnl_parse_tlv_enc_lim, 0x1d57a158, "");
SYMBOL_CRC(ip6_tnl_get_cap, 0xa267f22b, "");
SYMBOL_CRC(ip6_tnl_rcv_ctl, 0x98f90711, "_gpl");
SYMBOL_CRC(ip6_tnl_rcv, 0xeec12fe2, "");
SYMBOL_CRC(ip6_tnl_xmit_ctl, 0xb8c767e8, "_gpl");
SYMBOL_CRC(ip6_tnl_xmit, 0xfbcb8ac1, "");
SYMBOL_CRC(ip6_tnl_change_mtu, 0x2089c95b, "");
SYMBOL_CRC(ip6_tnl_get_iflink, 0xe41af852, "");
SYMBOL_CRC(ip6_tnl_encap_add_ops, 0x53c9fc8a, "");
SYMBOL_CRC(ip6_tnl_encap_del_ops, 0x3759e062, "");
SYMBOL_CRC(ip6_tnl_encap_setup, 0x1d3e2492, "_gpl");
SYMBOL_CRC(ip6_tnl_get_link_net, 0xde6808ec, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x7551b987, "ipv6_chk_addr_and_flags" },
	{ 0xbde17400, "dev_get_by_index_rcu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0xc85a0d24, "ip6tun_encaps" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x5b390004, "register_pernet_device" },
	{ 0x10e7fbe5, "xfrm6_tunnel_register" },
	{ 0x9d12f712, "rtnl_link_register" },
	{ 0x84fc77f4, "unregister_pernet_device" },
	{ 0xbfb51e18, "xfrm6_tunnel_deregister" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x35decc18, "unregister_netdevice_queue" },
	{ 0xdcb764ad, "memset" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xafaa1453, "rt6_lookup" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0xf45bdd92, "__dev_get_by_index" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xf37460f4, "ip_tunnel_header_ops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x1a6ab775, "init_net" },
	{ 0xb67fb8b4, "alloc_netdev_mqs" },
	{ 0x219f96ce, "register_netdev" },
	{ 0xe914e41e, "strcpy" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x987c0c99, "rtnl_link_unregister" },
	{ 0x79d219c0, "__get_hash_from_flowi6" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0xcf015fa5, "register_netdevice" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x3e903560, "ip_tunnel_netlink_encap_parms" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xce2ca9c8, "netdev_state_change" },
	{ 0x8d732959, "make_kuid" },
	{ 0x9b517662, "ip6_redirect" },
	{ 0xd4f19a69, "ip6_update_pmtu" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xc9124148, "__icmpv6_send" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xdaff9136, "skb_scrub_packet" },
	{ 0x1755587b, "gro_cells_receive" },
	{ 0xc4f8efb6, "eth_type_trans" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x1e4fc92c, "ip_route_output_flow" },
	{ 0x83dd3a68, "ip_route_input_noref" },
	{ 0x80e970df, "__icmp_send" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0x3517a6a6, "ip6_route_output_flags" },
	{ 0xa459061b, "xfrm_lookup" },
	{ 0x6225e493, "dst_cache_get" },
	{ 0xd4ab7847, "skb_realloc_headroom" },
	{ 0xa5a853f, "skb_set_owner_w" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x6a8826c4, "ipv6_push_frag_opts" },
	{ 0x33b58322, "skb_push" },
	{ 0xaf99201, "ip6_local_out" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0x2ab8b837, "dst_cache_set_ip6" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x5996ea0, "ip6_dst_hoplimit" },
	{ 0x824a1ea8, "ipv6_dev_get_saddr" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xc9ddfdb8, "neigh_destroy" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x80b20089, "gro_cells_init" },
	{ 0x8a131a79, "iptunnel_handle_offloads" },
	{ 0xb4ee29e9, "icmpv6_ndo_send" },
	{ 0x14853efb, "icmp_ndo_send" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xac27974a, "ns_capable" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x9228b28e, "__xfrm_policy_check" },
	{ 0x57378234, "__iptunnel_pull_header" },
	{ 0xba75ce42, "metadata_dst_alloc" },
	{ 0xa9c68bf9, "__skb_ext_del" },
	{ 0xa89a25ba, "dev_get_tstats64" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ipv6,tunnel6");


MODULE_INFO(srcversion, "64A3E46B6538E4E177AAFF9");
