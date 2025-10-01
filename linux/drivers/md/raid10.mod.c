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
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x3a9fddd9, "register_md_personality" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe2964344, "__wake_up" },
	{ 0x1e087e8f, "bio_put" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xccbcff9c, "md_wakeup_thread" },
	{ 0x37a0cba, "kfree" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x56470118, "__warn_printk" },
	{ 0xfeb343d1, "mempool_alloc_noprof" },
	{ 0xdcc48e97, "bio_reset" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xdcb764ad, "memset" },
	{ 0x36370808, "md_init_stacking_limits" },
	{ 0x82e20f11, "mddev_stack_rdev_limits" },
	{ 0xf1e4b81c, "queue_limits_set" },
	{ 0x27f31850, "unregister_md_personality" },
	{ 0xe583b7b3, "md_cluster_ops" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x149d7c5c, "__blk_trace_note_message" },
	{ 0xa4cf1f31, "mddev_stack_new_rdev" },
	{ 0xfa7351a8, "kernfs_notify" },
	{ 0xa8ab3192, "bio_uninit" },
	{ 0xd9aab56f, "__folio_put" },
	{ 0x6024032, "md_integrity_register" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x12124cb1, "bioset_exit" },
	{ 0xeeb049f7, "badblocks_check" },
	{ 0x1bba52b3, "bio_endio" },
	{ 0x5ad36b64, "md_write_end" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x32424091, "bio_alloc_clone" },
	{ 0xe00db6dc, "__tracepoint_block_bio_remap" },
	{ 0x18332c7f, "submit_bio_noacct" },
	{ 0x2d7f1a4c, "md_account_bio" },
	{ 0x452cdfb8, "bio_split" },
	{ 0x19dba65, "bio_chain" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x72aaa80f, "__traceiter_block_bio_remap" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x137e5a59, "sync_page_io" },
	{ 0x81a5e7a1, "rdev_set_badblocks" },
	{ 0xd3738176, "md_error" },
	{ 0x60b7c3e5, "blk_start_plug" },
	{ 0x582ff1ed, "bio_associate_blkg" },
	{ 0x1d421352, "blk_finish_plug" },
	{ 0xa4c426db, "md_wait_for_blocked_rdev" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xa26dbdbf, "alloc_pages_noprof" },
	{ 0xf2d95916, "mempool_init_noprof" },
	{ 0x44b6ea84, "bioset_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x742c887b, "md_register_thread" },
	{ 0xbfb5f967, "md_done_sync" },
	{ 0x213f55fe, "md_set_array_sectors" },
	{ 0x941027cb, "bio_init" },
	{ 0xe25b3817, "bio_kmalloc" },
	{ 0xd27b25dd, "blk_check_plugged" },
	{ 0x7c9bfab4, "md_write_start" },
	{ 0x21b2cd17, "md_submit_discard_bio" },
	{ 0xb06c0cbb, "md_flush_request" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xb12f1fd3, "md_unregister_thread" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcb647be8, "sysfs_create_link" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe6e6b684, "md_new_event" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x5c8ae482, "md_check_recovery" },
	{ 0x9d9b9f2c, "rdev_clear_badblocks" },
	{ 0x3e2a481a, "bio_trim" },
	{ 0xcf96fced, "submit_bio_wait" },
	{ 0xa825caf3, "bio_add_page" },
	{ 0x150af4fe, "bio_copy_data" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x639d0714, "bio_alloc_bioset" },
	{ 0x92c6de15, "md_finish_reshape" },
	{ 0x9f294ba7, "mddev_update_io_opt" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "E0227853D4AC8A9F4CFF627");
