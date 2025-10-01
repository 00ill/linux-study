#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(arizona_clk32k_enable, "_gpl", "");
KSYMTAB_FUNC(arizona_clk32k_disable, "_gpl", "");
KSYMTAB_DATA(arizona_pm_ops, "_gpl", "");
KSYMTAB_FUNC(arizona_dev_init, "_gpl", "");
KSYMTAB_FUNC(arizona_dev_exit, "_gpl", "");
KSYMTAB_FUNC(arizona_request_irq, "_gpl", "");
KSYMTAB_FUNC(arizona_free_irq, "_gpl", "");
KSYMTAB_FUNC(arizona_set_irq_wake, "_gpl", "");
KSYMTAB_DATA(wm5102_spi_regmap, "_gpl", "");
KSYMTAB_DATA(wm5102_i2c_regmap, "_gpl", "");

SYMBOL_CRC(arizona_clk32k_enable, 0x6bea7ebf, "_gpl");
SYMBOL_CRC(arizona_clk32k_disable, 0x12a51d51, "_gpl");
SYMBOL_CRC(arizona_pm_ops, 0x70699035, "_gpl");
SYMBOL_CRC(arizona_dev_init, 0x4656ee66, "_gpl");
SYMBOL_CRC(arizona_dev_exit, 0xbd5d4361, "_gpl");
SYMBOL_CRC(arizona_request_irq, 0x5035eb1d, "_gpl");
SYMBOL_CRC(arizona_free_irq, 0x8d15784e, "_gpl");
SYMBOL_CRC(arizona_set_irq_wake, 0x77cdfe6a, "_gpl");
SYMBOL_CRC(wm5102_spi_regmap, 0x632cbb91, "_gpl");
SYMBOL_CRC(wm5102_i2c_regmap, 0x20147add, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb724c49d, "regulator_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xff6e0fad, "irq_domain_xlate_twocell" },
	{ 0x91074fa1, "regcache_cache_only" },
	{ 0xd49bc814, "regcache_sync" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0xed333fb0, "regulator_get" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x74e0bd7f, "gpiod_set_raw_value_cansleep" },
	{ 0x62990e3a, "pm_runtime_set_autosuspend_delay" },
	{ 0x547b2119, "irq_domain_remove" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0xd9849d6f, "regulator_put" },
	{ 0x2795b5f0, "gpiod_to_irq" },
	{ 0x4829a47e, "memcpy" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xe7b70404, "regcache_mark_dirty" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0x437d0342, "__pm_runtime_set_status" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x434a7994, "irq_set_chip_and_handler_name" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0x94cdce7d, "regulator_bulk_disable" },
	{ 0x603da9ea, "handle_simple_irq" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x3a97fc5a, "regmap_add_irq_chip" },
	{ 0x2e717f39, "gpiod_get_raw_value_cansleep" },
	{ 0xc529465e, "devm_gpio_request_one" },
	{ 0x89eb98c5, "regmap_multi_reg_write_bypassed" },
	{ 0x669c413b, "_dev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5256f7f0, "irq_get_irq_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x94479b85, "mfd_add_devices" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89426a62, "__irq_resolve_mapping" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x994edb3c, "regulator_bulk_enable" },
	{ 0x273de036, "devm_regulator_bulk_get" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x1894ba7a, "irq_domain_instantiate" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0x5e90e886, "irq_create_mapping_affinity" },
	{ 0x44056010, "gpio_to_desc" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x46c7275f, "mfd_remove_devices" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x7c913590, "regulator_disable" },
	{ 0xe304d311, "__pm_runtime_suspend" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xc0d8cf8, "__pm_runtime_use_autosuspend" },
	{ 0x131a5ed7, "regmap_del_irq_chip" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0x110f8f98, "regulator_set_voltage" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B34FBEEF77CE0DC9716E91E");
