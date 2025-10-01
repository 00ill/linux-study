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
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x70b0605f, "usb_anchor_urb" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x29c998f4, "usb_unanchor_urb" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0xe2964344, "__wake_up" },
	{ 0x122c3a7e, "_printk" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x28a823ab, "usb_find_interface" },
	{ 0x47fa5eea, "usb_autopm_get_interface" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6a336a2e, "usb_autopm_put_interface" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x3d38f36, "usb_deregister_dev" },
	{ 0x842f046d, "usb_poison_anchored_urbs" },
	{ 0x37a0cba, "kfree" },
	{ 0xc22550f5, "usb_put_intf" },
	{ 0x669c413b, "_dev_err" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0x2ad25d23, "usb_get_intf" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x2cb2056d, "usb_register_dev" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x295427ca, "noop_llseek" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc07dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp02ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp03ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip02in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip03in*");
MODULE_ALIAS("usb:v04B8p0202d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B00B72E9DCFC0F4665247E5");
