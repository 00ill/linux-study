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

KSYMTAB_FUNC(spi_bitbang_setup_transfer, "_gpl", "");
KSYMTAB_FUNC(spi_bitbang_setup, "_gpl", "");
KSYMTAB_FUNC(spi_bitbang_cleanup, "_gpl", "");
KSYMTAB_FUNC(spi_bitbang_init, "_gpl", "");
KSYMTAB_FUNC(spi_bitbang_start, "_gpl", "");
KSYMTAB_FUNC(spi_bitbang_stop, "_gpl", "");

SYMBOL_CRC(spi_bitbang_setup_transfer, 0x3bece477, "_gpl");
SYMBOL_CRC(spi_bitbang_setup, 0x076b249b, "_gpl");
SYMBOL_CRC(spi_bitbang_cleanup, 0xb5d9c164, "_gpl");
SYMBOL_CRC(spi_bitbang_init, 0xa1599c4b, "_gpl");
SYMBOL_CRC(spi_bitbang_start, 0xe6eb84e9, "_gpl");
SYMBOL_CRC(spi_bitbang_stop, 0xe9db883f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x37a0cba, "kfree" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x84679291, "spi_finalize_current_transfer" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x99ed6ef6, "get_device" },
	{ 0x8704e806, "spi_register_controller" },
	{ 0x36dc6ece, "put_device" },
	{ 0x8e1f01a7, "spi_unregister_controller" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "558AFE9499946A3E4A01F74");
