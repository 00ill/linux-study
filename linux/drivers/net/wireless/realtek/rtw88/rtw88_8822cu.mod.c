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
	{ 0x23ec629f, "rtw8822c_hw_spec" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x260757b6, "rtw_usb_probe" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rtw88_usb,rtw88_8822c");

MODULE_ALIAS("usb:v0BDApC82Cd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApC812d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApC82Ed*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApD820d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApD82Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v13B1p0043d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "6CFB1D244E48FDBEA51C14C");
