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
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4829a47e, "memcpy" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6a8f620, "usb_pipe_type_check" },
	{ 0x669c413b, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xdcb764ad, "memset" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe2964344, "__wake_up" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x70b0605f, "usb_anchor_urb" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x29c998f4, "usb_unanchor_urb" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xe122e2f0, "xillybus_cleanup_chrdev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x98693c85, "xillybus_find_inode" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x2379418e, "xillybus_init_chrdev" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "xillybus_class");

MODULE_ALIAS("usb:v03FDpEBBEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v09FBpEBBEd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "85A629796061E366711435E");
