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

KSYMTAB_FUNC(cifs_md4_init, "_gpl", "");
KSYMTAB_FUNC(cifs_md4_update, "_gpl", "");
KSYMTAB_FUNC(cifs_md4_final, "_gpl", "");

SYMBOL_CRC(cifs_md4_init, 0x798f3830, "_gpl");
SYMBOL_CRC(cifs_md4_update, 0xdef1096d, "_gpl");
SYMBOL_CRC(cifs_md4_final, 0xceecd9e4, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DA9460A1FFA7B3FA3036C30");
