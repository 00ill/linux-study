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

KSYMTAB_FUNC(radio_tea5777_init, "_gpl", "");
KSYMTAB_FUNC(radio_tea5777_exit, "_gpl", "");

SYMBOL_CRC(radio_tea5777_init, 0x02bc1787, "_gpl");
SYMBOL_CRC(radio_tea5777_exit, 0x231f6278, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7f71a789, "v4l2_ctrl_poll" },
	{ 0x77731343, "video_ioctl2" },
	{ 0xade31a66, "v4l2_device_put" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x37a0cba, "kfree" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xe3dcebe7, "led_classdev_unregister" },
	{ 0x55c62378, "usb_check_int_endpoints" },
	{ 0x1708872e, "v4l2_fh_open" },
	{ 0x70f7da02, "usb_interrupt_msg" },
	{ 0x122c3a7e, "_printk" },
	{ 0xc38b7ac0, "v4l2_ctrl_handler_setup" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9ba53144, "video_devdata" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x669c413b, "_dev_err" },
	{ 0x23522c33, "v4l2_device_set_name" },
	{ 0x669eb6bd, "v4l2_fh_release" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xaafe5e32, "v4l2_ctrl_subscribe_event" },
	{ 0x5555588e, "video_unregister_device" },
	{ 0x37c9d5fc, "led_classdev_register_ext" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xdcb764ad, "memset" },
	{ 0xe0d8f4f7, "v4l2_device_disconnect" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x42db93b6, "v4l2_device_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb68f376, "__video_register_device" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0xf64c3bb1, "v4l2_device_unregister" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x41f63b90, "v4l2_ctrl_log_status" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x3dda0032, "video_device_release_empty" },
	{ 0xfdcd2ee2, "v4l2_event_unsubscribe" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("usb:v077Dp627Ad0010dc*dsc*dp*ic03isc*ip*in*");

MODULE_INFO(srcversion, "90E661081BB1D58306DFB07");
