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
	{ 0x13f151fe, "dibusb_pid_filter_ctrl" },
	{ 0x732afc8, "dibusb_i2c_algo" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x84765499, "dibusb2_0_streaming_ctrl" },
	{ 0x63549376, "dibusb_dib3000mc_tuner_attach" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x7ba36b2d, "dibusb_dib3000mc_frontend_attach" },
	{ 0xba69fd43, "dibusb2_0_power_ctrl" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x1ea8b724, "param_ops_short" },
	{ 0xcc05e0fd, "dibusb_pid_filter" },
	{ 0x8265c575, "dibusb_rc_query" },
	{ 0x6dd942e0, "dvb_usb_device_init" },
	{ 0x579e5ff4, "dvb_usb_device_exit" },
	{ 0x93822ecb, "rc_map_dibusb_table" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dvb-usb-dibusb-common,dvb-usb-dibusb-mc-common,dvb-usb");

MODULE_ALIAS("usb:v10B8p0BC6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p0BC7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p810Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CApF000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CApF001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE360d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE361d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0BC6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0BC7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p810Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p810Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B9p5000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B9p5001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9FF35042E3811868BCB8987");
