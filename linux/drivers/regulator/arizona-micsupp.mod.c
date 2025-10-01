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
	{ 0x9ba6295b, "regmap_read" },
	{ 0xacc484ad, "snd_soc_component_disable_pin" },
	{ 0x7ba0b3cf, "snd_soc_dapm_sync" },
	{ 0x669c413b, "_dev_err" },
	{ 0xa34de55d, "snd_soc_component_force_enable_pin" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd9ce3780, "platform_unregister_drivers" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0xed5e1c79, "devm_regulator_register" },
	{ 0x469438cc, "of_node_put" },
	{ 0xec905c5d, "of_get_child_by_name" },
	{ 0x96eeb936, "of_get_regulator_init_data" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x1cba4270, "rdev_get_drvdata" },
	{ 0xe76c4410, "regulator_set_bypass_regmap" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa7699482, "regulator_enable_regmap" },
	{ 0xb73c1338, "regulator_disable_regmap" },
	{ 0xa4148073, "regulator_list_voltage_linear_range" },
	{ 0x88e22100, "regulator_map_voltage_linear_range" },
	{ 0x5ede7056, "regulator_set_voltage_sel_regmap" },
	{ 0xaf6feec5, "regulator_get_voltage_sel_regmap" },
	{ 0xc18ac524, "regulator_is_enabled_regmap" },
	{ 0x2ea208dc, "regulator_get_bypass_regmap" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "0A5991B6A8E34D06E8851F4");
