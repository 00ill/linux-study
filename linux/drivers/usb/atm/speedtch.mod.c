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
	{ 0xa18fc3d2, "usbatm_usb_probe" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0xe228da49, "usb_ifnum_to_if" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x122c3a7e, "_printk" },
	{ 0xb9fe9192, "atm_dev_signal_change" },
	{ 0x90548a4e, "usb_string" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x72b34551, "usb_driver_release_interface" },
	{ 0x37a0cba, "kfree" },
	{ 0xf6491f8c, "usb_driver_claim_interface" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x7fcac341, "usb_reset_device" },
	{ 0x6afcefb6, "param_ops_byte" },
	{ 0x4cb4bf6, "usbatm_usb_disconnect" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "usbatm,atm");

MODULE_ALIAS("usb:v06B9p4061d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4FEA7E4DFC031A29C5DC25D");
