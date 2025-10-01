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
	{ 0x1d753a7d, "v4l2_fh_exit" },
	{ 0xd59ba7a8, "dvb_dmxdev_init" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x77731343, "video_ioctl2" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x24523648, "cx2341x_ext_ctrls" },
	{ 0x73a242d7, "v4l2_fh_del" },
	{ 0x22acd2e2, "device_unregister" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x70f392ea, "v4l2_fh_add" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x99ed6ef6, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbf565938, "dvb_register_adapter" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x15ac1bd0, "cx2341x_ctrl_query" },
	{ 0x122c3a7e, "_printk" },
	{ 0x87b55f30, "usb_clear_halt" },
	{ 0x1000e51, "schedule" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0x7fcac341, "usb_reset_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9ba53144, "video_devdata" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x36dc6ece, "put_device" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0xaded60ca, "i2c_del_adapter" },
	{ 0x8e47effd, "dvb_module_release" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xee7a3241, "device_create_file" },
	{ 0x2cd667b2, "usb_urb_ep_type_check" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x24d273d1, "add_timer" },
	{ 0x7adbe247, "device_move" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x6d77ce8a, "v4l2_fh_init" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0xa23a2eab, "dvb_net_init" },
	{ 0x7143a676, "class_unregister" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0x5555588e, "video_unregister_device" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xed85cddf, "sysfs_create_group" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5390eff6, "i2c_new_client_device" },
	{ 0xe643b477, "dvb_dmxdev_release" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xdbc5583a, "cx2341x_update" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd87d7b3, "usb_lock_device_for_reset" },
	{ 0x28b118b6, "device_register" },
	{ 0x1ea8b724, "param_ops_short" },
	{ 0xc376c55a, "v4l2_s_ctrl" },
	{ 0xdcb764ad, "memset" },
	{ 0xe0d8f4f7, "v4l2_device_disconnect" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x28240e61, "cx2341x_ctrl_get_menu" },
	{ 0x42db93b6, "v4l2_device_register" },
	{ 0xd4a72041, "dvb_frontend_detach" },
	{ 0x60570175, "i2c_add_adapter" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0x2559398, "dvb_net_release" },
	{ 0xe1fe1432, "cx2341x_log_status" },
	{ 0x374b3c83, "sysfs_remove_group" },
	{ 0x3cf8929c, "usb_unlink_urb" },
	{ 0x7b4dd2cb, "cx2341x_fill_defaults" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb68f376, "__video_register_device" },
	{ 0xaf72fae1, "dvb_unregister_frontend" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0xf64c3bb1, "v4l2_device_unregister" },
	{ 0x7ab4a2cf, "dvb_register_frontend" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0xd5cf2660, "v4l2_i2c_new_subdev" },
	{ 0x98cf60b3, "strlen" },
	{ 0x88cf6d3a, "dvb_unregister_adapter" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x5db77c2e, "dvb_module_probe" },
	{ 0xa42d469b, "class_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa92274c6, "device_remove_file" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev,dvb-core,cx2341x,tveeprom");

MODULE_ALIAS("usb:v2040p2900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2950d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7510d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DD88434F16FBF83D4B85B93");
