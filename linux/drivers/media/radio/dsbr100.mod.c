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
	{ 0x414ea878, "usb_control_msg" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5555588e, "video_unregister_device" },
	{ 0xe0d8f4f7, "v4l2_device_disconnect" },
	{ 0xade31a66, "v4l2_device_put" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0xf64c3bb1, "v4l2_device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x9ba53144, "video_devdata" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x42db93b6, "v4l2_device_register" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3dda0032, "video_device_release_empty" },
	{ 0xb68f376, "__video_register_device" },
	{ 0x122c3a7e, "_printk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f71a789, "v4l2_ctrl_poll" },
	{ 0x77731343, "video_ioctl2" },
	{ 0x1708872e, "v4l2_fh_open" },
	{ 0x669eb6bd, "v4l2_fh_release" },
	{ 0x41f63b90, "v4l2_ctrl_log_status" },
	{ 0xaafe5e32, "v4l2_ctrl_subscribe_event" },
	{ 0xfdcd2ee2, "v4l2_event_unsubscribe" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("usb:v04B4p1002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "096BB3DB65EC624B7D14F06");
