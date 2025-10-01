#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(ezusb_fx1_set_reset, "_gpl", "");
KSYMTAB_FUNC(ezusb_fx1_ihex_firmware_download, "_gpl", "");

SYMBOL_CRC(ezusb_fx1_set_reset, 0x625c7141, "_gpl");
SYMBOL_CRC(ezusb_fx1_ihex_firmware_download, 0x0d0bc7bf, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x441636cf, "usb_control_msg_send" },
	{ 0x669c413b, "_dev_err" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7E389C44C443D8BFC062E6B");
