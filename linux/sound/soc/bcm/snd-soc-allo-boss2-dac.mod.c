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
	{ 0xcc0983c6, "regmap_write" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xdce2f57c, "of_property_read_variable_u16_array" },
	{ 0xd44144c9, "snd_soc_put_enum_double" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1a32c879, "snd_soc_get_enum_double" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0xc1e6e422, "snd_soc_unregister_component" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0xcae7cb9b, "snd_pcm_hw_constraint_list" },
	{ 0xdcb764ad, "memset" },
	{ 0x2bfdd58b, "snd_soc_info_enum_double" },
	{ 0xc7ba913d, "snd_soc_get_volsw" },
	{ 0x666f5d9, "snd_soc_register_component" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x26aa5f3, "snd_soc_put_volsw" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,regmap-i2c,snd-pcm");

MODULE_ALIAS("i2c:allo-cs43198");
MODULE_ALIAS("of:N*T*Callo,allo-cs43198");
MODULE_ALIAS("of:N*T*Callo,allo-cs43198C*");

MODULE_INFO(srcversion, "8BB1AD201DBEA4DFE778412");
