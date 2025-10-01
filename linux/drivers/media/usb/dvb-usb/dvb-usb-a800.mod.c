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
	{ 0xd5414a0, "rc_repeat" },
	{ 0x13f151fe, "dibusb_pid_filter_ctrl" },
	{ 0x732afc8, "dibusb_i2c_algo" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x84765499, "dibusb2_0_streaming_ctrl" },
	{ 0x63549376, "dibusb_dib3000mc_tuner_attach" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ba36b2d, "dibusb_dib3000mc_frontend_attach" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x9128f4c2, "rc_keydown" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x1ea8b724, "param_ops_short" },
	{ 0xcc05e0fd, "dibusb_pid_filter" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x6dd942e0, "dvb_usb_device_init" },
	{ 0x579e5ff4, "dvb_usb_device_exit" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dvb-usb-dibusb-common,dvb-usb-dibusb-mc-common,dvb-usb");

MODULE_ALIAS("usb:v07CApA800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA801d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EA399B0BA851198F26A8C82");
