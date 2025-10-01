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
	{ 0xc40e5c3c, "bme680_regmap_config" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xded1bf65, "bme680_core_probe" },
	{ 0x669c413b, "_dev_err" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "bme680_core,regmap-i2c");

MODULE_ALIAS("of:N*T*Cbosch,bme680");
MODULE_ALIAS("of:N*T*Cbosch,bme680C*");
MODULE_ALIAS("i2c:bme680");

MODULE_INFO(srcversion, "7CDBE677ACCF184955E7D7E");
