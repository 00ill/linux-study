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

KSYMTAB_FUNC(dibusb_dib3000mc_frontend_attach, "", "");
KSYMTAB_FUNC(dibusb_dib3000mc_tuner_attach, "", "");

SYMBOL_CRC(dibusb_dib3000mc_frontend_attach, 0x7ba36b2d, "");
SYMBOL_CRC(dibusb_dib3000mc_tuner_attach, 0x63549376, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x43b214a1, "dib3000mc_set_config" },
	{ 0xde691d17, "dib3000mc_get_tuner_i2c_master" },
	{ 0x15f164ee, "dib3000mc_pid_control" },
	{ 0x7d75bdec, "dib3000mc_pid_parse" },
	{ 0x79cb8351, "dibusb_read_eeprom_byte" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dib3000mc,dvb-usb-dibusb-common");


MODULE_INFO(srcversion, "A3EA45CFF9DC67A7F16BFCA");
