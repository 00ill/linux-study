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

KSYMTAB_FUNC(__regmap_init_spi, "_gpl", "");
KSYMTAB_FUNC(__devm_regmap_init_spi, "_gpl", "");

SYMBOL_CRC(__regmap_init_spi, 0xce2219a1, "_gpl");
SYMBOL_CRC(__devm_regmap_init_spi, 0x3fed91ff, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x6e3da156, "__regmap_init" },
	{ 0xbe28820f, "spi_write_then_read" },
	{ 0x81f43426, "regmap_async_complete_cb" },
	{ 0xdcb764ad, "memset" },
	{ 0xe8536fa7, "spi_async" },
	{ 0xa6fb68b9, "__devm_regmap_init" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xce12c86b, "spi_sync" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6014D07874D4559D5C0C729");
