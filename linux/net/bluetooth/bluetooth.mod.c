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

KSYMTAB_FUNC(bt_sock_reclassify_lock, "", "");
KSYMTAB_FUNC(bt_sock_register, "", "");
KSYMTAB_FUNC(bt_sock_unregister, "", "");
KSYMTAB_FUNC(bt_sock_alloc, "", "");
KSYMTAB_FUNC(bt_sock_link, "", "");
KSYMTAB_FUNC(bt_sock_unlink, "", "");
KSYMTAB_FUNC(bt_sock_linked, "", "");
KSYMTAB_FUNC(bt_accept_enqueue, "", "");
KSYMTAB_FUNC(bt_accept_unlink, "", "");
KSYMTAB_FUNC(bt_accept_dequeue, "", "");
KSYMTAB_FUNC(bt_sock_recvmsg, "", "");
KSYMTAB_FUNC(bt_sock_stream_recvmsg, "", "");
KSYMTAB_FUNC(bt_sock_poll, "", "");
KSYMTAB_FUNC(bt_sock_ioctl, "", "");
KSYMTAB_FUNC(bt_sock_wait_state, "", "");
KSYMTAB_FUNC(bt_sock_wait_ready, "", "");
KSYMTAB_FUNC(bt_procfs_init, "", "");
KSYMTAB_FUNC(bt_procfs_cleanup, "", "");
KSYMTAB_DATA(bt_debugfs, "_gpl", "");
KSYMTAB_FUNC(hci_alloc_dev_priv, "", "");
KSYMTAB_FUNC(hci_free_dev, "", "");
KSYMTAB_FUNC(hci_register_dev, "", "");
KSYMTAB_FUNC(hci_unregister_dev, "", "");
KSYMTAB_FUNC(hci_release_dev, "", "");
KSYMTAB_FUNC(hci_suspend_dev, "", "");
KSYMTAB_FUNC(hci_resume_dev, "", "");
KSYMTAB_FUNC(hci_reset_dev, "", "");
KSYMTAB_FUNC(hci_recv_frame, "", "");
KSYMTAB_FUNC(hci_recv_diag, "", "");
KSYMTAB_FUNC(hci_set_hw_info, "", "");
KSYMTAB_FUNC(hci_set_fw_info, "", "");
KSYMTAB_FUNC(hci_register_cb, "", "");
KSYMTAB_FUNC(hci_unregister_cb, "", "");
KSYMTAB_FUNC(__hci_cmd_send, "", "");
KSYMTAB_FUNC(hci_get_route, "", "");
KSYMTAB_FUNC(hci_conn_security, "", "");
KSYMTAB_FUNC(hci_conn_check_secure, "", "");
KSYMTAB_FUNC(hci_conn_switch_role, "", "");
KSYMTAB_FUNC(hci_mgmt_chan_register, "", "");
KSYMTAB_FUNC(hci_mgmt_chan_unregister, "", "");
KSYMTAB_FUNC(l2cap_add_psm, "_gpl", "");
KSYMTAB_FUNC(l2cap_chan_create, "_gpl", "");
KSYMTAB_FUNC(l2cap_chan_put, "_gpl", "");
KSYMTAB_FUNC(l2cap_chan_set_defaults, "_gpl", "");
KSYMTAB_FUNC(l2cap_chan_del, "_gpl", "");
KSYMTAB_FUNC(l2cap_chan_list, "_gpl", "");
KSYMTAB_FUNC(l2cap_chan_close, "", "");
KSYMTAB_FUNC(l2cap_register_user, "", "");
KSYMTAB_FUNC(l2cap_unregister_user, "", "");
KSYMTAB_FUNC(l2cap_conn_get, "", "");
KSYMTAB_FUNC(l2cap_conn_put, "", "");
KSYMTAB_FUNC(l2cap_chan_send, "_gpl", "");
KSYMTAB_FUNC(l2cap_chan_connect, "_gpl", "");
KSYMTAB_FUNC(l2cap_is_socket, "", "");
KSYMTAB_FUNC(baswap, "", "");
KSYMTAB_FUNC(bt_to_errno, "", "");
KSYMTAB_FUNC(bt_status, "", "");
KSYMTAB_FUNC(bt_info, "", "");
KSYMTAB_FUNC(bt_warn, "", "");
KSYMTAB_FUNC(bt_err, "", "");
KSYMTAB_FUNC(bt_warn_ratelimited, "", "");
KSYMTAB_FUNC(bt_err_ratelimited, "", "");
KSYMTAB_FUNC(__hci_cmd_sync_sk, "", "");
KSYMTAB_FUNC(__hci_cmd_sync, "", "");
KSYMTAB_FUNC(hci_cmd_sync, "", "");
KSYMTAB_FUNC(__hci_cmd_sync_ev, "", "");
KSYMTAB_FUNC(__hci_cmd_sync_status_sk, "", "");
KSYMTAB_FUNC(__hci_cmd_sync_status, "", "");
KSYMTAB_FUNC(hci_cmd_sync_status, "", "");
KSYMTAB_FUNC(hci_cmd_sync_cancel, "", "");
KSYMTAB_FUNC(hci_cmd_sync_cancel_sync, "", "");
KSYMTAB_FUNC(hci_cmd_sync_submit, "", "");
KSYMTAB_FUNC(hci_cmd_sync_queue, "", "");
KSYMTAB_FUNC(hci_cmd_sync_queue_once, "", "");
KSYMTAB_FUNC(hci_cmd_sync_run, "", "");
KSYMTAB_FUNC(hci_cmd_sync_run_once, "", "");
KSYMTAB_FUNC(hci_cmd_sync_lookup_entry, "", "");
KSYMTAB_FUNC(hci_cmd_sync_cancel_entry, "", "");
KSYMTAB_FUNC(hci_cmd_sync_dequeue_once, "", "");
KSYMTAB_FUNC(hci_cmd_sync_dequeue, "", "");
KSYMTAB_FUNC(hci_devcd_rx, "", "");
KSYMTAB_FUNC(hci_devcd_timeout, "", "");
KSYMTAB_FUNC(hci_devcd_register, "", "");
KSYMTAB_FUNC(hci_devcd_init, "", "");
KSYMTAB_FUNC(hci_devcd_append, "", "");
KSYMTAB_FUNC(hci_devcd_append_pattern, "", "");
KSYMTAB_FUNC(hci_devcd_complete, "", "");
KSYMTAB_FUNC(hci_devcd_abort, "", "");

SYMBOL_CRC(bt_sock_reclassify_lock, 0x9bdb25d3, "");
SYMBOL_CRC(bt_sock_register, 0x75adf774, "");
SYMBOL_CRC(bt_sock_unregister, 0x8fea24bd, "");
SYMBOL_CRC(bt_sock_alloc, 0xb92cb3bb, "");
SYMBOL_CRC(bt_sock_link, 0xa37ebe21, "");
SYMBOL_CRC(bt_sock_unlink, 0x11328e9c, "");
SYMBOL_CRC(bt_sock_linked, 0xf54def3b, "");
SYMBOL_CRC(bt_accept_enqueue, 0x9a92cf68, "");
SYMBOL_CRC(bt_accept_unlink, 0x8f367869, "");
SYMBOL_CRC(bt_accept_dequeue, 0xd9a965ea, "");
SYMBOL_CRC(bt_sock_recvmsg, 0x6f9908fc, "");
SYMBOL_CRC(bt_sock_stream_recvmsg, 0xa0a84736, "");
SYMBOL_CRC(bt_sock_poll, 0x9336b192, "");
SYMBOL_CRC(bt_sock_ioctl, 0x06e7f2e9, "");
SYMBOL_CRC(bt_sock_wait_state, 0x985612d9, "");
SYMBOL_CRC(bt_sock_wait_ready, 0x5f828298, "");
SYMBOL_CRC(bt_procfs_init, 0x5406ab7a, "");
SYMBOL_CRC(bt_procfs_cleanup, 0xbd041193, "");
SYMBOL_CRC(bt_debugfs, 0x0a7bedd2, "_gpl");
SYMBOL_CRC(hci_alloc_dev_priv, 0x84351f9d, "");
SYMBOL_CRC(hci_free_dev, 0xec2f6bf4, "");
SYMBOL_CRC(hci_register_dev, 0x9b80e029, "");
SYMBOL_CRC(hci_unregister_dev, 0xadc1603a, "");
SYMBOL_CRC(hci_release_dev, 0x88bc4869, "");
SYMBOL_CRC(hci_suspend_dev, 0x5e09d3fc, "");
SYMBOL_CRC(hci_resume_dev, 0x7f98a838, "");
SYMBOL_CRC(hci_reset_dev, 0x6ed3acab, "");
SYMBOL_CRC(hci_recv_frame, 0xf7389894, "");
SYMBOL_CRC(hci_recv_diag, 0xcf9ac34d, "");
SYMBOL_CRC(hci_set_hw_info, 0x0553c19d, "");
SYMBOL_CRC(hci_set_fw_info, 0x353b511a, "");
SYMBOL_CRC(hci_register_cb, 0x25213a0b, "");
SYMBOL_CRC(hci_unregister_cb, 0x784fc521, "");
SYMBOL_CRC(__hci_cmd_send, 0x748b3f7d, "");
SYMBOL_CRC(hci_get_route, 0x1e2a4d88, "");
SYMBOL_CRC(hci_conn_security, 0x953846b7, "");
SYMBOL_CRC(hci_conn_check_secure, 0x2e0b221e, "");
SYMBOL_CRC(hci_conn_switch_role, 0xdd9804c8, "");
SYMBOL_CRC(hci_mgmt_chan_register, 0x4ac1be16, "");
SYMBOL_CRC(hci_mgmt_chan_unregister, 0x3bcf9ab3, "");
SYMBOL_CRC(l2cap_add_psm, 0x8d3173e5, "_gpl");
SYMBOL_CRC(l2cap_chan_create, 0x1d27ff8f, "_gpl");
SYMBOL_CRC(l2cap_chan_put, 0x4835380d, "_gpl");
SYMBOL_CRC(l2cap_chan_set_defaults, 0x220734ea, "_gpl");
SYMBOL_CRC(l2cap_chan_del, 0x6d5004a5, "_gpl");
SYMBOL_CRC(l2cap_chan_list, 0x680d7b82, "_gpl");
SYMBOL_CRC(l2cap_chan_close, 0x61447d02, "");
SYMBOL_CRC(l2cap_register_user, 0xba187ff1, "");
SYMBOL_CRC(l2cap_unregister_user, 0x1abba71b, "");
SYMBOL_CRC(l2cap_conn_get, 0x8c25c378, "");
SYMBOL_CRC(l2cap_conn_put, 0x141e20fc, "");
SYMBOL_CRC(l2cap_chan_send, 0xa35a813f, "_gpl");
SYMBOL_CRC(l2cap_chan_connect, 0x0e4c6c53, "_gpl");
SYMBOL_CRC(l2cap_is_socket, 0x3a7f8679, "");
SYMBOL_CRC(baswap, 0x7b5ce5c3, "");
SYMBOL_CRC(bt_to_errno, 0x7aad008b, "");
SYMBOL_CRC(bt_status, 0x7bd9427a, "");
SYMBOL_CRC(bt_info, 0x0718b8b7, "");
SYMBOL_CRC(bt_warn, 0x214e4265, "");
SYMBOL_CRC(bt_err, 0x7b8c32f1, "");
SYMBOL_CRC(bt_warn_ratelimited, 0xddacccf6, "");
SYMBOL_CRC(bt_err_ratelimited, 0xd7613212, "");
SYMBOL_CRC(__hci_cmd_sync_sk, 0x6b4dcca6, "");
SYMBOL_CRC(__hci_cmd_sync, 0xb5947eb5, "");
SYMBOL_CRC(hci_cmd_sync, 0xf0a39d83, "");
SYMBOL_CRC(__hci_cmd_sync_ev, 0xded62bf7, "");
SYMBOL_CRC(__hci_cmd_sync_status_sk, 0x93b8dcd8, "");
SYMBOL_CRC(__hci_cmd_sync_status, 0x2eba38c2, "");
SYMBOL_CRC(hci_cmd_sync_status, 0xdc245c87, "");
SYMBOL_CRC(hci_cmd_sync_cancel, 0x4a48d65c, "");
SYMBOL_CRC(hci_cmd_sync_cancel_sync, 0xa5a67311, "");
SYMBOL_CRC(hci_cmd_sync_submit, 0x4bda8ffc, "");
SYMBOL_CRC(hci_cmd_sync_queue, 0xca813202, "");
SYMBOL_CRC(hci_cmd_sync_queue_once, 0x477bfb16, "");
SYMBOL_CRC(hci_cmd_sync_run, 0x83d97828, "");
SYMBOL_CRC(hci_cmd_sync_run_once, 0x7bb7ffae, "");
SYMBOL_CRC(hci_cmd_sync_lookup_entry, 0xfff37504, "");
SYMBOL_CRC(hci_cmd_sync_cancel_entry, 0x3efb66d9, "");
SYMBOL_CRC(hci_cmd_sync_dequeue_once, 0x651f0cd6, "");
SYMBOL_CRC(hci_cmd_sync_dequeue, 0x1ac8a92e, "");
SYMBOL_CRC(hci_devcd_rx, 0xa36d67be, "");
SYMBOL_CRC(hci_devcd_timeout, 0xa60137a1, "");
SYMBOL_CRC(hci_devcd_register, 0x01e8b81a, "");
SYMBOL_CRC(hci_devcd_init, 0xb20da7cc, "");
SYMBOL_CRC(hci_devcd_append, 0x837bda45, "");
SYMBOL_CRC(hci_devcd_append_pattern, 0xd7fc5065, "");
SYMBOL_CRC(hci_devcd_complete, 0x25eac995, "");
SYMBOL_CRC(hci_devcd_abort, 0x81688f31, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1fea2ec6, "security_sock_graft" },
	{ 0x8fa1a568, "skb_free_datagram" },
	{ 0xe3d997df, "sock_queue_rcv_skb_reason" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x37548669, "sock_i_uid" },
	{ 0x27c66375, "simple_attr_open" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7475be8e, "crypto_ecdh_key_len" },
	{ 0x78b887ed, "vsprintf" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x20978fb9, "idr_find" },
	{ 0x3c57e074, "debugfs_attr_write" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x43bc312c, "scm_detach_fds" },
	{ 0x9386790b, "crypto_shash_tfm_digest" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x22acd2e2, "device_unregister" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xab81e3f7, "debugfs_create_u16" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x96848186, "scnprintf" },
	{ 0xc0763484, "rfkill_blocked" },
	{ 0x2ce48aa, "device_find_any_child" },
	{ 0xde293f9e, "add_wait_queue_exclusive" },
	{ 0x16965a52, "device_initialize" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x15fcbdad, "sock_no_connect" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xad25b856, "dev_kfree_skb_irq_reason" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x697ed5f0, "memcpy_and_pad" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34749417, "synchronize_srcu" },
	{ 0xd8940511, "__module_get" },
	{ 0x148653, "vsnprintf" },
	{ 0x99ed6ef6, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x248efd3, "kstrtobool_from_user" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0xcde2f9d8, "__pskb_copy_fclone" },
	{ 0x7c7b473c, "__put_cred" },
	{ 0x4ce6a914, "put_cmsg" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0xc35aaa13, "crypto_destroy_tfm" },
	{ 0x5b631508, "disable_delayed_work" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x122c3a7e, "_printk" },
	{ 0x176e4952, "disable_work_sync" },
	{ 0xe20d5966, "crypto_alloc_kpp" },
	{ 0x6b853d06, "ns_to_kernel_old_timeval" },
	{ 0x26fb156, "proto_unregister" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb706a33f, "sock_register" },
	{ 0x7b8c6989, "datagram_poll" },
	{ 0xc5300d6f, "__sock_recv_cmsgs" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x36dc6ece, "put_device" },
	{ 0xa916b694, "strnlen" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xf44d53da, "security_secid_to_secctx" },
	{ 0xa8707ce6, "proto_register" },
	{ 0x16e297c3, "bit_wait" },
	{ 0xed61f6b3, "security_release_secctx" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x9d9e8944, "module_put" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xa861d6a8, "debugfs_attr_read" },
	{ 0x56ceca83, "__sock_recv_timestamp" },
	{ 0x625c6bab, "sock_no_shutdown" },
	{ 0x90f38830, "sk_filter_trim_cap" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5ad9853d, "init_srcu_struct" },
	{ 0xa8e458b, "crypto_req_done" },
	{ 0x1a6ab775, "init_net" },
	{ 0x54805a08, "crypto_shash_setkey" },
	{ 0x5d809a68, "simple_open" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7b1a51f0, "device_add" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x2ef9e47d, "simple_attr_release" },
	{ 0xfed6b708, "__srcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xef29640e, "init_uts_ns" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xf33af8b9, "sk_free" },
	{ 0x7adbe247, "device_move" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x92724e6a, "sock_no_accept" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x691c6355, "sock_no_listen" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x3dfbc684, "seq_putc" },
	{ 0xbd6841d4, "crc16" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xff65ed11, "iov_iter_kvec" },
	{ 0xffb7c514, "ida_free" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0x7143a676, "class_unregister" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5dfba5b2, "cleanup_srcu_struct" },
	{ 0xb1518e15, "cancel_work" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0xf4da4505, "dev_coredumpv" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6a82a79e, "skb_copy_datagram_iter" },
	{ 0x4ff61f23, "rfkill_alloc" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb230d2ec, "crypto_ecdh_encode_key" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x172d06fa, "sk_alloc" },
	{ 0x73f49957, "device_del" },
	{ 0xd1237017, "__sock_queue_rcv_skb" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x40d6ec8a, "default_llseek" },
	{ 0x89f64017, "__sock_recv_wifi_status" },
	{ 0x29a43bb2, "from_kuid" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x28e2e058, "sock_no_socketpair" },
	{ 0xdcb764ad, "memset" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x15d6eb2f, "__get_task_comm" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xebf80697, "sock_no_mmap" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf6fa22b8, "security_sk_clone" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x88120b77, "__scm_destroy" },
	{ 0xe4151e2c, "from_kgid_munged" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0x43f25734, "skb_unlink" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x661256ad, "seq_read" },
	{ 0x9846b85d, "sock_i_ino" },
	{ 0x8a5711b1, "fwnode_property_present" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x999e8297, "vfree" },
	{ 0xff282521, "rfkill_register" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdfcc992c, "current_work" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x8b96fd11, "sk_capable" },
	{ 0x1632bc21, "kvasprintf_const" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xf8cf9916, "skb_recv_datagram" },
	{ 0x96b1293c, "sock_alloc_send_pskb" },
	{ 0xb53675e6, "seq_write" },
	{ 0xa0e24b52, "remove_proc_entry" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xac85f68f, "skb_copy" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc42978eb, "__srcu_read_unlock" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x9599b0d7, "_copy_from_iter" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x3518924b, "skb_pull_data" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x83227012, "sock_gettstamp" },
	{ 0x10139ad8, "single_release" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x9c97681, "pid_vnr" },
	{ 0x696c866d, "disable_delayed_work_sync" },
	{ 0x10d63cce, "from_kuid_munged" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xf85b4e63, "iov_iter_revert" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x9b06f762, "proc_create_seq_private" },
	{ 0x571ab022, "debugfs_create_u8" },
	{ 0x71c90ddc, "single_open" },
	{ 0xf39a6dab, "crypto_alloc_shash" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x4095d621, "fwnode_property_read_u8_array" },
	{ 0xac3274c9, "put_pid" },
	{ 0xa42d469b, "class_register" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xa813464, "sock_init_data" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xd2d80c01, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x910b3446, "skb_queue_head" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ecdh_generic,rfkill,libaes");


MODULE_INFO(srcversion, "44E430CCAFA3D32BFBC5C69");
