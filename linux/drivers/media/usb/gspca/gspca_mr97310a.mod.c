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
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0xac8e4c37, "v4l2_ctrl_new_custom" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xb29b3eb6, "gspca_disconnect" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0x73e429d5, "gspca_resume" },
	{ 0x454f29f6, "gspca_dev_probe" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x2a8beff7, "gspca_suspend" },
	{ 0xf27b4bb9, "v4l2_ctrl_cluster" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev,gspca_main");

MODULE_ALIAS("usb:v08CAp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp0111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap010Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap010Ed*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "598BBD03303CBB374173BC7");
