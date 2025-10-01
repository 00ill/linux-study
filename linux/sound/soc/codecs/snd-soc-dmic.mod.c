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
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cdmic-codec");
MODULE_ALIAS("of:N*T*Cdmic-codecC*");

MODULE_INFO(srcversion, "DA5CC7DF04C8B718DAA5053");
