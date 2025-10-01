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
	{ 0x28a823ab, "usb_find_interface" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x669c413b, "_dev_err" },
	{ 0x122c3a7e, "_printk" },
	{ 0xd8f2fce2, "usb_free_coherent" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xe2964344, "__wake_up" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x98434f46, "usb_alloc_coherent" },
	{ 0xdcb764ad, "memset" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x70b0605f, "usb_anchor_urb" },
	{ 0x29c998f4, "usb_unanchor_urb" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2ad25d23, "usb_get_intf" },
	{ 0x1e9c590a, "usb_find_common_endpoints_reverse" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x90548a4e, "usb_string" },
	{ 0x98cf60b3, "strlen" },
	{ 0x2cb2056d, "usb_register_dev" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xc22550f5, "usb_put_intf" },
	{ 0x3d38f36, "usb_deregister_dev" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x295427ca, "noop_llseek" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v07C0p1500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1512d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p158Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p158Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1504d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1505d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1506d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "24D55B8B48DF7A5EAD52C26");
