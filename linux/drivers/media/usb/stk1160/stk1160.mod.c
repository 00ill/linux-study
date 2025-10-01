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
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x77731343, "video_ioctl2" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0xade31a66, "v4l2_device_put" },
	{ 0xa25a1ff2, "vb2_ioctl_streamoff" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x53679031, "vb2_ioctl_expbuf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x113bd9ee, "dma_vunmap_noncontiguous" },
	{ 0x2be10869, "vb2_ops_wait_finish" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x23027153, "vb2_ioctl_querybuf" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1708872e, "v4l2_fh_open" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9ba53144, "video_devdata" },
	{ 0xc715c568, "vb2_fop_release" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xaded60ca, "i2c_del_adapter" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x3e23b10, "vb2_ioctl_dqbuf" },
	{ 0x669c413b, "_dev_err" },
	{ 0x1a0fe173, "dma_vmap_noncontiguous" },
	{ 0x32fcc46b, "__dma_sync_sg_for_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x704dd240, "__dma_sync_sg_for_cpu" },
	{ 0x72764206, "vb2_buffer_done" },
	{ 0x179f2fe4, "vb2_plane_vaddr" },
	{ 0xaafe5e32, "v4l2_ctrl_subscribe_event" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0x5555588e, "video_unregister_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xc604f82f, "vb2_ioctl_qbuf" },
	{ 0x8c4d9c9f, "vb2_fop_mmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x91747f5f, "vb2_vmalloc_memops" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xe0d8f4f7, "v4l2_device_disconnect" },
	{ 0x23e24800, "vb2_fop_read" },
	{ 0x42db93b6, "v4l2_device_register" },
	{ 0x60570175, "i2c_add_adapter" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf074cd0a, "dma_free_noncontiguous" },
	{ 0x30696946, "dma_alloc_noncontiguous" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0xb68f376, "__video_register_device" },
	{ 0x9c63214c, "vb2_ops_wait_prepare" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9d6f715c, "vb2_ioctl_streamon" },
	{ 0x53e0ec70, "vb2_fop_poll" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0xf64c3bb1, "v4l2_device_unregister" },
	{ 0x41f63b90, "v4l2_ctrl_log_status" },
	{ 0xd5cf2660, "v4l2_i2c_new_subdev" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x3dda0032, "video_device_release_empty" },
	{ 0xfdcd2ee2, "v4l2_event_unsubscribe" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xecf2ff56, "vb2_ioctl_reqbufs" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-common,videobuf2-vmalloc");

MODULE_ALIAS("usb:v05E1p0408d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0811CA4B3E6105EFD2BE760");
