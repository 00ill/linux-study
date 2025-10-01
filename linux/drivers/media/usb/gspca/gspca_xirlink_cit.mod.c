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
	{ 0x9670af2c, "gspca_debug" },
	{ 0x122c3a7e, "_printk" },
	{ 0x87b55f30, "usb_clear_halt" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc90aa5df, "__v4l2_ctrl_grab" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x41cc93f6, "input_event" },
	{ 0x77f89cb5, "gspca_dev_probe2" },
	{ 0xb29b3eb6, "gspca_disconnect" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0xa3f622a6, "v4l2_ctrl_g_ctrl" },
	{ 0x73e429d5, "gspca_resume" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xc485eb96, "usb_altnum_to_altsetting" },
	{ 0x2a8beff7, "gspca_suspend" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev,gspca_main");

MODULE_ALIAS("usb:v0545p8080d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p8080d0002dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p8080d030Adc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p8080d0301dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p8002d030Adc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p800Cd030Adc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p800Dd030Adc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E9F03F2B0CF4C8023CDF5C2");
