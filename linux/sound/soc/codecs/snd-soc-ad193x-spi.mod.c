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
	{ 0x8e7ae2d3, "spi_get_device_id" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x92893115, "driver_unregister" },
	{ 0xea0fc14b, "ad193x_probe" },
	{ 0xb79bb3c0, "ad193x_regmap_config" },
	{ 0xcd47056b, "__spi_register_driver" },
	{ 0x3fed91ff, "__devm_regmap_init_spi" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-ad193x,regmap-spi");

MODULE_ALIAS("spi:ad193x");
MODULE_ALIAS("spi:ad1933");
MODULE_ALIAS("spi:ad1934");
MODULE_ALIAS("spi:ad1938");
MODULE_ALIAS("spi:ad1939");
MODULE_ALIAS("spi:adau1328");

MODULE_INFO(srcversion, "B58BA5AFA99F32D0FE3C431");
