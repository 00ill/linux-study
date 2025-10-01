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

KSYMTAB_DATA(NlsUniUpperTable, "_gpl", "");
KSYMTAB_DATA(NlsUniUpperRange, "_gpl", "");

SYMBOL_CRC(NlsUniUpperTable, 0x4c81e490, "_gpl");
SYMBOL_CRC(NlsUniUpperRange, 0x9aedbfd8, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0C8E38CECC600F457B2BB0B");
