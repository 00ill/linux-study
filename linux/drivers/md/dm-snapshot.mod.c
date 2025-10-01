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

KSYMTAB_FUNC(dm_snap_origin, "", "");
KSYMTAB_FUNC(dm_snap_cow, "", "");
KSYMTAB_FUNC(dm_exception_store_type_register, "", "");
KSYMTAB_FUNC(dm_exception_store_type_unregister, "", "");
KSYMTAB_FUNC(dm_exception_store_create, "", "");
KSYMTAB_FUNC(dm_exception_store_destroy, "", "");

SYMBOL_CRC(dm_snap_origin, 0x892d8e98, "");
SYMBOL_CRC(dm_snap_cow, 0xd932ac6e, "");
SYMBOL_CRC(dm_exception_store_type_register, 0xe7e02662, "");
SYMBOL_CRC(dm_exception_store_type_unregister, 0x550f1468, "");
SYMBOL_CRC(dm_exception_store_create, 0x414762e8, "");
SYMBOL_CRC(dm_exception_store_destroy, 0xfa934173, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x582ff1ed, "bio_associate_blkg" },
	{ 0x68e53572, "dm_internal_resume_fast" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0xf2a8efae, "dm_kcopyd_do_callback" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb081c7dd, "dm_per_bio_data" },
	{ 0x929ffdc, "dm_put_device" },
	{ 0xca9360b5, "rb_next" },
	{ 0xfbe4d78, "dm_table_get_size" },
	{ 0x6cdb2d56, "dm_bufio_prefetch" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x96848186, "scnprintf" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x824049ef, "dm_hold" },
	{ 0x37a0cba, "kfree" },
	{ 0xf1f88a0e, "dm_kcopyd_prepare_callback" },
	{ 0xb04f56ab, "dm_bufio_read" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0xe2964344, "__wake_up" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x9dd9df13, "dm_kcopyd_client_create" },
	{ 0x1000e51, "schedule" },
	{ 0xb30844db, "dm_accept_partial_bio" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9f984513, "strrchr" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x9d9e8944, "module_put" },
	{ 0xeca7949e, "dm_bufio_client_destroy" },
	{ 0xfeb343d1, "mempool_alloc_noprof" },
	{ 0x1bba52b3, "bio_endio" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x2773c485, "__wake_up_locked" },
	{ 0x420314e8, "dm_suspended" },
	{ 0x18332c7f, "submit_bio_noacct" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x4a3c8253, "kmem_cache_free" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x7d27e504, "dm_shift_arg" },
	{ 0x77eafaa4, "dm_bufio_client_create" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xe6024e59, "dm_bufio_release" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x184aa1ca, "dm_unregister_target" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x11089ac7, "_ctype" },
	{ 0xb17fa538, "dm_set_target_max_io_len" },
	{ 0x8e52d531, "dm_kcopyd_zero" },
	{ 0xdcb764ad, "memset" },
	{ 0x168b1107, "dm_table_event" },
	{ 0x839374df, "dm_internal_suspend_fast" },
	{ 0x39c74235, "dm_read_arg_group" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x6f61551b, "kmem_cache_alloc_noprof" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xece784c2, "rb_first" },
	{ 0x8450a53a, "__kmem_cache_create_args" },
	{ 0xa21d610f, "dm_put" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xcdf2d7ae, "dm_kcopyd_copy" },
	{ 0xbf2a6b2b, "dm_register_target" },
	{ 0x999e8297, "vfree" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x9eb216a8, "dm_table_get_mode" },
	{ 0x91f00abc, "dm_bufio_set_minimum_buffers" },
	{ 0x33e8278a, "blkdev_issue_flush" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x9386f362, "dm_table_get_md" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xd991e3b9, "dm_bufio_get_device_size" },
	{ 0xf2d95916, "mempool_init_noprof" },
	{ 0x34df6d52, "dm_io" },
	{ 0x6c624142, "dm_get_device" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x53b954a2, "up_read" },
	{ 0xcd2ba798, "dm_bufio_forget" },
	{ 0x6da617b, "dm_bio_get_target_bio_nr" },
	{ 0x669c191b, "dm_consume_args" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x38e46431, "mempool_exit" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x656f612b, "kmem_cache_destroy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dm-mod,dm-bufio");


MODULE_INFO(srcversion, "E12082FC9C75346ADB62ED2");
