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
	{ 0x8fa1a568, "skb_free_datagram" },
	{ 0xe3d997df, "sock_queue_rcv_skb_reason" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x66276d18, "_copy_to_iter" },
	{ 0x4367c3a1, "skb_put" },
	{ 0xe9c11251, "can_rx_unregister" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x81539a53, "__kmalloc_node_track_caller_noprof" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x15fcbdad, "sock_no_connect" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc1b89cb8, "sk_error_report" },
	{ 0xe67bc204, "can_proto_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x7b8c6989, "datagram_poll" },
	{ 0xc5300d6f, "__sock_recv_cmsgs" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x58196490, "can_send" },
	{ 0x625c6bab, "sock_no_shutdown" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x4192b128, "dev_get_by_index" },
	{ 0xf33af8b9, "sk_free" },
	{ 0x437a0d6d, "__sock_tx_timestamp" },
	{ 0x92724e6a, "sock_no_accept" },
	{ 0x691c6355, "sock_no_listen" },
	{ 0x3524e91f, "sock_recv_errqueue" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0x28e2e058, "sock_no_socketpair" },
	{ 0xdcb764ad, "memset" },
	{ 0xebf80697, "sock_no_mmap" },
	{ 0x1eee715d, "sock_cmsg_send" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0xf8cf9916, "skb_recv_datagram" },
	{ 0x96b1293c, "sock_alloc_send_pskb" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x9599b0d7, "_copy_from_iter" },
	{ 0x7024d82a, "can_proto_unregister" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x83227012, "sock_gettstamp" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xf85b4e63, "iov_iter_revert" },
	{ 0xc1be4b75, "can_rx_register" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd2d80c01, "release_sock" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "CC118C5019DBED84B97F2ED");
