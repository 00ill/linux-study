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
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0xa661db9f, "w1_remove_master_device" },
	{ 0x3c24ae1d, "gpiod_get_value" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0xe58ce88c, "devm_gpiod_get_index" },
	{ 0xf5365614, "devm_gpiod_get_index_optional" },
	{ 0x6f7defa4, "gpiod_direction_output" },
	{ 0x139e8b1f, "w1_add_master_device" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x3a264d4a, "gpiod_direction_output_raw" },
	{ 0xf9a482f9, "msleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "wire");

MODULE_ALIAS("of:N*T*Cw1-gpio");
MODULE_ALIAS("of:N*T*Cw1-gpioC*");

MODULE_INFO(srcversion, "3FD769D27A9EC2FCF6DE9C9");
