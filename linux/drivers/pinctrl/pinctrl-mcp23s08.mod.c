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

KSYMTAB_DATA(mcp23x08_regmap, "_gpl", "");
KSYMTAB_DATA(mcp23x17_regmap, "_gpl", "");
KSYMTAB_FUNC(mcp23s08_probe_one, "_gpl", "");

SYMBOL_CRC(mcp23x08_regmap, 0x3cb6bf62, "_gpl");
SYMBOL_CRC(mcp23x17_regmap, 0x0ccd1b8d, "_gpl");
SYMBOL_CRC(mcp23s08_probe_one, 0xec2108c6, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x75a167e3, "pinconf_generic_dt_node_to_map" },
	{ 0x35ef1cd, "gpiochip_get_data" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x91074fa1, "regcache_cache_only" },
	{ 0xd49bc814, "regcache_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x59ac2b0f, "pinctrl_dev_get_drvdata" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0x603da9ea, "handle_simple_irq" },
	{ 0x71d5ffb9, "devm_gpiochip_add_data_with_key" },
	{ 0x71176e6, "devm_pinctrl_register" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x669c413b, "_dev_err" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x89426a62, "__irq_resolve_mapping" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0xe4a8350b, "gpiochip_disable_irq" },
	{ 0xf29a84d1, "gpiochip_enable_irq" },
	{ 0xc7d83fd, "gpiochip_irq_reqres" },
	{ 0xf5a126c3, "gpiochip_irq_relres" },
	{ 0xfe0fef8a, "pinconf_generic_dt_free_map" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1271D2918A9ED4C03EA2693");
