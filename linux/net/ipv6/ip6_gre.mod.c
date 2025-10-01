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
	{ 0x15ba50a6, "jiffies" },
	{ 0x122c3a7e, "_printk" },
	{ 0x5b390004, "register_pernet_device" },
	{ 0x97b679fa, "inet6_add_protocol" },
	{ 0x9d12f712, "rtnl_link_register" },
	{ 0x987c0c99, "rtnl_link_unregister" },
	{ 0xac3281cb, "inet6_del_protocol" },
	{ 0x84fc77f4, "unregister_pernet_device" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x35decc18, "unregister_netdevice_queue" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xa267f22b, "ip6_tnl_get_cap" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xafaa1453, "rt6_lookup" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0xdd3b7072, "ether_setup" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x1a6ab775, "init_net" },
	{ 0xb67fb8b4, "alloc_netdev_mqs" },
	{ 0xe914e41e, "strcpy" },
	{ 0x219f96ce, "register_netdev" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x33b58322, "skb_push" },
	{ 0xdcb764ad, "memset" },
	{ 0x79d219c0, "__get_hash_from_flowi6" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xcf015fa5, "register_netdevice" },
	{ 0x2089c95b, "ip6_tnl_change_mtu" },
	{ 0x1d3e2492, "ip6_tnl_encap_setup" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x80b20089, "gro_cells_init" },
	{ 0x8d732959, "make_kuid" },
	{ 0x1d57a158, "ip6_tnl_parse_tlv_enc_lim" },
	{ 0xb4ee29e9, "icmpv6_ndo_send" },
	{ 0xad20fdf0, "gre_parse_header" },
	{ 0x9b517662, "ip6_redirect" },
	{ 0xd4f19a69, "ip6_update_pmtu" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x57378234, "__iptunnel_pull_header" },
	{ 0xba75ce42, "metadata_dst_alloc" },
	{ 0xeec12fe2, "ip6_tnl_rcv" },
	{ 0xc9124148, "__icmpv6_send" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xfbcb8ac1, "ip6_tnl_xmit" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xb8c767e8, "ip6_tnl_xmit_ctl" },
	{ 0x8a131a79, "iptunnel_handle_offloads" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0x14853efb, "icmp_ndo_send" },
	{ 0xe19fdf44, "___pskb_trim" },
	{ 0xac27974a, "ns_capable" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xce2ca9c8, "netdev_state_change" },
	{ 0xe41af852, "ip6_tnl_get_iflink" },
	{ 0xd4f784c4, "eth_mac_addr" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0xde6808ec, "ip6_tnl_get_link_net" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ip6_tunnel,ipv6,gre");


MODULE_INFO(srcversion, "765974D59B3FBE4FD4CCA73");
