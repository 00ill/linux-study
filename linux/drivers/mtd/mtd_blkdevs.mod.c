#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(mtd_blktrans_cease_background, "_gpl", "");
KSYMTAB_FUNC(register_mtd_blktrans, "_gpl", "");
KSYMTAB_FUNC(deregister_mtd_blktrans, "_gpl", "");
KSYMTAB_FUNC(add_mtd_blktrans_dev, "_gpl", "");
KSYMTAB_FUNC(del_mtd_blktrans_dev, "_gpl", "");

SYMBOL_CRC(mtd_blktrans_cease_background, 0x3dfa63ac, "_gpl");
SYMBOL_CRC(register_mtd_blktrans, 0xc3af2299, "_gpl");
SYMBOL_CRC(deregister_mtd_blktrans, 0x3a165f00, "_gpl");
SYMBOL_CRC(add_mtd_blktrans_dev, 0xf2434fb4, "_gpl");
SYMBOL_CRC(del_mtd_blktrans_dev, 0x09a18736, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x50dabc2f, "mtd_table_mutex" },
	{ 0xb014a89f, "__mtd_next_device" },
	{ 0x5b60eb90, "register_mtd_user" },
	{ 0x122c3a7e, "_printk" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x9eae0115, "unregister_mtd_user" },
	{ 0xdcb764ad, "memset" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x28db6e1e, "blk_mq_alloc_sq_tag_set" },
	{ 0x2eeb9fd7, "__blk_mq_alloc_disk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2e4fe57f, "set_capacity" },
	{ 0x209dc043, "device_add_disk" },
	{ 0xed85cddf, "sysfs_create_group" },
	{ 0x431a9842, "put_disk" },
	{ 0x7d11f48b, "blk_mq_free_tag_set" },
	{ 0x37a0cba, "kfree" },
	{ 0xcda0bbb0, "set_disk_ro" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xee4bc93c, "blk_mq_start_request" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x39819c60, "flush_dcache_page" },
	{ 0x7a74ec7d, "blk_update_request" },
	{ 0x86647e09, "__blk_mq_end_request" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x9d9e8944, "module_put" },
	{ 0xbca27266, "__put_mtd_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x374b3c83, "sysfs_remove_group" },
	{ 0x99a52f5e, "del_gendisk" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x14e19c1c, "blk_mq_freeze_queue" },
	{ 0x3d15ea93, "blk_mq_quiesce_queue" },
	{ 0xbca8ddda, "blk_mq_unquiesce_queue" },
	{ 0x17c018c8, "blk_mq_unfreeze_queue" },
	{ 0xd8940511, "__module_get" },
	{ 0x887793dd, "__get_mtd_device" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "5EBC44B1DE79B829B39AF6F");
