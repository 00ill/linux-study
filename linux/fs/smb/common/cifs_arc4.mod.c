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

KSYMTAB_FUNC(cifs_arc4_setkey, "_gpl", "");
KSYMTAB_FUNC(cifs_arc4_crypt, "_gpl", "");

SYMBOL_CRC(cifs_arc4_setkey, 0xc4c73891, "_gpl");
SYMBOL_CRC(cifs_arc4_crypt, 0xabd9af6d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2FF9725F2AC60BD3DEB87F0");
