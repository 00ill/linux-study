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
	{ 0x122c3a7e, "_printk" },
	{ 0xaded60ca, "i2c_del_adapter" },
	{ 0xf2cffaef, "gpiod_get_value_cansleep" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0xf112a60d, "gpiod_cansleep" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x8939688b, "device_set_node" },
	{ 0x9a1b7cee, "i2c_bit_add_numbered_bus" },
	{ 0xd213cf97, "desc_to_gpio" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe58ce88c, "devm_gpiod_get_index" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "i2c-algo-bit");

MODULE_ALIAS("acpi*:LOON0005:*");
MODULE_ALIAS("of:N*T*Ci2c-gpio");
MODULE_ALIAS("of:N*T*Ci2c-gpioC*");

MODULE_INFO(srcversion, "C3B9BF1667E74EA61E6FC14");
