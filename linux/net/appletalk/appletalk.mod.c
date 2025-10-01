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

KSYMTAB_FUNC(aarp_send_ddp, "", "");
KSYMTAB_FUNC(atrtr_get_dev, "", "");
KSYMTAB_FUNC(atalk_find_dev_addr, "", "");
KSYMTAB_FUNC(alloc_ltalkdev, "", "");

SYMBOL_CRC(aarp_send_ddp, 0xb29d02b4, "");
SYMBOL_CRC(atrtr_get_dev, 0x63332594, "");
SYMBOL_CRC(atalk_find_dev_addr, 0x79c459d5, "");
SYMBOL_CRC(alloc_ltalkdev, 0xaddb65b7, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8fa1a568, "skb_free_datagram" },
	{ 0xb0ef3d65, "dev_mc_add_global" },
	{ 0xe3d997df, "sock_queue_rcv_skb_reason" },
	{ 0x37548669, "sock_i_uid" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xac4038d6, "proc_dointvec_jiffies" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x1db41cf8, "dev_add_pack" },
	{ 0x80816f26, "get_user_ifreq" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x5843966d, "unregister_snap_client" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x1b94c15e, "remove_proc_subtree" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x11df2052, "__dev_get_by_name" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0x7861b279, "register_net_sysctl_sz" },
	{ 0xb67fb8b4, "alloc_netdev_mqs" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x26fb156, "proto_unregister" },
	{ 0xb706a33f, "sock_register" },
	{ 0x7b8c6989, "datagram_poll" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xa8707ce6, "proto_register" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x625c6bab, "sock_no_shutdown" },
	{ 0x90b8821f, "register_snap_client" },
	{ 0x1a6ab775, "init_net" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x24d273d1, "add_timer" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8bff47bb, "dev_remove_pack" },
	{ 0xf33af8b9, "sk_free" },
	{ 0x92724e6a, "sock_no_accept" },
	{ 0x33b58322, "skb_push" },
	{ 0x691c6355, "sock_no_listen" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0x6a82a79e, "skb_copy_datagram_iter" },
	{ 0x172d06fa, "sk_alloc" },
	{ 0xb105c628, "proc_mkdir" },
	{ 0x28e2e058, "sock_no_socketpair" },
	{ 0xdcb764ad, "memset" },
	{ 0xebf80697, "sock_no_mmap" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd4ab7847, "skb_realloc_headroom" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x341d7aad, "__dev_queue_xmit" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xf8cf9916, "skb_recv_datagram" },
	{ 0x96b1293c, "sock_alloc_send_pskb" },
	{ 0xb53675e6, "seq_write" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xac85f68f, "skb_copy" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x9599b0d7, "_copy_from_iter" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf943375f, "proc_dointvec" },
	{ 0x83227012, "sock_gettstamp" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x5ac8c04c, "unregister_net_sysctl_table" },
	{ 0x10d63cce, "from_kuid_munged" },
	{ 0xf85b4e63, "iov_iter_revert" },
	{ 0x9b06f762, "proc_create_seq_private" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa813464, "sock_init_data" },
	{ 0x87809aeb, "put_user_ifreq" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xd2d80c01, "release_sock" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "psnap");


MODULE_INFO(srcversion, "32B21F84C8A3D7E802FC9E2");
