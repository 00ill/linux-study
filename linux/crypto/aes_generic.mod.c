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

KSYMTAB_DATA(crypto_ft_tab, "_gpl", "");
KSYMTAB_DATA(crypto_it_tab, "_gpl", "");
KSYMTAB_FUNC(crypto_aes_set_key, "_gpl", "");

SYMBOL_CRC(crypto_ft_tab, 0x1a10c32b, "_gpl");
SYMBOL_CRC(crypto_it_tab, 0x56054c05, "_gpl");
SYMBOL_CRC(crypto_aes_set_key, 0x735a7246, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x558b281d, "aes_expandkey" },
	{ 0xead77811, "crypto_register_alg" },
	{ 0xfd6e81ec, "crypto_unregister_alg" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "libaes");


MODULE_INFO(srcversion, "6AE105BE9FE18F6C69030CE");
