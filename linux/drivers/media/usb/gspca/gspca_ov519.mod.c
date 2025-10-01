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
	{ 0xe228da49, "usb_ifnum_to_if" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x9fc423b3, "gspca_frame_add" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x960d0a9, "v4l2_ctrl_auto_cluster" },
	{ 0x122c3a7e, "_printk" },
	{ 0x3ac81b38, "__v4l2_ctrl_s_ctrl" },
	{ 0xc90aa5df, "__v4l2_ctrl_grab" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x1ae48415, "v4l2_ctrl_new_std_menu" },
	{ 0x41cc93f6, "input_event" },
	{ 0xb29b3eb6, "gspca_disconnect" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0xa3f622a6, "v4l2_ctrl_g_ctrl" },
	{ 0x73e429d5, "gspca_resume" },
	{ 0x454f29f6, "gspca_dev_probe" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xc485eb96, "usb_altnum_to_altsetting" },
	{ 0x2a8beff7, "gspca_suspend" },
	{ 0xf27b4bb9, "v4l2_ctrl_cluster" },
	{ 0xf9a482f9, "msleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev,gspca_main");

MODULE_ALIAS("usb:v041Ep4003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep405Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4064d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4068d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep028Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0154d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0155d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9p0511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9p0518d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9p0519d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9p0530d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9p2800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9p4519d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9p8519d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9pA511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9pA518d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0813p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B62p0059d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E96pC001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1046p9967d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8020pEF04d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D29197B9ADF749732E48C4A");
