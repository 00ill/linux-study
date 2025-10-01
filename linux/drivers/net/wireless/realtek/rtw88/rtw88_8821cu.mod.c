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
	{ 0x40793bdf, "rtw_usb_disconnect" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xba0e049e, "rtw8821c_hw_spec" },
	{ 0x260757b6, "rtw_usb_probe" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rtw88_usb,rtw88_8821c");

MODULE_ALIAS("usb:v0BDAp2006d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp8731d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp8811d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApB820d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApB82Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApC80Cd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApC811d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApC820d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApC821d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApC82Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApC82Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p331Dd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v7392pC811d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v7392pD811d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "EAEFE244443159383D3E419");
