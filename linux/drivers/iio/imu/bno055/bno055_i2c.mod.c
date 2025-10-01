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
	{ 0x74020dc1, "bno055_regmap_config" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xb6c00e8b, "bno055_probe" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "bno055,regmap-i2c");

MODULE_ALIAS("of:N*T*Cbosch,bno055");
MODULE_ALIAS("of:N*T*Cbosch,bno055C*");
MODULE_ALIAS("i2c:bno055");

MODULE_INFO(srcversion, "E2B4FBA0A2AFAA5FA35EA13");
