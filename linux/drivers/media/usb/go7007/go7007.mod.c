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

KSYMTAB_FUNC(go7007_read_interrupt, "", "");
KSYMTAB_FUNC(go7007_read_addr, "", "");
KSYMTAB_FUNC(go7007_boot_encoder, "", "");
KSYMTAB_FUNC(go7007_register_encoder, "", "");
KSYMTAB_FUNC(go7007_parse_video_stream, "", "");
KSYMTAB_FUNC(go7007_alloc, "", "");
KSYMTAB_FUNC(go7007_update_board, "", "");
KSYMTAB_FUNC(go7007_snd_init, "", "");
KSYMTAB_FUNC(go7007_snd_remove, "", "");

SYMBOL_CRC(go7007_read_interrupt, 0x67b5a78a, "");
SYMBOL_CRC(go7007_read_addr, 0x195b39a8, "");
SYMBOL_CRC(go7007_boot_encoder, 0x23c22846, "");
SYMBOL_CRC(go7007_register_encoder, 0x236ef0aa, "");
SYMBOL_CRC(go7007_parse_video_stream, 0xb9d58b12, "");
SYMBOL_CRC(go7007_alloc, 0xe6c47fa9, "");
SYMBOL_CRC(go7007_update_board, 0xb1e344af, "");
SYMBOL_CRC(go7007_snd_init, 0x1e810a34, "");
SYMBOL_CRC(go7007_snd_remove, 0xeb9a9246, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5a40e7cd, "vb2_queue_init" },
	{ 0x77731343, "video_ioctl2" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xade31a66, "v4l2_device_put" },
	{ 0xa25a1ff2, "vb2_ioctl_streamoff" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xa7ab474b, "snd_pcm_new" },
	{ 0xc40f5484, "snd_card_register" },
	{ 0x38dd9530, "v4l2_i2c_new_subdev_board" },
	{ 0x95f6a55f, "snd_card_free" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x2be10869, "vb2_ops_wait_finish" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x23027153, "vb2_ioctl_querybuf" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1708872e, "v4l2_fh_open" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x9ba53144, "video_devdata" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xc715c568, "vb2_fop_release" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xaded60ca, "i2c_del_adapter" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x306f753, "snd_card_new" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc90aa5df, "__v4l2_ctrl_grab" },
	{ 0x3e23b10, "vb2_ioctl_dqbuf" },
	{ 0x669c413b, "_dev_err" },
	{ 0xac8e4c37, "v4l2_ctrl_new_custom" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x624ab268, "snd_card_free_when_closed" },
	{ 0x72764206, "vb2_buffer_done" },
	{ 0x179f2fe4, "vb2_plane_vaddr" },
	{ 0xaafe5e32, "v4l2_ctrl_subscribe_event" },
	{ 0x738a0e18, "snd_pcm_set_ops" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x79926f0a, "v4l2_event_subscribe" },
	{ 0xc604f82f, "vb2_ioctl_qbuf" },
	{ 0x8c4d9c9f, "vb2_fop_mmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb6266700, "snd_device_new" },
	{ 0x91747f5f, "vb2_vmalloc_memops" },
	{ 0x9a0af284, "snd_pcm_set_managed_buffer_all" },
	{ 0xdcb764ad, "memset" },
	{ 0x99cd0788, "param_ops_charp" },
	{ 0x1ae48415, "v4l2_ctrl_new_std_menu" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x23e24800, "vb2_fop_read" },
	{ 0x42db93b6, "v4l2_device_register" },
	{ 0x60570175, "i2c_add_adapter" },
	{ 0xda9ef1db, "snd_card_disconnect" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0xb68f376, "__video_register_device" },
	{ 0x9c63214c, "vb2_ops_wait_prepare" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9d6f715c, "vb2_ioctl_streamon" },
	{ 0x53e0ec70, "vb2_fop_poll" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0xa3f622a6, "v4l2_ctrl_g_ctrl" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0xf64c3bb1, "v4l2_device_unregister" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x5b6a59bc, "v4l2_subdev_call_wrappers" },
	{ 0xc9098c3d, "snd_pcm_period_elapsed" },
	{ 0x41f63b90, "v4l2_ctrl_log_status" },
	{ 0xd2434a7e, "v4l2_event_queue" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x3dda0032, "video_device_release_empty" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfdcd2ee2, "v4l2_event_unsubscribe" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xecf2ff56, "vb2_ioctl_reqbufs" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,snd-pcm,snd,videobuf2-common,videobuf2-vmalloc");


MODULE_INFO(srcversion, "5B5234BB82F944373BA4134");
