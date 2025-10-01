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

KSYMTAB_FUNC(cci_read, "_gpl", "");
KSYMTAB_FUNC(cci_write, "_gpl", "");
KSYMTAB_FUNC(cci_update_bits, "_gpl", "");
KSYMTAB_FUNC(cci_multi_reg_write, "_gpl", "");
KSYMTAB_FUNC(devm_cci_regmap_init_i2c, "_gpl", "");

SYMBOL_CRC(cci_read, 0x40ef4f7d, "_gpl");
SYMBOL_CRC(cci_write, 0xbed9e63e, "_gpl");
SYMBOL_CRC(cci_update_bits, 0x98059f0e, "_gpl");
SYMBOL_CRC(cci_multi_reg_write, 0x9bf4bfe3, "_gpl");
SYMBOL_CRC(devm_cci_regmap_init_i2c, 0xa41c47e5, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x945446cb, "regmap_bulk_write" },
	{ 0xca83565d, "regmap_get_device" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");


MODULE_INFO(srcversion, "005A9260EE82342BC0CF364");
