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

KSYMTAB_FUNC(gpio_regmap_get_drvdata, "_gpl", "");
KSYMTAB_FUNC(gpio_regmap_register, "_gpl", "");
KSYMTAB_FUNC(gpio_regmap_unregister, "_gpl", "");
KSYMTAB_FUNC(devm_gpio_regmap_register, "_gpl", "");

SYMBOL_CRC(gpio_regmap_get_drvdata, 0x496ce291, "_gpl");
SYMBOL_CRC(gpio_regmap_register, 0x850da3ff, "_gpl");
SYMBOL_CRC(gpio_regmap_unregister, 0xb7066570, "_gpl");
SYMBOL_CRC(devm_gpio_regmap_register, 0x15acb975, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x654a2723, "gpiochip_remove" },
	{ 0x37a0cba, "kfree" },
	{ 0x35ef1cd, "gpiochip_get_data" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x44051fd7, "regmap_might_sleep" },
	{ 0x79d02d44, "gpiochip_add_data_with_key" },
	{ 0x74f12191, "gpiochip_irqchip_add_domain" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2413A089233D61AFCDABB8A");
