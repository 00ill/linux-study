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

KSYMTAB_FUNC(arc4_setkey, "", "");
KSYMTAB_FUNC(arc4_crypt, "", "");

SYMBOL_CRC(arc4_setkey, 0x2bb32ad1, "");
SYMBOL_CRC(arc4_crypt, 0xcd47fcc4, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "00D0CD066C3D34E56138CD1");
