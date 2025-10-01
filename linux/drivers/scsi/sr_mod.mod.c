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
	{ 0x812c8e8a, "scsi_mode_sense" },
	{ 0xa01268dd, "scsi_autopm_put_device" },
	{ 0xffb08bb5, "scsi_device_get" },
	{ 0x209dc043, "device_add_disk" },
	{ 0x19d9e1d4, "register_cdrom" },
	{ 0xdf76f79c, "queue_limits_commit_update_frozen" },
	{ 0xc64ba38d, "blk_pm_runtime_init" },
	{ 0xc1ac9d84, "cdrom_ioctl" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x37a0cba, "kfree" },
	{ 0xf49d2c20, "blk_mq_alloc_disk_for_queue" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x9bc964b4, "scsi_test_unit_ready" },
	{ 0xb14285c0, "scsi_block_when_processing_errors" },
	{ 0x431a9842, "put_disk" },
	{ 0xabf79562, "scsi_ioctl" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7c4c1f72, "blk_execute_rq" },
	{ 0x25e078eb, "blk_mq_free_request" },
	{ 0xc6cbbc89, "capable" },
	{ 0xa2526acb, "scsi_device_put" },
	{ 0x285ea808, "cdrom_get_last_written" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x792e2791, "cdrom_check_events" },
	{ 0xdad76be9, "blk_rq_map_user" },
	{ 0x2e4fe57f, "set_capacity" },
	{ 0x49c61658, "cdrom_get_media_event" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x41d565dd, "sdev_prefix_printk" },
	{ 0x5a921311, "strncmp" },
	{ 0x92893115, "driver_unregister" },
	{ 0x99a52f5e, "del_gendisk" },
	{ 0x628b20ad, "cdrom_release" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdcb764ad, "memset" },
	{ 0x892b33d3, "blk_rq_unmap_user" },
	{ 0x8650ca7f, "scsi_alloc_sgtables" },
	{ 0xdef134bc, "scsi_autopm_get_device" },
	{ 0xe65da579, "__scsi_register_driver" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc7c3879a, "cdrom_open" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x4c6e8b8a, "scmd_printk" },
	{ 0x7ad72f95, "scsi_execute_cmd" },
	{ 0x3e0fd6df, "scsi_free_sgtables" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcd97f37a, "disk_check_media_change" },
	{ 0x899d8aa2, "blk_dump_rq_flags" },
	{ 0xd5a1e227, "unregister_cdrom" },
	{ 0x85211c57, "scsi_ioctl_block_when_processing_errors" },
	{ 0xbcb5a3, "scsi_alloc_request" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4cf12b05, "blkdev_compat_ptr_ioctl" },
	{ 0x83d9bca6, "cdrom_number_of_slots" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3686aebf, "blk_queue_rq_timeout" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x9be5d16c, "scsi_set_medium_removal" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "3EF34CED64443DDC3C7A8BE");
