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
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x790be0b9, "usb_bus_idr" },
	{ 0x96848186, "scnprintf" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x8f14d45b, "get_zeroed_page_noprof" },
	{ 0x811dc334, "usb_unregister_notify" },
	{ 0x3a6d85d3, "cdev_add" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0xfed11ed1, "usb_mon_deregister" },
	{ 0x4ae7394, "device_create" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4a3c8253, "kmem_cache_free" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0xae0ecf40, "usb_bus_idr_lock" },
	{ 0x7143a676, "class_unregister" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x6f61551b, "kmem_cache_alloc_noprof" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8450a53a, "__kmem_cache_create_args" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xa6dd9149, "device_destroy" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x3fa11fda, "usb_debug_root" },
	{ 0x89bbafc6, "usb_register_notify" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xa42d469b, "class_register" },
	{ 0xa01f13a6, "cdev_init" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x27271c6b, "cdev_del" },
	{ 0x656f612b, "kmem_cache_destroy" },
	{ 0x6470f03c, "usb_mon_register" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F30B4E304AD41106C219460");
