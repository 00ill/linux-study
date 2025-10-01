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

KSYMTAB_FUNC(crypto_sha3_init, "", "");
KSYMTAB_FUNC(crypto_sha3_update, "", "");
KSYMTAB_FUNC(crypto_sha3_final, "", "");

SYMBOL_CRC(crypto_sha3_init, 0x7b93d215, "");
SYMBOL_CRC(crypto_sha3_update, 0xd8174593, "");
SYMBOL_CRC(crypto_sha3_final, 0x384714d5, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdcb764ad, "memset" },
	{ 0xfd9eaaee, "crypto_register_shashes" },
	{ 0xc278d979, "crypto_unregister_shashes" },
	{ 0x4829a47e, "memcpy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C0F772883B829669929ADCF");
