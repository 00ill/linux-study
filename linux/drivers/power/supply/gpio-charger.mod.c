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
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x639e2de9, "power_supply_get_drvdata" },
	{ 0xf2cffaef, "gpiod_get_value_cansleep" },
	{ 0x2795b5f0, "gpiod_to_irq" },
	{ 0x293ed9c2, "devm_request_any_context_irq" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x9a354cc, "devm_gpiod_get_array_optional" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x669c413b, "_dev_err" },
	{ 0x85dc3ccb, "devm_power_supply_register" },
	{ 0xa0fffb26, "device_property_read_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x12437bc7, "power_supply_changed" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-charger");
MODULE_ALIAS("of:N*T*Cgpio-chargerC*");

MODULE_INFO(srcversion, "719112820E69C5A00265722");
