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

KSYMTAB_FUNC(mmc_spi_get_pdata, "", "");
KSYMTAB_FUNC(mmc_spi_put_pdata, "", "");

SYMBOL_CRC(mmc_spi_get_pdata, 0xfad7fd01, "");
SYMBOL_CRC(mmc_spi_put_pdata, 0x5d01bc83, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x7c14eac6, "mmc_of_parse_voltage" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "61BD85EE488C862DE5EA0D1");
