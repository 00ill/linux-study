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

KSYMTAB_FUNC(__twofish_setkey, "_gpl", "");
KSYMTAB_FUNC(twofish_setkey, "_gpl", "");

SYMBOL_CRC(__twofish_setkey, 0xe22b7787, "_gpl");
SYMBOL_CRC(twofish_setkey, 0x10072402, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "545F10E67102788B7DF78C4");
