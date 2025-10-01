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
	{ 0x122c3a7e, "_printk" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4829a47e, "memcpy" },
	{ 0x669c413b, "_dev_err" },
	{ 0xdcb764ad, "memset" },
	{ 0x9ba53144, "video_devdata" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x179f2fe4, "vb2_plane_vaddr" },
	{ 0x72764206, "vb2_buffer_done" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3ac81b38, "__v4l2_ctrl_s_ctrl" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x999e8297, "vfree" },
	{ 0x37a0cba, "kfree" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0xf64c3bb1, "v4l2_device_unregister" },
	{ 0xe0d8f4f7, "v4l2_device_disconnect" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x5555588e, "video_unregister_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1708872e, "v4l2_fh_open" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x7fcac341, "usb_reset_device" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x42db93b6, "v4l2_device_register" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0x91747f5f, "vb2_vmalloc_memops" },
	{ 0x5a40e7cd, "vb2_queue_init" },
	{ 0xb68f376, "__video_register_device" },
	{ 0xac8e4c37, "v4l2_ctrl_new_custom" },
	{ 0x9c63214c, "vb2_ops_wait_prepare" },
	{ 0x2be10869, "vb2_ops_wait_finish" },
	{ 0x23e24800, "vb2_fop_read" },
	{ 0x53e0ec70, "vb2_fop_poll" },
	{ 0x77731343, "video_ioctl2" },
	{ 0x8c4d9c9f, "vb2_fop_mmap" },
	{ 0xc715c568, "vb2_fop_release" },
	{ 0xecf2ff56, "vb2_ioctl_reqbufs" },
	{ 0x23027153, "vb2_ioctl_querybuf" },
	{ 0xc604f82f, "vb2_ioctl_qbuf" },
	{ 0x3e23b10, "vb2_ioctl_dqbuf" },
	{ 0x9d6f715c, "vb2_ioctl_streamon" },
	{ 0xa25a1ff2, "vb2_ioctl_streamoff" },
	{ 0x41f63b90, "v4l2_ctrl_log_status" },
	{ 0xaafe5e32, "v4l2_ctrl_subscribe_event" },
	{ 0xfdcd2ee2, "v4l2_event_unsubscribe" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev,videobuf2-common,videobuf2-vmalloc,videobuf2-v4l2");

MODULE_ALIAS("usb:v1943p2255d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1943p2257d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CDC29698F1FC9B8E0E5E2F6");
