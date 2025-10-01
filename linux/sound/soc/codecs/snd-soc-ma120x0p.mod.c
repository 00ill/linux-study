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
	{ 0xf2cffaef, "gpiod_get_value_cansleep" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x888069f8, "snd_soc_component_test_bits" },
	{ 0x2795b5f0, "gpiod_to_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xd44144c9, "snd_soc_put_enum_double" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x244c4519, "snd_soc_component_write" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0x122c3a7e, "_printk" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0x1a32c879, "snd_soc_get_enum_double" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0xc1e6e422, "snd_soc_unregister_component" },
	{ 0x669c413b, "_dev_err" },
	{ 0x8bf569e8, "snd_soc_get_volsw_range" },
	{ 0x8830d3c5, "snd_soc_info_volsw_range" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x4586e558, "snd_soc_put_volsw_range" },
	{ 0x2bfdd58b, "snd_soc_info_enum_double" },
	{ 0xe35415b5, "snd_soc_component_update_bits" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Cma,ma120x0p");
MODULE_ALIAS("of:N*T*Cma,ma120x0pC*");
MODULE_ALIAS("i2c:ma120x0p");

MODULE_INFO(srcversion, "0A4DFEDF57903A48929454E");
