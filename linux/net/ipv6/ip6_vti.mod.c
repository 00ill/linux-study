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
	{ 0x5b390004, "register_pernet_device" },
	{ 0x1def6122, "xfrm6_protocol_register" },
	{ 0x10e7fbe5, "xfrm6_tunnel_register" },
	{ 0x9d12f712, "rtnl_link_register" },
	{ 0xbfb51e18, "xfrm6_tunnel_deregister" },
	{ 0xd8b623d5, "xfrm6_protocol_deregister" },
	{ 0x84fc77f4, "unregister_pernet_device" },
	{ 0x122c3a7e, "_printk" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x35decc18, "unregister_netdevice_queue" },
	{ 0xdcb764ad, "memset" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xa267f22b, "ip6_tnl_get_cap" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xafaa1453, "rt6_lookup" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0xf45bdd92, "__dev_get_by_index" },
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
	{ 0x9228b28e, "__xfrm_policy_check" },
	{ 0xa9c68bf9, "__skb_ext_del" },
	{ 0xcf015fa5, "register_netdevice" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xce2ca9c8, "netdev_state_change" },
	{ 0x80c49265, "xfrm_state_lookup" },
	{ 0x8d732959, "make_kuid" },
	{ 0xd4f19a69, "ip6_update_pmtu" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x9b517662, "ip6_redirect" },
	{ 0xacdfe229, "__xfrm_state_destroy" },
	{ 0x98f90711, "ip6_tnl_rcv_ctl" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x16c05666, "xfrm_input" },
	{ 0x3a950788, "xfrm6_tunnel_spi_lookup" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xdaff9136, "skb_scrub_packet" },
	{ 0xcdb21e67, "__xfrm_decode_session" },
	{ 0x3517a6a6, "ip6_route_output_flags" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x7b4f73f0, "xfrm_lookup_route" },
	{ 0x28212a2, "ip_route_output_key_hash" },
	{ 0xb8c767e8, "ip6_tnl_xmit_ctl" },
	{ 0x14853efb, "icmp_ndo_send" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb4ee29e9, "icmpv6_ndo_send" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xac27974a, "ns_capable" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xe41af852, "ip6_tnl_get_iflink" },
	{ 0xde6808ec, "ip6_tnl_get_link_net" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ipv6,tunnel6,ip6_tunnel,xfrm6_tunnel");


MODULE_INFO(srcversion, "70032AA163AC73E99CABDC9");
