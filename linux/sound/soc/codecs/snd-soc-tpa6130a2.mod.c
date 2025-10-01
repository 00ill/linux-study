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
	{ 0xb724c49d, "regulator_enable" },
	{ 0x91074fa1, "regcache_cache_only" },
	{ 0xd49bc814, "regcache_sync" },
	{ 0x465ab57e, "devm_gpio_request" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x4805b066, "i2c_match_id" },
	{ 0xe8bf741f, "gpiod_set_raw_value" },
	{ 0xe7b70404, "regcache_mark_dirty" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x63c42bd1, "devm_regulator_get" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0x669c413b, "_dev_err" },
	{ 0x3a264d4a, "gpiod_direction_output_raw" },
	{ 0xddfb6567, "snd_soc_add_component_controls" },
	{ 0x735829f, "of_get_named_gpio" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xc7ba913d, "snd_soc_get_volsw" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x26aa5f3, "snd_soc_put_volsw" },
	{ 0x44056010, "gpio_to_desc" },
	{ 0x7c913590, "regulator_disable" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,regmap-i2c");

MODULE_ALIAS("i2c:tpa6130a2");
MODULE_ALIAS("i2c:tpa6140a2");
MODULE_ALIAS("of:N*T*Cti,tpa6130a2");
MODULE_ALIAS("of:N*T*Cti,tpa6130a2C*");
MODULE_ALIAS("of:N*T*Cti,tpa6140a2");
MODULE_ALIAS("of:N*T*Cti,tpa6140a2C*");

MODULE_INFO(srcversion, "C3C7ED23B37B66CC4476DD2");
