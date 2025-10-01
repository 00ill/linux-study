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
	{ 0x4367c3a1, "skb_put" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xe9c11251, "can_rx_unregister" },
	{ 0x2155f701, "hrtimer_try_to_cancel" },
	{ 0x48e9a84, "nla_put_64bit" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xfdc26e5, "can_sock_destruct" },
	{ 0x99f7371c, "refcount_dec_and_mutex_lock" },
	{ 0x81539a53, "__kmalloc_node_track_caller_noprof" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x87e7c8e4, "netdev_warn" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8502868b, "netdev_err" },
	{ 0xc1b89cb8, "sk_error_report" },
	{ 0x4ce6a914, "put_cmsg" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0xe67bc204, "can_proto_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x7b8c6989, "datagram_poll" },
	{ 0xc5300d6f, "__sock_recv_cmsgs" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x58196490, "can_send" },
	{ 0x625c6bab, "sock_no_shutdown" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x4192b128, "dev_get_by_index" },
	{ 0xf33af8b9, "sk_free" },
	{ 0xc3665eed, "netdev_printk" },
	{ 0x92724e6a, "sock_no_accept" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x691c6355, "sock_no_listen" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x3524e91f, "sock_recv_errqueue" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x28e2e058, "sock_no_socketpair" },
	{ 0xdcb764ad, "memset" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x7a5c410e, "sock_efree" },
	{ 0xebf80697, "sock_no_mmap" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xd4b88fde, "sock_queue_err_skb" },
	{ 0xa65f95f6, "netdev_alert" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf8cf9916, "skb_recv_datagram" },
	{ 0x96b1293c, "sock_alloc_send_pskb" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x9599b0d7, "_copy_from_iter" },
	{ 0x7024d82a, "can_proto_unregister" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xd3468e06, "netdev_notice" },
	{ 0xf85b4e63, "iov_iter_revert" },
	{ 0xc1be4b75, "can_rx_register" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x67bbcda, "netdev_info" },
	{ 0x9858f364, "get_random_u8" },
	{ 0xd2d80c01, "release_sock" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "310D78972296A9788BE49AD");
