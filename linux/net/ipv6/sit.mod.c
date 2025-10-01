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
	{ 0xf37460f4, "ip_tunnel_header_ops" },
	{ 0x122c3a7e, "_printk" },
	{ 0x5b390004, "register_pernet_device" },
	{ 0xd50c1f64, "xfrm4_tunnel_register" },
	{ 0x9d12f712, "rtnl_link_register" },
	{ 0x84fc77f4, "unregister_pernet_device" },
	{ 0xe3f7e2ea, "xfrm4_tunnel_deregister" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x35decc18, "unregister_netdevice_queue" },
	{ 0x4829a47e, "memcpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xce2ca9c8, "netdev_state_change" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x3e6df8dc, "ip6_err_gen_icmpv6_unreach" },
	{ 0x38e36658, "ipv4_update_pmtu" },
	{ 0x43323257, "ipv4_redirect" },
	{ 0x987c0c99, "rtnl_link_unregister" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xac27974a, "ns_capable" },
	{ 0x8a131a79, "iptunnel_handle_offloads" },
	{ 0x3368392d, "ip_tunnel_xmit" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x57378234, "__iptunnel_pull_header" },
	{ 0xef7d953, "ip_tunnel_rcv" },
	{ 0x9228b28e, "__xfrm_policy_check" },
	{ 0xa9c68bf9, "__skb_ext_del" },
	{ 0xdcb764ad, "memset" },
	{ 0xf45bdd92, "__dev_get_by_index" },
	{ 0x8d732959, "make_kuid" },
	{ 0x1e4fc92c, "ip_route_output_flow" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x1a6ab775, "init_net" },
	{ 0xb67fb8b4, "alloc_netdev_mqs" },
	{ 0x219f96ce, "register_netdev" },
	{ 0xe914e41e, "strcpy" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xcf015fa5, "register_netdevice" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x3e903560, "ip_tunnel_netlink_encap_parms" },
	{ 0x9fe62620, "ip_tunnel_netlink_parms" },
	{ 0x8d0950f9, "ip_tunnel_encap_setup" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x6270c65c, "ipv6_chk_custom_prefix" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x50d00458, "netif_rx" },
	{ 0xe0b8100b, "ipv6_chk_prefix" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x9cfb4b8f, "ip_tunnel_siocdevprivate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x7f835b87, "ip_tunnel_parm_from_user" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x1e578091, "dst_cache_get_ip4" },
	{ 0xd4ab7847, "skb_realloc_headroom" },
	{ 0xa5a853f, "skb_set_owner_w" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xe1058d8b, "iptun_encaps" },
	{ 0x6cb681e1, "iptunnel_xmit" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x5cd2b55c, "dst_cache_set_ip4" },
	{ 0xc9ddfdb8, "neigh_destroy" },
	{ 0xb4ee29e9, "icmpv6_ndo_send" },
	{ 0xe52eec5f, "ip_tunnel_get_iflink" },
	{ 0xa1c553d7, "ip_tunnel_get_link_net" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "tunnel4,ipv6,ip_tunnel");


MODULE_INFO(srcversion, "CF9527043B0356A8F1D9418");
