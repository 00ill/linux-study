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

KSYMTAB_DATA(tuners, "", "");
KSYMTAB_DATA(tuner_count, "", "");

SYMBOL_CRC(tuners, 0x4c48939e, "");
SYMBOL_CRC(tuner_count, 0xc2821775, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A9D94A00851EF6E0D2200E4");
