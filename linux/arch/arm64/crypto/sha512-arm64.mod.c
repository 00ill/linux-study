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

KSYMTAB_FUNC(sha512_block_data_order, "", "");

SYMBOL_CRC(sha512_block_data_order, 0x6402c8df, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc278d979, "crypto_unregister_shashes" },
	{ 0x4829a47e, "memcpy" },
	{ 0xfd9eaaee, "crypto_register_shashes" },
	{ 0xdcb764ad, "memset" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D1A492E4EB987B14EA1B1D9");
