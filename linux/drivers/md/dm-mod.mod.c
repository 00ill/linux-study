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

KSYMTAB_FUNC(dm_audit_log_ti, "_gpl", "");
KSYMTAB_FUNC(dm_audit_log_bio, "_gpl", "");
KSYMTAB_FUNC(dm_per_bio_data, "_gpl", "");
KSYMTAB_FUNC(dm_bio_from_per_bio_data, "_gpl", "");
KSYMTAB_FUNC(dm_bio_get_target_bio_nr, "_gpl", "");
KSYMTAB_FUNC(dm_get_reserved_bio_based_ios, "_gpl", "");
KSYMTAB_FUNC(dm_start_time_ns_from_clone, "_gpl", "");
KSYMTAB_FUNC(dm_set_target_max_io_len, "_gpl", "");
KSYMTAB_FUNC(dm_accept_partial_bio, "_gpl", "");
KSYMTAB_FUNC(dm_submit_bio_remap, "_gpl", "");
KSYMTAB_FUNC(dm_get_md, "_gpl", "");
KSYMTAB_FUNC(dm_hold, "_gpl", "");
KSYMTAB_FUNC(dm_device_name, "_gpl", "");
KSYMTAB_FUNC(dm_put, "_gpl", "");
KSYMTAB_FUNC(dm_internal_suspend_noflush, "_gpl", "");
KSYMTAB_FUNC(dm_internal_resume, "_gpl", "");
KSYMTAB_FUNC(dm_internal_suspend_fast, "_gpl", "");
KSYMTAB_FUNC(dm_internal_resume_fast, "_gpl", "");
KSYMTAB_FUNC(dm_disk, "_gpl", "");
KSYMTAB_FUNC(dm_suspended, "_gpl", "");
KSYMTAB_FUNC(dm_post_suspending, "_gpl", "");
KSYMTAB_FUNC(dm_noflush_suspending, "_gpl", "");
KSYMTAB_FUNC(dm_devt_from_path, "", "");
KSYMTAB_FUNC(dm_get_device, "", "");
KSYMTAB_FUNC(dm_put_device, "", "");
KSYMTAB_FUNC(dm_read_arg, "", "");
KSYMTAB_FUNC(dm_read_arg_group, "", "");
KSYMTAB_FUNC(dm_shift_arg, "", "");
KSYMTAB_FUNC(dm_consume_args, "", "");
KSYMTAB_FUNC(dm_table_set_type, "_gpl", "");
KSYMTAB_FUNC(dm_table_event, "", "");
KSYMTAB_FUNC(dm_table_get_size, "", "");
KSYMTAB_FUNC(dm_table_get_mode, "", "");
KSYMTAB_FUNC(dm_table_get_md, "", "");
KSYMTAB_FUNC(dm_table_device_name, "_gpl", "");
KSYMTAB_FUNC(dm_table_run_md_queue_async, "", "");
KSYMTAB_FUNC(dm_register_target, "", "");
KSYMTAB_FUNC(dm_unregister_target, "", "");
KSYMTAB_FUNC(dm_copy_name_and_uuid, "_gpl", "");
KSYMTAB_FUNC(dm_io_client_create, "", "");
KSYMTAB_FUNC(dm_io_client_destroy, "", "");
KSYMTAB_FUNC(dm_io, "", "");
KSYMTAB_FUNC(dm_kcopyd_copy, "", "");
KSYMTAB_FUNC(dm_kcopyd_zero, "", "");
KSYMTAB_FUNC(dm_kcopyd_prepare_callback, "", "");
KSYMTAB_FUNC(dm_kcopyd_do_callback, "", "");
KSYMTAB_FUNC(dm_kcopyd_client_create, "", "");
KSYMTAB_FUNC(dm_kcopyd_client_destroy, "", "");
KSYMTAB_FUNC(dm_kcopyd_client_flush, "", "");
KSYMTAB_FUNC(dm_mq_kick_requeue_list, "", "");

SYMBOL_CRC(dm_audit_log_ti, 0xbf656775, "_gpl");
SYMBOL_CRC(dm_audit_log_bio, 0x6b914b93, "_gpl");
SYMBOL_CRC(dm_per_bio_data, 0xb081c7dd, "_gpl");
SYMBOL_CRC(dm_bio_from_per_bio_data, 0x406f2cd1, "_gpl");
SYMBOL_CRC(dm_bio_get_target_bio_nr, 0x06da617b, "_gpl");
SYMBOL_CRC(dm_get_reserved_bio_based_ios, 0x38f704de, "_gpl");
SYMBOL_CRC(dm_start_time_ns_from_clone, 0xa609681d, "_gpl");
SYMBOL_CRC(dm_set_target_max_io_len, 0xb17fa538, "_gpl");
SYMBOL_CRC(dm_accept_partial_bio, 0xb30844db, "_gpl");
SYMBOL_CRC(dm_submit_bio_remap, 0x7d8852db, "_gpl");
SYMBOL_CRC(dm_get_md, 0x86965698, "_gpl");
SYMBOL_CRC(dm_hold, 0x824049ef, "_gpl");
SYMBOL_CRC(dm_device_name, 0x0b32e201, "_gpl");
SYMBOL_CRC(dm_put, 0xa21d610f, "_gpl");
SYMBOL_CRC(dm_internal_suspend_noflush, 0x6e5cb35c, "_gpl");
SYMBOL_CRC(dm_internal_resume, 0x8b057502, "_gpl");
SYMBOL_CRC(dm_internal_suspend_fast, 0x839374df, "_gpl");
SYMBOL_CRC(dm_internal_resume_fast, 0x68e53572, "_gpl");
SYMBOL_CRC(dm_disk, 0xe7bc6725, "_gpl");
SYMBOL_CRC(dm_suspended, 0x420314e8, "_gpl");
SYMBOL_CRC(dm_post_suspending, 0xdd77a79e, "_gpl");
SYMBOL_CRC(dm_noflush_suspending, 0x65778630, "_gpl");
SYMBOL_CRC(dm_devt_from_path, 0x23418c7d, "");
SYMBOL_CRC(dm_get_device, 0x6c624142, "");
SYMBOL_CRC(dm_put_device, 0x0929ffdc, "");
SYMBOL_CRC(dm_read_arg, 0x056bcf7b, "");
SYMBOL_CRC(dm_read_arg_group, 0x39c74235, "");
SYMBOL_CRC(dm_shift_arg, 0x7d27e504, "");
SYMBOL_CRC(dm_consume_args, 0x669c191b, "");
SYMBOL_CRC(dm_table_set_type, 0xa5408ce4, "_gpl");
SYMBOL_CRC(dm_table_event, 0x168b1107, "");
SYMBOL_CRC(dm_table_get_size, 0x0fbe4d78, "");
SYMBOL_CRC(dm_table_get_mode, 0x9eb216a8, "");
SYMBOL_CRC(dm_table_get_md, 0x9386f362, "");
SYMBOL_CRC(dm_table_device_name, 0x2bf4d2b9, "_gpl");
SYMBOL_CRC(dm_table_run_md_queue_async, 0xe8f86f71, "");
SYMBOL_CRC(dm_register_target, 0xbf2a6b2b, "");
SYMBOL_CRC(dm_unregister_target, 0x184aa1ca, "");
SYMBOL_CRC(dm_copy_name_and_uuid, 0x9c070b19, "_gpl");
SYMBOL_CRC(dm_io_client_create, 0x601f665f, "");
SYMBOL_CRC(dm_io_client_destroy, 0x9e4faeef, "");
SYMBOL_CRC(dm_io, 0x34df6d52, "");
SYMBOL_CRC(dm_kcopyd_copy, 0xcdf2d7ae, "");
SYMBOL_CRC(dm_kcopyd_zero, 0x8e52d531, "");
SYMBOL_CRC(dm_kcopyd_prepare_callback, 0xf1f88a0e, "");
SYMBOL_CRC(dm_kcopyd_do_callback, 0xf2a8efae, "");
SYMBOL_CRC(dm_kcopyd_client_create, 0x9dd9df13, "");
SYMBOL_CRC(dm_kcopyd_client_destroy, 0x154c6338, "");
SYMBOL_CRC(dm_kcopyd_client_flush, 0x90006be6, "");
SYMBOL_CRC(dm_mq_kick_requeue_list, 0xe02beb5c, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x582ff1ed, "bio_associate_blkg" },
	{ 0xe1dcf64a, "audit_log_format" },
	{ 0xcda0bbb0, "set_disk_ro" },
	{ 0xa8cafed8, "__blk_alloc_disk" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x94090688, "misc_deregister" },
	{ 0x60b7c3e5, "blk_start_plug" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x20978fb9, "idr_find" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x49a2e97f, "param_ops_ulong" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x599ac882, "bio_split_to_limits" },
	{ 0xac258851, "vmalloc_to_page" },
	{ 0x209dc043, "device_add_disk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x47712ead, "bio_poll" },
	{ 0xca9360b5, "rb_next" },
	{ 0x7890cc1d, "blk_mq_queue_inflight" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xeb37101c, "audit_log_end" },
	{ 0x96848186, "scnprintf" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0xaf903827, "dm_kobject_release" },
	{ 0xcf2a6966, "up" },
	{ 0x2a211788, "blk_rq_prep_clone" },
	{ 0xbca8ddda, "blk_mq_unquiesce_queue" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x3d15ea93, "blk_mq_quiesce_queue" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0x72aaa80f, "__traceiter_block_bio_remap" },
	{ 0xac865672, "blk_mq_kick_requeue_list" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xdd1a09ea, "blk_rq_unprep_clone" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34749417, "synchronize_srcu" },
	{ 0xc1f29887, "blk_mq_end_request" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xc1051dab, "bdev_thaw" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x31671877, "node_states" },
	{ 0x32dc8020, "blk_mq_delay_kick_requeue_list" },
	{ 0x389b64a2, "static_key_count" },
	{ 0x7dd88a60, "blk_mq_alloc_tag_set" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xacf649bf, "audit_log_task_info" },
	{ 0x37704abd, "empty_zero_page" },
	{ 0xb2911984, "__traceiter_block_split" },
	{ 0x499190e5, "bioset_integrity_create" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x431a9842, "put_disk" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xeccc439c, "bio_integrity_trim" },
	{ 0x1000e51, "schedule" },
	{ 0x541c9e3b, "__fput_sync" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x6e415bc, "__tracepoint_block_split" },
	{ 0xa916b694, "strnlen" },
	{ 0x618911fc, "numa_node" },
	{ 0x6c736d6, "__free_pages" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x1d421352, "blk_finish_plug" },
	{ 0xc6cbbc89, "capable" },
	{ 0x728d7feb, "submit_bio" },
	{ 0x9d9e8944, "module_put" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x82149765, "blk_mq_init_allocated_queue" },
	{ 0x6fff261f, "__arch_clear_user" },
	{ 0x12124cb1, "bioset_exit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xfeb343d1, "mempool_alloc_noprof" },
	{ 0x9f37e570, "kobject_uevent_env" },
	{ 0x1e087e8f, "bio_put" },
	{ 0x1bba52b3, "bio_endio" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5ad9853d, "init_srcu_struct" },
	{ 0xacceb7d8, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x7a74ec7d, "blk_update_request" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xa07a37f0, "memchr" },
	{ 0xfed6b708, "__srcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2e4fe57f, "set_capacity" },
	{ 0x18332c7f, "submit_bio_noacct" },
	{ 0x295427ca, "noop_llseek" },
	{ 0x6626afca, "down" },
	{ 0x954f099c, "idr_preload" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0xdeab5fdf, "bdev_start_io_acct" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x19dba65, "bio_chain" },
	{ 0xa7081cb8, "bdev_freeze" },
	{ 0x392b1fea, "wait_for_completion_io" },
	{ 0xf2a35f94, "blk_stack_limits" },
	{ 0x2d5b0050, "kobject_init_and_add" },
	{ 0x79913357, "zero_fill_bio_iter" },
	{ 0xa825caf3, "bio_add_page" },
	{ 0x7d11f48b, "blk_mq_free_tag_set" },
	{ 0x99a52f5e, "del_gendisk" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5dfba5b2, "cleanup_srcu_struct" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x91f146cb, "bdev_file_open_by_dev" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x60b66a68, "blk_set_stacking_limits" },
	{ 0x11089ac7, "_ctype" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x9146586e, "bd_unlink_disk_holder" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x941027cb, "bio_init" },
	{ 0xdcb764ad, "memset" },
	{ 0x32424091, "bio_alloc_clone" },
	{ 0x22bc1b5c, "__kmalloc_cache_node_noprof" },
	{ 0x2002cbd1, "misc_register" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xc9508be, "blk_insert_cloned_request" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xece784c2, "rb_first" },
	{ 0x8450a53a, "__kmem_cache_create_args" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x34c7cdbc, "lookup_bdev" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x108392f6, "audit_log_start" },
	{ 0xe3799008, "nonseekable_open" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7c308330, "blk_mq_complete_request" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0xa8ab3192, "bio_uninit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x44b6ea84, "bioset_init" },
	{ 0x3e2a481a, "bio_trim" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa8600c25, "__traceiter_block_rq_remap" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc42978eb, "__srcu_read_unlock" },
	{ 0xe00db6dc, "__tracepoint_block_bio_remap" },
	{ 0xe12681a4, "__tracepoint_block_rq_remap" },
	{ 0x81a87dca, "bd_link_disk_holder" },
	{ 0xee4bc93c, "blk_mq_start_request" },
	{ 0xa26dbdbf, "alloc_pages_noprof" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xea3dad36, "file_bdev" },
	{ 0x8c83ed9d, "queue_limits_stack_integrity" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xf2d95916, "mempool_init_noprof" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x7a871b22, "blk_mark_disk_dead" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x39ca5381, "blk_mq_run_hw_queues" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x349cba85, "strchr" },
	{ 0x86f6b99d, "synchronize_rcu_expedited" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf1e4b81c, "queue_limits_set" },
	{ 0x639d0714, "bio_alloc_bioset" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x53b954a2, "up_read" },
	{ 0xa77f772, "blk_mq_requeue_request" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8578c9c, "bdev_end_io_acct" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x38e46431, "mempool_exit" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x656f612b, "kmem_cache_destroy" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x317df83, "kobject_put" },
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "676E32E4161BA291A39C0BE");
