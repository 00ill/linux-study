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

KSYMTAB_DATA(sha1_zero_message_hash, "_gpl", "");
KSYMTAB_FUNC(crypto_sha1_update, "", "");
KSYMTAB_FUNC(crypto_sha1_finup, "", "");

SYMBOL_CRC(sha1_zero_message_hash, 0x7b5a4926, "_gpl");
SYMBOL_CRC(crypto_sha1_update, 0x25eda531, "");
SYMBOL_CRC(crypto_sha1_finup, 0xf2c492e0, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1682e4d7, "crypto_register_shash" },
	{ 0xe788db7e, "crypto_unregister_shash" },
	{ 0xdcb764ad, "memset" },
	{ 0x5e0ccb9f, "sha1_transform" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "58FE01E6A77BB04A3C19324");
