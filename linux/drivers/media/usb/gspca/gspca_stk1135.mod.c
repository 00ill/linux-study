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
	{ 0x122c3a7e, "_printk" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xb29b3eb6, "gspca_disconnect" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0xa3f622a6, "v4l2_ctrl_g_ctrl" },
	{ 0x73e429d5, "gspca_resume" },
	{ 0x454f29f6, "gspca_dev_probe" },
	{ 0x2a8beff7, "gspca_suspend" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev,gspca_main");

MODULE_ALIAS("usb:v174Fp6A31d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "295ADDCAEB0D7B79A830AD3");
