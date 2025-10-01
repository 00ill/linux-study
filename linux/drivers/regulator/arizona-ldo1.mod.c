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
	{ 0x92063b87, "__platform_register_drivers" },
	{ 0x15058ed7, "gpiod_put" },
	{ 0x9348b439, "rdev_get_regmap" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0xaf6feec5, "regulator_get_voltage_sel_regmap" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x5ede7056, "regulator_set_voltage_sel_regmap" },
	{ 0xd9ce3780, "platform_unregister_drivers" },
	{ 0xec905c5d, "of_get_child_by_name" },
	{ 0xdcb764ad, "memset" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0x96eeb936, "of_get_regulator_init_data" },
	{ 0x469438cc, "of_node_put" },
	{ 0x80dd4730, "gpiod_get_optional" },
	{ 0xed5e1c79, "devm_regulator_register" },
	{ 0x669c413b, "_dev_err" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcb1cdc54, "regulator_list_voltage_linear" },
	{ 0xa3246722, "regulator_map_voltage_linear" },
	{ 0xa4148073, "regulator_list_voltage_linear_range" },
	{ 0x88e22100, "regulator_map_voltage_linear_range" },
	{ 0xe76c4410, "regulator_set_bypass_regmap" },
	{ 0x2ea208dc, "regulator_get_bypass_regmap" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7EDD332484A23BF82391ED5");
