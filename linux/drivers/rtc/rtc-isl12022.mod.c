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
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x945446cb, "regmap_bulk_write" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0x71179ca1, "__clk_hw_register_fixed_rate" },
	{ 0x2292667a, "of_clk_hw_simple_get" },
	{ 0x26fc7366, "devm_of_clk_add_hw_provider" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0xc8aca20f, "devm_hwmon_device_register_with_info" },
	{ 0x54062ddb, "devm_rtc_allocate_device" },
	{ 0x2ff19fcf, "__devm_rtc_register_device" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x669c413b, "_dev_err" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("i2c:isl12022");
MODULE_ALIAS("of:N*T*Cisl,isl12022");
MODULE_ALIAS("of:N*T*Cisl,isl12022C*");
MODULE_ALIAS("of:N*T*Cisil,isl12022");
MODULE_ALIAS("of:N*T*Cisil,isl12022C*");

MODULE_INFO(srcversion, "3DAEB26A82DE585051968F4");
