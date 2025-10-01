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
	{ 0x5a40e7cd, "vb2_queue_init" },
	{ 0x99c44b73, "input_allocate_device" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x77731343, "video_ioctl2" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0xade31a66, "v4l2_device_put" },
	{ 0xa25a1ff2, "vb2_ioctl_streamoff" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe228da49, "usb_ifnum_to_if" },
	{ 0x180cd0ba, "trace_raw_output_prep" },
	{ 0xa50bb103, "__trace_trigger_soft_disabled" },
	{ 0xbd232569, "dma_unmap_page_attrs" },
	{ 0x2be10869, "vb2_ops_wait_finish" },
	{ 0xfbfd5863, "trace_event_printf" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0xe1bafd45, "trace_event_raw_init" },
	{ 0x32a0c53, "input_unregister_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x23027153, "vb2_ioctl_querybuf" },
	{ 0x9a38130e, "bpf_trace_run2" },
	{ 0x1708872e, "v4l2_fh_open" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0xea427052, "trace_event_buffer_commit" },
	{ 0x960d0a9, "v4l2_ctrl_auto_cluster" },
	{ 0x32d43420, "v4l2_ctrl_get_name" },
	{ 0xb727b479, "input_free_device" },
	{ 0x9df57208, "dma_map_page_attrs" },
	{ 0x122c3a7e, "_printk" },
	{ 0xcab72f31, "input_register_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9ba53144, "video_devdata" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xc715c568, "vb2_fop_release" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xd99c6ae, "__dma_sync_single_for_cpu" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x3e23b10, "vb2_ioctl_dqbuf" },
	{ 0x91ac9254, "perf_trace_run_bpf_submit" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xac8e4c37, "v4l2_ctrl_new_custom" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0xfe479535, "trace_event_reg" },
	{ 0x72764206, "vb2_buffer_done" },
	{ 0x179f2fe4, "vb2_plane_vaddr" },
	{ 0xaafe5e32, "v4l2_ctrl_subscribe_event" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0x5555588e, "video_unregister_device" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xc604f82f, "vb2_ioctl_qbuf" },
	{ 0x8c4d9c9f, "vb2_fop_mmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x90548a4e, "usb_string" },
	{ 0x91747f5f, "vb2_vmalloc_memops" },
	{ 0xdcb764ad, "memset" },
	{ 0xe0d8f4f7, "v4l2_device_disconnect" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x1ae48415, "v4l2_ctrl_new_std_menu" },
	{ 0x41cc93f6, "input_event" },
	{ 0x23e24800, "vb2_fop_read" },
	{ 0x42db93b6, "v4l2_device_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x999e8297, "vfree" },
	{ 0x2f828d33, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb68f376, "__video_register_device" },
	{ 0xe792d1b4, "__dma_sync_single_for_device" },
	{ 0x9c63214c, "vb2_ops_wait_prepare" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9d6f715c, "vb2_ioctl_streamon" },
	{ 0x53e0ec70, "vb2_fop_poll" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0xf64c3bb1, "v4l2_device_unregister" },
	{ 0x41f63b90, "v4l2_ctrl_log_status" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xc485eb96, "usb_altnum_to_altsetting" },
	{ 0x3dda0032, "video_device_release_empty" },
	{ 0xf27b4bb9, "v4l2_ctrl_cluster" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0xfdcd2ee2, "v4l2_event_unsubscribe" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xecf2ff56, "vb2_ioctl_reqbufs" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-common,videobuf2-vmalloc");

MODULE_ALIAS("usb:v041Ep400Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p030Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0329d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p032Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CCp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06BEp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1910d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CAF9A45DC41E942614AB4AA");
