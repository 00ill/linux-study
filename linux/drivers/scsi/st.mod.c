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
	{ 0x122c3a7e, "_printk" },
	{ 0xa42d469b, "class_register" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xe65da579, "__scsi_register_driver" },
	{ 0x7143a676, "class_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x96848186, "scnprintf" },
	{ 0x685bb4f9, "sysfs_remove_link" },
	{ 0x27271c6b, "cdev_del" },
	{ 0x22acd2e2, "device_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc3c94008, "cdev_alloc" },
	{ 0x3a6d85d3, "cdev_add" },
	{ 0x4ae7394, "device_create" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xa6257a2f, "complete" },
	{ 0x892b33d3, "blk_rq_unmap_user" },
	{ 0x25e078eb, "blk_mq_free_request" },
	{ 0x92893115, "driver_unregister" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x41d565dd, "sdev_prefix_printk" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xbd620f1a, "__scsi_print_sense" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x37a0cba, "kfree" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xbcb5a3, "scsi_alloc_request" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7fafaa0f, "blk_execute_rq_nowait" },
	{ 0xdad76be9, "blk_rq_map_user" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xdcb764ad, "memset" },
	{ 0x6c736d6, "__free_pages" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa2526acb, "scsi_device_put" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdef134bc, "scsi_autopm_get_device" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x98cf60b3, "strlen" },
	{ 0x5a921311, "strncmp" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x3686aebf, "blk_queue_rq_timeout" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x954f099c, "idr_preload" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xcb647be8, "sysfs_create_link" },
	{ 0xa01268dd, "scsi_autopm_put_device" },
	{ 0x9be5d16c, "scsi_set_medium_removal" },
	{ 0xb14285c0, "scsi_block_when_processing_errors" },
	{ 0xa26dbdbf, "alloc_pages_noprof" },
	{ 0xb465e40a, "pin_user_pages_fast" },
	{ 0x39819c60, "flush_dcache_page" },
	{ 0xb4f75385, "unpin_user_pages" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xbc4005a8, "unpin_user_pages_dirty_lock" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x20978fb9, "idr_find" },
	{ 0xffb08bb5, "scsi_device_get" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x85211c57, "scsi_ioctl_block_when_processing_errors" },
	{ 0xabf79562, "scsi_ioctl" },
	{ 0xc6cbbc89, "capable" },
	{ 0x295427ca, "noop_llseek" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EB07284DE0DAE5AA6ADDC13");
