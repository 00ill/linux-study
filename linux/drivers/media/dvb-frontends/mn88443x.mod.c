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
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x5c362e8, "i2c_unregister_device" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x8733236, "intlog10" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3826df6, "i2c_client_get_device_id" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xaf639b91, "of_device_get_match_data" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xa60c35c2, "i2c_new_dummy_device" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x669c413b, "_dev_err" },
	{ 0x815588a6, "clk_enable" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("i2c:mn884433");
MODULE_ALIAS("i2c:mn884434-0");
MODULE_ALIAS("i2c:mn884434-1");
MODULE_ALIAS("of:N*T*Csocionext,mn884433");
MODULE_ALIAS("of:N*T*Csocionext,mn884433C*");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-0");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-0C*");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-1");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-1C*");

MODULE_INFO(srcversion, "620A8DC8DD1C03DC2C87681");
