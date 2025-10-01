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

KSYMTAB_DATA(__tracepoint_bcache_request_start, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_request_start, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_request_start, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_request_end, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_request_end, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_request_end, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_bypass_sequential, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_bypass_sequential, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_bypass_sequential, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_bypass_congested, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_bypass_congested, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_bypass_congested, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_read, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_read, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_read, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_write, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_write, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_write, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_read_retry, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_read_retry, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_read_retry, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_cache_insert, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_cache_insert, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_cache_insert, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_journal_replay_key, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_journal_replay_key, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_journal_replay_key, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_journal_write, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_journal_write, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_journal_write, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_journal_full, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_journal_full, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_journal_full, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_journal_entry_full, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_journal_entry_full, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_journal_entry_full, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_btree_cache_cannibalize, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_btree_cache_cannibalize, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_btree_cache_cannibalize, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_btree_read, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_btree_read, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_btree_read, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_btree_write, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_btree_write, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_btree_write, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_btree_node_alloc, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_btree_node_alloc, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_btree_node_alloc, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_btree_node_alloc_fail, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_btree_node_alloc_fail, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_btree_node_alloc_fail, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_btree_node_free, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_btree_node_free, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_btree_node_free, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_btree_gc_coalesce, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_btree_gc_coalesce, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_btree_gc_coalesce, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_gc_start, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_gc_start, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_gc_start, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_gc_end, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_gc_end, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_gc_end, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_gc_copy, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_gc_copy, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_gc_copy, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_gc_copy_collision, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_gc_copy_collision, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_gc_copy_collision, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_btree_insert_key, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_btree_insert_key, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_btree_insert_key, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_btree_node_split, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_btree_node_split, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_btree_node_split, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_btree_node_compact, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_btree_node_compact, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_btree_node_compact, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_btree_set_root, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_btree_set_root, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_btree_set_root, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_invalidate, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_invalidate, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_invalidate, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_alloc_fail, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_alloc_fail, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_alloc_fail, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_writeback, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_writeback, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_writeback, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_writeback_collision, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_writeback_collision, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_writeback_collision, "_gpl", "");

SYMBOL_CRC(__tracepoint_bcache_request_start, 0xea3a1ab2, "_gpl");
SYMBOL_CRC(__traceiter_bcache_request_start, 0xf820961c, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_request_start, 0x8ad20d61, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_request_end, 0x71a90620, "_gpl");
SYMBOL_CRC(__traceiter_bcache_request_end, 0x9945d3b8, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_request_end, 0x80e3881d, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_bypass_sequential, 0xfd5d057b, "_gpl");
SYMBOL_CRC(__traceiter_bcache_bypass_sequential, 0x834b251f, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_bypass_sequential, 0x0bc0be45, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_bypass_congested, 0x44bb87a3, "_gpl");
SYMBOL_CRC(__traceiter_bcache_bypass_congested, 0xabe49523, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_bypass_congested, 0x6026e276, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_read, 0x3a3eb678, "_gpl");
SYMBOL_CRC(__traceiter_bcache_read, 0x5c92401b, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_read, 0x9a6f4d9f, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_write, 0x6119e203, "_gpl");
SYMBOL_CRC(__traceiter_bcache_write, 0xd305d5a8, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_write, 0x5fd7c423, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_read_retry, 0x8b9fa1d8, "_gpl");
SYMBOL_CRC(__traceiter_bcache_read_retry, 0x8c20127a, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_read_retry, 0x15f3de09, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_cache_insert, 0x05058957, "_gpl");
SYMBOL_CRC(__traceiter_bcache_cache_insert, 0xb5a62a8c, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_cache_insert, 0x5d9c8fc8, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_journal_replay_key, 0x37b31e4f, "_gpl");
SYMBOL_CRC(__traceiter_bcache_journal_replay_key, 0x2766fb04, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_journal_replay_key, 0xf6249e5f, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_journal_write, 0xfc0a0b57, "_gpl");
SYMBOL_CRC(__traceiter_bcache_journal_write, 0x07168af0, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_journal_write, 0x9ce21c84, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_journal_full, 0xfed8327b, "_gpl");
SYMBOL_CRC(__traceiter_bcache_journal_full, 0x3b1b521a, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_journal_full, 0xa64134e4, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_journal_entry_full, 0xdd1455a7, "_gpl");
SYMBOL_CRC(__traceiter_bcache_journal_entry_full, 0x4b299a07, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_journal_entry_full, 0x1c83d5b7, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_btree_cache_cannibalize, 0x4b96c8a0, "_gpl");
SYMBOL_CRC(__traceiter_bcache_btree_cache_cannibalize, 0x478ba944, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_btree_cache_cannibalize, 0xec92a163, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_btree_read, 0xd8aa1746, "_gpl");
SYMBOL_CRC(__traceiter_bcache_btree_read, 0xe7699cd9, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_btree_read, 0x46c66897, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_btree_write, 0xa09a6b09, "_gpl");
SYMBOL_CRC(__traceiter_bcache_btree_write, 0x76f181ec, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_btree_write, 0x51d0e534, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_btree_node_alloc, 0xec3327c6, "_gpl");
SYMBOL_CRC(__traceiter_bcache_btree_node_alloc, 0xdc9907b3, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_btree_node_alloc, 0xc8ae4213, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_btree_node_alloc_fail, 0x93c8c39b, "_gpl");
SYMBOL_CRC(__traceiter_bcache_btree_node_alloc_fail, 0xf9f72de8, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_btree_node_alloc_fail, 0xda06fe86, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_btree_node_free, 0x47b2af54, "_gpl");
SYMBOL_CRC(__traceiter_bcache_btree_node_free, 0x4843c03f, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_btree_node_free, 0x6e74dca7, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_btree_gc_coalesce, 0xf021519f, "_gpl");
SYMBOL_CRC(__traceiter_bcache_btree_gc_coalesce, 0x1c599ebe, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_btree_gc_coalesce, 0x06bceaa1, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_gc_start, 0x66232cfe, "_gpl");
SYMBOL_CRC(__traceiter_bcache_gc_start, 0xf3d9c404, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_gc_start, 0xe16c06b3, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_gc_end, 0x81d4d2d1, "_gpl");
SYMBOL_CRC(__traceiter_bcache_gc_end, 0x1a932015, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_gc_end, 0xba843c3f, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_gc_copy, 0x5f9386a1, "_gpl");
SYMBOL_CRC(__traceiter_bcache_gc_copy, 0xad6440b4, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_gc_copy, 0x181a1930, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_gc_copy_collision, 0x8f7308be, "_gpl");
SYMBOL_CRC(__traceiter_bcache_gc_copy_collision, 0xec29e22a, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_gc_copy_collision, 0x79eeb380, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_btree_insert_key, 0xd9f63855, "_gpl");
SYMBOL_CRC(__traceiter_bcache_btree_insert_key, 0x58774c17, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_btree_insert_key, 0xfd6b5d80, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_btree_node_split, 0x063306f1, "_gpl");
SYMBOL_CRC(__traceiter_bcache_btree_node_split, 0xe224f343, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_btree_node_split, 0x22ae6324, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_btree_node_compact, 0x8bba9251, "_gpl");
SYMBOL_CRC(__traceiter_bcache_btree_node_compact, 0xc7c99300, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_btree_node_compact, 0x4a2d1241, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_btree_set_root, 0x04b25810, "_gpl");
SYMBOL_CRC(__traceiter_bcache_btree_set_root, 0xb84f517a, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_btree_set_root, 0x1b083369, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_invalidate, 0x362eda19, "_gpl");
SYMBOL_CRC(__traceiter_bcache_invalidate, 0x226e019a, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_invalidate, 0xa842a5c8, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_alloc_fail, 0x3feb7def, "_gpl");
SYMBOL_CRC(__traceiter_bcache_alloc_fail, 0xf44b8b62, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_alloc_fail, 0xa187023e, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_writeback, 0x6e7df078, "_gpl");
SYMBOL_CRC(__traceiter_bcache_writeback, 0x17a83e40, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_writeback, 0x6697827f, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_writeback_collision, 0x37808fd7, "_gpl");
SYMBOL_CRC(__traceiter_bcache_writeback_collision, 0x64e39418, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_writeback_collision, 0x2af60833, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x582ff1ed, "bio_associate_blkg" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0xcda0bbb0, "set_disk_ro" },
	{ 0xa8cafed8, "__blk_alloc_disk" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xd39ab6a7, "bdev_file_open_by_path" },
	{ 0x962e74ce, "shrinker_alloc" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xfd3a2879, "__bio_add_page" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x438717fb, "bpf_trace_run4" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0xdf2c2742, "rb_last" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd7e56a4e, "simple_strtoll" },
	{ 0x150af4fe, "bio_copy_data" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x77bc13a0, "strim" },
	{ 0xac258851, "vmalloc_to_page" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x209dc043, "device_add_disk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x180cd0ba, "trace_raw_output_prep" },
	{ 0x3d781724, "bio_init_clone" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xca9360b5, "rb_next" },
	{ 0x2bd8a8bb, "blk_fill_rwbs" },
	{ 0xa50bb103, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xfbfd5863, "trace_event_printf" },
	{ 0x96848186, "scnprintf" },
	{ 0xcf2a6966, "up" },
	{ 0x9016047c, "closure_wait" },
	{ 0xa0974558, "kobject_init" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xe1bafd45, "trace_event_raw_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x9a38130e, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xeaf3cb23, "crc64_be" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xd8940511, "__module_get" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0x30e8e3ee, "__closure_sync" },
	{ 0x1ab3afbf, "bio_end_io_acct_remapped" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x20bdd485, "shrinker_free" },
	{ 0xea427052, "trace_event_buffer_commit" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xb36a1eda, "bio_clone_blkg_association" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x122c3a7e, "_printk" },
	{ 0x431a9842, "put_disk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x42e52326, "fs_kobj" },
	{ 0x36e33c9f, "shrinker_register" },
	{ 0x6c736d6, "__free_pages" },
	{ 0x728d7feb, "submit_bio" },
	{ 0x9d9e8944, "module_put" },
	{ 0x2e571554, "bio_start_io_acct" },
	{ 0xcb647be8, "sysfs_create_link" },
	{ 0x12124cb1, "bioset_exit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xfeb343d1, "mempool_alloc_noprof" },
	{ 0x9f37e570, "kobject_uevent_env" },
	{ 0x1e087e8f, "bio_put" },
	{ 0x1bba52b3, "bio_endio" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x91ac9254, "perf_trace_run_bpf_submit" },
	{ 0xc0a40c1a, "__bio_advance" },
	{ 0xacceb7d8, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0x47b2bf16, "kobject_add" },
	{ 0xce807a25, "up_write" },
	{ 0xb7c0f443, "sort" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x685bb4f9, "sysfs_remove_link" },
	{ 0x24d273d1, "add_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0x2e4fe57f, "set_capacity" },
	{ 0x18332c7f, "submit_bio_noacct" },
	{ 0xd9a162ba, "closure_put" },
	{ 0x6626afca, "down" },
	{ 0x45eaee3f, "bpf_trace_run5" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0xd985dc99, "mempool_free_pages" },
	{ 0xfe479535, "trace_event_reg" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xffb7c514, "ida_free" },
	{ 0xf1e046cc, "panic" },
	{ 0x79913357, "zero_fill_bio_iter" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x99a52f5e, "del_gendisk" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x91f146cb, "bdev_file_open_by_dev" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0xf23a5c75, "read_cache_page_gfp" },
	{ 0x11089ac7, "_ctype" },
	{ 0x564c900c, "bpf_trace_run1" },
	{ 0xe3c17af1, "__closure_wake_up" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x9146586e, "bd_unlink_disk_holder" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x941027cb, "bio_init" },
	{ 0xdcb764ad, "memset" },
	{ 0x32424091, "bio_alloc_clone" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xa384a8c, "closure_sub" },
	{ 0xdcc48e97, "bio_reset" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xece784c2, "rb_first" },
	{ 0x8450a53a, "__kmem_cache_create_args" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0xad811a0a, "kobject_create_and_add" },
	{ 0x668b19a1, "down_read" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x34c7cdbc, "lookup_bdev" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2c58299, "bio_free_pages" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0xf2da001e, "bpf_trace_run3" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x999e8297, "vfree" },
	{ 0xdf521442, "_find_next_zero_bit" },
	{ 0xc503a308, "kobject_del" },
	{ 0x2f828d33, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x44b6ea84, "bioset_init" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd9aab56f, "__folio_put" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x5217fb74, "sysfs_create_files" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x81a87dca, "bd_link_disk_holder" },
	{ 0x18888d00, "downgrade_write" },
	{ 0xa26dbdbf, "alloc_pages_noprof" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xea3dad36, "file_bdev" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xf2d95916, "mempool_init_noprof" },
	{ 0xc29bf967, "strspn" },
	{ 0x98cf60b3, "strlen" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x639d0714, "bio_alloc_bioset" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x53b954a2, "up_read" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0x3a10d37a, "kobject_get" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x847188e8, "krealloc_noprof" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x656f612b, "kmem_cache_destroy" },
	{ 0x452cdfb8, "bio_split" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x766a0927, "mempool_alloc_pages" },
	{ 0x3ce38cea, "blkdev_issue_discard" },
	{ 0x317df83, "kobject_put" },
	{ 0x61b7b126, "simple_strtoull" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AD7BA17F1100873E4F8072A");
