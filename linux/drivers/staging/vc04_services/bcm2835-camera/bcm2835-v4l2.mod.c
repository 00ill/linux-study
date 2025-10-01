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

MODULE_INFO(staging, "Y");



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5a40e7cd, "vb2_queue_init" },
	{ 0x4744b217, "vchiq_mmal_port_parameter_get" },
	{ 0x77731343, "video_ioctl2" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xa25a1ff2, "vb2_ioctl_streamoff" },
	{ 0x8c9c42aa, "mmal_vchi_buffer_cleanup" },
	{ 0x53679031, "vb2_ioctl_expbuf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x61f8a1ea, "vchiq_mmal_init" },
	{ 0x2be10869, "vb2_ops_wait_finish" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x7bdb19c9, "vchiq_mmal_submit_buffer" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6192e1a2, "vchiq_mmal_version" },
	{ 0x37a0cba, "kfree" },
	{ 0x23027153, "vb2_ioctl_querybuf" },
	{ 0x1044899d, "vchiq_mmal_port_enable" },
	{ 0x1708872e, "v4l2_fh_open" },
	{ 0x21524ae9, "mmal_vchi_buffer_init" },
	{ 0x960d0a9, "v4l2_ctrl_auto_cluster" },
	{ 0x122c3a7e, "_printk" },
	{ 0x5c35c536, "vchiq_mmal_component_disable" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9ba53144, "video_devdata" },
	{ 0xc715c568, "vb2_fop_release" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xce7d6ea2, "vchiq_mmal_component_init" },
	{ 0x9e781eac, "v4l2_ctrl_new_int_menu" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x73577d20, "vchiq_mmal_finalise" },
	{ 0x3e23b10, "vb2_ioctl_dqbuf" },
	{ 0x669c413b, "_dev_err" },
	{ 0xe22e2643, "vb2_ioctl_create_bufs" },
	{ 0x23522c33, "v4l2_device_set_name" },
	{ 0x5b3e220d, "vb2_ioctl_prepare_buf" },
	{ 0xeea20455, "vchiq_mmal_component_enable" },
	{ 0x72764206, "vb2_buffer_done" },
	{ 0x179f2fe4, "vb2_plane_vaddr" },
	{ 0xaafe5e32, "v4l2_ctrl_subscribe_event" },
	{ 0x5555588e, "video_unregister_device" },
	{ 0x89f0994, "vchiq_driver_register" },
	{ 0xcf7e73c2, "vchiq_mmal_port_connect_tunnel" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc604f82f, "vb2_ioctl_qbuf" },
	{ 0x8c4d9c9f, "vb2_fop_mmap" },
	{ 0x52d022d0, "vchiq_driver_unregister" },
	{ 0x91747f5f, "vb2_vmalloc_memops" },
	{ 0xdcb764ad, "memset" },
	{ 0x136249d1, "vchiq_mmal_component_finalise" },
	{ 0x1ae48415, "v4l2_ctrl_new_std_menu" },
	{ 0x23e24800, "vb2_fop_read" },
	{ 0x42db93b6, "v4l2_device_register" },
	{ 0x76e09157, "dma_set_coherent_mask" },
	{ 0xb68f376, "__video_register_device" },
	{ 0x9c63214c, "vb2_ops_wait_prepare" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9d6f715c, "vb2_ioctl_streamon" },
	{ 0x53e0ec70, "vb2_fop_poll" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0xf64c3bb1, "v4l2_device_unregister" },
	{ 0x79a9b506, "vchiq_mmal_port_parameter_set" },
	{ 0x7cb3eec3, "dma_set_mask" },
	{ 0x41f63b90, "v4l2_ctrl_log_status" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x3dda0032, "video_device_release_empty" },
	{ 0xf9a482f9, "msleep" },
	{ 0x34043fac, "vchiq_mmal_port_disable" },
	{ 0xfdcd2ee2, "v4l2_event_unsubscribe" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x16fbb6ad, "vchiq_mmal_port_set_format" },
	{ 0xecf2ff56, "vb2_ioctl_reqbufs" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,bcm2835-mmal-vchiq,videodev,videobuf2-common,videobuf2-vmalloc");

MODULE_ALIAS("vchiq:bcm2835-camera");

MODULE_INFO(srcversion, "69720DA468BCB3380C18231");
