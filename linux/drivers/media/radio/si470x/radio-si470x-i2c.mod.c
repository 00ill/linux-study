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
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x5555588e, "video_unregister_device" },
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0xf64c3bb1, "v4l2_device_unregister" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x9ba53144, "video_devdata" },
	{ 0x45359f52, "v4l2_fh_is_singular" },
	{ 0x669eb6bd, "v4l2_fh_release" },
	{ 0x2170dde6, "si470x_stop" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1708872e, "v4l2_fh_open" },
	{ 0xa70e8745, "si470x_start" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xa6257a2f, "complete" },
	{ 0xe2964344, "__wake_up" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x42db93b6, "v4l2_device_register" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x3f9e693, "si470x_ctrl_ops" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0x338380de, "si470x_viddev_template" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3dda0032, "video_device_release_empty" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xf9a482f9, "msleep" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x3637bd1a, "si470x_set_freq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xb68f376, "__video_register_device" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x15b9f3f1, "param_ops_ushort" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev,radio-si470x-common");

MODULE_ALIAS("of:N*T*Csilabs,si470x");
MODULE_ALIAS("of:N*T*Csilabs,si470xC*");
MODULE_ALIAS("i2c:si470x");

MODULE_INFO(srcversion, "499F638888A24AED756FC6E");
