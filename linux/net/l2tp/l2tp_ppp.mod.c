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
	{ 0xa8707ce6, "proto_register" },
	{ 0x6079fe99, "register_pppox_proto" },
	{ 0x26fb156, "proto_unregister" },
	{ 0x84fc77f4, "unregister_pernet_device" },
	{ 0x144a9c15, "l2tp_nl_register_ops" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x172d06fa, "sk_alloc" },
	{ 0xa813464, "sock_init_data" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0xf8cf9916, "skb_recv_datagram" },
	{ 0x6a82a79e, "skb_copy_datagram_iter" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa0e24b52, "remove_proc_entry" },
	{ 0x9ed72da3, "proc_create_net_data" },
	{ 0x1117aeaf, "l2tp_tunnel_put" },
	{ 0x2da4728e, "l2tp_tunnel_get_next" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0x94c5440, "l2tp_udp_encap_recv" },
	{ 0xd3f109ff, "l2tp_session_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xf6ee5980, "ppp_dev_name" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb53675e6, "seq_write" },
	{ 0xe83e33f8, "l2tp_session_get_next" },
	{ 0xeca35a76, "ppp_input" },
	{ 0xe3d997df, "sock_queue_rcv_skb_reason" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdcb764ad, "memset" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0x74e822bb, "pppox_unbind_sock" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x1850d759, "l2tp_session_delete" },
	{ 0xd2d80c01, "release_sock" },
	{ 0xf33af8b9, "sk_free" },
	{ 0xd068eaec, "l2tp_session_create" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x50e77ca9, "l2tp_session_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fdfb96f, "l2tp_xmit_skb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0x7b62de73, "sock_wmalloc" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x9599b0d7, "_copy_from_iter" },
	{ 0xf85b4e63, "iov_iter_revert" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2a7346bb, "l2tp_session_set_header_len" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x844c1665, "l2tp_session_get" },
	{ 0xb8b52bd2, "l2tp_tunnel_get" },
	{ 0xb9398153, "l2tp_tunnel_create" },
	{ 0x971e2b4e, "l2tp_tunnel_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xc341c37, "l2tp_tunnel_delete" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0x8af44010, "ppp_register_net_channel" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0x9252cbd2, "sock_no_bind" },
	{ 0x28e2e058, "sock_no_socketpair" },
	{ 0x92724e6a, "sock_no_accept" },
	{ 0x7b8c6989, "datagram_poll" },
	{ 0xe1cd003a, "pppox_ioctl" },
	{ 0xe55761ea, "pppox_compat_ioctl" },
	{ 0x691c6355, "sock_no_listen" },
	{ 0x625c6bab, "sock_no_shutdown" },
	{ 0xebf80697, "sock_no_mmap" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "pppox,l2tp_netlink,l2tp_core,ppp_generic");


MODULE_INFO(srcversion, "1C492297069C2BD78681523");
