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

KSYMTAB_FUNC(qcafrm_create_header, "_gpl", "");
KSYMTAB_FUNC(qcafrm_create_footer, "_gpl", "");
KSYMTAB_FUNC(qcafrm_fsm_decode, "_gpl", "");

SYMBOL_CRC(qcafrm_create_header, 0x41da0375, "_gpl");
SYMBOL_CRC(qcafrm_create_footer, 0x0b28a9ad, "_gpl");
SYMBOL_CRC(qcafrm_fsm_decode, 0x4e3070d4, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C535C91F84CB72E4F9A1F75");
