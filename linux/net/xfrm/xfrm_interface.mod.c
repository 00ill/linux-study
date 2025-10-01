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
	{ 0xd8b623d5, "xfrm6_protocol_deregister" },
	{ 0x85e8ab9, "xfrm6_rcv" },
	{ 0x10e7fbe5, "xfrm6_tunnel_register" },
	{ 0xb48c8bee, "skb_gso_validate_network_len" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xd50c1f64, "xfrm4_tunnel_register" },
	{ 0xcdb21e67, "__xfrm_decode_session" },
	{ 0xa9c68bf9, "__skb_ext_del" },
	{ 0x9d12f712, "rtnl_link_register" },
	{ 0xf37460f4, "ip_tunnel_header_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x80c49265, "xfrm_state_lookup" },
	{ 0x9228b28e, "__xfrm_policy_check" },
	{ 0x80b20089, "gro_cells_init" },
	{ 0xc4cedc03, "xfrm4_protocol_register" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x841c7ee2, "xfrm6_rcv_spi" },
	{ 0x35decc18, "unregister_netdevice_queue" },
	{ 0xfc473bd, "xfrm4_rcv" },
	{ 0xacdfe229, "__xfrm_state_destroy" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xce2ca9c8, "netdev_state_change" },
	{ 0xd4f19a69, "ip6_update_pmtu" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0x8e7de776, "xfrm_lookup_with_ifid" },
	{ 0x43323257, "ipv4_redirect" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8d732959, "make_kuid" },
	{ 0x3517a6a6, "ip6_route_output_flags" },
	{ 0x28212a2, "ip_route_output_key_hash" },
	{ 0xb4ee29e9, "icmpv6_ndo_send" },
	{ 0x582b6275, "xfrm_if_unregister_cb" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0xf45bdd92, "__dev_get_by_index" },
	{ 0x987c0c99, "rtnl_link_unregister" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x3a950788, "xfrm6_tunnel_spi_lookup" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xbde17400, "dev_get_by_index_rcu" },
	{ 0x14853efb, "icmp_ndo_send" },
	{ 0x16c05666, "xfrm_input" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x84fc77f4, "unregister_pernet_device" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xdcb764ad, "memset" },
	{ 0xa89a25ba, "dev_get_tstats64" },
	{ 0x9b517662, "ip6_redirect" },
	{ 0xf0cb9894, "lwtunnel_state_alloc" },
	{ 0xada11ab6, "xfrm_if_register_cb" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd8fd32aa, "xfrm4_protocol_deregister" },
	{ 0x38e36658, "ipv4_update_pmtu" },
	{ 0xba75ce42, "metadata_dst_alloc" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xf8be5aef, "lwtunnel_encap_add_ops" },
	{ 0x5b390004, "register_pernet_device" },
	{ 0xbe80f1d6, "lwtunnel_encap_del_ops" },
	{ 0xbfb51e18, "xfrm6_tunnel_deregister" },
	{ 0xe3f7e2ea, "xfrm4_tunnel_deregister" },
	{ 0x1def6122, "xfrm6_protocol_register" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xcf015fa5, "register_netdevice" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ipv6,tunnel6,tunnel4,xfrm6_tunnel");


MODULE_INFO(srcversion, "93543D8AF1DF17300D997E8");
