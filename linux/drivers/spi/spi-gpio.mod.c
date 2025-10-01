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
	{ 0x2092cf46, "gpiod_direction_input" },
	{ 0x6f7defa4, "gpiod_direction_output" },
	{ 0xb5d9c164, "spi_bitbang_cleanup" },
	{ 0x76b249b, "spi_bitbang_setup" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x4d300d69, "__devm_spi_alloc_controller" },
	{ 0x8939688b, "device_set_node" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0x3bece477, "spi_bitbang_setup_transfer" },
	{ 0xa1599c4b, "spi_bitbang_init" },
	{ 0x7d0a187f, "devm_spi_register_controller" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xe58ce88c, "devm_gpiod_get_index" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0xf2cffaef, "gpiod_get_value_cansleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "spi-bitbang");

MODULE_ALIAS("of:N*T*Cspi-gpio");
MODULE_ALIAS("of:N*T*Cspi-gpioC*");

MODULE_INFO(srcversion, "211D3A9A026781927EF040E");
