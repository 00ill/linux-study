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

KSYMTAB_FUNC(slhc_init, "", "");
KSYMTAB_FUNC(slhc_free, "", "");
KSYMTAB_FUNC(slhc_remember, "", "");
KSYMTAB_FUNC(slhc_compress, "", "");
KSYMTAB_FUNC(slhc_uncompress, "", "");
KSYMTAB_FUNC(slhc_toss, "", "");

SYMBOL_CRC(slhc_init, 0x15f90688, "");
SYMBOL_CRC(slhc_free, 0x2a928918, "");
SYMBOL_CRC(slhc_remember, 0x43f9ebc8, "");
SYMBOL_CRC(slhc_compress, 0xdcdc0040, "");
SYMBOL_CRC(slhc_uncompress, 0xf36f42a9, "");
SYMBOL_CRC(slhc_toss, 0x74b8e674, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x37a0cba, "kfree" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5F091FF316741B561BB1729");
