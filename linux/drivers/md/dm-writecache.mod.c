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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbf2a6b2b, "dm_register_target" },
	{ 0x34df6d52, "dm_io" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdcb764ad, "memset" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x96848186, "scnprintf" },
	{ 0xca9360b5, "rb_next" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0x12124cb1, "bioset_exit" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x929ffdc, "dm_put_device" },
	{ 0x999e8297, "vfree" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x3e4f8768, "vmalloc_array_noprof" },
	{ 0x184aa1ca, "dm_unregister_target" },
	{ 0x420314e8, "dm_suspended" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0xfeb343d1, "mempool_alloc_noprof" },
	{ 0xcdf2d7ae, "dm_kcopyd_copy" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa6257a2f, "complete" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xdf521442, "_find_next_zero_bit" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x392b1fea, "wait_for_completion_io" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0x7d27e504, "dm_shift_arg" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0xf2d95916, "mempool_init_noprof" },
	{ 0x9eb216a8, "dm_table_get_mode" },
	{ 0x6c624142, "dm_get_device" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x39c74235, "dm_read_arg_group" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x9dd9df13, "dm_kcopyd_client_create" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0x582ff1ed, "bio_associate_blkg" },
	{ 0xb30844db, "dm_accept_partial_bio" },
	{ 0x6da617b, "dm_bio_get_target_bio_nr" },
	{ 0x1bba52b3, "bio_endio" },
	{ 0x18332c7f, "submit_bio_noacct" },
	{ 0x90006be6, "dm_kcopyd_client_flush" },
	{ 0x7807f0f8, "schedule_timeout_idle" },
	{ 0x60b7c3e5, "blk_start_plug" },
	{ 0x1d421352, "blk_finish_plug" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "DD8A22B12655DB002F83DA0");
