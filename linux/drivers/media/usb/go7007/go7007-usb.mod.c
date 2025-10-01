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
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe0d8f4f7, "v4l2_device_disconnect" },
	{ 0x5555588e, "video_unregister_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xade31a66, "v4l2_device_put" },
	{ 0xeb9a9246, "go7007_snd_remove" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x669c413b, "_dev_err" },
	{ 0xe2964344, "__wake_up" },
	{ 0xb9d58b12, "go7007_parse_video_stream" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37a0cba, "kfree" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x67b5a78a, "go7007_read_interrupt" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xe6c47fa9, "go7007_alloc" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x23c22846, "go7007_boot_encoder" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x236ef0aa, "go7007_register_encoder" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x60570175, "i2c_add_adapter" },
	{ 0xccd654e1, "i2c_smbus_xfer" },
	{ 0x195b39a8, "go7007_read_addr" },
	{ 0xb1e344af, "go7007_update_board" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev,go7007");

MODULE_ALIAS("usb:v0EB1p7007d0200dc*dsc*dp*icFFisc00ipFFin*");
MODULE_ALIAS("usb:v0EB1p7007d0202dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p7007d0204dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p7007d0205dc*dsc*dp*icFFisc00ipFFin*");
MODULE_ALIAS("usb:v0EB1p7007d0208dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p7007d0209dc*dsc*dp*icFFisc00ipFFin*");
MODULE_ALIAS("usb:v0EB1p7007d0210dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA102d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA104d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10FDpDE00d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1943p2250d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1p0709d0204dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C7F9CF5885B4C1D57530FBF");
