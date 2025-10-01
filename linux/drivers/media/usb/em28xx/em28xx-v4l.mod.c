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
	{ 0x8f1536b6, "em28xx_init_camera" },
	{ 0x921d7c65, "em28xx_boards" },
	{ 0x77731343, "video_ioctl2" },
	{ 0xa25a1ff2, "vb2_ioctl_streamoff" },
	{ 0xc07cc92d, "em28xx_audio_analog_set" },
	{ 0x1ff3d80, "em28xx_write_reg" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xba14dc88, "em28xx_stop_urbs" },
	{ 0x2be10869, "vb2_ops_wait_finish" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x23027153, "vb2_ioctl_querybuf" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2235ac2b, "em28xx_set_mode" },
	{ 0x1708872e, "v4l2_fh_open" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbc66cdac, "v4l2_i2c_subdev_addr" },
	{ 0xc38b7ac0, "v4l2_ctrl_handler_setup" },
	{ 0xfb132a64, "em28xx_audio_setup" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x9ba53144, "video_devdata" },
	{ 0xc715c568, "vb2_fop_release" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x5904a6cd, "v4l2_ctrl_find" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xb1c4027b, "media_device_register_entity" },
	{ 0x3e23b10, "vb2_ioctl_dqbuf" },
	{ 0x669c413b, "_dev_err" },
	{ 0xe22e2643, "vb2_ioctl_create_bufs" },
	{ 0xe24747f9, "em28xx_uninit_usb_xfer" },
	{ 0x5b3e220d, "vb2_ioctl_prepare_buf" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa6107fa3, "em28xx_unregister_extension" },
	{ 0x72764206, "vb2_buffer_done" },
	{ 0x179f2fe4, "vb2_plane_vaddr" },
	{ 0xaafe5e32, "v4l2_ctrl_subscribe_event" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0xa3732c8f, "media_entity_pads_init" },
	{ 0x5555588e, "video_unregister_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xc604f82f, "vb2_ioctl_qbuf" },
	{ 0x8c4d9c9f, "vb2_fop_mmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x91747f5f, "vb2_vmalloc_memops" },
	{ 0xdcb764ad, "memset" },
	{ 0xe0d8f4f7, "v4l2_device_disconnect" },
	{ 0x23e24800, "vb2_fop_read" },
	{ 0x42db93b6, "v4l2_device_register" },
	{ 0x90ab0c84, "media_entity_setup_link" },
	{ 0x9f63cedb, "em28xx_register_extension" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb68f376, "__video_register_device" },
	{ 0xc4206b7a, "em28xx_init_usb_xfer" },
	{ 0x9c63214c, "vb2_ops_wait_prepare" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9d6f715c, "vb2_ioctl_streamon" },
	{ 0x46a9550a, "v4l2_mc_create_media_graph" },
	{ 0x53e0ec70, "vb2_fop_poll" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0xf2a353ac, "v4l2_i2c_tuner_addrs" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0xf64c3bb1, "v4l2_device_unregister" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xd40d0641, "em28xx_setup_xc3028" },
	{ 0x49d7d8f1, "v4l2_ctrl_notify" },
	{ 0xc3a664eb, "em28xx_write_regs" },
	{ 0x614dd5a, "v4l2_video_std_frame_period" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0xd5cf2660, "v4l2_i2c_new_subdev" },
	{ 0x41576788, "media_device_unregister_entity" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x374647f3, "_dev_printk" },
	{ 0x3dda0032, "video_device_release_empty" },
	{ 0xfdcd2ee2, "v4l2_event_unsubscribe" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xf8c2b5a7, "em28xx_read_reg" },
	{ 0xecf2ff56, "vb2_ioctl_reqbufs" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,em28xx,videodev,mc,videobuf2-common,videobuf2-vmalloc");


MODULE_INFO(srcversion, "12AEDDFB9852961185300A8");
