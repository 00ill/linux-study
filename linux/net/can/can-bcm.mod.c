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
	{ 0xe914e41e, "strcpy" },
	{ 0xe3d997df, "sock_queue_rcv_skb_reason" },
	{ 0x66276d18, "_copy_to_iter" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xe9c11251, "can_rx_unregister" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc1b89cb8, "sk_error_report" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0xe67bc204, "can_proto_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x7b8c6989, "datagram_poll" },
	{ 0xc5300d6f, "__sock_recv_cmsgs" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x58196490, "can_send" },
	{ 0x625c6bab, "sock_no_shutdown" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x4192b128, "dev_get_by_index" },
	{ 0xf33af8b9, "sk_free" },
	{ 0xbde17400, "dev_get_by_index_rcu" },
	{ 0x92724e6a, "sock_no_accept" },
	{ 0x691c6355, "sock_no_listen" },
	{ 0x3dfbc684, "seq_putc" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0x9252cbd2, "sock_no_bind" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0x28e2e058, "sock_no_socketpair" },
	{ 0xdcb764ad, "memset" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x7a5c410e, "sock_efree" },
	{ 0xebf80697, "sock_no_mmap" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9846b85d, "sock_i_ino" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xf8cf9916, "skb_recv_datagram" },
	{ 0xa0e24b52, "remove_proc_entry" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x85988b5f, "sock_no_getname" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xeb670f5, "proc_create_net_single" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x9599b0d7, "_copy_from_iter" },
	{ 0x7024d82a, "can_proto_unregister" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0x83227012, "sock_gettstamp" },
	{ 0x4e8234fa, "_proc_mkdir" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x135bb7ec, "hrtimer_forward" },
	{ 0xcb2e80c6, "hrtimer_active" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xf85b4e63, "iov_iter_revert" },
	{ 0xc1be4b75, "can_rx_register" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xd2d80c01, "release_sock" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "9DB77CC3B7DF0C752722AE6");
