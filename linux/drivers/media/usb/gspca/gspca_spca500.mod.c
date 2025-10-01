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
	{ 0xa728742c, "usb_register_driver" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x9fc423b3, "gspca_frame_add" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x122c3a7e, "_printk" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xb29b3eb6, "gspca_disconnect" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0x73e429d5, "gspca_resume" },
	{ 0x454f29f6, "gspca_dev_probe" },
	{ 0x2a8beff7, "gspca_suspend" },
	{ 0xf9a482f9, "msleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev,gspca_main");

MODULE_ALIAS("usb:v040Ap0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep400Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0890d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p300Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04FCp7333d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06BDp0404d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06BEp0800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v084Dp0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2899p012Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0630d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DAFCD9B140FCDCC624E3197");
