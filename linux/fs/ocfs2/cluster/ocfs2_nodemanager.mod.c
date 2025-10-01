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

KSYMTAB_FUNC(o2hb_fill_node_map, "_gpl", "");
KSYMTAB_FUNC(o2hb_setup_callback, "_gpl", "");
KSYMTAB_FUNC(o2hb_register_callback, "_gpl", "");
KSYMTAB_FUNC(o2hb_unregister_callback, "_gpl", "");
KSYMTAB_FUNC(o2hb_check_node_heartbeating_no_sem, "_gpl", "");
KSYMTAB_FUNC(o2hb_check_node_heartbeating_from_callback, "_gpl", "");
KSYMTAB_FUNC(o2hb_stop_all_regions, "_gpl", "");
KSYMTAB_FUNC(o2hb_get_all_regions, "_gpl", "");
KSYMTAB_FUNC(o2hb_global_heartbeat_active, "", "");
KSYMTAB_DATA(mlog_and_bits, "_gpl", "");
KSYMTAB_DATA(mlog_not_bits, "_gpl", "");
KSYMTAB_FUNC(__mlog_printk, "_gpl", "");
KSYMTAB_FUNC(o2nm_get_node_by_num, "_gpl", "");
KSYMTAB_FUNC(o2nm_configured_node_map, "_gpl", "");
KSYMTAB_FUNC(o2nm_get_node_by_ip, "_gpl", "");
KSYMTAB_FUNC(o2nm_node_put, "_gpl", "");
KSYMTAB_FUNC(o2nm_node_get, "_gpl", "");
KSYMTAB_FUNC(o2nm_this_node, "_gpl", "");
KSYMTAB_FUNC(o2net_register_handler, "_gpl", "");
KSYMTAB_FUNC(o2net_unregister_handler_list, "_gpl", "");
KSYMTAB_FUNC(o2net_fill_node_map, "_gpl", "");
KSYMTAB_FUNC(o2net_send_message_vec, "_gpl", "");
KSYMTAB_FUNC(o2net_send_message, "_gpl", "");

SYMBOL_CRC(o2hb_fill_node_map, 0xa941cb47, "_gpl");
SYMBOL_CRC(o2hb_setup_callback, 0xc2d395d0, "_gpl");
SYMBOL_CRC(o2hb_register_callback, 0xc2f799c3, "_gpl");
SYMBOL_CRC(o2hb_unregister_callback, 0x1a6e6619, "_gpl");
SYMBOL_CRC(o2hb_check_node_heartbeating_no_sem, 0xbd13ee5d, "_gpl");
SYMBOL_CRC(o2hb_check_node_heartbeating_from_callback, 0xc4d99852, "_gpl");
SYMBOL_CRC(o2hb_stop_all_regions, 0x4900035b, "_gpl");
SYMBOL_CRC(o2hb_get_all_regions, 0x58c88ff2, "_gpl");
SYMBOL_CRC(o2hb_global_heartbeat_active, 0xbfd7d7a2, "");
SYMBOL_CRC(mlog_and_bits, 0x81a17396, "_gpl");
SYMBOL_CRC(mlog_not_bits, 0xf56c2017, "_gpl");
SYMBOL_CRC(__mlog_printk, 0x6a0c3847, "_gpl");
SYMBOL_CRC(o2nm_get_node_by_num, 0xa41a231f, "_gpl");
SYMBOL_CRC(o2nm_configured_node_map, 0xa87bc9e7, "_gpl");
SYMBOL_CRC(o2nm_get_node_by_ip, 0xdc730bd4, "_gpl");
SYMBOL_CRC(o2nm_node_put, 0xf89aed53, "_gpl");
SYMBOL_CRC(o2nm_node_get, 0xd1ab66d8, "_gpl");
SYMBOL_CRC(o2nm_this_node, 0xb6ebf62a, "_gpl");
SYMBOL_CRC(o2net_register_handler, 0xfe1298f3, "_gpl");
SYMBOL_CRC(o2net_unregister_handler_list, 0xf1a5611d, "_gpl");
SYMBOL_CRC(o2net_fill_node_map, 0xd859ac8c, "_gpl");
SYMBOL_CRC(o2net_send_message_vec, 0x5e95a4b2, "_gpl");
SYMBOL_CRC(o2net_send_message, 0xf982e6db, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x3b3bf1a0, "config_group_init" },
	{ 0x20978fb9, "idr_find" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x96848186, "scnprintf" },
	{ 0xfdcbdbaf, "config_item_get" },
	{ 0xc1ea4986, "set_user_nice" },
	{ 0x952844cc, "sock_create" },
	{ 0x5edc2529, "tcp_sock_set_user_timeout" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xb6841069, "kset_unregister" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xe6aef439, "__tracepoint_sk_data_ready" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xaa8d662b, "configfs_unregister_subsystem" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x9ae47436, "_find_last_bit" },
	{ 0x6d11488, "__bitmap_equal" },
	{ 0x122c3a7e, "_printk" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0c05159, "emergency_restart" },
	{ 0x42e52326, "fs_kobj" },
	{ 0x6c736d6, "__free_pages" },
	{ 0x728d7feb, "submit_bio" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x1e087e8f, "bio_put" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xacceb7d8, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0xac104271, "__traceiter_sk_data_ready" },
	{ 0xce807a25, "up_write" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2eb49b36, "configfs_register_subsystem" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x82f6b9b9, "configfs_remove_default_groups" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x10b9f0fc, "config_group_init_type_name" },
	{ 0xa3e70c7e, "kernel_sock_shutdown" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xff65ed11, "iov_iter_kvec" },
	{ 0xf1e046cc, "panic" },
	{ 0x8045b26e, "sock_sendmsg" },
	{ 0xa825caf3, "bio_add_page" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xed85cddf, "sysfs_create_group" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb3ba1a7a, "__seq_open_private" },
	{ 0x91f146cb, "bdev_file_open_by_dev" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x352907be, "folio_alloc_noprof" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xdcb764ad, "memset" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xefbf72d, "iov_iter_bvec" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8ef33f3, "configfs_depend_item" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0x661256ad, "seq_read" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x7230beea, "fdget" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc135d7a1, "config_item_init_type_name" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x671e0dac, "config_item_put" },
	{ 0xd9aab56f, "__folio_put" },
	{ 0x6080511e, "kobject_set_name" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x4542181e, "sock_recvmsg" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xcebd4329, "sock_release" },
	{ 0xa26dbdbf, "alloc_pages_noprof" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xea3dad36, "file_bdev" },
	{ 0x90fbea1b, "configfs_undepend_item" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x9dec9c11, "tcp_sock_set_nodelay" },
	{ 0xbf677e7a, "seq_release_private" },
	{ 0x704e841b, "kset_register" },
	{ 0x98cf60b3, "strlen" },
	{ 0xff292cac, "sock_create_lite" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0xe9af6d33, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x68a638e7, "kernel_sendmsg" },
	{ 0x639d0714, "bio_alloc_bioset" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x53b954a2, "up_read" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc59aec15, "fs_bio_set" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x67b68af, "kset_create_and_add" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B5FAF8498D747A0144525BB");
