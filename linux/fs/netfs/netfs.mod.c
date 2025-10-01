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

KSYMTAB_FUNC(netfs_readahead, "", "");
KSYMTAB_FUNC(netfs_read_folio, "", "");
KSYMTAB_FUNC(netfs_write_begin, "", "");
KSYMTAB_FUNC(netfs_buffered_read_iter, "", "");
KSYMTAB_FUNC(netfs_file_read_iter, "", "");
KSYMTAB_FUNC(netfs_perform_write, "", "");
KSYMTAB_FUNC(netfs_buffered_write_iter_locked, "", "");
KSYMTAB_FUNC(netfs_file_write_iter, "", "");
KSYMTAB_FUNC(netfs_page_mkwrite, "", "");
KSYMTAB_FUNC(netfs_unbuffered_read_iter_locked, "", "");
KSYMTAB_FUNC(netfs_unbuffered_read_iter, "", "");
KSYMTAB_FUNC(netfs_unbuffered_write_iter_locked, "", "");
KSYMTAB_FUNC(netfs_unbuffered_write_iter, "", "");
KSYMTAB_FUNC(netfs_extract_user_iter, "_gpl", "");
KSYMTAB_FUNC(netfs_limit_iter, "", "");
KSYMTAB_FUNC(netfs_start_io_read, "", "");
KSYMTAB_FUNC(netfs_end_io_read, "", "");
KSYMTAB_FUNC(netfs_start_io_write, "", "");
KSYMTAB_FUNC(netfs_end_io_write, "", "");
KSYMTAB_FUNC(netfs_start_io_direct, "", "");
KSYMTAB_FUNC(netfs_end_io_direct, "", "");
KSYMTAB_DATA(__tracepoint_netfs_sreq, "", "");
KSYMTAB_FUNC(__traceiter_netfs_sreq, "", "");
KSYMTAB_DATA(__SCK__tp_func_netfs_sreq, "", "");
KSYMTAB_FUNC(netfs_dirty_folio, "", "");
KSYMTAB_FUNC(netfs_unpin_writeback, "", "");
KSYMTAB_FUNC(netfs_clear_inode_writeback, "", "");
KSYMTAB_FUNC(netfs_invalidate_folio, "", "");
KSYMTAB_FUNC(netfs_release_folio, "", "");
KSYMTAB_FUNC(netfs_read_subreq_progress, "", "");
KSYMTAB_FUNC(netfs_read_subreq_terminated, "", "");
KSYMTAB_FUNC(netfs_write_subrequest_terminated, "", "");
KSYMTAB_FUNC(netfs_prepare_write_failed, "", "");
KSYMTAB_FUNC(netfs_writepages, "", "");
KSYMTAB_FUNC(netfs_stats_show, "", "");
KSYMTAB_DATA(fscache_addremove_sem, "", "");
KSYMTAB_DATA(fscache_clearance_waiters, "", "");
KSYMTAB_FUNC(fscache_acquire_cache, "", "");
KSYMTAB_FUNC(fscache_relinquish_cache, "", "");
KSYMTAB_FUNC(fscache_add_cache, "", "");
KSYMTAB_FUNC(fscache_io_error, "", "");
KSYMTAB_FUNC(fscache_withdraw_cache, "", "");
KSYMTAB_FUNC(fscache_end_cookie_access, "", "");
KSYMTAB_FUNC(fscache_cookie_lookup_negative, "", "");
KSYMTAB_FUNC(fscache_resume_after_invalidation, "", "");
KSYMTAB_FUNC(fscache_caching_failed, "", "");
KSYMTAB_FUNC(__fscache_acquire_cookie, "", "");
KSYMTAB_FUNC(__fscache_use_cookie, "", "");
KSYMTAB_FUNC(__fscache_unuse_cookie, "", "");
KSYMTAB_FUNC(fscache_withdraw_cookie, "", "");
KSYMTAB_FUNC(__fscache_relinquish_cookie, "", "");
KSYMTAB_FUNC(fscache_put_cookie, "", "");
KSYMTAB_FUNC(fscache_get_cookie, "", "");
KSYMTAB_FUNC(__fscache_invalidate, "", "");
KSYMTAB_FUNC(fscache_wait_for_operation, "", "");
KSYMTAB_FUNC(__fscache_begin_read_operation, "", "");
KSYMTAB_FUNC(__fscache_begin_write_operation, "", "");
KSYMTAB_FUNC(__fscache_clear_page_bits, "", "");
KSYMTAB_FUNC(__fscache_write_to_cache, "", "");
KSYMTAB_FUNC(__fscache_resize_cookie, "", "");
KSYMTAB_DATA(__tracepoint_fscache_access_cache, "", "");
KSYMTAB_FUNC(__traceiter_fscache_access_cache, "", "");
KSYMTAB_DATA(__SCK__tp_func_fscache_access_cache, "", "");
KSYMTAB_DATA(__tracepoint_fscache_access_volume, "", "");
KSYMTAB_FUNC(__traceiter_fscache_access_volume, "", "");
KSYMTAB_DATA(__SCK__tp_func_fscache_access_volume, "", "");
KSYMTAB_DATA(__tracepoint_fscache_access, "", "");
KSYMTAB_FUNC(__traceiter_fscache_access, "", "");
KSYMTAB_DATA(__SCK__tp_func_fscache_access, "", "");
KSYMTAB_DATA(fscache_wq, "", "");
KSYMTAB_FUNC(fscache_try_get_volume, "", "");
KSYMTAB_FUNC(fscache_end_volume_access, "", "");
KSYMTAB_FUNC(__fscache_acquire_volume, "", "");
KSYMTAB_FUNC(fscache_put_volume, "", "");
KSYMTAB_FUNC(__fscache_relinquish_volume, "", "");
KSYMTAB_FUNC(fscache_withdraw_volume, "", "");
KSYMTAB_DATA(fscache_n_updates, "", "");
KSYMTAB_DATA(fscache_n_read, "", "");
KSYMTAB_DATA(fscache_n_write, "", "");
KSYMTAB_DATA(fscache_n_no_write_space, "", "");
KSYMTAB_DATA(fscache_n_no_create_space, "", "");
KSYMTAB_DATA(fscache_n_culled, "", "");
KSYMTAB_DATA(fscache_n_dio_misfit, "", "");

SYMBOL_CRC(netfs_readahead, 0x60248861, "");
SYMBOL_CRC(netfs_read_folio, 0x44bb4414, "");
SYMBOL_CRC(netfs_write_begin, 0x82c135f8, "");
SYMBOL_CRC(netfs_buffered_read_iter, 0x270f032f, "");
SYMBOL_CRC(netfs_file_read_iter, 0xd0770b77, "");
SYMBOL_CRC(netfs_perform_write, 0x605f203f, "");
SYMBOL_CRC(netfs_buffered_write_iter_locked, 0xefb7f749, "");
SYMBOL_CRC(netfs_file_write_iter, 0x63589460, "");
SYMBOL_CRC(netfs_page_mkwrite, 0x806841d4, "");
SYMBOL_CRC(netfs_unbuffered_read_iter_locked, 0xd8c614fb, "");
SYMBOL_CRC(netfs_unbuffered_read_iter, 0xed0b692b, "");
SYMBOL_CRC(netfs_unbuffered_write_iter_locked, 0x20dd7907, "");
SYMBOL_CRC(netfs_unbuffered_write_iter, 0x01b8f5dd, "");
SYMBOL_CRC(netfs_extract_user_iter, 0x54c90d2b, "_gpl");
SYMBOL_CRC(netfs_limit_iter, 0xb1ac0d73, "");
SYMBOL_CRC(netfs_start_io_read, 0x9224be41, "");
SYMBOL_CRC(netfs_end_io_read, 0x200fb13c, "");
SYMBOL_CRC(netfs_start_io_write, 0x04960e7b, "");
SYMBOL_CRC(netfs_end_io_write, 0x2a9028f5, "");
SYMBOL_CRC(netfs_start_io_direct, 0xc912b3d4, "");
SYMBOL_CRC(netfs_end_io_direct, 0xc33c1bd5, "");
SYMBOL_CRC(__tracepoint_netfs_sreq, 0xd244949f, "");
SYMBOL_CRC(__traceiter_netfs_sreq, 0x41f24363, "");
SYMBOL_CRC(__SCK__tp_func_netfs_sreq, 0x895d0b7f, "");
SYMBOL_CRC(netfs_dirty_folio, 0xb1370dae, "");
SYMBOL_CRC(netfs_unpin_writeback, 0x8a8be20e, "");
SYMBOL_CRC(netfs_clear_inode_writeback, 0x4bd9ae0e, "");
SYMBOL_CRC(netfs_invalidate_folio, 0xcc3aec95, "");
SYMBOL_CRC(netfs_release_folio, 0xad5bdd42, "");
SYMBOL_CRC(netfs_read_subreq_progress, 0xab5ca248, "");
SYMBOL_CRC(netfs_read_subreq_terminated, 0x9e74d3e0, "");
SYMBOL_CRC(netfs_write_subrequest_terminated, 0x90f5f875, "");
SYMBOL_CRC(netfs_prepare_write_failed, 0xc1276975, "");
SYMBOL_CRC(netfs_writepages, 0x89abef00, "");
SYMBOL_CRC(netfs_stats_show, 0xb411bf2e, "");
SYMBOL_CRC(fscache_addremove_sem, 0x557a775f, "");
SYMBOL_CRC(fscache_clearance_waiters, 0x8c2d6da7, "");
SYMBOL_CRC(fscache_acquire_cache, 0x58ae4463, "");
SYMBOL_CRC(fscache_relinquish_cache, 0x91bf9065, "");
SYMBOL_CRC(fscache_add_cache, 0xc675ed3f, "");
SYMBOL_CRC(fscache_io_error, 0x13b460cd, "");
SYMBOL_CRC(fscache_withdraw_cache, 0xb957e2ad, "");
SYMBOL_CRC(fscache_end_cookie_access, 0x4d00d2e8, "");
SYMBOL_CRC(fscache_cookie_lookup_negative, 0xe752d38b, "");
SYMBOL_CRC(fscache_resume_after_invalidation, 0x6c5b162a, "");
SYMBOL_CRC(fscache_caching_failed, 0x5c43baac, "");
SYMBOL_CRC(__fscache_acquire_cookie, 0x80cd730e, "");
SYMBOL_CRC(__fscache_use_cookie, 0xa1fe0f64, "");
SYMBOL_CRC(__fscache_unuse_cookie, 0xa9c36c8c, "");
SYMBOL_CRC(fscache_withdraw_cookie, 0xdb56504b, "");
SYMBOL_CRC(__fscache_relinquish_cookie, 0x5ecaa330, "");
SYMBOL_CRC(fscache_put_cookie, 0x91e22343, "");
SYMBOL_CRC(fscache_get_cookie, 0x9cea6fed, "");
SYMBOL_CRC(__fscache_invalidate, 0x7a4120ee, "");
SYMBOL_CRC(fscache_wait_for_operation, 0x696f2279, "");
SYMBOL_CRC(__fscache_begin_read_operation, 0xc2bd9ead, "");
SYMBOL_CRC(__fscache_begin_write_operation, 0xcd957f0f, "");
SYMBOL_CRC(__fscache_clear_page_bits, 0x14d0ae68, "");
SYMBOL_CRC(__fscache_write_to_cache, 0x74a92fe7, "");
SYMBOL_CRC(__fscache_resize_cookie, 0xe33d5ec9, "");
SYMBOL_CRC(__tracepoint_fscache_access_cache, 0x2b389369, "");
SYMBOL_CRC(__traceiter_fscache_access_cache, 0xae6040a5, "");
SYMBOL_CRC(__SCK__tp_func_fscache_access_cache, 0x4bd084ba, "");
SYMBOL_CRC(__tracepoint_fscache_access_volume, 0x71fb0e58, "");
SYMBOL_CRC(__traceiter_fscache_access_volume, 0x234a140d, "");
SYMBOL_CRC(__SCK__tp_func_fscache_access_volume, 0x6e416521, "");
SYMBOL_CRC(__tracepoint_fscache_access, 0x77e19a42, "");
SYMBOL_CRC(__traceiter_fscache_access, 0xdcb87498, "");
SYMBOL_CRC(__SCK__tp_func_fscache_access, 0x306805d3, "");
SYMBOL_CRC(fscache_wq, 0xbca46908, "");
SYMBOL_CRC(fscache_try_get_volume, 0x131f35bd, "");
SYMBOL_CRC(fscache_end_volume_access, 0x52ea3865, "");
SYMBOL_CRC(__fscache_acquire_volume, 0x8e058f2d, "");
SYMBOL_CRC(fscache_put_volume, 0x16bca7b4, "");
SYMBOL_CRC(__fscache_relinquish_volume, 0xe9ed86de, "");
SYMBOL_CRC(fscache_withdraw_volume, 0x760a36da, "");
SYMBOL_CRC(fscache_n_updates, 0x4996bd29, "");
SYMBOL_CRC(fscache_n_read, 0x9ffefcb2, "");
SYMBOL_CRC(fscache_n_write, 0x1a0d09e7, "");
SYMBOL_CRC(fscache_n_no_write_space, 0xcce11a60, "");
SYMBOL_CRC(fscache_n_no_create_space, 0x4404d2aa, "");
SYMBOL_CRC(fscache_n_culled, 0x90d447f3, "");
SYMBOL_CRC(fscache_n_dio_misfit, 0x2acb5e19, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8de950ec, "vfs_fsync_range" },
	{ 0x39819c60, "flush_dcache_page" },
	{ 0xfb277f76, "wbc_detach_inode" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x438717fb, "bpf_trace_run4" },
	{ 0x92c7436e, "kiocb_write_and_wait" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0xc9381a02, "filemap_range_has_page" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xa515bee9, "__folio_batch_release" },
	{ 0xa0006fa1, "folio_unlock" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x180cd0ba, "trace_raw_output_prep" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0xa50bb103, "__trace_trigger_soft_disabled" },
	{ 0x704c6109, "filemap_fdatawrite_range" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x5b3a7c03, "iov_iter_advance" },
	{ 0xfbfd5863, "trace_event_printf" },
	{ 0x23967b1, "xas_find" },
	{ 0x32eeeb72, "folio_redirty_for_writepage" },
	{ 0xb0bc6c0, "iov_iter_folio_queue" },
	{ 0xe1bafd45, "trace_event_raw_init" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd4140122, "unmap_mapping_range" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d0e2a6d, "invalidate_inode_pages2_range" },
	{ 0xf2920172, "wbc_attach_and_unlock_inode" },
	{ 0x9a38130e, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x1b94c15e, "remove_proc_subtree" },
	{ 0x57cd7a67, "flush_dcache_folio" },
	{ 0x7bc44e70, "folio_clear_dirty_for_io" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xea427052, "trace_event_buffer_commit" },
	{ 0x9feed7ce, "timer_reduce" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x931ffb97, "__filemap_set_wb_err" },
	{ 0xed09f283, "__filemap_get_folio" },
	{ 0xa1696677, "filemap_invalidate_inode" },
	{ 0xd2a98f1, "folio_mark_dirty" },
	{ 0x5d49aabc, "init_wait_var_entry" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x5e332b52, "__var_waitqueue" },
	{ 0x898d3fc4, "iov_iter_extract_pages" },
	{ 0x251379d7, "copy_page_from_iter_atomic" },
	{ 0xca3dd52c, "__folio_swap_cache_index" },
	{ 0xa7b65a58, "folio_wait_private_2" },
	{ 0x7f4f826, "kmem_cache_size" },
	{ 0xfeb343d1, "mempool_alloc_noprof" },
	{ 0x650879ee, "readahead_expand" },
	{ 0x10732e2a, "__inode_attach_wb" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x676bd84e, "__folio_lock_killable" },
	{ 0x91ac9254, "perf_trace_run_bpf_submit" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x45eaee3f, "bpf_trace_run5" },
	{ 0x44bb5a10, "inode_dio_finished" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0xe780ec2d, "file_update_time" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4a3c8253, "kmem_cache_free" },
	{ 0x3dfbc684, "seq_putc" },
	{ 0xfe479535, "trace_event_reg" },
	{ 0x5d243d6f, "file_remove_privs" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0x54993cd1, "__folio_start_writeback" },
	{ 0x564c900c, "bpf_trace_run1" },
	{ 0x31bf97ef, "folio_end_writeback" },
	{ 0x352907be, "folio_alloc_noprof" },
	{ 0xb61d6fc2, "down_read_interruptible" },
	{ 0xb105c628, "proc_mkdir" },
	{ 0xd8a8ae1f, "inode_dio_wait_interruptible" },
	{ 0xdcb764ad, "memset" },
	{ 0xefbf72d, "iov_iter_bvec" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0xbf30d9ff, "unpin_user_page" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x6f61551b, "kmem_cache_alloc_noprof" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x31771b37, "folio_end_private_2" },
	{ 0x8450a53a, "__kmem_cache_create_args" },
	{ 0xffbd5a2d, "writeback_iter" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4b52a423, "set_page_dirty" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xf2da001e, "bpf_trace_run3" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0x2f828d33, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x364850b1, "down_write_killable" },
	{ 0xc122bb20, "filemap_fdatawait_range" },
	{ 0xb53675e6, "seq_write" },
	{ 0xd9aab56f, "__folio_put" },
	{ 0xa0e24b52, "remove_proc_entry" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xcca1a0b9, "iov_iter_zero" },
	{ 0xd545043, "touch_atime" },
	{ 0xfe5b2a1c, "filemap_read" },
	{ 0xea16c9ca, "__percpu_down_read" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xce7a4de0, "balance_dirty_pages_ratelimited_flags" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x18888d00, "downgrade_write" },
	{ 0x6f4a54f6, "filemap_dirty_folio" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0x637f8cbf, "rcuwait_wake_up" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x2ec6bba0, "errseq_set" },
	{ 0xe5198775, "iov_iter_xarray" },
	{ 0xf8a9c57e, "proc_create_single_data" },
	{ 0x323ba371, "filemap_write_and_wait_range" },
	{ 0x59827d9e, "folio_wait_writeback_killable" },
	{ 0xf2d95916, "mempool_init_noprof" },
	{ 0x98cf60b3, "strlen" },
	{ 0x39e869f1, "proc_symlink" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xe2a0d848, "generic_write_checks" },
	{ 0xf85b4e63, "iov_iter_revert" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x9b06f762, "proc_create_seq_private" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xa2e9e722, "folio_wait_private_2_killable" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x53b954a2, "up_read" },
	{ 0xaf1d87f3, "iov_iter_npages" },
	{ 0x4aad37fb, "fault_in_iov_iter_readable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x656f612b, "kmem_cache_destroy" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AB0AEE854717805EF20D0FB");
