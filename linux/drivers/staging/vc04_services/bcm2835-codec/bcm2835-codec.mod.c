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
	{ 0x730f2eae, "v4l2_m2m_init" },
	{ 0x5a40e7cd, "vb2_queue_init" },
	{ 0x1d753a7d, "v4l2_fh_exit" },
	{ 0x4744b217, "vchiq_mmal_port_parameter_get" },
	{ 0xa32ff581, "v4l2_m2m_job_finish" },
	{ 0x71c32f71, "vb2_core_expbuf_dmabuf" },
	{ 0x77731343, "video_ioctl2" },
	{ 0xc723ad01, "media_device_unregister" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x8c9c42aa, "mmal_vchi_buffer_cleanup" },
	{ 0x699fa38d, "media_device_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x73a242d7, "v4l2_fh_del" },
	{ 0x2aab2b24, "v4l2_m2m_ctx_release" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x70f392ea, "v4l2_fh_add" },
	{ 0x61f8a1ea, "vchiq_mmal_init" },
	{ 0x2be10869, "vb2_ops_wait_finish" },
	{ 0x68d732fa, "v4l2_m2m_buf_remove" },
	{ 0x10262a22, "v4l2_src_change_event_subscribe" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x7bdb19c9, "vchiq_mmal_submit_buffer" },
	{ 0x37a0cba, "kfree" },
	{ 0xa86fec6, "vb2_dma_contig_memops" },
	{ 0xef3c20fa, "__media_device_register" },
	{ 0x1044899d, "vchiq_mmal_port_enable" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5d7c9653, "v4l2_m2m_ioctl_expbuf" },
	{ 0x21524ae9, "mmal_vchi_buffer_init" },
	{ 0x7b150c5b, "v4l2_m2m_ioctl_querybuf" },
	{ 0x122c3a7e, "_printk" },
	{ 0x5c35c536, "vchiq_mmal_component_disable" },
	{ 0xc38b7ac0, "v4l2_ctrl_handler_setup" },
	{ 0x23778662, "v4l2_m2m_buf_queue" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9ba53144, "video_devdata" },
	{ 0x8adec706, "v4l2_m2m_fop_poll" },
	{ 0x5497cdde, "v4l2_m2m_ioctl_qbuf" },
	{ 0xce7d6ea2, "vchiq_mmal_component_init" },
	{ 0x64c69a90, "v4l2_m2m_get_vq" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x3ac81b38, "__v4l2_ctrl_s_ctrl" },
	{ 0xb053f582, "media_device_cleanup" },
	{ 0x73577d20, "vchiq_mmal_finalise" },
	{ 0x669c413b, "_dev_err" },
	{ 0xeea20455, "vchiq_mmal_component_enable" },
	{ 0xf13ff84d, "v4l2_m2m_unregister_media_controller" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x941da81d, "dma_buf_get" },
	{ 0x9166fada, "strncpy" },
	{ 0x70123581, "dma_buf_put" },
	{ 0x72764206, "vb2_buffer_done" },
	{ 0x179f2fe4, "vb2_plane_vaddr" },
	{ 0xaafe5e32, "v4l2_ctrl_subscribe_event" },
	{ 0x6d77ce8a, "v4l2_fh_init" },
	{ 0xd24b6e76, "v4l2_m2m_ioctl_reqbufs" },
	{ 0x5555588e, "video_unregister_device" },
	{ 0x89f0994, "vchiq_driver_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xfab2ead2, "v4l2_m2m_ioctl_streamoff" },
	{ 0x79926f0a, "v4l2_event_subscribe" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x52d022d0, "vchiq_driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x136249d1, "vchiq_mmal_component_finalise" },
	{ 0x8b830997, "v4l2_m2m_ioctl_create_bufs" },
	{ 0x1ae48415, "v4l2_ctrl_new_std_menu" },
	{ 0x42db93b6, "v4l2_device_register" },
	{ 0x1dd64061, "v4l2_m2m_ioctl_streamon" },
	{ 0x76e09157, "dma_set_coherent_mask" },
	{ 0xca440079, "v4l2_m2m_fop_mmap" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0xb68f376, "__video_register_device" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0x9c63214c, "vb2_ops_wait_prepare" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0xf64c3bb1, "v4l2_device_unregister" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x79a9b506, "vchiq_mmal_port_parameter_set" },
	{ 0x7cb3eec3, "dma_set_mask" },
	{ 0x53a625fe, "v4l2_m2m_ctx_init" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xef1a1238, "v4l2_event_queue_fh" },
	{ 0x3dda0032, "video_device_release_empty" },
	{ 0x5e877c66, "v4l2_m2m_register_media_controller" },
	{ 0xc9ca6aaf, "v4l2_m2m_ioctl_dqbuf" },
	{ 0x34043fac, "vchiq_mmal_port_disable" },
	{ 0xfdcd2ee2, "v4l2_event_unsubscribe" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x16fbb6ad, "vchiq_mmal_port_set_format" },
	{ 0x4c6ff191, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "v4l2-mem2mem,videobuf2-v4l2,videodev,bcm2835-mmal-vchiq,videobuf2-common,mc,videobuf2-dma-contig");


MODULE_INFO(srcversion, "52907E407EBC446C635FD1B");
