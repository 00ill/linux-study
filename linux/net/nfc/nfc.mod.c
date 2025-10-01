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

KSYMTAB_FUNC(nfc_fw_download_done, "", "");
KSYMTAB_FUNC(nfc_dep_link_is_up, "", "");
KSYMTAB_FUNC(nfc_find_se, "", "");
KSYMTAB_FUNC(nfc_set_remote_general_bytes, "", "");
KSYMTAB_FUNC(nfc_get_local_general_bytes, "", "");
KSYMTAB_FUNC(nfc_tm_data_received, "", "");
KSYMTAB_FUNC(nfc_tm_activated, "", "");
KSYMTAB_FUNC(nfc_tm_deactivated, "", "");
KSYMTAB_FUNC(nfc_alloc_recv_skb, "", "");
KSYMTAB_FUNC(nfc_targets_found, "", "");
KSYMTAB_FUNC(nfc_target_lost, "", "");
KSYMTAB_FUNC(nfc_driver_failure, "", "");
KSYMTAB_FUNC(nfc_add_se, "", "");
KSYMTAB_FUNC(nfc_remove_se, "", "");
KSYMTAB_FUNC(nfc_se_transaction, "", "");
KSYMTAB_FUNC(nfc_se_connectivity, "", "");
KSYMTAB_DATA(nfc_class, "", "");
KSYMTAB_FUNC(nfc_allocate_device, "", "");
KSYMTAB_FUNC(nfc_register_device, "", "");
KSYMTAB_FUNC(nfc_unregister_device, "", "");
KSYMTAB_FUNC(__nfc_alloc_vendor_cmd_reply_skb, "", "");
KSYMTAB_FUNC(nfc_vendor_cmd_reply, "", "");
KSYMTAB_FUNC(nfc_proto_register, "", "");
KSYMTAB_FUNC(nfc_proto_unregister, "", "");
KSYMTAB_FUNC(nfc_send_to_raw_sock, "", "");

SYMBOL_CRC(nfc_fw_download_done, 0x680786e2, "");
SYMBOL_CRC(nfc_dep_link_is_up, 0xa9e4f305, "");
SYMBOL_CRC(nfc_find_se, 0x2869940d, "");
SYMBOL_CRC(nfc_set_remote_general_bytes, 0x3fbf0702, "");
SYMBOL_CRC(nfc_get_local_general_bytes, 0xc037656a, "");
SYMBOL_CRC(nfc_tm_data_received, 0x4aee4e9f, "");
SYMBOL_CRC(nfc_tm_activated, 0x92a000eb, "");
SYMBOL_CRC(nfc_tm_deactivated, 0x41922cbf, "");
SYMBOL_CRC(nfc_alloc_recv_skb, 0x7a4d411f, "");
SYMBOL_CRC(nfc_targets_found, 0x70416dba, "");
SYMBOL_CRC(nfc_target_lost, 0x6d153b74, "");
SYMBOL_CRC(nfc_driver_failure, 0x75ec50e5, "");
SYMBOL_CRC(nfc_add_se, 0xf1d332fa, "");
SYMBOL_CRC(nfc_remove_se, 0x0f6d2bb2, "");
SYMBOL_CRC(nfc_se_transaction, 0x91069c46, "");
SYMBOL_CRC(nfc_se_connectivity, 0x1553afb7, "");
SYMBOL_CRC(nfc_class, 0x68ff1870, "");
SYMBOL_CRC(nfc_allocate_device, 0x7df4bf16, "");
SYMBOL_CRC(nfc_register_device, 0x91070761, "");
SYMBOL_CRC(nfc_unregister_device, 0xc2edcc0e, "");
SYMBOL_CRC(__nfc_alloc_vendor_cmd_reply_skb, 0x77cd3cae, "");
SYMBOL_CRC(nfc_vendor_cmd_reply, 0x6a5cc46f, "");
SYMBOL_CRC(nfc_proto_register, 0x1f54ef61, "");
SYMBOL_CRC(nfc_proto_unregister, 0xf3abecb4, "");
SYMBOL_CRC(nfc_send_to_raw_sock, 0x17d8c88e, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1fea2ec6, "security_sock_graft" },
	{ 0x8fa1a568, "skb_free_datagram" },
	{ 0xe3d997df, "sock_queue_rcv_skb_reason" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xae4fc4e9, "class_dev_iter_next" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xc0763484, "rfkill_blocked" },
	{ 0xde293f9e, "add_wait_queue_exclusive" },
	{ 0x16965a52, "device_initialize" },
	{ 0x52faf957, "sock_no_sendmsg" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xfbcd121e, "genlmsg_put" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x15fcbdad, "sock_no_connect" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xcde2f9d8, "__pskb_copy_fclone" },
	{ 0x6d569cec, "netlink_broadcast_filtered" },
	{ 0xc1b89cb8, "sk_error_report" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0x6b09e30f, "class_dev_iter_exit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x26fb156, "proto_unregister" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb706a33f, "sock_register" },
	{ 0x7b8c6989, "datagram_poll" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x36dc6ece, "put_device" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xa8707ce6, "proto_register" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x9d9e8944, "module_put" },
	{ 0x56ceca83, "__sock_recv_timestamp" },
	{ 0x625c6bab, "sock_no_shutdown" },
	{ 0x2a10607e, "devm_kfree" },
	{ 0x1a6ab775, "init_net" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x7b1a51f0, "device_add" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xf4889f04, "netlink_unicast" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf33af8b9, "sk_free" },
	{ 0x92724e6a, "sock_no_accept" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x691c6355, "sock_no_listen" },
	{ 0x5a921311, "strncmp" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xffb7c514, "ida_free" },
	{ 0x7143a676, "class_unregister" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xac27974a, "ns_capable" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0x9252cbd2, "sock_no_bind" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6a82a79e, "skb_copy_datagram_iter" },
	{ 0x4ff61f23, "rfkill_alloc" },
	{ 0xd81484b2, "class_dev_iter_init" },
	{ 0x172d06fa, "sk_alloc" },
	{ 0x73f49957, "device_del" },
	{ 0x89f64017, "__sock_recv_wifi_status" },
	{ 0x28e2e058, "sock_no_socketpair" },
	{ 0xdcb764ad, "memset" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xebf80697, "sock_no_mmap" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x43f25734, "skb_unlink" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xff282521, "rfkill_register" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xf8cf9916, "skb_recv_datagram" },
	{ 0x96b1293c, "sock_alloc_send_pskb" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x85988b5f, "sock_no_getname" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xac85f68f, "skb_copy" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x9599b0d7, "_copy_from_iter" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x57090976, "sock_no_ioctl" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x41e4f2cd, "genl_unregister_family" },
	{ 0x98cf60b3, "strlen" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xf85b4e63, "iov_iter_revert" },
	{ 0xce91aba6, "genl_register_family" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xa42d469b, "class_register" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xa813464, "sock_init_data" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xd2d80c01, "release_sock" },
	{ 0x910b3446, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xcf5fbd79, "class_find_device" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rfkill");


MODULE_INFO(srcversion, "4FE200478CB3DA54462AEAC");
