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

KSYMTAB_DATA(curve25519_null_point, "", "");
KSYMTAB_DATA(curve25519_base_point, "", "");
KSYMTAB_FUNC(curve25519_generic, "", "");

SYMBOL_CRC(curve25519_null_point, 0x4a5a8811, "");
SYMBOL_CRC(curve25519_base_point, 0x7e6fdbfc, "");
SYMBOL_CRC(curve25519_generic, 0x12627f15, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "50FDC4C8E8DC126116428FE");
