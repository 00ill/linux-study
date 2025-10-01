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

KSYMTAB_FUNC(xillybus_isr, "", "");
KSYMTAB_FUNC(xillybus_init_endpoint, "", "");
KSYMTAB_FUNC(xillybus_endpoint_discovery, "", "");
KSYMTAB_FUNC(xillybus_endpoint_remove, "", "");

SYMBOL_CRC(xillybus_isr, 0x25978d50, "");
SYMBOL_CRC(xillybus_init_endpoint, 0x689dc0cf, "");
SYMBOL_CRC(xillybus_endpoint_discovery, 0xff32b088, "");
SYMBOL_CRC(xillybus_endpoint_remove, 0x521fa706, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xe792d1b4, "__dma_sync_single_for_device" },
	{ 0x98693c85, "xillybus_find_inode" },
	{ 0x669c413b, "_dev_err" },
	{ 0xe3799008, "nonseekable_open" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xd99c6ae, "__dma_sync_single_for_cpu" },
	{ 0xbd232569, "dma_unmap_page_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe122e2f0, "xillybus_cleanup_chrdev" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x9df57208, "dma_map_page_attrs" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0xcafc5741, "devm_get_free_pages" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x81665d21, "devres_open_group" },
	{ 0xc2555bbd, "devres_close_group" },
	{ 0x2379418e, "xillybus_init_chrdev" },
	{ 0x583ab8fe, "devres_release_group" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xdcb764ad, "memset" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe2964344, "__wake_up" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "xillybus_class");


MODULE_INFO(srcversion, "36F888686AAB21EB4ECEF37");
