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
	{ 0x66276d18, "_copy_to_iter" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xe9c11251, "can_rx_unregister" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x15fcbdad, "sock_no_connect" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc1b89cb8, "sk_error_report" },
	{ 0xe67bc204, "can_proto_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x7b8c6989, "datagram_poll" },
	{ 0xc5300d6f, "__sock_recv_cmsgs" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x58196490, "can_send" },
	{ 0x625c6bab, "sock_no_shutdown" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x4192b128, "dev_get_by_index" },
	{ 0xf33af8b9, "sk_free" },
	{ 0x92724e6a, "sock_no_accept" },
	{ 0x691c6355, "sock_no_listen" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0x28e2e058, "sock_no_socketpair" },
	{ 0xdcb764ad, "memset" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x7a5c410e, "sock_efree" },
	{ 0xebf80697, "sock_no_mmap" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf8cf9916, "skb_recv_datagram" },
	{ 0x96b1293c, "sock_alloc_send_pskb" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x9599b0d7, "_copy_from_iter" },
	{ 0x7024d82a, "can_proto_unregister" },
	{ 0x102fe6de, "hrtimer_cancel" },
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


MODULE_INFO(srcversion, "09A35C8B89042808B1AA4B5");
