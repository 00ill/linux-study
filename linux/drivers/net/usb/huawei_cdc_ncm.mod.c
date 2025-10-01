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
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x47fa5eea, "usb_autopm_get_interface" },
	{ 0x6a336a2e, "usb_autopm_put_interface" },
	{ 0x8a3a377b, "cdc_ncm_unbind" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x11ab0a22, "usbnet_resume" },
	{ 0xc863a612, "usbnet_suspend" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xdd501652, "cdc_ncm_bind_common" },
	{ 0xb1246140, "usb_cdc_wdm_register" },
	{ 0xb3a9f887, "cdc_ncm_rx_fixup" },
	{ 0x4e1cf371, "cdc_ncm_tx_fixup" },
	{ 0xc7d5ee41, "usbnet_probe" },
	{ 0x40e8651c, "usbnet_disconnect" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "cdc_ncm,cdc-wdm");

MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip16in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip46in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip76in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc03ip16in*");

MODULE_INFO(srcversion, "76D719170C7CBE620B35580");
