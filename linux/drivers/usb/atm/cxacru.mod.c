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
	{ 0x3cf8929c, "usb_unlink_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x669c413b, "_dev_err" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa18fc3d2, "usbatm_usb_probe" },
	{ 0x90548a4e, "usb_string" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0xa6257a2f, "complete" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x20b512e9, "usb_check_bulk_endpoints" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x55c62378, "usb_check_int_endpoints" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xb9fe9192, "atm_dev_signal_change" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf9a482f9, "msleep" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x87b55f30, "usb_clear_halt" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x4cb4bf6, "usbatm_usb_disconnect" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "usbatm,atm");

MODULE_ALIAS("usb:v0572pCAFEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pCB00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pCB01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pCB02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pCB06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pCB07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08E3p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08E3p0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p3457d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1803p5510d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0675p0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p330Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p330Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0659p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0509p0812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v100DpCB01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v100Dp3342d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C536C82F7E0402458AA3188");
