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

KSYMTAB_DATA(vsock_bind_table, "_gpl", "");
KSYMTAB_DATA(vsock_connected_table, "_gpl", "");
KSYMTAB_DATA(vsock_table_lock, "_gpl", "");
KSYMTAB_FUNC(vsock_insert_connected, "_gpl", "");
KSYMTAB_FUNC(vsock_remove_bound, "_gpl", "");
KSYMTAB_FUNC(vsock_remove_connected, "_gpl", "");
KSYMTAB_FUNC(vsock_find_bound_socket, "_gpl", "");
KSYMTAB_FUNC(vsock_find_connected_socket, "_gpl", "");
KSYMTAB_FUNC(vsock_remove_sock, "_gpl", "");
KSYMTAB_FUNC(vsock_for_each_connected_socket, "_gpl", "");
KSYMTAB_FUNC(vsock_add_pending, "_gpl", "");
KSYMTAB_FUNC(vsock_remove_pending, "_gpl", "");
KSYMTAB_FUNC(vsock_enqueue_accept, "_gpl", "");
KSYMTAB_FUNC(vsock_assign_transport, "_gpl", "");
KSYMTAB_FUNC(vsock_find_cid, "_gpl", "");
KSYMTAB_FUNC(vsock_create_connected, "_gpl", "");
KSYMTAB_FUNC(vsock_stream_has_data, "_gpl", "");
KSYMTAB_FUNC(vsock_connectible_has_data, "_gpl", "");
KSYMTAB_FUNC(vsock_stream_has_space, "_gpl", "");
KSYMTAB_FUNC(vsock_data_ready, "_gpl", "");
KSYMTAB_FUNC(vsock_dgram_recvmsg, "_gpl", "");
KSYMTAB_FUNC(vsock_connectible_recvmsg, "_gpl", "");
KSYMTAB_FUNC(vsock_core_get_transport, "_gpl", "");
KSYMTAB_FUNC(vsock_core_register, "_gpl", "");
KSYMTAB_FUNC(vsock_core_unregister, "_gpl", "");
KSYMTAB_FUNC(vsock_add_tap, "_gpl", "");
KSYMTAB_FUNC(vsock_remove_tap, "_gpl", "");
KSYMTAB_FUNC(vsock_deliver_tap, "_gpl", "");
KSYMTAB_FUNC(vsock_addr_init, "_gpl", "");
KSYMTAB_FUNC(vsock_addr_validate, "_gpl", "");
KSYMTAB_FUNC(vsock_addr_bound, "_gpl", "");
KSYMTAB_FUNC(vsock_addr_unbind, "_gpl", "");
KSYMTAB_FUNC(vsock_addr_equals_addr, "_gpl", "");
KSYMTAB_FUNC(vsock_addr_cast, "_gpl", "");

SYMBOL_CRC(vsock_bind_table, 0x284e07d8, "_gpl");
SYMBOL_CRC(vsock_connected_table, 0x9bb6fd09, "_gpl");
SYMBOL_CRC(vsock_table_lock, 0xc92f7f50, "_gpl");
SYMBOL_CRC(vsock_insert_connected, 0x8769f7d9, "_gpl");
SYMBOL_CRC(vsock_remove_bound, 0x92b73728, "_gpl");
SYMBOL_CRC(vsock_remove_connected, 0x0b358774, "_gpl");
SYMBOL_CRC(vsock_find_bound_socket, 0x9c1a3623, "_gpl");
SYMBOL_CRC(vsock_find_connected_socket, 0x71f22f37, "_gpl");
SYMBOL_CRC(vsock_remove_sock, 0x3a97cc49, "_gpl");
SYMBOL_CRC(vsock_for_each_connected_socket, 0x60497cf8, "_gpl");
SYMBOL_CRC(vsock_add_pending, 0xf214b376, "_gpl");
SYMBOL_CRC(vsock_remove_pending, 0xaeb96961, "_gpl");
SYMBOL_CRC(vsock_enqueue_accept, 0xc12c556a, "_gpl");
SYMBOL_CRC(vsock_assign_transport, 0x815d09df, "_gpl");
SYMBOL_CRC(vsock_find_cid, 0x90aa8549, "_gpl");
SYMBOL_CRC(vsock_create_connected, 0x01105c57, "_gpl");
SYMBOL_CRC(vsock_stream_has_data, 0xdbf186a2, "_gpl");
SYMBOL_CRC(vsock_connectible_has_data, 0x27a7b6e7, "_gpl");
SYMBOL_CRC(vsock_stream_has_space, 0x80503c2e, "_gpl");
SYMBOL_CRC(vsock_data_ready, 0x3d582cba, "_gpl");
SYMBOL_CRC(vsock_dgram_recvmsg, 0x85252361, "_gpl");
SYMBOL_CRC(vsock_connectible_recvmsg, 0xbe47556e, "_gpl");
SYMBOL_CRC(vsock_core_get_transport, 0x3f05e846, "_gpl");
SYMBOL_CRC(vsock_core_register, 0xbfebc9aa, "_gpl");
SYMBOL_CRC(vsock_core_unregister, 0x25da9dc3, "_gpl");
SYMBOL_CRC(vsock_add_tap, 0x615481f4, "_gpl");
SYMBOL_CRC(vsock_remove_tap, 0x7d462c8b, "_gpl");
SYMBOL_CRC(vsock_deliver_tap, 0xa99ead46, "_gpl");
SYMBOL_CRC(vsock_addr_init, 0x3d4b0fca, "_gpl");
SYMBOL_CRC(vsock_addr_validate, 0xec96eadf, "_gpl");
SYMBOL_CRC(vsock_addr_bound, 0x4b99648c, "_gpl");
SYMBOL_CRC(vsock_addr_unbind, 0x0e9bc9b6, "_gpl");
SYMBOL_CRC(vsock_addr_equals_addr, 0xaf2674b5, "_gpl");
SYMBOL_CRC(vsock_addr_cast, 0xb0d7bda7, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1fea2ec6, "security_sock_graft" },
	{ 0x7074c1da, "sock_map_close" },
	{ 0xe3d997df, "sock_queue_rcv_skb_reason" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x94090688, "misc_deregister" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xd8940511, "__module_get" },
	{ 0x91f06f68, "sk_stream_error" },
	{ 0x1dff3eb7, "sk_msg_recvmsg" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x25ca1392, "ns_capable_noaudit" },
	{ 0x7c7b473c, "__put_cred" },
	{ 0xc1b89cb8, "sk_error_report" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0x122c3a7e, "_printk" },
	{ 0x26fb156, "proto_unregister" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb706a33f, "sock_register" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xa8707ce6, "proto_register" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9d9e8944, "module_put" },
	{ 0x79b20f57, "sk_msg_is_readable" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xf33af8b9, "sk_free" },
	{ 0x92724e6a, "sock_no_accept" },
	{ 0xedd17b31, "sock_get_timeout" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x691c6355, "sock_no_listen" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x3524e91f, "sock_recv_errqueue" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x172d06fa, "sk_alloc" },
	{ 0x28e2e058, "sock_no_socketpair" },
	{ 0xdcb764ad, "memset" },
	{ 0x2002cbd1, "misc_register" },
	{ 0xebf80697, "sock_no_mmap" },
	{ 0xf6fa22b8, "security_sk_clone" },
	{ 0x5bdb7603, "sock_copy_user_timeval" },
	{ 0xe3799008, "nonseekable_open" },
	{ 0xaeef209c, "sk_psock_drop" },
	{ 0x341d7aad, "__dev_queue_xmit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x771f0565, "init_user_ns" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x78a1a4a9, "sock_setsockopt" },
	{ 0xa813464, "sock_init_data" },
	{ 0xd2d80c01, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E0626AEC7951F05D24FF4AD");
