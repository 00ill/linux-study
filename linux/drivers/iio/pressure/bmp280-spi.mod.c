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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcd47056b, "__spi_register_driver" },
	{ 0xbe28820f, "spi_write_then_read" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8e7ae2d3, "spi_get_device_id" },
	{ 0xbde79ba4, "spi_setup" },
	{ 0x5f35de40, "spi_get_device_match_data" },
	{ 0xa6fb68b9, "__devm_regmap_init" },
	{ 0xd92484dd, "bmp280_common_probe" },
	{ 0x669c413b, "_dev_err" },
	{ 0x92893115, "driver_unregister" },
	{ 0xc50695c, "bmp180_chip_info" },
	{ 0x70314c87, "bmp280_chip_info" },
	{ 0x7d46d43, "bme280_chip_info" },
	{ 0xed3eadf1, "bmp380_chip_info" },
	{ 0x15fce647, "bmp580_chip_info" },
	{ 0x58e7cf59, "bmp280_dev_pm_ops" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "bmp280");

MODULE_ALIAS("spi:bmp085");
MODULE_ALIAS("spi:bmp180");
MODULE_ALIAS("spi:bmp181");
MODULE_ALIAS("spi:bmp280");
MODULE_ALIAS("spi:bme280");
MODULE_ALIAS("spi:bmp380");
MODULE_ALIAS("spi:bmp580");
MODULE_ALIAS("of:N*T*Cbosch,bmp085");
MODULE_ALIAS("of:N*T*Cbosch,bmp085C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp180");
MODULE_ALIAS("of:N*T*Cbosch,bmp180C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp181");
MODULE_ALIAS("of:N*T*Cbosch,bmp181C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp280");
MODULE_ALIAS("of:N*T*Cbosch,bmp280C*");
MODULE_ALIAS("of:N*T*Cbosch,bme280");
MODULE_ALIAS("of:N*T*Cbosch,bme280C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp380");
MODULE_ALIAS("of:N*T*Cbosch,bmp380C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp580");
MODULE_ALIAS("of:N*T*Cbosch,bmp580C*");

MODULE_INFO(srcversion, "593DA37A462E1616DC3EF0E");
