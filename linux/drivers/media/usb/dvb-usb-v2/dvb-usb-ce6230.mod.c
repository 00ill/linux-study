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
	{ 0xc1e2e098, "dvb_usbv2_reset_resume" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x905e97ab, "dvb_usbv2_suspend" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x46da67b7, "dvb_usbv2_disconnect" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x669c413b, "_dev_err" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x98974e10, "dvb_usbv2_probe" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x1ea8b724, "param_ops_short" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc05659d8, "dvb_usbv2_resume" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dvb_usb_v2");

MODULE_ALIAS("usb:v8086p9500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA310d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F69924BD654A6A3C37E492A");
