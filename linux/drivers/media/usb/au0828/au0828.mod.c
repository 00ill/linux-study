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
	{ 0xd59ba7a8, "dvb_dmxdev_init" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x77731343, "video_ioctl2" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x4a569ebc, "ir_raw_event_handle" },
	{ 0xade31a66, "v4l2_device_put" },
	{ 0xa25a1ff2, "vb2_ioctl_streamoff" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x98434f46, "usb_alloc_coherent" },
	{ 0x53679031, "vb2_ioctl_expbuf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe228da49, "usb_ifnum_to_if" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x5ff003b0, "i2c_probe_func_quick_read" },
	{ 0x219c9b83, "ir_raw_event_store" },
	{ 0x2be10869, "vb2_ops_wait_finish" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x13c43f79, "__media_entity_setup_link" },
	{ 0x37a0cba, "kfree" },
	{ 0xef3c20fa, "__media_device_register" },
	{ 0x23027153, "vb2_ioctl_querybuf" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x1708872e, "v4l2_fh_open" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbf66bf88, "vb2_video_unregister_device" },
	{ 0xbf565938, "dvb_register_adapter" },
	{ 0x37a84f24, "media_create_pad_link" },
	{ 0x122c3a7e, "_printk" },
	{ 0xdfe729df, "__media_pipeline_stop" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x9ba53144, "video_devdata" },
	{ 0x18acd31f, "dvb_dmx_swfilter_packets" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x7143ff9e, "media_device_register_entity_notify" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0xaded60ca, "i2c_del_adapter" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xb1c4027b, "media_device_register_entity" },
	{ 0x7e4072c6, "v4l_enable_media_source" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x3e23b10, "vb2_ioctl_dqbuf" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x669c413b, "_dev_err" },
	{ 0xd8f2fce2, "usb_free_coherent" },
	{ 0xe22e2643, "vb2_ioctl_create_bufs" },
	{ 0x354344b8, "tveeprom_read" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x279da421, "v4l_vb2q_enable_media_source" },
	{ 0x5b3e220d, "vb2_ioctl_prepare_buf" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x661f928c, "rc_register_device" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x72764206, "vb2_buffer_done" },
	{ 0x179f2fe4, "vb2_plane_vaddr" },
	{ 0xaafe5e32, "v4l2_ctrl_subscribe_event" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0xa23a2eab, "dvb_net_init" },
	{ 0xa3732c8f, "media_entity_pads_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xe643b477, "dvb_dmxdev_release" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xc604f82f, "vb2_ioctl_qbuf" },
	{ 0x8c4d9c9f, "vb2_fop_mmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x1ea8b724, "param_ops_short" },
	{ 0x5dc3d1bc, "rc_free_device" },
	{ 0x91747f5f, "vb2_vmalloc_memops" },
	{ 0xdcb764ad, "memset" },
	{ 0xe0d8f4f7, "v4l2_device_disconnect" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x23e24800, "vb2_fop_read" },
	{ 0x42db93b6, "v4l2_device_register" },
	{ 0xd4a72041, "dvb_frontend_detach" },
	{ 0x60570175, "i2c_add_adapter" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2559398, "dvb_net_release" },
	{ 0x419a348c, "rc_allocate_device" },
	{ 0x3cf8929c, "usb_unlink_urb" },
	{ 0xa04e7900, "media_get_pad_index" },
	{ 0x90ab0c84, "media_entity_setup_link" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb68f376, "__video_register_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xaf72fae1, "dvb_unregister_frontend" },
	{ 0x829ce202, "media_device_delete" },
	{ 0x9c63214c, "vb2_ops_wait_prepare" },
	{ 0x3d1ffcad, "v4l_disable_media_source" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9d6f715c, "vb2_ioctl_streamon" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x46a9550a, "v4l2_mc_create_media_graph" },
	{ 0x53e0ec70, "vb2_fop_poll" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x5c5a0a63, "dvb_frontend_resume" },
	{ 0xf64c3bb1, "v4l2_device_unregister" },
	{ 0x7ab4a2cf, "dvb_register_frontend" },
	{ 0x52258516, "dvb_frontend_suspend" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x41f63b90, "v4l2_ctrl_log_status" },
	{ 0x8b4245cf, "dvb_create_media_graph" },
	{ 0xd5cf2660, "v4l2_i2c_new_subdev" },
	{ 0x41576788, "media_device_unregister_entity" },
	{ 0x88cf6d3a, "dvb_unregister_adapter" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x3dda0032, "video_device_release_empty" },
	{ 0xe3dc0d51, "_vb2_fop_release" },
	{ 0x96f04f9e, "media_device_unregister_entity_notify" },
	{ 0xc5b543a1, "__media_pipeline_start" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf399eccc, "rc_unregister_device" },
	{ 0xa47a573c, "media_device_usb_allocate" },
	{ 0xfdcd2ee2, "v4l2_event_unsubscribe" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xecf2ff56, "vb2_ioctl_reqbufs" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,dvb-core,videodev,mc,tveeprom,videobuf2-common,videobuf2-vmalloc");

MODULE_ALIAS("usb:v2040p7200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E1p0480d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7270d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "44AEF6EFE81A3A1ECEEB204");
