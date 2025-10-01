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
	{ 0x13d6ad52, "ssd130x_shutdown" },
	{ 0x189220e2, "ssd130x_remove" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xa6fb68b9, "__devm_regmap_init" },
	{ 0xb3aaa57c, "ssd130x_probe" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x92893115, "driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0xce12c86b, "spi_sync" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x760c3ba6, "ssd130x_variants" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ssd130x");

MODULE_ALIAS("spi:sh1106");
MODULE_ALIAS("spi:ssd1305");
MODULE_ALIAS("spi:ssd1306");
MODULE_ALIAS("spi:ssd1307");
MODULE_ALIAS("spi:ssd1309");
MODULE_ALIAS("spi:ssd1322");
MODULE_ALIAS("spi:ssd1325");
MODULE_ALIAS("spi:ssd1327");
MODULE_ALIAS("spi:ssd1331");
MODULE_ALIAS("of:N*T*Csinowealth,sh1106");
MODULE_ALIAS("of:N*T*Csinowealth,sh1106C*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1305");
MODULE_ALIAS("of:N*T*Csolomon,ssd1305C*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306C*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1307");
MODULE_ALIAS("of:N*T*Csolomon,ssd1307C*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1309");
MODULE_ALIAS("of:N*T*Csolomon,ssd1309C*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1322");
MODULE_ALIAS("of:N*T*Csolomon,ssd1322C*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1325");
MODULE_ALIAS("of:N*T*Csolomon,ssd1325C*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1327");
MODULE_ALIAS("of:N*T*Csolomon,ssd1327C*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1331");
MODULE_ALIAS("of:N*T*Csolomon,ssd1331C*");

MODULE_INFO(srcversion, "A23D9C5AD950853760A5E76");
