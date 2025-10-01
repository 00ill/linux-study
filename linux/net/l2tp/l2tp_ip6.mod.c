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
	{ 0xa8707ce6, "proto_register" },
	{ 0x97b679fa, "inet6_add_protocol" },
	{ 0xe2fd7935, "inet6_register_protosw" },
	{ 0x26fb156, "proto_unregister" },
	{ 0x84fc77f4, "unregister_pernet_device" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0x6c9af96b, "ip6_flush_pending_frames" },
	{ 0xd2d80c01, "release_sock" },
	{ 0xc4b0461a, "l2tp_sk_to_tunnel" },
	{ 0xc341c37, "l2tp_tunnel_delete" },
	{ 0x1117aeaf, "l2tp_tunnel_put" },
	{ 0x8b25cae0, "inet6_unregister_protosw" },
	{ 0xac3281cb, "inet6_del_protocol" },
	{ 0xe3d997df, "sock_queue_rcv_skb_reason" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xaf08c330, "__udp_disconnect" },
	{ 0x8011a683, "__ip6_datagram_connect" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xf8cf9916, "skb_recv_datagram" },
	{ 0x6a82a79e, "skb_copy_datagram_iter" },
	{ 0x8fa1a568, "skb_free_datagram" },
	{ 0x1ba427c0, "ipv6_recv_error" },
	{ 0x56ceca83, "__sock_recv_timestamp" },
	{ 0xa64eaf89, "ip6_datagram_recv_ctl" },
	{ 0x89f64017, "__sock_recv_wifi_status" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x560c3ffb, "sk_common_release" },
	{ 0xbde17400, "dev_get_by_index_rcu" },
	{ 0xeddaec7e, "ipv6_chk_addr" },
	{ 0xdcb764ad, "memset" },
	{ 0x5288f546, "ip6_datagram_send_ctl" },
	{ 0xf7b3eca, "fl6_merge_options" },
	{ 0x6f6b52e9, "__ipv6_fixup_options" },
	{ 0x770a5ae9, "fl6_update_dst" },
	{ 0xc87916f0, "security_sk_classify_flow" },
	{ 0xb221c24e, "ip6_dst_lookup_flow" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0xcd5835b, "ipv6_flowlabel_exclusive" },
	{ 0x309e92cd, "ip_generic_getfrag" },
	{ 0xfb53277a, "ip6_append_data" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x2fa73840, "__fl6_sock_lookup" },
	{ 0xf6760d1a, "ip6_push_pending_frames" },
	{ 0x5996ea0, "ip6_dst_hoplimit" },
	{ 0x4aff2dd4, "l2tp_v3_session_get" },
	{ 0xdf30242f, "l2tp_recv_common" },
	{ 0xd3f109ff, "l2tp_session_put" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x9228b28e, "__xfrm_policy_check" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x114af337, "__sk_receive_skb" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0xf33af8b9, "sk_free" },
	{ 0xa9c68bf9, "__skb_ext_del" },
	{ 0x6baf6cf, "inet6_release" },
	{ 0xefaacbea, "inet6_bind" },
	{ 0x6c06710b, "inet_dgram_connect" },
	{ 0x28e2e058, "sock_no_socketpair" },
	{ 0x92724e6a, "sock_no_accept" },
	{ 0x7b8c6989, "datagram_poll" },
	{ 0x948e35b, "inet6_ioctl" },
	{ 0xde134266, "inet6_compat_ioctl" },
	{ 0x83227012, "sock_gettstamp" },
	{ 0x691c6355, "sock_no_listen" },
	{ 0x116ea57a, "inet_shutdown" },
	{ 0x5c2fb513, "sock_common_setsockopt" },
	{ 0x1f1beab6, "sock_common_getsockopt" },
	{ 0xab06b3cd, "inet_sendmsg" },
	{ 0x3ee14d42, "sock_common_recvmsg" },
	{ 0xebf80697, "sock_no_mmap" },
	{ 0x5c8ee03a, "l2tp_ioctl" },
	{ 0x792e8e8c, "ipv6_setsockopt" },
	{ 0x5aebb7bf, "ipv6_getsockopt" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ipv6,l2tp_core,l2tp_ip");


MODULE_INFO(srcversion, "FE1A733B5968AEB4A22A8EB");
