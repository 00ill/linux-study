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
	{ 0xf399eccc, "rc_unregister_device" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xa6257a2f, "complete" },
	{ 0x2787e81d, "ir_raw_event_store_with_timeout" },
	{ 0x3cf8929c, "usb_unlink_urb" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4a569ebc, "ir_raw_event_handle" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x419a348c, "rc_allocate_device" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x5dc3d1bc, "rc_free_device" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x661f928c, "rc_register_device" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v04D8pFD08d*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v04D8pF58Bd*dc*dsc*dp*ic0Aisc*ip*in*");

MODULE_INFO(srcversion, "38D99776CCFEF5EDE0C9421");
