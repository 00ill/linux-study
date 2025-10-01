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

KSYMTAB_DATA(gspca_debug, "", "");
KSYMTAB_FUNC(gspca_frame_add, "", "");
KSYMTAB_FUNC(gspca_dev_probe2, "", "");
KSYMTAB_FUNC(gspca_dev_probe, "", "");
KSYMTAB_FUNC(gspca_disconnect, "", "");
KSYMTAB_FUNC(gspca_suspend, "", "");
KSYMTAB_FUNC(gspca_resume, "", "");
KSYMTAB_FUNC(gspca_expo_autogain, "", "");
KSYMTAB_FUNC(gspca_coarse_grained_expo_autogain, "", "");

SYMBOL_CRC(gspca_debug, 0x9670af2c, "");
SYMBOL_CRC(gspca_frame_add, 0x9fc423b3, "");
SYMBOL_CRC(gspca_dev_probe2, 0x77f89cb5, "");
SYMBOL_CRC(gspca_dev_probe, 0x454f29f6, "");
SYMBOL_CRC(gspca_disconnect, 0xb29b3eb6, "");
SYMBOL_CRC(gspca_suspend, 0x2a8beff7, "");
SYMBOL_CRC(gspca_resume, 0x73e429d5, "");
SYMBOL_CRC(gspca_expo_autogain, 0xb01f70f0, "");
SYMBOL_CRC(gspca_coarse_grained_expo_autogain, 0x2191ef29, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5a40e7cd, "vb2_queue_init" },
	{ 0x99c44b73, "input_allocate_device" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x77731343, "video_ioctl2" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0xade31a66, "v4l2_device_put" },
	{ 0xa25a1ff2, "vb2_ioctl_streamoff" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x98434f46, "usb_alloc_coherent" },
	{ 0x53679031, "vb2_ioctl_expbuf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe228da49, "usb_ifnum_to_if" },
	{ 0x2be10869, "vb2_ops_wait_finish" },
	{ 0x32a0c53, "input_unregister_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x23027153, "vb2_ioctl_querybuf" },
	{ 0x1708872e, "v4l2_fh_open" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb727b479, "input_free_device" },
	{ 0x122c3a7e, "_printk" },
	{ 0x87b55f30, "usb_clear_halt" },
	{ 0xc38b7ac0, "v4l2_ctrl_handler_setup" },
	{ 0xcab72f31, "input_register_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9ba53144, "video_devdata" },
	{ 0xb33d20ed, "vb2_queue_error" },
	{ 0xc715c568, "vb2_fop_release" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x3ac81b38, "__v4l2_ctrl_s_ctrl" },
	{ 0x3e23b10, "vb2_ioctl_dqbuf" },
	{ 0xd8f2fce2, "usb_free_coherent" },
	{ 0xe22e2643, "vb2_ioctl_create_bufs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x72764206, "vb2_buffer_done" },
	{ 0x179f2fe4, "vb2_plane_vaddr" },
	{ 0xaafe5e32, "v4l2_ctrl_subscribe_event" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0x5555588e, "video_unregister_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc604f82f, "vb2_ioctl_qbuf" },
	{ 0x8c4d9c9f, "vb2_fop_mmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x91747f5f, "vb2_vmalloc_memops" },
	{ 0xdcb764ad, "memset" },
	{ 0xe0d8f4f7, "v4l2_device_disconnect" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x23e24800, "vb2_fop_read" },
	{ 0x42db93b6, "v4l2_device_register" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb68f376, "__video_register_device" },
	{ 0x9c63214c, "vb2_ops_wait_prepare" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9d6f715c, "vb2_ioctl_streamon" },
	{ 0x53e0ec70, "vb2_fop_poll" },
	{ 0xa3f622a6, "v4l2_ctrl_g_ctrl" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0xf64c3bb1, "v4l2_device_unregister" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x3dda0032, "video_device_release_empty" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfdcd2ee2, "v4l2_event_unsubscribe" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xecf2ff56, "vb2_ioctl_reqbufs" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-common,videobuf2-vmalloc");


MODULE_INFO(srcversion, "C0F5C38121EAAFD38E0612A");
