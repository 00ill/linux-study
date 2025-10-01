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
	{ 0x8dddc5e0, "platform_device_register" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x23e91bcc, "platform_device_unregister" },
	{ 0x122c3a7e, "_printk" },
	{ 0xc723ad01, "media_device_unregister" },
	{ 0xf13ff84d, "v4l2_m2m_unregister_media_controller" },
	{ 0x5555588e, "video_unregister_device" },
	{ 0x74a1dae7, "v4l2_ctrl_request_complete" },
	{ 0x64c69a90, "v4l2_m2m_get_vq" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf64c3bb1, "v4l2_device_unregister" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0xb053f582, "media_device_cleanup" },
	{ 0x37a0cba, "kfree" },
	{ 0x9ba53144, "video_devdata" },
	{ 0x73a242d7, "v4l2_fh_del" },
	{ 0x1d753a7d, "v4l2_fh_exit" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2aab2b24, "v4l2_m2m_ctx_release" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x91747f5f, "vb2_vmalloc_memops" },
	{ 0x5a40e7cd, "vb2_queue_init" },
	{ 0x23778662, "v4l2_m2m_buf_queue" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x68d732fa, "v4l2_m2m_buf_remove" },
	{ 0x72764206, "vb2_buffer_done" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6ed11c02, "v4l2_m2m_next_buf" },
	{ 0x8666098b, "v4l2_ctrl_request_setup" },
	{ 0x179f2fe4, "vb2_plane_vaddr" },
	{ 0x4d7bca24, "v4l2_m2m_buf_copy_metadata" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa32ff581, "v4l2_m2m_job_finish" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x42db93b6, "v4l2_device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdcb764ad, "memset" },
	{ 0x730f2eae, "v4l2_m2m_init" },
	{ 0x699fa38d, "media_device_init" },
	{ 0xb68f376, "__video_register_device" },
	{ 0x5e877c66, "v4l2_m2m_register_media_controller" },
	{ 0xef3c20fa, "__media_device_register" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x6d77ce8a, "v4l2_fh_init" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0xac8e4c37, "v4l2_ctrl_new_custom" },
	{ 0xc38b7ac0, "v4l2_ctrl_handler_setup" },
	{ 0x53a625fe, "v4l2_m2m_ctx_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x70f392ea, "v4l2_fh_add" },
	{ 0x9c63214c, "vb2_ops_wait_prepare" },
	{ 0x2be10869, "vb2_ops_wait_finish" },
	{ 0x8adec706, "v4l2_m2m_fop_poll" },
	{ 0x77731343, "video_ioctl2" },
	{ 0xca440079, "v4l2_m2m_fop_mmap" },
	{ 0xd24b6e76, "v4l2_m2m_ioctl_reqbufs" },
	{ 0x7b150c5b, "v4l2_m2m_ioctl_querybuf" },
	{ 0x5497cdde, "v4l2_m2m_ioctl_qbuf" },
	{ 0x5d7c9653, "v4l2_m2m_ioctl_expbuf" },
	{ 0xc9ca6aaf, "v4l2_m2m_ioctl_dqbuf" },
	{ 0x8b830997, "v4l2_m2m_ioctl_create_bufs" },
	{ 0x4c6ff191, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0x1dd64061, "v4l2_m2m_ioctl_streamon" },
	{ 0xfab2ead2, "v4l2_m2m_ioctl_streamoff" },
	{ 0xaafe5e32, "v4l2_ctrl_subscribe_event" },
	{ 0xfdcd2ee2, "v4l2_event_unsubscribe" },
	{ 0x3fd552a2, "vb2_request_validate" },
	{ 0x2b2aa78a, "v4l2_m2m_request_queue" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mc,v4l2-mem2mem,videodev,videobuf2-vmalloc,videobuf2-v4l2,videobuf2-common");


MODULE_INFO(srcversion, "D7092427C5312E7046205B9");
