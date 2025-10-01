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

KSYMTAB_FUNC(si470x_set_freq, "_gpl", "");
KSYMTAB_FUNC(si470x_start, "_gpl", "");
KSYMTAB_FUNC(si470x_stop, "_gpl", "");
KSYMTAB_DATA(si470x_ctrl_ops, "_gpl", "");
KSYMTAB_DATA(si470x_viddev_template, "_gpl", "");

SYMBOL_CRC(si470x_set_freq, 0x3637bd1a, "_gpl");
SYMBOL_CRC(si470x_start, 0xa70e8745, "_gpl");
SYMBOL_CRC(si470x_stop, 0x2170dde6, "_gpl");
SYMBOL_CRC(si470x_ctrl_ops, 0x03f9e693, "_gpl");
SYMBOL_CRC(si470x_viddev_template, 0x338380de, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9ba53144, "video_devdata" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x7f71a789, "v4l2_ctrl_poll" },
	{ 0x3dda0032, "video_device_release_empty" },
	{ 0xaafe5e32, "v4l2_ctrl_subscribe_event" },
	{ 0xfdcd2ee2, "v4l2_event_unsubscribe" },
	{ 0x77731343, "video_ioctl2" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x15b9f3f1, "param_ops_ushort" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "E6416F396D97210E1C0B5E3");
