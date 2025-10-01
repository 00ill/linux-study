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

KSYMTAB_FUNC(cx231xx_get_i2c_adap, "_gpl", "");
KSYMTAB_FUNC(cx231xx_tuner_callback, "_gpl", "");
KSYMTAB_FUNC(cx231xx_register_extension, "", "");
KSYMTAB_FUNC(cx231xx_unregister_extension, "", "");
KSYMTAB_FUNC(cx231xx_send_usb_command, "_gpl", "");
KSYMTAB_FUNC(cx231xx_set_alt_setting, "_gpl", "");
KSYMTAB_FUNC(cx231xx_demod_reset, "_gpl", "");
KSYMTAB_FUNC(is_fw_load, "_gpl", "");
KSYMTAB_FUNC(cx231xx_set_mode, "_gpl", "");
KSYMTAB_FUNC(cx231xx_uninit_isoc, "_gpl", "");
KSYMTAB_FUNC(cx231xx_uninit_bulk, "_gpl", "");
KSYMTAB_FUNC(cx231xx_init_isoc, "_gpl", "");
KSYMTAB_FUNC(cx231xx_init_bulk, "_gpl", "");
KSYMTAB_FUNC(cx231xx_dev_init, "_gpl", "");
KSYMTAB_FUNC(cx231xx_dev_uninit, "_gpl", "");
KSYMTAB_FUNC(cx231xx_send_gpio_cmd, "_gpl", "");
KSYMTAB_FUNC(cx231xx_enable656, "_gpl", "");
KSYMTAB_FUNC(cx231xx_disable656, "_gpl", "");
KSYMTAB_FUNC(cx231xx_unmute_audio, "_gpl", "");
KSYMTAB_FUNC(cx231xx_enable_i2c_port_3, "_gpl", "");
KSYMTAB_FUNC(cx231xx_capture_start, "_gpl", "");
KSYMTAB_FUNC(cx231xx_uninit_vbi_isoc, "_gpl", "");
KSYMTAB_FUNC(cx231xx_init_vbi_isoc, "_gpl", "");

SYMBOL_CRC(cx231xx_get_i2c_adap, 0xc6fda36b, "_gpl");
SYMBOL_CRC(cx231xx_tuner_callback, 0x017ea7c7, "_gpl");
SYMBOL_CRC(cx231xx_register_extension, 0x53d403f7, "");
SYMBOL_CRC(cx231xx_unregister_extension, 0xe8568c88, "");
SYMBOL_CRC(cx231xx_send_usb_command, 0x0b2af888, "_gpl");
SYMBOL_CRC(cx231xx_set_alt_setting, 0x3a67ab17, "_gpl");
SYMBOL_CRC(cx231xx_demod_reset, 0x554e4f61, "_gpl");
SYMBOL_CRC(is_fw_load, 0xd010312b, "_gpl");
SYMBOL_CRC(cx231xx_set_mode, 0xf4ad8611, "_gpl");
SYMBOL_CRC(cx231xx_uninit_isoc, 0x5cf09208, "_gpl");
SYMBOL_CRC(cx231xx_uninit_bulk, 0x342fa864, "_gpl");
SYMBOL_CRC(cx231xx_init_isoc, 0xabd4f828, "_gpl");
SYMBOL_CRC(cx231xx_init_bulk, 0x59ee65a5, "_gpl");
SYMBOL_CRC(cx231xx_dev_init, 0x2cdf81ba, "_gpl");
SYMBOL_CRC(cx231xx_dev_uninit, 0x006d60bf, "_gpl");
SYMBOL_CRC(cx231xx_send_gpio_cmd, 0xca17eaf4, "_gpl");
SYMBOL_CRC(cx231xx_enable656, 0x05556fe5, "_gpl");
SYMBOL_CRC(cx231xx_disable656, 0xb586a7f5, "_gpl");
SYMBOL_CRC(cx231xx_unmute_audio, 0xdc4be464, "_gpl");
SYMBOL_CRC(cx231xx_enable_i2c_port_3, 0xfb5005f3, "_gpl");
SYMBOL_CRC(cx231xx_capture_start, 0xd3ccc081, "_gpl");
SYMBOL_CRC(cx231xx_uninit_vbi_isoc, 0xa52bed7e, "_gpl");
SYMBOL_CRC(cx231xx_init_vbi_isoc, 0x68a84520, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5a40e7cd, "vb2_queue_init" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x7f71a789, "v4l2_ctrl_poll" },
	{ 0x77731343, "video_ioctl2" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xc723ad01, "media_device_unregister" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xa25a1ff2, "vb2_ioctl_streamoff" },
	{ 0x25919b3a, "v4l2_ctrl_radio_filter" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x98434f46, "usb_alloc_coherent" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xfc8645a5, "v4l2_ctrl_add_handler" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x2be10869, "vb2_ops_wait_finish" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xef3c20fa, "__media_device_register" },
	{ 0x23027153, "vb2_ioctl_querybuf" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0xe2964344, "__wake_up" },
	{ 0x1708872e, "v4l2_fh_open" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x122c3a7e, "_printk" },
	{ 0x87b55f30, "usb_clear_halt" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9ba53144, "video_devdata" },
	{ 0xc715c568, "vb2_fop_release" },
	{ 0xbb28d850, "cx2341x_handler_setup" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xaded60ca, "i2c_del_adapter" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xb1c4027b, "media_device_register_entity" },
	{ 0xb053f582, "media_device_cleanup" },
	{ 0x3e23b10, "vb2_ioctl_dqbuf" },
	{ 0x669c413b, "_dev_err" },
	{ 0x5c362e8, "i2c_unregister_device" },
	{ 0xd8f2fce2, "usb_free_coherent" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x72764206, "vb2_buffer_done" },
	{ 0x179f2fe4, "vb2_plane_vaddr" },
	{ 0xaafe5e32, "v4l2_ctrl_subscribe_event" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0xa3732c8f, "media_entity_pads_init" },
	{ 0x5555588e, "video_unregister_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5390eff6, "i2c_new_client_device" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xc604f82f, "vb2_ioctl_qbuf" },
	{ 0x8c4d9c9f, "vb2_fop_mmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc376c55a, "v4l2_s_ctrl" },
	{ 0x760c9fbb, "i2c_mux_alloc" },
	{ 0x91747f5f, "vb2_vmalloc_memops" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x23e24800, "vb2_fop_read" },
	{ 0x42db93b6, "v4l2_device_register" },
	{ 0x60570175, "i2c_add_adapter" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x419a348c, "rc_allocate_device" },
	{ 0x3cf8929c, "usb_unlink_urb" },
	{ 0x90ab0c84, "media_entity_setup_link" },
	{ 0x999e8297, "vfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb68f376, "__video_register_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9c63214c, "vb2_ops_wait_prepare" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9d6f715c, "vb2_ioctl_streamon" },
	{ 0x46a9550a, "v4l2_mc_create_media_graph" },
	{ 0x53e0ec70, "vb2_fop_poll" },
	{ 0x9143504, "cx2341x_handler_init" },
	{ 0x8a94a53c, "cx2341x_handler_set_50hz" },
	{ 0x3501dbb8, "__media_device_usb_init" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0xf64c3bb1, "v4l2_device_unregister" },
	{ 0x58306b35, "usb_reset_endpoint" },
	{ 0x649b3692, "i2c_mux_del_adapters" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x5b6a59bc, "v4l2_subdev_call_wrappers" },
	{ 0x41f63b90, "v4l2_ctrl_log_status" },
	{ 0xd5cf2660, "v4l2_i2c_new_subdev" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x3dda0032, "video_device_release_empty" },
	{ 0xde29233a, "i2c_mux_add_adapter" },
	{ 0xe3dc0d51, "_vb2_fop_release" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfdcd2ee2, "v4l2_event_unsubscribe" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xecf2ff56, "vb2_ioctl_reqbufs" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,mc,cx2341x,videobuf2-common,i2c-mux,videobuf2-vmalloc,tveeprom");

MODULE_ALIAS("usb:v1D19p6108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D19p6109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p5A3Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p589Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApC039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB124d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB151d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB139d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0259d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p025Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5010d400[0-1]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE424d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0237d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15F4p0135d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v199Ep8002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DD5D5AC8D5B5CBF76C2C4C2");
