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
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x8bf701a4, "usb_interface_id" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x72516513, "usb_assign_descriptors" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x970607ff, "usb_ep_free_request" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x3a6d85d3, "cdev_add" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xf9673004, "usb_function_register" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x57bc19d2, "down_write" },
	{ 0x669c413b, "_dev_err" },
	{ 0xce807a25, "up_write" },
	{ 0x4ae7394, "device_create" },
	{ 0x295427ca, "noop_llseek" },
	{ 0x10b9f0fc, "config_group_init_type_name" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xffb7c514, "ida_free" },
	{ 0x7143a676, "class_unregister" },
	{ 0x6f3f2011, "usb_ep_autoconfig" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3a7652c8, "usb_put_function_instance" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf0105eee, "usb_function_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8ca7011c, "usb_ep_alloc_request" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa6dd9149, "device_destroy" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x7673e7f6, "usb_ep_queue" },
	{ 0x98cf60b3, "strlen" },
	{ 0xbcf61715, "usb_ep_enable" },
	{ 0xd152cd3f, "usb_ep_disable" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd962ac6, "usb_free_all_descriptors" },
	{ 0xa42d469b, "class_register" },
	{ 0xa01f13a6, "cdev_init" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x27271c6b, "cdev_del" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "libcomposite");


MODULE_INFO(srcversion, "7165F970D20C253B86F3B13");
