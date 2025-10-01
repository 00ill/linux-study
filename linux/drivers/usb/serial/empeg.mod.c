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
	{ 0xe3d1a8a7, "tty_encode_baud_rate" },
	{ 0x6595b544, "usb_reset_configuration" },
	{ 0x669c413b, "_dev_err" },
	{ 0x90521f65, "usb_serial_deregister_drivers" },
	{ 0x87aed1dd, "usb_serial_generic_throttle" },
	{ 0xc34ad7a6, "usb_serial_generic_unthrottle" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v084Fp0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DB3A15F2AD6CE3FAA556236");
