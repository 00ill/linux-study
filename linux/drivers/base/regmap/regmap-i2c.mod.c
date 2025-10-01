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

KSYMTAB_FUNC(__regmap_init_i2c, "_gpl", "");
KSYMTAB_FUNC(__devm_regmap_init_i2c, "_gpl", "");

SYMBOL_CRC(__regmap_init_i2c, 0x7af7db8b, "_gpl");
SYMBOL_CRC(__devm_regmap_init_i2c, 0x929c4eb7, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x7733bb45, "regmap_get_val_endian" },
	{ 0xefa7f375, "i2c_smbus_read_byte_data" },
	{ 0x555dcc70, "i2c_smbus_write_byte_data" },
	{ 0xb865073a, "i2c_smbus_read_word_data" },
	{ 0xe94059dd, "i2c_smbus_write_word_data" },
	{ 0xaff77e28, "i2c_smbus_read_byte" },
	{ 0x1f305853, "i2c_smbus_write_i2c_block_data" },
	{ 0x1f09285b, "i2c_smbus_read_i2c_block_data" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0x6e3da156, "__regmap_init" },
	{ 0xa6fb68b9, "__devm_regmap_init" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "83E648D0BD7C6ADDE2EFEF6");
