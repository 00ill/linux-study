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
	{ 0xd87d7b3, "usb_lock_device_for_reset" },
	{ 0x7fcac341, "usb_reset_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xc7d5ee41, "usbnet_probe" },
	{ 0x40e8651c, "usbnet_disconnect" },
	{ 0xc863a612, "usbnet_suspend" },
	{ 0x11ab0a22, "usbnet_resume" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0402p5632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v182Dp207Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p2720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p2727d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Cp8100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525p9901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525p2888d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Fp0190d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp505Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E7Ep1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p07D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A2d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E3E70D2ABD17DC7B4DA45E8");
