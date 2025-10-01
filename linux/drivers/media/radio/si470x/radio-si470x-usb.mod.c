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
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0xa70e8745, "si470x_start" },
	{ 0xc38b7ac0, "v4l2_ctrl_handler_setup" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xa6257a2f, "complete" },
	{ 0xe2964344, "__wake_up" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x2170dde6, "si470x_stop" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe0d8f4f7, "v4l2_device_disconnect" },
	{ 0x5555588e, "video_unregister_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xade31a66, "v4l2_device_put" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0xf64c3bb1, "v4l2_device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x669eb6bd, "v4l2_fh_release" },
	{ 0x1708872e, "v4l2_fh_open" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x9ba53144, "video_devdata" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x42db93b6, "v4l2_device_register" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x3f9e693, "si470x_ctrl_ops" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0x338380de, "si470x_viddev_template" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3dda0032, "video_device_release_empty" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x669c413b, "_dev_err" },
	{ 0x3637bd1a, "si470x_set_freq" },
	{ 0xb68f376, "__video_register_device" },
	{ 0x15b9f3f1, "param_ops_ushort" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "radio-si470x-common,videodev");

MODULE_ALIAS("usb:v10C4p818Ad*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v06E1pA155d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v1B80pD700d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v10C5p819Ad*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v12CFp7111d*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "D344CD290510414CB0BC841");
