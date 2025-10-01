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
	{ 0xa728742c, "usb_register_driver" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xe2964344, "__wake_up" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xb06eee1f, "fasync_helper" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x87b55f30, "usb_clear_halt" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x70b0605f, "usb_anchor_urb" },
	{ 0xcf2a6966, "up" },
	{ 0x7e8d8619, "usb_anchor_empty" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x8d9bb4d2, "kill_fasync" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x2cb2056d, "usb_register_dev" },
	{ 0x3d38f36, "usb_deregister_dev" },
	{ 0x28a823ab, "usb_find_interface" },
	{ 0xdcb764ad, "memset" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x92e683f5, "down_timeout" },
	{ 0x29c998f4, "usb_unanchor_urb" },
	{ 0xa1311ba2, "usb_get_from_anchor" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x40d6ec8a, "default_llseek" },
	{ 0xf8ce1c00, "compat_ptr_ioctl" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip01in*");

MODULE_INFO(srcversion, "0FF69570C3EF37B59897305");
