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
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe0d8f4f7, "v4l2_device_disconnect" },
	{ 0x5555588e, "video_unregister_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xade31a66, "v4l2_device_put" },
	{ 0x9d9e8944, "module_put" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0xf64c3bb1, "v4l2_device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x9ba53144, "video_devdata" },
	{ 0x5b6a59bc, "v4l2_subdev_call_wrappers" },
	{ 0xdcb764ad, "memset" },
	{ 0x945446cb, "regmap_bulk_write" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf261f72a, "_dev_notice" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x72764206, "vb2_buffer_done" },
	{ 0x179f2fe4, "vb2_plane_vaddr" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x91747f5f, "vb2_vmalloc_memops" },
	{ 0x5a40e7cd, "vb2_queue_init" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0x960d0a9, "v4l2_ctrl_auto_cluster" },
	{ 0x42db93b6, "v4l2_device_register" },
	{ 0xb68f376, "__video_register_device" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xfc8645a5, "v4l2_ctrl_add_handler" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xd8f2fce2, "usb_free_coherent" },
	{ 0x5904a6cd, "v4l2_ctrl_find" },
	{ 0xa3f622a6, "v4l2_ctrl_g_ctrl" },
	{ 0x3ac81b38, "__v4l2_ctrl_s_ctrl" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x98434f46, "usb_alloc_coherent" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x9c63214c, "vb2_ops_wait_prepare" },
	{ 0x2be10869, "vb2_ops_wait_finish" },
	{ 0x3dda0032, "video_device_release_empty" },
	{ 0x23e24800, "vb2_fop_read" },
	{ 0x53e0ec70, "vb2_fop_poll" },
	{ 0x77731343, "video_ioctl2" },
	{ 0x8c4d9c9f, "vb2_fop_mmap" },
	{ 0x1708872e, "v4l2_fh_open" },
	{ 0xc715c568, "vb2_fop_release" },
	{ 0xecf2ff56, "vb2_ioctl_reqbufs" },
	{ 0x23027153, "vb2_ioctl_querybuf" },
	{ 0xc604f82f, "vb2_ioctl_qbuf" },
	{ 0x3e23b10, "vb2_ioctl_dqbuf" },
	{ 0xe22e2643, "vb2_ioctl_create_bufs" },
	{ 0x5b3e220d, "vb2_ioctl_prepare_buf" },
	{ 0x9d6f715c, "vb2_ioctl_streamon" },
	{ 0xa25a1ff2, "vb2_ioctl_streamoff" },
	{ 0x41f63b90, "v4l2_ctrl_log_status" },
	{ 0xaafe5e32, "v4l2_ctrl_subscribe_event" },
	{ 0xfdcd2ee2, "v4l2_event_unsubscribe" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev,videobuf2-common,videobuf2-vmalloc,videobuf2-v4l2");


MODULE_INFO(srcversion, "5C048FBD8CA6EAA7AB2018E");
