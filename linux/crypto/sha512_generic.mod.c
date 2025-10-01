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

KSYMTAB_DATA(sha384_zero_message_hash, "_gpl", "");
KSYMTAB_DATA(sha512_zero_message_hash, "_gpl", "");
KSYMTAB_FUNC(crypto_sha512_update, "", "");
KSYMTAB_FUNC(crypto_sha512_finup, "", "");

SYMBOL_CRC(sha384_zero_message_hash, 0x76eeeb0f, "_gpl");
SYMBOL_CRC(sha512_zero_message_hash, 0x67da9f7c, "_gpl");
SYMBOL_CRC(crypto_sha512_update, 0x64086164, "");
SYMBOL_CRC(crypto_sha512_finup, 0x22eb1342, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xfd9eaaee, "crypto_register_shashes" },
	{ 0xc278d979, "crypto_unregister_shashes" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7BE04A69CB5551F7D5C3D36");
