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

KSYMTAB_FUNC(LZ4_compress_HC, "", "");
KSYMTAB_FUNC(LZ4_resetStreamHC, "", "");
KSYMTAB_FUNC(LZ4_loadDictHC, "", "");
KSYMTAB_FUNC(LZ4_compress_HC_continue, "", "");
KSYMTAB_FUNC(LZ4_saveDictHC, "", "");

SYMBOL_CRC(LZ4_compress_HC, 0xddf86133, "");
SYMBOL_CRC(LZ4_resetStreamHC, 0xd25422cd, "");
SYMBOL_CRC(LZ4_loadDictHC, 0x93ff008c, "");
SYMBOL_CRC(LZ4_compress_HC_continue, 0x38f7b6e0, "");
SYMBOL_CRC(LZ4_saveDictHC, 0x9cef495b, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4829a47e, "memcpy" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xdcb764ad, "memset" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C5D3FE7AD5193DD30201549");
