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
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xda1bd86, "i2c_get_match_data" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0x246fb4a3, "devm_regulator_get_enable" },
	{ 0xc8aca20f, "devm_hwmon_device_register_with_info" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x669c413b, "_dev_err" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0xba7feb5b, "regmap_read_bypassed" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xe7b70404, "regcache_mark_dirty" },
	{ 0xd49bc814, "regcache_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cti,ina219");
MODULE_ALIAS("of:N*T*Cti,ina219C*");
MODULE_ALIAS("of:N*T*Cti,ina220");
MODULE_ALIAS("of:N*T*Cti,ina220C*");
MODULE_ALIAS("of:N*T*Cti,ina226");
MODULE_ALIAS("of:N*T*Cti,ina226C*");
MODULE_ALIAS("of:N*T*Cti,ina230");
MODULE_ALIAS("of:N*T*Cti,ina230C*");
MODULE_ALIAS("of:N*T*Cti,ina231");
MODULE_ALIAS("of:N*T*Cti,ina231C*");
MODULE_ALIAS("of:N*T*Cti,ina260");
MODULE_ALIAS("of:N*T*Cti,ina260C*");
MODULE_ALIAS("i2c:ina219");
MODULE_ALIAS("i2c:ina220");
MODULE_ALIAS("i2c:ina226");
MODULE_ALIAS("i2c:ina230");
MODULE_ALIAS("i2c:ina231");
MODULE_ALIAS("i2c:ina260");

MODULE_INFO(srcversion, "3225A9C12826A5EC5190F7E");
