#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(v4l2_m2m_get_vq, "", "");
KSYMTAB_FUNC(v4l2_m2m_next_buf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_last_buf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_buf_remove, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_buf_remove_by_buf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_buf_remove_by_idx, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_get_curr_priv, "", "");
KSYMTAB_FUNC(v4l2_m2m_try_schedule, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_job_finish, "", "");
KSYMTAB_FUNC(v4l2_m2m_buf_done_and_job_finish, "", "");
KSYMTAB_FUNC(v4l2_m2m_suspend, "", "");
KSYMTAB_FUNC(v4l2_m2m_resume, "", "");
KSYMTAB_FUNC(v4l2_m2m_reqbufs, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_querybuf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_last_buffer_done, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_update_start_streaming_state, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_update_stop_streaming_state, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_qbuf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_dqbuf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_prepare_buf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_create_bufs, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_expbuf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_streamon, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_streamoff, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_poll, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_mmap, "", "");
KSYMTAB_FUNC(v4l2_m2m_unregister_media_controller, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_register_media_controller, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_init, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_release, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ctx_init, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ctx_release, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_buf_queue, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_buf_copy_metadata, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_request_queue, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_reqbufs, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_create_bufs, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_remove_bufs, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_querybuf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_qbuf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_dqbuf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_prepare_buf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_expbuf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_streamon, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_streamoff, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_try_encoder_cmd, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_try_decoder_cmd, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_encoder_cmd, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_decoder_cmd, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_encoder_cmd, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_decoder_cmd, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_stateless_try_decoder_cmd, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_stateless_decoder_cmd, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_fop_mmap, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_fop_poll, "_gpl", "");

SYMBOL_CRC(v4l2_m2m_get_vq, 0x64c69a90, "");
SYMBOL_CRC(v4l2_m2m_next_buf, 0x6ed11c02, "_gpl");
SYMBOL_CRC(v4l2_m2m_last_buf, 0xc2e65541, "_gpl");
SYMBOL_CRC(v4l2_m2m_buf_remove, 0x68d732fa, "_gpl");
SYMBOL_CRC(v4l2_m2m_buf_remove_by_buf, 0xfdaa009e, "_gpl");
SYMBOL_CRC(v4l2_m2m_buf_remove_by_idx, 0x2e2ff7ea, "_gpl");
SYMBOL_CRC(v4l2_m2m_get_curr_priv, 0x459e133f, "");
SYMBOL_CRC(v4l2_m2m_try_schedule, 0x3eb9e6fe, "_gpl");
SYMBOL_CRC(v4l2_m2m_job_finish, 0xa32ff581, "");
SYMBOL_CRC(v4l2_m2m_buf_done_and_job_finish, 0xb8468fde, "");
SYMBOL_CRC(v4l2_m2m_suspend, 0xf626dd03, "");
SYMBOL_CRC(v4l2_m2m_resume, 0x5352d022, "");
SYMBOL_CRC(v4l2_m2m_reqbufs, 0x0dd1ee43, "_gpl");
SYMBOL_CRC(v4l2_m2m_querybuf, 0x1906c3d2, "_gpl");
SYMBOL_CRC(v4l2_m2m_last_buffer_done, 0xa171c136, "_gpl");
SYMBOL_CRC(v4l2_m2m_update_start_streaming_state, 0xd7d62f8f, "_gpl");
SYMBOL_CRC(v4l2_m2m_update_stop_streaming_state, 0x3fd1477b, "_gpl");
SYMBOL_CRC(v4l2_m2m_qbuf, 0x37ac051e, "_gpl");
SYMBOL_CRC(v4l2_m2m_dqbuf, 0x78909ed5, "_gpl");
SYMBOL_CRC(v4l2_m2m_prepare_buf, 0x41da824e, "_gpl");
SYMBOL_CRC(v4l2_m2m_create_bufs, 0xce23b667, "_gpl");
SYMBOL_CRC(v4l2_m2m_expbuf, 0xa174ce71, "_gpl");
SYMBOL_CRC(v4l2_m2m_streamon, 0xe1c2b5ae, "_gpl");
SYMBOL_CRC(v4l2_m2m_streamoff, 0x3b39799b, "_gpl");
SYMBOL_CRC(v4l2_m2m_poll, 0x7f5a2abf, "_gpl");
SYMBOL_CRC(v4l2_m2m_mmap, 0x08e50446, "");
SYMBOL_CRC(v4l2_m2m_unregister_media_controller, 0xf13ff84d, "_gpl");
SYMBOL_CRC(v4l2_m2m_register_media_controller, 0x5e877c66, "_gpl");
SYMBOL_CRC(v4l2_m2m_init, 0x730f2eae, "_gpl");
SYMBOL_CRC(v4l2_m2m_release, 0xc6fca5ad, "_gpl");
SYMBOL_CRC(v4l2_m2m_ctx_init, 0x53a625fe, "_gpl");
SYMBOL_CRC(v4l2_m2m_ctx_release, 0x2aab2b24, "_gpl");
SYMBOL_CRC(v4l2_m2m_buf_queue, 0x23778662, "_gpl");
SYMBOL_CRC(v4l2_m2m_buf_copy_metadata, 0x4d7bca24, "_gpl");
SYMBOL_CRC(v4l2_m2m_request_queue, 0x2b2aa78a, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_reqbufs, 0xd24b6e76, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_create_bufs, 0x8b830997, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_remove_bufs, 0xd154f6e8, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_querybuf, 0x7b150c5b, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_qbuf, 0x5497cdde, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_dqbuf, 0xc9ca6aaf, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_prepare_buf, 0x4c6ff191, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_expbuf, 0x5d7c9653, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_streamon, 0x1dd64061, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_streamoff, 0xfab2ead2, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_try_encoder_cmd, 0x1d83ac00, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_try_decoder_cmd, 0xb29d8b99, "_gpl");
SYMBOL_CRC(v4l2_m2m_encoder_cmd, 0x809f50f9, "_gpl");
SYMBOL_CRC(v4l2_m2m_decoder_cmd, 0x096a0684, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_encoder_cmd, 0x28fee7fd, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_decoder_cmd, 0x77a8fab6, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_stateless_try_decoder_cmd, 0xc9f2297a, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_stateless_decoder_cmd, 0xcf79f779, "_gpl");
SYMBOL_CRC(v4l2_m2m_fop_mmap, 0xca440079, "_gpl");
SYMBOL_CRC(v4l2_m2m_fop_poll, 0x8adec706, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x122c3a7e, "_printk" },
	{ 0x72764206, "vb2_buffer_done" },
	{ 0xe2964344, "__wake_up" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc51cfd5e, "vb2_mmap" },
	{ 0x5f3e0ef5, "media_remove_intf_links" },
	{ 0x36b4d6c1, "media_devnode_remove" },
	{ 0x7a23d09, "media_entity_remove_links" },
	{ 0x41576788, "media_device_unregister_entity" },
	{ 0x37a0cba, "kfree" },
	{ 0x98cf60b3, "strlen" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa3732c8f, "media_entity_pads_init" },
	{ 0xb1c4027b, "media_device_register_entity" },
	{ 0x37a84f24, "media_create_pad_link" },
	{ 0x7670b43, "media_devnode_create" },
	{ 0x81e7ebee, "media_create_intf_link" },
	{ 0x892dedb8, "vb2_queue_release" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9ba53144, "video_devdata" },
	{ 0x3bc8f354, "v4l2_event_pending" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xae792af4, "vb2_create_bufs" },
	{ 0x7b8fb0f6, "vb2_expbuf" },
	{ 0x7595bde1, "vb2_reqbufs" },
	{ 0xa5e6769, "vb2_core_remove_bufs" },
	{ 0xed913e57, "vb2_querybuf" },
	{ 0xe2c57f2, "vb2_dqbuf" },
	{ 0xcaa8f4f3, "vb2_prepare_buf" },
	{ 0x3d98ad32, "vb2_streamoff" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2df51f35, "vb2_streamon" },
	{ 0xb4ffbc63, "vb2_request_object_is_buffer" },
	{ 0x8e51572f, "vb2_qbuf" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-common,mc,videobuf2-v4l2,videodev");


MODULE_INFO(srcversion, "94AC155A2B8340FA75D888B");
