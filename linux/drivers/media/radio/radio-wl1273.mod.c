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
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0x5555588e, "video_unregister_device" },
	{ 0xf64c3bb1, "v4l2_device_unregister" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x9ba53144, "video_devdata" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe2964344, "__wake_up" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x42db93b6, "v4l2_device_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0x1ae48415, "v4l2_ctrl_new_std_menu" },
	{ 0xb68f376, "__video_register_device" },
	{ 0x122c3a7e, "_printk" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xa6257a2f, "complete" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x77731343, "video_ioctl2" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "591B0325327562A1C2118D9");
