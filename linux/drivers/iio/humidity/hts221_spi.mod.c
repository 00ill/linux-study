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
	{ 0xcd47056b, "__spi_register_driver" },
	{ 0x3fed91ff, "__devm_regmap_init_spi" },
	{ 0xf71ae66d, "hts221_probe" },
	{ 0x669c413b, "_dev_err" },
	{ 0x92893115, "driver_unregister" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-spi,hts221");

MODULE_ALIAS("spi:hts221");
MODULE_ALIAS("of:N*T*Cst,hts221");
MODULE_ALIAS("of:N*T*Cst,hts221C*");

MODULE_INFO(srcversion, "440B7FFCCEFC92BDA77B605");
