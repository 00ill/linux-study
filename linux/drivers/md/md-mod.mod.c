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

KSYMTAB_DATA(md_cluster_ops, "", "");
KSYMTAB_FUNC(md_new_event, "_gpl", "");
KSYMTAB_FUNC(md_handle_request, "", "");
KSYMTAB_FUNC(mddev_suspend, "_gpl", "");
KSYMTAB_FUNC(mddev_resume, "_gpl", "");
KSYMTAB_FUNC(md_flush_request, "", "");
KSYMTAB_FUNC(mddev_init, "_gpl", "");
KSYMTAB_FUNC(mddev_destroy, "_gpl", "");
KSYMTAB_FUNC(mddev_unlock, "_gpl", "");
KSYMTAB_FUNC(md_find_rdev_nr_rcu, "_gpl", "");
KSYMTAB_FUNC(md_find_rdev_rcu, "_gpl", "");
KSYMTAB_FUNC(md_rdev_clear, "_gpl", "");
KSYMTAB_FUNC(sync_page_io, "_gpl", "");
KSYMTAB_FUNC(md_check_no_bitmap, "", "");
KSYMTAB_FUNC(md_integrity_register, "", "");
KSYMTAB_FUNC(md_update_sb, "", "");
KSYMTAB_FUNC(md_rdev_init, "_gpl", "");
KSYMTAB_FUNC(md_idle_sync_thread, "_gpl", "");
KSYMTAB_FUNC(md_frozen_sync_thread, "_gpl", "");
KSYMTAB_FUNC(md_unfrozen_sync_thread, "_gpl", "");
KSYMTAB_FUNC(mddev_stack_rdev_limits, "_gpl", "");
KSYMTAB_FUNC(mddev_stack_new_rdev, "_gpl", "");
KSYMTAB_FUNC(mddev_update_io_opt, "_gpl", "");
KSYMTAB_FUNC(md_init_stacking_limits, "_gpl", "");
KSYMTAB_FUNC(md_run, "_gpl", "");
KSYMTAB_FUNC(md_start, "_gpl", "");
KSYMTAB_FUNC(md_stop_writes, "_gpl", "");
KSYMTAB_FUNC(md_stop, "_gpl", "");
KSYMTAB_FUNC(md_set_array_sectors, "", "");
KSYMTAB_FUNC(md_wakeup_thread, "", "");
KSYMTAB_FUNC(md_register_thread, "", "");
KSYMTAB_FUNC(md_unregister_thread, "", "");
KSYMTAB_FUNC(md_error, "", "");
KSYMTAB_FUNC(register_md_personality, "", "");
KSYMTAB_FUNC(unregister_md_personality, "", "");
KSYMTAB_FUNC(register_md_cluster_operations, "", "");
KSYMTAB_FUNC(unregister_md_cluster_operations, "", "");
KSYMTAB_FUNC(md_done_sync, "", "");
KSYMTAB_FUNC(md_write_start, "", "");
KSYMTAB_FUNC(md_write_inc, "", "");
KSYMTAB_FUNC(md_write_end, "", "");
KSYMTAB_FUNC(md_submit_discard_bio, "_gpl", "");
KSYMTAB_FUNC(md_account_bio, "_gpl", "");
KSYMTAB_FUNC(md_free_cloned_bio, "_gpl", "");
KSYMTAB_FUNC(md_allow_write, "_gpl", "");
KSYMTAB_FUNC(md_do_sync, "_gpl", "");
KSYMTAB_FUNC(md_check_recovery, "", "");
KSYMTAB_FUNC(md_reap_sync_thread, "", "");
KSYMTAB_FUNC(md_wait_for_blocked_rdev, "", "");
KSYMTAB_FUNC(md_finish_reshape, "", "");
KSYMTAB_FUNC(rdev_set_badblocks, "_gpl", "");
KSYMTAB_FUNC(rdev_clear_badblocks, "_gpl", "");
KSYMTAB_FUNC(md_reload_sb, "", "");

SYMBOL_CRC(md_cluster_ops, 0xe583b7b3, "");
SYMBOL_CRC(md_new_event, 0xe6e6b684, "_gpl");
SYMBOL_CRC(md_handle_request, 0x0fc4d295, "");
SYMBOL_CRC(mddev_suspend, 0xea543860, "_gpl");
SYMBOL_CRC(mddev_resume, 0xdd3dc474, "_gpl");
SYMBOL_CRC(md_flush_request, 0xb06c0cbb, "");
SYMBOL_CRC(mddev_init, 0x1a379608, "_gpl");
SYMBOL_CRC(mddev_destroy, 0x500e4338, "_gpl");
SYMBOL_CRC(mddev_unlock, 0x548e781d, "_gpl");
SYMBOL_CRC(md_find_rdev_nr_rcu, 0x6fc6f7c7, "_gpl");
SYMBOL_CRC(md_find_rdev_rcu, 0xad61110d, "_gpl");
SYMBOL_CRC(md_rdev_clear, 0xc3d83324, "_gpl");
SYMBOL_CRC(sync_page_io, 0x137e5a59, "_gpl");
SYMBOL_CRC(md_check_no_bitmap, 0x3635fc29, "");
SYMBOL_CRC(md_integrity_register, 0x06024032, "");
SYMBOL_CRC(md_update_sb, 0x7104a830, "");
SYMBOL_CRC(md_rdev_init, 0x86b02a0c, "_gpl");
SYMBOL_CRC(md_idle_sync_thread, 0x9bcab664, "_gpl");
SYMBOL_CRC(md_frozen_sync_thread, 0xa192fb4d, "_gpl");
SYMBOL_CRC(md_unfrozen_sync_thread, 0xa6c4af5e, "_gpl");
SYMBOL_CRC(mddev_stack_rdev_limits, 0x82e20f11, "_gpl");
SYMBOL_CRC(mddev_stack_new_rdev, 0xa4cf1f31, "_gpl");
SYMBOL_CRC(mddev_update_io_opt, 0x9f294ba7, "_gpl");
SYMBOL_CRC(md_init_stacking_limits, 0x36370808, "_gpl");
SYMBOL_CRC(md_run, 0xacd26e22, "_gpl");
SYMBOL_CRC(md_start, 0x5997daed, "_gpl");
SYMBOL_CRC(md_stop_writes, 0xd822438d, "_gpl");
SYMBOL_CRC(md_stop, 0xf06b90b2, "_gpl");
SYMBOL_CRC(md_set_array_sectors, 0x213f55fe, "");
SYMBOL_CRC(md_wakeup_thread, 0xccbcff9c, "");
SYMBOL_CRC(md_register_thread, 0x742c887b, "");
SYMBOL_CRC(md_unregister_thread, 0xb12f1fd3, "");
SYMBOL_CRC(md_error, 0xd3738176, "");
SYMBOL_CRC(register_md_personality, 0x3a9fddd9, "");
SYMBOL_CRC(unregister_md_personality, 0x27f31850, "");
SYMBOL_CRC(register_md_cluster_operations, 0x4b3e2f94, "");
SYMBOL_CRC(unregister_md_cluster_operations, 0x15bafe29, "");
SYMBOL_CRC(md_done_sync, 0xbfb5f967, "");
SYMBOL_CRC(md_write_start, 0x7c9bfab4, "");
SYMBOL_CRC(md_write_inc, 0xdf2ab6b3, "");
SYMBOL_CRC(md_write_end, 0x5ad36b64, "");
SYMBOL_CRC(md_submit_discard_bio, 0x21b2cd17, "_gpl");
SYMBOL_CRC(md_account_bio, 0x2d7f1a4c, "_gpl");
SYMBOL_CRC(md_free_cloned_bio, 0xd57230fa, "_gpl");
SYMBOL_CRC(md_allow_write, 0x236e8d08, "_gpl");
SYMBOL_CRC(md_do_sync, 0xd6b56ab8, "_gpl");
SYMBOL_CRC(md_check_recovery, 0x5c8ae482, "");
SYMBOL_CRC(md_reap_sync_thread, 0x897df79c, "");
SYMBOL_CRC(md_wait_for_blocked_rdev, 0xa4c426db, "");
SYMBOL_CRC(md_finish_reshape, 0x92c6de15, "");
SYMBOL_CRC(rdev_set_badblocks, 0x81a5e7a1, "_gpl");
SYMBOL_CRC(rdev_clear_badblocks, 0x9d9b9f2c, "_gpl");
SYMBOL_CRC(md_reload_sb, 0xbb7561c5, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xfb0d728d, "set_capacity_and_notify" },
	{ 0xcda0bbb0, "set_disk_ro" },
	{ 0xa8cafed8, "__blk_alloc_disk" },
	{ 0xe914e41e, "strcpy" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x1f3269f2, "alloc_page_buffers" },
	{ 0xc91fdf58, "percpu_ref_is_zero" },
	{ 0xfd3a2879, "__bio_add_page" },
	{ 0x60b7c3e5, "blk_start_plug" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x6106f7fb, "proc_create" },
	{ 0x599ac882, "bio_split_to_limits" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x74f48dda, "seq_release" },
	{ 0x209dc043, "device_add_disk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x81a7f541, "percpu_ref_init" },
	{ 0x87f9ac42, "badblocks_set" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf5ec1cdf, "queue_limits_stack_bdev" },
	{ 0xec712589, "fget" },
	{ 0xff6d0a86, "sysfs_unbreak_active_protection" },
	{ 0x590b336, "invalidate_mapping_pages" },
	{ 0xa0974558, "kobject_init" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa0d014c, "badblocks_exit" },
	{ 0x72aaa80f, "__traceiter_block_bio_remap" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0xf95322f4, "kthread_parkme" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x967d868a, "ack_all_badblocks" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1ed4d2eb, "percpu_ref_kill_and_confirm" },
	{ 0xfa7351a8, "kernfs_notify" },
	{ 0xe21b7205, "submit_bh" },
	{ 0x79defbe1, "kthread_should_park" },
	{ 0x1ab3afbf, "bio_end_io_acct_remapped" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xb36a1eda, "bio_clone_blkg_association" },
	{ 0x499190e5, "bioset_integrity_create" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x431a9842, "put_disk" },
	{ 0x3a24fb2f, "percpu_ref_resurrect" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x79ca2a35, "badblocks_init" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x1693c4c3, "unregister_sysctl_table" },
	{ 0x3c0cc6c1, "badblocks_show" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x1226b0f1, "sync_blockdev" },
	{ 0xb5d3e8fa, "free_buffer_head" },
	{ 0x1d421352, "blk_finish_plug" },
	{ 0xc6cbbc89, "capable" },
	{ 0x728d7feb, "submit_bio" },
	{ 0x9d9e8944, "module_put" },
	{ 0x2e571554, "bio_start_io_acct" },
	{ 0xcb647be8, "sysfs_create_link" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xc2c5802, "work_busy" },
	{ 0x12124cb1, "bioset_exit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x89df56d1, "flush_signals" },
	{ 0x37bf7be3, "percpu_ref_exit" },
	{ 0x1e087e8f, "bio_put" },
	{ 0x1bba52b3, "bio_endio" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xacceb7d8, "fput" },
	{ 0x47b2bf16, "kobject_add" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x685bb4f9, "sysfs_remove_link" },
	{ 0x7283161b, "percpu_ref_switch_to_percpu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x18332c7f, "submit_bio_noacct" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5cf4ca64, "blk_sync_queue" },
	{ 0x44de54b2, "seq_file_path" },
	{ 0xc49cba65, "kernfs_find_and_get_ns" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x3dfbc684, "seq_putc" },
	{ 0x19dba65, "bio_chain" },
	{ 0x1af267f8, "int_pow" },
	{ 0x149d7c5c, "__blk_trace_note_message" },
	{ 0x99a52f5e, "del_gendisk" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xed85cddf, "sysfs_create_group" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x91f146cb, "bdev_file_open_by_dev" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x60b66a68, "blk_set_stacking_limits" },
	{ 0x11089ac7, "_ctype" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x9146586e, "bd_unlink_disk_holder" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x941027cb, "bio_init" },
	{ 0x3bd45f5c, "register_sysctl_sz" },
	{ 0xdcb764ad, "memset" },
	{ 0x32424091, "bio_alloc_clone" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcf4fdd4d, "_atomic_dec_and_lock" },
	{ 0x52f7b522, "invalidate_bdev" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0x374b3c83, "sysfs_remove_group" },
	{ 0x661256ad, "seq_read" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc503a308, "kobject_del" },
	{ 0x1c491cb3, "vfs_fsync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x2213aa1f, "mempool_create_node_noprof" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x44b6ea84, "bioset_init" },
	{ 0x5b88ec08, "file_path" },
	{ 0xdb50b071, "kernfs_put" },
	{ 0x4aa5cc6, "sysfs_break_active_protection" },
	{ 0xb53675e6, "seq_write" },
	{ 0xd9aab56f, "__folio_put" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0xa0e24b52, "remove_proc_entry" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcd97f37a, "disk_check_media_change" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x32700730, "kobject_uevent" },
	{ 0xe00db6dc, "__tracepoint_block_bio_remap" },
	{ 0x81a87dca, "bd_link_disk_holder" },
	{ 0xa26dbdbf, "alloc_pages_noprof" },
	{ 0x73ec9e77, "queue_limits_commit_update" },
	{ 0xf943375f, "proc_dointvec" },
	{ 0xf782fb07, "percpu_ref_switch_to_atomic_sync" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xea3dad36, "file_bdev" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x8c83ed9d, "queue_limits_stack_integrity" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x3a65858e, "seq_open" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xcd81988d, "badblocks_clear" },
	{ 0xf83596fc, "bmap" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x5f16cbd3, "badblocks_store" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x639d0714, "bio_alloc_bioset" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x7410aba2, "strreplace" },
	{ 0xcf96fced, "submit_bio_wait" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x5514c69e, "__blkdev_issue_discard" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x317df83, "kobject_put" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5E3262080A9A56DD70237CE");
