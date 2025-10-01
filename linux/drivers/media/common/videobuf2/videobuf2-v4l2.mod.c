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

KSYMTAB_FUNC(vb2_find_buffer, "_gpl", "");
KSYMTAB_FUNC(vb2_querybuf, "", "");
KSYMTAB_FUNC(vb2_reqbufs, "_gpl", "");
KSYMTAB_FUNC(vb2_prepare_buf, "_gpl", "");
KSYMTAB_FUNC(vb2_create_bufs, "_gpl", "");
KSYMTAB_FUNC(vb2_qbuf, "_gpl", "");
KSYMTAB_FUNC(vb2_dqbuf, "_gpl", "");
KSYMTAB_FUNC(vb2_streamon, "_gpl", "");
KSYMTAB_FUNC(vb2_streamoff, "_gpl", "");
KSYMTAB_FUNC(vb2_expbuf, "_gpl", "");
KSYMTAB_FUNC(vb2_queue_init_name, "_gpl", "");
KSYMTAB_FUNC(vb2_queue_init, "_gpl", "");
KSYMTAB_FUNC(vb2_queue_release, "_gpl", "");
KSYMTAB_FUNC(vb2_queue_change_type, "_gpl", "");
KSYMTAB_FUNC(vb2_poll, "_gpl", "");
KSYMTAB_FUNC(vb2_ioctl_remove_bufs, "_gpl", "");
KSYMTAB_FUNC(vb2_ioctl_reqbufs, "_gpl", "");
KSYMTAB_FUNC(vb2_ioctl_create_bufs, "_gpl", "");
KSYMTAB_FUNC(vb2_ioctl_prepare_buf, "_gpl", "");
KSYMTAB_FUNC(vb2_ioctl_querybuf, "_gpl", "");
KSYMTAB_FUNC(vb2_ioctl_qbuf, "_gpl", "");
KSYMTAB_FUNC(vb2_ioctl_dqbuf, "_gpl", "");
KSYMTAB_FUNC(vb2_ioctl_streamon, "_gpl", "");
KSYMTAB_FUNC(vb2_ioctl_streamoff, "_gpl", "");
KSYMTAB_FUNC(vb2_ioctl_expbuf, "_gpl", "");
KSYMTAB_FUNC(vb2_fop_mmap, "_gpl", "");
KSYMTAB_FUNC(_vb2_fop_release, "_gpl", "");
KSYMTAB_FUNC(vb2_fop_release, "_gpl", "");
KSYMTAB_FUNC(vb2_fop_write, "_gpl", "");
KSYMTAB_FUNC(vb2_fop_read, "_gpl", "");
KSYMTAB_FUNC(vb2_fop_poll, "_gpl", "");
KSYMTAB_FUNC(vb2_video_unregister_device, "_gpl", "");
KSYMTAB_FUNC(vb2_ops_wait_prepare, "_gpl", "");
KSYMTAB_FUNC(vb2_ops_wait_finish, "_gpl", "");
KSYMTAB_FUNC(vb2_request_validate, "_gpl", "");
KSYMTAB_FUNC(vb2_request_queue, "_gpl", "");

SYMBOL_CRC(vb2_find_buffer, 0x6d7331b6, "_gpl");
SYMBOL_CRC(vb2_querybuf, 0xed913e57, "");
SYMBOL_CRC(vb2_reqbufs, 0x7595bde1, "_gpl");
SYMBOL_CRC(vb2_prepare_buf, 0xcaa8f4f3, "_gpl");
SYMBOL_CRC(vb2_create_bufs, 0xae792af4, "_gpl");
SYMBOL_CRC(vb2_qbuf, 0x8e51572f, "_gpl");
SYMBOL_CRC(vb2_dqbuf, 0x0e2c57f2, "_gpl");
SYMBOL_CRC(vb2_streamon, 0x2df51f35, "_gpl");
SYMBOL_CRC(vb2_streamoff, 0x3d98ad32, "_gpl");
SYMBOL_CRC(vb2_expbuf, 0x7b8fb0f6, "_gpl");
SYMBOL_CRC(vb2_queue_init_name, 0xbe28e132, "_gpl");
SYMBOL_CRC(vb2_queue_init, 0x5a40e7cd, "_gpl");
SYMBOL_CRC(vb2_queue_release, 0x892dedb8, "_gpl");
SYMBOL_CRC(vb2_queue_change_type, 0x7d679fc2, "_gpl");
SYMBOL_CRC(vb2_poll, 0x54ee083f, "_gpl");
SYMBOL_CRC(vb2_ioctl_remove_bufs, 0x383da949, "_gpl");
SYMBOL_CRC(vb2_ioctl_reqbufs, 0xecf2ff56, "_gpl");
SYMBOL_CRC(vb2_ioctl_create_bufs, 0xe22e2643, "_gpl");
SYMBOL_CRC(vb2_ioctl_prepare_buf, 0x5b3e220d, "_gpl");
SYMBOL_CRC(vb2_ioctl_querybuf, 0x23027153, "_gpl");
SYMBOL_CRC(vb2_ioctl_qbuf, 0xc604f82f, "_gpl");
SYMBOL_CRC(vb2_ioctl_dqbuf, 0x03e23b10, "_gpl");
SYMBOL_CRC(vb2_ioctl_streamon, 0x9d6f715c, "_gpl");
SYMBOL_CRC(vb2_ioctl_streamoff, 0xa25a1ff2, "_gpl");
SYMBOL_CRC(vb2_ioctl_expbuf, 0x53679031, "_gpl");
SYMBOL_CRC(vb2_fop_mmap, 0x8c4d9c9f, "_gpl");
SYMBOL_CRC(_vb2_fop_release, 0xe3dc0d51, "_gpl");
SYMBOL_CRC(vb2_fop_release, 0xc715c568, "_gpl");
SYMBOL_CRC(vb2_fop_write, 0xb09c62ae, "_gpl");
SYMBOL_CRC(vb2_fop_read, 0x23e24800, "_gpl");
SYMBOL_CRC(vb2_fop_poll, 0x53e0ec70, "_gpl");
SYMBOL_CRC(vb2_video_unregister_device, 0xbf66bf88, "_gpl");
SYMBOL_CRC(vb2_ops_wait_prepare, 0x9c63214c, "_gpl");
SYMBOL_CRC(vb2_ops_wait_finish, 0x2be10869, "_gpl");
SYMBOL_CRC(vb2_request_validate, 0x3fd552a2, "_gpl");
SYMBOL_CRC(vb2_request_queue, 0x2d4b94e1, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xfe76ae1f, "vb2_verify_memory_type" },
	{ 0xae4f7ac4, "vb2_core_reqbufs" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0xa05af789, "vb2_core_create_bufs" },
	{ 0x8f9f878b, "vb2_core_dqbuf" },
	{ 0x122c3a7e, "_printk" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x6703705e, "vb2_core_queue_init" },
	{ 0xabf082ab, "vb2_core_queue_release" },
	{ 0x9ba53144, "video_devdata" },
	{ 0xba4daa24, "vb2_core_poll" },
	{ 0x3bc8f354, "v4l2_event_pending" },
	{ 0xa5e6769, "vb2_core_remove_bufs" },
	{ 0xc51cfd5e, "vb2_mmap" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x669eb6bd, "v4l2_fh_release" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xd810e4a3, "vb2_write" },
	{ 0x1551cbb, "vb2_read" },
	{ 0x3c9e91b2, "vb2_request_buffer_cnt" },
	{ 0x74c065c8, "vb2_core_streamon" },
	{ 0x986d9922, "vb2_core_streamoff" },
	{ 0x99ed6ef6, "get_device" },
	{ 0x5555588e, "video_unregister_device" },
	{ 0x36dc6ece, "put_device" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xc1b39fea, "vb2_buffer_in_use" },
	{ 0xdcb764ad, "memset" },
	{ 0xa995145f, "vb2_core_expbuf" },
	{ 0xd85e2196, "vb2_core_querybuf" },
	{ 0x73f79db2, "media_request_get_by_fd" },
	{ 0xae62c17, "media_request_put" },
	{ 0x31015211, "vb2_core_prepare_buf" },
	{ 0x176b882a, "vb2_core_qbuf" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-common,videodev,mc");


MODULE_INFO(srcversion, "26AE6D11B113FFD4332B362");
