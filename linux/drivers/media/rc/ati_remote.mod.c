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
	{ 0xe2d5255a, "strcmp" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0xd8f2fce2, "usb_free_coherent" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x32a0c53, "input_unregister_device" },
	{ 0xf399eccc, "rc_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x669c413b, "_dev_err" },
	{ 0xe2964344, "__wake_up" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x41cc93f6, "input_event" },
	{ 0xc6e41c6e, "rc_g_keycode_from_table" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6f54d470, "rc_keydown_notimeout" },
	{ 0xb3b75fb9, "rc_keyup" },
	{ 0x4829a47e, "memcpy" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x419a348c, "rc_allocate_device" },
	{ 0x98434f46, "usb_alloc_coherent" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x661f928c, "rc_register_device" },
	{ 0x99c44b73, "input_allocate_device" },
	{ 0xcab72f31, "input_register_device" },
	{ 0xb727b479, "input_free_device" },
	{ 0x5dc3d1bc, "rc_free_device" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x49a2e97f, "param_ops_ulong" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BC7p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0008d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "46CE6F28C73E38CF35BB77A");
