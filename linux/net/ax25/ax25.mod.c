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

KSYMTAB_DATA(ax25_bcast, "_gpl", "");
KSYMTAB_DATA(ax25_defaddr, "_gpl", "");
KSYMTAB_DATA(null_ax25_address, "", "");
KSYMTAB_FUNC(ax2asc, "", "");
KSYMTAB_FUNC(asc2ax, "", "");
KSYMTAB_FUNC(ax25cmp, "", "");
KSYMTAB_FUNC(ax25_register_pid, "_gpl", "");
KSYMTAB_FUNC(ax25_protocol_release, "", "");
KSYMTAB_FUNC(ax25_linkfail_register, "", "");
KSYMTAB_FUNC(ax25_linkfail_release, "", "");
KSYMTAB_FUNC(ax25_listen_register, "", "");
KSYMTAB_FUNC(ax25_listen_release, "", "");
KSYMTAB_DATA(ax25_header_ops, "", "");
KSYMTAB_FUNC(ax25_ip_xmit, "", "");
KSYMTAB_FUNC(ax25_send_frame, "", "");
KSYMTAB_FUNC(ax25_display_timer, "", "");
KSYMTAB_DATA(ax25_uid_policy, "", "");
KSYMTAB_FUNC(ax25_findbyuid, "", "");
KSYMTAB_FUNC(ax25_find_cb, "", "");

SYMBOL_CRC(ax25_bcast, 0xac93ae05, "_gpl");
SYMBOL_CRC(ax25_defaddr, 0xaeb7451e, "_gpl");
SYMBOL_CRC(null_ax25_address, 0xd43ecbf1, "");
SYMBOL_CRC(ax2asc, 0x53dea1ff, "");
SYMBOL_CRC(asc2ax, 0x4502c65a, "");
SYMBOL_CRC(ax25cmp, 0xc1444946, "");
SYMBOL_CRC(ax25_register_pid, 0xd1aa1d72, "_gpl");
SYMBOL_CRC(ax25_protocol_release, 0x8ede9e26, "");
SYMBOL_CRC(ax25_linkfail_register, 0x177825b3, "");
SYMBOL_CRC(ax25_linkfail_release, 0xfda067f9, "");
SYMBOL_CRC(ax25_listen_register, 0x0ed5ff52, "");
SYMBOL_CRC(ax25_listen_release, 0x1caaebc8, "");
SYMBOL_CRC(ax25_header_ops, 0x42154287, "");
SYMBOL_CRC(ax25_ip_xmit, 0xf0b8a1e8, "");
SYMBOL_CRC(ax25_send_frame, 0x6d2a8fe6, "");
SYMBOL_CRC(ax25_display_timer, 0x14cecd59, "");
SYMBOL_CRC(ax25_uid_policy, 0x242852b9, "");
SYMBOL_CRC(ax25_findbyuid, 0xee02e420, "");
SYMBOL_CRC(ax25_find_cb, 0x1ea0f176, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1fea2ec6, "security_sock_graft" },
	{ 0x8fa1a568, "skb_free_datagram" },
	{ 0xe3d997df, "sock_queue_rcv_skb_reason" },
	{ 0x4367c3a1, "skb_put" },
	{ 0xebca6d16, "skb_expand_head" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x1db41cf8, "dev_add_pack" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xfdc695f3, "__skb_try_recv_datagram" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0x7861b279, "register_net_sysctl_sz" },
	{ 0x122c3a7e, "_printk" },
	{ 0x26fb156, "proto_unregister" },
	{ 0x1000e51, "schedule" },
	{ 0xb706a33f, "sock_register" },
	{ 0x7b8c6989, "datagram_poll" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8d732959, "make_kuid" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xa8707ce6, "proto_register" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xb4d04431, "dev_get_by_name_rcu" },
	{ 0x1a6ab775, "init_net" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x24d273d1, "add_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8bff47bb, "dev_remove_pack" },
	{ 0xf33af8b9, "sk_free" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x3dfbc684, "seq_putc" },
	{ 0x543ef284, "seq_hlist_start" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x6a82a79e, "skb_copy_datagram_iter" },
	{ 0x17d8abf0, "__skb_wait_for_more_packets" },
	{ 0x172d06fa, "sk_alloc" },
	{ 0x28e2e058, "sock_no_socketpair" },
	{ 0xdcb764ad, "memset" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0x1f95460a, "skb_dequeue_tail" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xebf80697, "sock_no_mmap" },
	{ 0x50d00458, "netif_rx" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x468e41a4, "sock_rfree" },
	{ 0x9846b85d, "sock_i_ino" },
	{ 0x341d7aad, "__dev_queue_xmit" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xa5a853f, "skb_set_owner_w" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0x96b1293c, "sock_alloc_send_pskb" },
	{ 0xb53675e6, "seq_write" },
	{ 0xa0e24b52, "remove_proc_entry" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xac85f68f, "skb_copy" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x9599b0d7, "_copy_from_iter" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x83227012, "sock_gettstamp" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x1bd3a117, "send_sig" },
	{ 0x5ac8c04c, "unregister_net_sysctl_table" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x10d63cce, "from_kuid_munged" },
	{ 0x98cf60b3, "strlen" },
	{ 0xf85b4e63, "iov_iter_revert" },
	{ 0x9b06f762, "proc_create_seq_private" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xa813464, "sock_init_data" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xd2d80c01, "release_sock" },
	{ 0x910b3446, "skb_queue_head" },
	{ 0x3eca0c01, "proc_dointvec_minmax" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "94E89EFF1D9A809151F85F3");
