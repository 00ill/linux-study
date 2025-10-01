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

KSYMTAB_DATA(crypto_sm4_fk, "", "");
KSYMTAB_DATA(crypto_sm4_ck, "", "");
KSYMTAB_DATA(crypto_sm4_sbox, "", "");
KSYMTAB_FUNC(sm4_expandkey, "_gpl", "");
KSYMTAB_FUNC(sm4_crypt_block, "_gpl", "");

SYMBOL_CRC(crypto_sm4_fk, 0x7931a202, "");
SYMBOL_CRC(crypto_sm4_ck, 0x2b098da5, "");
SYMBOL_CRC(crypto_sm4_sbox, 0xf4fd3bd2, "");
SYMBOL_CRC(sm4_expandkey, 0x24e254e8, "_gpl");
SYMBOL_CRC(sm4_crypt_block, 0xfa81970e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "10D349411A1A38CBC1D921E");
