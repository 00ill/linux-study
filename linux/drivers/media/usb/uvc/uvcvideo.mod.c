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
	{ 0x1d753a7d, "v4l2_fh_exit" },
	{ 0xf2cffaef, "gpiod_get_value_cansleep" },
	{ 0xc22550f5, "usb_put_intf" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x6a336a2e, "usb_autopm_put_interface" },
	{ 0x77731343, "video_ioctl2" },
	{ 0xc723ad01, "media_device_unregister" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x3d98ad32, "vb2_streamoff" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x892dedb8, "vb2_queue_release" },
	{ 0xa25a1ff2, "vb2_ioctl_streamoff" },
	{ 0x35ff98bf, "v4l2_format_info" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xbec8b97e, "usb_get_current_frame_number" },
	{ 0x699fa38d, "media_device_init" },
	{ 0x54ee083f, "vb2_poll" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe228da49, "usb_ifnum_to_if" },
	{ 0x73a242d7, "v4l2_fh_del" },
	{ 0x113bd9ee, "dma_vunmap_noncontiguous" },
	{ 0x70f392ea, "v4l2_fh_add" },
	{ 0x2be10869, "vb2_ops_wait_finish" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x12cd4efd, "usb_match_one_id" },
	{ 0x2795b5f0, "gpiod_to_irq" },
	{ 0x32a0c53, "input_unregister_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8c5db3e, "uvc_format_by_guid" },
	{ 0xad5c3c93, "v4l2_simplify_fraction" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2c57f2, "vb2_dqbuf" },
	{ 0xef3c20fa, "__media_device_register" },
	{ 0x23027153, "vb2_ioctl_querybuf" },
	{ 0xd852811d, "v4l2_subdev_init" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x1708872e, "v4l2_fh_open" },
	{ 0x99ed6ef6, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x2ad25d23, "usb_get_intf" },
	{ 0xbf66bf88, "vb2_video_unregister_device" },
	{ 0x7595bde1, "vb2_reqbufs" },
	{ 0x37a84f24, "media_create_pad_link" },
	{ 0x32d43420, "v4l2_ctrl_get_name" },
	{ 0xb727b479, "input_free_device" },
	{ 0x72b34551, "usb_driver_release_interface" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x87b55f30, "usb_clear_halt" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x7b8fb0f6, "vb2_expbuf" },
	{ 0x7fcac341, "usb_reset_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x9ba53144, "video_devdata" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x36dc6ece, "put_device" },
	{ 0xc715c568, "vb2_fop_release" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x2df51f35, "vb2_streamon" },
	{ 0xf50fecbc, "v4l2_ctrl_replace" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x6fff261f, "__arch_clear_user" },
	{ 0xb053f582, "media_device_cleanup" },
	{ 0x3e23b10, "vb2_ioctl_dqbuf" },
	{ 0x669c413b, "_dev_err" },
	{ 0xed913e57, "vb2_querybuf" },
	{ 0x1a0fe173, "dma_vmap_noncontiguous" },
	{ 0xe22e2643, "vb2_ioctl_create_bufs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5b3e220d, "vb2_ioctl_prepare_buf" },
	{ 0x32fcc46b, "__dma_sync_sg_for_device" },
	{ 0x8e51572f, "vb2_qbuf" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf6491f8c, "usb_driver_claim_interface" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xf74654c, "usb_poison_urb" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x704dd240, "__dma_sync_sg_for_cpu" },
	{ 0x72764206, "vb2_buffer_done" },
	{ 0x179f2fe4, "vb2_plane_vaddr" },
	{ 0x6d77ce8a, "v4l2_fh_init" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0xa3732c8f, "media_entity_pads_init" },
	{ 0x5555588e, "video_unregister_device" },
	{ 0xb77b0159, "v4l2_prio_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x79926f0a, "v4l2_event_subscribe" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xc604f82f, "vb2_ioctl_qbuf" },
	{ 0x8c4d9c9f, "vb2_fop_mmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x90548a4e, "usb_string" },
	{ 0x91747f5f, "vb2_vmalloc_memops" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x5074e573, "v4l2_fraction_to_interval" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x41cc93f6, "input_event" },
	{ 0x315de2cf, "v4l2_ctrl_get_menu" },
	{ 0x25e1210d, "__v4l2_device_register_subdev" },
	{ 0x42db93b6, "v4l2_device_register" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf074cd0a, "dma_free_noncontiguous" },
	{ 0x30696946, "dma_alloc_noncontiguous" },
	{ 0x82737e8, "v4l2_ctrl_merge" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0xfd4157fc, "usb_enable_autosuspend" },
	{ 0x47fa5eea, "usb_autopm_get_interface" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb68f376, "__video_register_device" },
	{ 0x9c63214c, "vb2_ops_wait_prepare" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9d6f715c, "vb2_ioctl_streamon" },
	{ 0x53e0ec70, "vb2_fop_poll" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xae792af4, "vb2_create_bufs" },
	{ 0xf64c3bb1, "v4l2_device_unregister" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x3fa11fda, "usb_debug_root" },
	{ 0xc51cfd5e, "vb2_mmap" },
	{ 0x98cf60b3, "strlen" },
	{ 0x374647f3, "_dev_printk" },
	{ 0xef1a1238, "v4l2_event_queue_fh" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0xfdcd2ee2, "v4l2_event_unsubscribe" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xecf2ff56, "vb2_ioctl_reqbufs" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,mc,uvc,videobuf2-common,videobuf2-vmalloc");

MODULE_ALIAS("usb:v03F0pE207d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0408p4033d*dc*dsc*dp*ic0Eisc01ip01in*");
MODULE_ALIAS("usb:v0408p4035d*dc*dsc*dp*ic0Eisc01ip01in*");
MODULE_ALIAS("usb:v0416pA91Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0458p706Ed*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep00F8d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0721d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0723d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp0821d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp0823d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C1d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C2d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C3d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C5d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C7d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp082Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp085Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp087Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp089Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08D3d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v04F2pB071d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v058Fp3820d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2640d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2641d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2643d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p264Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p7670d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8501d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8514d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8600d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05C8p0403d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05E3p0505d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v06F8p300Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p332Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3410d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3420d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0BD3p0555d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0C45p6366d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0E8Dp0004d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v13D3p5103d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v152Dp0310d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v16D0p0ED1d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5212d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5931d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A12d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A31d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A33d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A34d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17DCp0202d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17EFp480Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0306d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0516d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v18CDpCAFEd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3188d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3288d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3290d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v199Ep8102d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d012[0-6]dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d01[0-1]*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d00*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Bp2951d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Fp2002d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1BCFp0B40d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1C4Fp3000d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1DE1pF105d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1FC9p009Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0201d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0211d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v29FEp4D53d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2E1Ap4C01d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0AD2d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0AD3d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0AD4d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B03d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B07d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B3Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B5Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B5Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p1155d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip01in*");

MODULE_INFO(srcversion, "E8F9ADCAD37E87B60B3C5EF");
