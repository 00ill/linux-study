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
	{ 0x1313734c, "dvb_usbv2_generic_write" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x905e97ab, "dvb_usbv2_suspend" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x46da67b7, "dvb_usbv2_disconnect" },
	{ 0xb1c4027b, "media_device_register_entity" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x98974e10, "dvb_usbv2_probe" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0xa3732c8f, "media_entity_pads_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x1ea8b724, "param_ops_short" },
	{ 0xdcb764ad, "memset" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc05659d8, "dvb_usbv2_resume" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x38bae6ec, "dvb_usbv2_generic_rw" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dvb_usb_v2,mc,tveeprom");

MODULE_ALIAS("usb:v2040pC600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC603d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC604d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC609d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC60Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC60Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC60Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC653d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC65Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB703d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB753d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB763d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB764d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD853d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD854d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD863d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD864d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD8D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD8D4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD8E3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD8E4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD8FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC61Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC61Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB757d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB767d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5305457904F8455EB138F6C");
