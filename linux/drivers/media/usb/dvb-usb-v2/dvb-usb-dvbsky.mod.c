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
	{ 0x7dbf9a51, "m88ds3103_get_agc_pwm" },
	{ 0xc1e2e098, "dvb_usbv2_reset_resume" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x905e97ab, "dvb_usbv2_suspend" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8e47effd, "dvb_module_release" },
	{ 0x46da67b7, "dvb_usbv2_disconnect" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9128f4c2, "rc_keydown" },
	{ 0x98974e10, "dvb_usbv2_probe" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x6cd306ca, "dvb_usbv2_generic_write_locked" },
	{ 0x85122cb0, "dvb_usbv2_generic_rw_locked" },
	{ 0x1ea8b724, "param_ops_short" },
	{ 0xdcb764ad, "memset" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc05659d8, "dvb_usbv2_resume" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x5db77c2e, "dvb_module_probe" },
	{ 0xf9a482f9, "msleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "m88ds3103,dvb_usb_v2,dvb-core");

MODULE_ALIAS("usb:v0572p6831d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p960Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p680Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p0320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC688d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC689d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC699d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC68Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC69Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p689Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CEA780059542F4D8FF0F62D");
