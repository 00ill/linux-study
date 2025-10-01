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
	{ 0x3f1aaaf9, "usbnet_cdc_bind" },
	{ 0xb51db013, "usbnet_read_cmd" },
	{ 0x49319e76, "usbnet_write_cmd" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x4696580b, "rtl8152_get_version" },
	{ 0xc7d5ee41, "usbnet_probe" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x9de91704, "usbnet_cdc_unbind" },
	{ 0x8a5c28d9, "usbnet_manage_power" },
	{ 0x8f6de776, "usbnet_cdc_status" },
	{ 0x40e8651c, "usbnet_disconnect" },
	{ 0xc863a612, "usbnet_suspend" },
	{ 0x11ab0a22, "usbnet_resume" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "cdc_ether,r8152");

MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp721Ed*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFpA359d*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "8A9912C297E9BC0F1F8BBFE");
