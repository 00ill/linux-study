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
	{ 0xcc2e09a1, "rtw8822b_hw_spec" },
	{ 0x260757b6, "rtw_usb_probe" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rtw88_usb,rtw88_8822b");

MODULE_ALIAS("usb:v0BDApB812d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApB82Cd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp2102d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v7392pB822d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v7392pC822d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v7392pD822d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v7392pE822d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v7392pF822d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApB81Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0B05p1841d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0B05p184Cd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0B05p19AAd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0B05p1870d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0B05p1874d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p331Ed*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p331Cd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p331Fd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v13B1p0043d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v13B1p0045d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p012Dd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0138d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0115d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p012Ed*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0116d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0117d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0846p9055d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0E66p0025d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v04CAp8602d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v20F4p808Ad*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "55AF151EFAF5042085AB7DA");
