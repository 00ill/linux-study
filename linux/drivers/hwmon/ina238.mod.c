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
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0xc8aca20f, "devm_hwmon_device_register_with_info" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1f09285b, "i2c_smbus_read_i2c_block_data" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cti,ina237");
MODULE_ALIAS("of:N*T*Cti,ina237C*");
MODULE_ALIAS("of:N*T*Cti,ina238");
MODULE_ALIAS("of:N*T*Cti,ina238C*");
MODULE_ALIAS("i2c:ina238");

MODULE_INFO(srcversion, "48539536AEF0B67835FE057");
