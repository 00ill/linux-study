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
	{ 0xb1342cdb, "_raw_read_lock_irqsave" },
	{ 0xdf2ebb87, "_raw_read_unlock_irqrestore" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0x976f290d, "blk_trace_remove" },
	{ 0xe0c34d72, "blk_put_queue" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x37a0cba, "kfree" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xb06eee1f, "fasync_helper" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdcb764ad, "memset" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xa42d469b, "class_register" },
	{ 0x4f778cd0, "scsi_register_interface" },
	{ 0x7143a676, "class_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3bd45f5c, "register_sysctl_sz" },
	{ 0x1693c4c3, "unregister_sysctl_table" },
	{ 0xd6ff7105, "class_interface_unregister" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xbf1e58b, "__task_pid_nr_ns" },
	{ 0x122c3a7e, "_printk" },
	{ 0x6c736d6, "__free_pages" },
	{ 0x892b33d3, "blk_rq_unmap_user" },
	{ 0x25e078eb, "blk_mq_free_request" },
	{ 0xe2964344, "__wake_up" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xa26dbdbf, "alloc_pages_noprof" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc954bf0e, "blk_get_queue" },
	{ 0xc3c94008, "cdev_alloc" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x954f099c, "idr_preload" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3a6d85d3, "cdev_add" },
	{ 0x4ae7394, "device_create" },
	{ 0xcb647be8, "sysfs_create_link" },
	{ 0x41d565dd, "sdev_prefix_printk" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x27271c6b, "cdev_del" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa2526acb, "scsi_device_put" },
	{ 0x9d9e8944, "module_put" },
	{ 0x8d9bb4d2, "kill_fasync" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xbd620f1a, "__scsi_print_sense" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x685bb4f9, "sysfs_remove_link" },
	{ 0xa6dd9149, "device_destroy" },
	{ 0xbcb5a3, "scsi_alloc_request" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1d48b13e, "blk_rq_map_user_io" },
	{ 0x7fafaa0f, "blk_execute_rq_nowait" },
	{ 0xe3799008, "nonseekable_open" },
	{ 0x20978fb9, "idr_find" },
	{ 0xffb08bb5, "scsi_device_get" },
	{ 0xb14285c0, "scsi_block_when_processing_errors" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd8940511, "__module_get" },
	{ 0x1de4ccb2, "get_sg_io_hdr" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xeda2e038, "scsi_cmd_allowed" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x5ec4aee6, "put_sg_io_hdr" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x85211c57, "scsi_ioctl_block_when_processing_errors" },
	{ 0xabf79562, "scsi_ioctl" },
	{ 0x94150c2d, "blk_trace_setup" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0xd6fabd76, "blk_trace_startstop" },
	{ 0xf943375f, "proc_dointvec" },
	{ 0xf8ce1c00, "compat_ptr_ioctl" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "19B5EAEBFDCBF10CC856BD3");
