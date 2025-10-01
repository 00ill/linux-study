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
	{ 0xa7ab474b, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc40f5484, "snd_card_register" },
	{ 0x95f6a55f, "snd_card_free" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x2be10869, "vb2_ops_wait_finish" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x23027153, "vb2_ioctl_querybuf" },
	{ 0x1708872e, "v4l2_fh_open" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbf66bf88, "vb2_video_unregister_device" },
	{ 0x87b55f30, "usb_clear_halt" },
	{ 0xc38b7ac0, "v4l2_ctrl_handler_setup" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x9ba53144, "video_devdata" },
	{ 0xc715c568, "vb2_fop_release" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x306f753, "snd_card_new" },
	{ 0x3e23b10, "vb2_ioctl_dqbuf" },
	{ 0xe22e2643, "vb2_ioctl_create_bufs" },
	{ 0x5b3e220d, "vb2_ioctl_prepare_buf" },
	{ 0xb5c0ffa, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x624ab268, "snd_card_free_when_closed" },
	{ 0x72764206, "vb2_buffer_done" },
	{ 0x179f2fe4, "vb2_plane_vaddr" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0x738a0e18, "snd_pcm_set_ops" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xc604f82f, "vb2_ioctl_qbuf" },
	{ 0x8c4d9c9f, "vb2_fop_mmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x91747f5f, "vb2_vmalloc_memops" },
	{ 0x9a0af284, "snd_pcm_set_managed_buffer_all" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xe0d8f4f7, "v4l2_device_disconnect" },
	{ 0x23e24800, "vb2_fop_read" },
	{ 0x42db93b6, "v4l2_device_register" },
	{ 0xb68f376, "__video_register_device" },
	{ 0x9c63214c, "vb2_ops_wait_prepare" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9d6f715c, "vb2_ioctl_streamon" },
	{ 0x53e0ec70, "vb2_fop_poll" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0xf64c3bb1, "v4l2_device_unregister" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xe6bccba, "_snd_pcm_stream_lock_irqsave" },
	{ 0xc9098c3d, "snd_pcm_period_elapsed" },
	{ 0x3dda0032, "video_device_release_empty" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xecf2ff56, "vb2_ioctl_reqbufs" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,snd-pcm,snd,videobuf2-common,videobuf2-vmalloc");

MODULE_ALIAS("usb:v1B71p3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F71p3301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F71p3306d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "10D119B84DF9897CE118083");
