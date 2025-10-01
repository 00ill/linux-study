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
	{ 0x122c3a7e, "_printk" },
	{ 0x5b390004, "register_pernet_device" },
	{ 0xd50c1f64, "xfrm4_tunnel_register" },
	{ 0x9d12f712, "rtnl_link_register" },
	{ 0x84fc77f4, "unregister_pernet_device" },
	{ 0xe3f7e2ea, "xfrm4_tunnel_deregister" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf37460f4, "ip_tunnel_header_ops" },
	{ 0x11609193, "ip_tunnel_setup" },
	{ 0xdf7f9b8b, "ip_tunnel_ctl" },
	{ 0x8a131a79, "iptunnel_handle_offloads" },
	{ 0x49d4d094, "ip_md_tunnel_xmit" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x3368392d, "ip_tunnel_xmit" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xc78b8651, "ip_tunnel_init" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xdbd2bf11, "ip_tunnel_lookup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x38e36658, "ipv4_update_pmtu" },
	{ 0x43323257, "ipv4_redirect" },
	{ 0xcd6f30ce, "ip_tunnel_delete_nets" },
	{ 0xbd3a6a67, "ip_tunnel_init_net" },
	{ 0x987c0c99, "rtnl_link_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x3e903560, "ip_tunnel_netlink_encap_parms" },
	{ 0x8d0950f9, "ip_tunnel_encap_setup" },
	{ 0x9fe62620, "ip_tunnel_netlink_parms" },
	{ 0xb3e61854, "ip_tunnel_changelink" },
	{ 0x57378234, "__iptunnel_pull_header" },
	{ 0xba75ce42, "metadata_dst_alloc" },
	{ 0x39673755, "ip_tunnel_md_udp_encap" },
	{ 0xef7d953, "ip_tunnel_rcv" },
	{ 0x9228b28e, "__xfrm_policy_check" },
	{ 0xa9c68bf9, "__skb_ext_del" },
	{ 0x59ad7137, "ip_tunnel_newlink" },
	{ 0x16a319c7, "ip_tunnel_uninit" },
	{ 0x9cfb4b8f, "ip_tunnel_siocdevprivate" },
	{ 0x46eeb694, "ip_tunnel_change_mtu" },
	{ 0xa89a25ba, "dev_get_tstats64" },
	{ 0xe52eec5f, "ip_tunnel_get_iflink" },
	{ 0xfa25e213, "ip_tunnel_dellink" },
	{ 0xa1c553d7, "ip_tunnel_get_link_net" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "tunnel4,ip_tunnel");


MODULE_INFO(srcversion, "5004D4FAB1DF5C6C686017B");
