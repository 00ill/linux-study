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

KSYMTAB_FUNC(udp_sock_create4, "", "");
KSYMTAB_FUNC(setup_udp_tunnel_sock, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel_push_rx_port, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel_drop_rx_port, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel_notify_add_rx_port, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel_notify_del_rx_port, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel_xmit_skb, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel_sock_release, "_gpl", "");
KSYMTAB_FUNC(udp_tun_rx_dst, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel_dst_lookup, "_gpl", "");

SYMBOL_CRC(udp_sock_create4, 0x96263940, "");
SYMBOL_CRC(setup_udp_tunnel_sock, 0x56c9ef33, "_gpl");
SYMBOL_CRC(udp_tunnel_push_rx_port, 0x5e63b907, "_gpl");
SYMBOL_CRC(udp_tunnel_drop_rx_port, 0x4bcc1359, "_gpl");
SYMBOL_CRC(udp_tunnel_notify_add_rx_port, 0x81970f23, "_gpl");
SYMBOL_CRC(udp_tunnel_notify_del_rx_port, 0xa9678ae2, "_gpl");
SYMBOL_CRC(udp_tunnel_xmit_skb, 0x9818c719, "_gpl");
SYMBOL_CRC(udp_tunnel_sock_release, 0x09110eb3, "_gpl");
SYMBOL_CRC(udp_tun_rx_dst, 0xea4639b8, "_gpl");
SYMBOL_CRC(udp_tunnel_dst_lookup, 0x7d71abe6, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5cd2b55c, "dst_cache_set_ip4" },
	{ 0x2b8298a9, "kernel_bind" },
	{ 0xb920d0f6, "udp_set_csum" },
	{ 0x37a0cba, "kfree" },
	{ 0x87e7c8e4, "netdev_warn" },
	{ 0x88d34e43, "udp_tunnel_nic_ops" },
	{ 0x1e4fc92c, "ip_route_output_flow" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2ce72391, "ipv6_stub" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x99517682, "udp_encap_enable" },
	{ 0xa3e70c7e, "kernel_sock_shutdown" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6cb681e1, "iptunnel_xmit" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xafaba172, "kernel_connect" },
	{ 0xdcb764ad, "memset" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x1e578091, "dst_cache_get_ip4" },
	{ 0x93482612, "sock_create_kern" },
	{ 0xf661ea97, "call_netdevice_notifiers" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xba75ce42, "metadata_dst_alloc" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0xcebd4329, "sock_release" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf6b8e34, "sock_bindtoindex" },
	{ 0x349cba85, "strchr" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5058CADAAA947D3980ECE6F");
