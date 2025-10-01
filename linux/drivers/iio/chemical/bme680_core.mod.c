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

KSYMTAB_DATA(bme680_regmap_config, "", "IIO_BME680");
KSYMTAB_FUNC(bme680_core_probe, "_gpl", "IIO_BME680");

SYMBOL_CRC(bme680_regmap_config, 0xc40e5c3c, "");
SYMBOL_CRC(bme680_core_probe, 0xded1bf65, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xca83565d, "regmap_get_device" },
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0xd02eafcc, "__devm_iio_device_register" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x37086b9, "iio_read_const_attr" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "1482B82A5438726ABC25A42");
