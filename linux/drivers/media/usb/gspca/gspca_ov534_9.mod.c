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
	{ 0x9670af2c, "gspca_debug" },
	{ 0x960d0a9, "v4l2_ctrl_auto_cluster" },
	{ 0x122c3a7e, "_printk" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x1ae48415, "v4l2_ctrl_new_std_menu" },
	{ 0xb29b3eb6, "gspca_disconnect" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0x73e429d5, "gspca_resume" },
	{ 0x454f29f6, "gspca_dev_probe" },
	{ 0x98cf60b3, "strlen" },
	{ 0x2a8beff7, "gspca_suspend" },
	{ 0xf9a482f9, "msleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev,gspca_main");

MODULE_ALIAS("usb:v05A9p8065d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8p3003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9p1550d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CC59A1E6A5DC55F3D0D5A2A");
