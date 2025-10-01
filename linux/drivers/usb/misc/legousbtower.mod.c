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
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0xe2964344, "__wake_up" },
	{ 0xe3799008, "nonseekable_open" },
	{ 0x28a823ab, "usb_find_interface" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x554f4d66, "usb_control_msg_recv" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x669c413b, "_dev_err" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1e9c590a, "usb_find_common_endpoints_reverse" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x2cb2056d, "usb_register_dev" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3d38f36, "usb_deregister_dev" },
	{ 0xf74654c, "usb_poison_urb" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x1000e51, "schedule" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xdcb764ad, "memset" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0694p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C68DFBD833982D4B7ED7593");
