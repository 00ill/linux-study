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
	{ 0x36b4d6c1, "media_devnode_remove" },
	{ 0x71c32f71, "vb2_core_expbuf_dmabuf" },
	{ 0x77731343, "video_ioctl2" },
	{ 0xc723ad01, "media_device_unregister" },
	{ 0x6fa2a386, "vc_sm_cma_int_handle" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x892dedb8, "vb2_queue_release" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xa25a1ff2, "vb2_ioctl_streamoff" },
	{ 0x8c9c42aa, "mmal_vchi_buffer_cleanup" },
	{ 0x53679031, "vb2_ioctl_expbuf" },
	{ 0x699fa38d, "media_device_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x61f8a1ea, "vchiq_mmal_init" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x7bdb19c9, "vchiq_mmal_submit_buffer" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0xa86fec6, "vb2_dma_contig_memops" },
	{ 0x53b52981, "vc_sm_cma_free" },
	{ 0xef3c20fa, "__media_device_register" },
	{ 0x23027153, "vb2_ioctl_querybuf" },
	{ 0x1044899d, "vchiq_mmal_port_enable" },
	{ 0x1708872e, "v4l2_fh_open" },
	{ 0x81e7ebee, "media_create_intf_link" },
	{ 0x7a23d09, "media_entity_remove_links" },
	{ 0x37a84f24, "media_create_pad_link" },
	{ 0x21524ae9, "mmal_vchi_buffer_init" },
	{ 0x122c3a7e, "_printk" },
	{ 0x5c35c536, "vchiq_mmal_component_disable" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9ba53144, "video_devdata" },
	{ 0xc715c568, "vb2_fop_release" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xce7d6ea2, "vchiq_mmal_component_init" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xb1c4027b, "media_device_register_entity" },
	{ 0xb053f582, "media_device_cleanup" },
	{ 0x73577d20, "vchiq_mmal_finalise" },
	{ 0x3e23b10, "vb2_ioctl_dqbuf" },
	{ 0x669c413b, "_dev_err" },
	{ 0xe22e2643, "vb2_ioctl_create_bufs" },
	{ 0xac8e4c37, "v4l2_ctrl_new_custom" },
	{ 0x5b3e220d, "vb2_ioctl_prepare_buf" },
	{ 0xeea20455, "vchiq_mmal_component_enable" },
	{ 0x941da81d, "dma_buf_get" },
	{ 0x70123581, "dma_buf_put" },
	{ 0x72764206, "vb2_buffer_done" },
	{ 0x179f2fe4, "vb2_plane_vaddr" },
	{ 0xaafe5e32, "v4l2_ctrl_subscribe_event" },
	{ 0xa66b2564, "vc_sm_cma_import_dmabuf" },
	{ 0xa3732c8f, "media_entity_pads_init" },
	{ 0x5555588e, "video_unregister_device" },
	{ 0x89f0994, "vchiq_driver_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x79926f0a, "v4l2_event_subscribe" },
	{ 0xc604f82f, "vb2_ioctl_qbuf" },
	{ 0x8c4d9c9f, "vb2_fop_mmap" },
	{ 0x52d022d0, "vchiq_driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x136249d1, "vchiq_mmal_component_finalise" },
	{ 0x5f3e0ef5, "media_remove_intf_links" },
	{ 0x42db93b6, "v4l2_device_register" },
	{ 0x76e09157, "dma_set_coherent_mask" },
	{ 0xb68f376, "__video_register_device" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x9d6f715c, "vb2_ioctl_streamon" },
	{ 0x53e0ec70, "vb2_fop_poll" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0xf64c3bb1, "v4l2_device_unregister" },
	{ 0xe0d6e4b1, "vb2_wait_for_all_buffers" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x79a9b506, "vchiq_mmal_port_parameter_set" },
	{ 0x7cb3eec3, "dma_set_mask" },
	{ 0x7670b43, "media_devnode_create" },
	{ 0x41576788, "media_device_unregister_entity" },
	{ 0x3dda0032, "video_device_release_empty" },
	{ 0x34043fac, "vchiq_mmal_port_disable" },
	{ 0xfdcd2ee2, "v4l2_event_unsubscribe" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x16fbb6ad, "vchiq_mmal_port_set_format" },
	{ 0xecf2ff56, "vb2_ioctl_reqbufs" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,bcm2835-mmal-vchiq,mc,videobuf2-common,videodev,vc-sm-cma,videobuf2-dma-contig");


MODULE_INFO(srcversion, "33ACA765899918C468CD558");
