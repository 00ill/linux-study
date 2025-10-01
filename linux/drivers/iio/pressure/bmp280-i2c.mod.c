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
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x3826df6, "i2c_client_get_device_id" },
	{ 0xda1bd86, "i2c_get_match_data" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xd92484dd, "bmp280_common_probe" },
	{ 0x669c413b, "_dev_err" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xc50695c, "bmp180_chip_info" },
	{ 0x70314c87, "bmp280_chip_info" },
	{ 0x7d46d43, "bme280_chip_info" },
	{ 0xed3eadf1, "bmp380_chip_info" },
	{ 0x15fce647, "bmp580_chip_info" },
	{ 0x58e7cf59, "bmp280_dev_pm_ops" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c,bmp280");

MODULE_ALIAS("i2c:bmp085");
MODULE_ALIAS("i2c:bmp180");
MODULE_ALIAS("i2c:bmp280");
MODULE_ALIAS("i2c:bme280");
MODULE_ALIAS("i2c:bmp380");
MODULE_ALIAS("i2c:bmp580");
MODULE_ALIAS("of:N*T*Cbosch,bmp085");
MODULE_ALIAS("of:N*T*Cbosch,bmp085C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp180");
MODULE_ALIAS("of:N*T*Cbosch,bmp180C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp280");
MODULE_ALIAS("of:N*T*Cbosch,bmp280C*");
MODULE_ALIAS("of:N*T*Cbosch,bme280");
MODULE_ALIAS("of:N*T*Cbosch,bme280C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp380");
MODULE_ALIAS("of:N*T*Cbosch,bmp380C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp580");
MODULE_ALIAS("of:N*T*Cbosch,bmp580C*");

MODULE_INFO(srcversion, "9FC614BE6424C3832CD143C");
