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
	{ 0x9ba6295b, "regmap_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xda1bd86, "i2c_get_match_data" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xef160adf, "devm_hwmon_device_register_with_groups" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0xddf1ec59, "devm_regulator_get_optional" },
	{ 0x100f41a4, "regulator_get_voltage" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cti,ads7828");
MODULE_ALIAS("of:N*T*Cti,ads7828C*");
MODULE_ALIAS("of:N*T*Cti,ads7830");
MODULE_ALIAS("of:N*T*Cti,ads7830C*");
MODULE_ALIAS("i2c:ads7828");
MODULE_ALIAS("i2c:ads7830");

MODULE_INFO(srcversion, "7C5CB953DE07C9B61908FBF");
