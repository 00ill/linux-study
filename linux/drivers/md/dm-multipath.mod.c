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

KSYMTAB_FUNC(dm_register_path_selector, "_gpl", "");
KSYMTAB_FUNC(dm_unregister_path_selector, "_gpl", "");

SYMBOL_CRC(dm_register_path_selector, 0xee5212b9, "_gpl");
SYMBOL_CRC(dm_unregister_path_selector, 0xe00fca3a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x582ff1ed, "bio_associate_blkg" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x60b7c3e5, "blk_start_plug" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x49a2e97f, "param_ops_ulong" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xe8f86f71, "dm_table_run_md_queue_async" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x65778630, "dm_noflush_suspending" },
	{ 0x23418c7d, "dm_devt_from_path" },
	{ 0xb081c7dd, "dm_per_bio_data" },
	{ 0x929ffdc, "dm_put_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x96848186, "scnprintf" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x37a0cba, "kfree" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe02beb5c, "dm_mq_kick_requeue_list" },
	{ 0x25e078eb, "blk_mq_free_request" },
	{ 0x1d421352, "blk_finish_plug" },
	{ 0x9d9e8944, "module_put" },
	{ 0x1bba52b3, "bio_endio" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x420314e8, "dm_suspended" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x18332c7f, "submit_bio_noacct" },
	{ 0x56bcf7b, "dm_read_arg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x7d27e504, "dm_shift_arg" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xc8d61b2c, "blk_mq_alloc_request" },
	{ 0x184aa1ca, "dm_unregister_target" },
	{ 0x7c812cfa, "blk_lld_busy" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x168b1107, "dm_table_event" },
	{ 0x39c74235, "dm_read_arg_group" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2bf4d2b9, "dm_table_device_name" },
	{ 0xbf2a6b2b, "dm_register_target" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa609681d, "dm_start_time_ns_from_clone" },
	{ 0x9eb216a8, "dm_table_get_mode" },
	{ 0x9386f362, "dm_table_get_md" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x6c624142, "dm_get_device" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa5408ce4, "dm_table_set_type" },
	{ 0x53b954a2, "up_read" },
	{ 0x669c191b, "dm_consume_args" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "8D23195C48FC580ABD3C074");
