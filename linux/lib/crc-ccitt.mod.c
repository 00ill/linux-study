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

KSYMTAB_DATA(crc_ccitt_table, "", "");
KSYMTAB_FUNC(crc_ccitt, "", "");

SYMBOL_CRC(crc_ccitt_table, 0x7f03b6a9, "");
SYMBOL_CRC(crc_ccitt, 0x52ecbc75, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A12015393A7BD175D16EF5A");
