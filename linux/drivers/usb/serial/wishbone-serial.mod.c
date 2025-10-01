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
	{ 0x9e80f108, "__usb_serial_register_drivers" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x9cbf2887, "usb_serial_generic_close" },
	{ 0x90521f65, "usb_serial_deregister_drivers" },
	{ 0xd2b5de5e, "usb_serial_generic_open" },
	{ 0x669c413b, "_dev_err" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v1D50p6062d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "596A4DDF8221EFD419D6B34");
