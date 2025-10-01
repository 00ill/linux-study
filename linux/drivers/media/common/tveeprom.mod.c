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

KSYMTAB_FUNC(tveeprom_hauppauge_analog, "", "");
KSYMTAB_FUNC(tveeprom_read, "", "");

SYMBOL_CRC(tveeprom_hauppauge_analog, 0x0dbf0296, "");
SYMBOL_CRC(tveeprom_read, 0x354344b8, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdcb764ad, "memset" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "14BDE1F5FE02B95E4B298CC");
