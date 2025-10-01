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
	{ 0xd49bc814, "regcache_sync" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xe7b70404, "regcache_mark_dirty" },
	{ 0x791acbcf, "gpiod_set_array_value_cansleep" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x94cdce7d, "regulator_bulk_disable" },
	{ 0xbfbd0846, "sigmadsp_restrict_params" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0x669c413b, "_dev_err" },
	{ 0x13016d8f, "sigmadsp_setup" },
	{ 0xba4b97ee, "sigmadsp_reset" },
	{ 0x9a354cc, "devm_gpiod_get_array_optional" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x57624c0a, "of_property_read_variable_u8_array" },
	{ 0x994edb3c, "regulator_bulk_enable" },
	{ 0x273de036, "devm_regulator_bulk_get" },
	{ 0x9ee46059, "sigmadsp_attach" },
	{ 0xc7ba913d, "snd_soc_get_volsw" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x26aa5f3, "snd_soc_put_volsw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x76585140, "devm_sigmadsp_init_i2c" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xa6fb68b9, "__devm_regmap_init" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-sigmadsp,snd-soc-sigmadsp-i2c,snd-pcm");

MODULE_ALIAS("of:N*T*Cadi,adau1701");
MODULE_ALIAS("of:N*T*Cadi,adau1701C*");
MODULE_ALIAS("i2c:adau1401");
MODULE_ALIAS("i2c:adau1401a");
MODULE_ALIAS("i2c:adau1701");
MODULE_ALIAS("i2c:adau1702");

MODULE_INFO(srcversion, "B7F5BC782DC2AAFC83B554E");
