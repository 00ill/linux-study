#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(crypto_nhpoly1305_setkey, "", "");
KSYMTAB_FUNC(crypto_nhpoly1305_init, "", "");
KSYMTAB_FUNC(crypto_nhpoly1305_update_helper, "", "");
KSYMTAB_FUNC(crypto_nhpoly1305_update, "", "");
KSYMTAB_FUNC(crypto_nhpoly1305_final_helper, "", "");
KSYMTAB_FUNC(crypto_nhpoly1305_final, "", "");

SYMBOL_CRC(crypto_nhpoly1305_setkey, 0xa022934c, "");
SYMBOL_CRC(crypto_nhpoly1305_init, 0xb980a0b9, "");
SYMBOL_CRC(crypto_nhpoly1305_update_helper, 0x14f30e89, "");
SYMBOL_CRC(crypto_nhpoly1305_update, 0xd92345fe, "");
SYMBOL_CRC(crypto_nhpoly1305_final_helper, 0x2741e4e4, "");
SYMBOL_CRC(crypto_nhpoly1305_final, 0xa8c5ec9a, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x21f3700, "poly1305_core_blocks" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbcb90cb3, "poly1305_core_emit" },
	{ 0xdcb764ad, "memset" },
	{ 0x1682e4d7, "crypto_register_shash" },
	{ 0xe788db7e, "crypto_unregister_shash" },
	{ 0xd45b9cf4, "poly1305_core_setkey" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "libpoly1305");


MODULE_INFO(srcversion, "5F0B6646A893FFCCDDF7B41");
