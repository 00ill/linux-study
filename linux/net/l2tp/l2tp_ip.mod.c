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

KSYMTAB_FUNC(l2tp_ioctl, "_gpl", "");

SYMBOL_CRC(l2tp_ioctl, 0x5c8ee03a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x122c3a7e, "_printk" },
	{ 0x5b390004, "register_pernet_device" },
	{ 0xa8707ce6, "proto_register" },
	{ 0x13f15bb4, "inet_add_protocol" },
	{ 0xdad9a79, "inet_register_protosw" },
	{ 0x26fb156, "proto_unregister" },
	{ 0x84fc77f4, "unregister_pernet_device" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x1c7e6bca, "inet_unregister_protosw" },
	{ 0x67a911a9, "inet_del_protocol" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xc4b0461a, "l2tp_sk_to_tunnel" },
	{ 0xc341c37, "l2tp_tunnel_delete" },
	{ 0x1117aeaf, "l2tp_tunnel_put" },
	{ 0xaf08c330, "__udp_disconnect" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0xd2d80c01, "release_sock" },
	{ 0x158e0589, "inet_addr_type" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7b62de73, "sock_wmalloc" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x9599b0d7, "_copy_from_iter" },
	{ 0x78803ffc, "__sk_dst_check" },
	{ 0x61bdda08, "ip_queue_xmit" },
	{ 0xc87916f0, "security_sk_classify_flow" },
	{ 0x1e4fc92c, "ip_route_output_flow" },
	{ 0xa99b87a1, "sk_setup_caps" },
	{ 0x8d732959, "make_kuid" },
	{ 0xf85b4e63, "iov_iter_revert" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x3392f2f9, "__ip4_datagram_connect" },
	{ 0x560c3ffb, "sk_common_release" },
	{ 0xf8cf9916, "skb_recv_datagram" },
	{ 0x6a82a79e, "skb_copy_datagram_iter" },
	{ 0x8fa1a568, "skb_free_datagram" },
	{ 0x56ceca83, "__sock_recv_timestamp" },
	{ 0x3fe5d3fa, "ip_cmsg_recv_offset" },
	{ 0x89f64017, "__sock_recv_wifi_status" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe3d997df, "sock_queue_rcv_skb_reason" },
	{ 0x4aff2dd4, "l2tp_v3_session_get" },
	{ 0xdf30242f, "l2tp_recv_common" },
	{ 0xd3f109ff, "l2tp_session_put" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x114af337, "__sk_receive_skb" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x9228b28e, "__xfrm_policy_check" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0xf33af8b9, "sk_free" },
	{ 0xa9c68bf9, "__skb_ext_del" },
	{ 0x17baa7fb, "inet_release" },
	{ 0x72253cda, "inet_bind" },
	{ 0x6c06710b, "inet_dgram_connect" },
	{ 0x28e2e058, "sock_no_socketpair" },
	{ 0x92724e6a, "sock_no_accept" },
	{ 0x7b8c6989, "datagram_poll" },
	{ 0x7d521858, "inet_ioctl" },
	{ 0x83227012, "sock_gettstamp" },
	{ 0x691c6355, "sock_no_listen" },
	{ 0x116ea57a, "inet_shutdown" },
	{ 0x5c2fb513, "sock_common_setsockopt" },
	{ 0x1f1beab6, "sock_common_getsockopt" },
	{ 0xab06b3cd, "inet_sendmsg" },
	{ 0x3ee14d42, "sock_common_recvmsg" },
	{ 0xebf80697, "sock_no_mmap" },
	{ 0x939ead95, "ip_setsockopt" },
	{ 0x606d438b, "ip_getsockopt" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "423F2831315564D2491389F");
