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
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xd44144c9, "snd_soc_put_enum_double" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x94cdce7d, "regulator_bulk_disable" },
	{ 0x1a32c879, "snd_soc_get_enum_double" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0x669c413b, "_dev_err" },
	{ 0x8bf569e8, "snd_soc_get_volsw_range" },
	{ 0x8830d3c5, "snd_soc_info_volsw_range" },
	{ 0xda1bd86, "i2c_get_match_data" },
	{ 0x4586e558, "snd_soc_put_volsw_range" },
	{ 0x2bfdd58b, "snd_soc_info_enum_double" },
	{ 0x994edb3c, "regulator_bulk_enable" },
	{ 0x273de036, "devm_regulator_bulk_get" },
	{ 0xc7ba913d, "snd_soc_get_volsw" },
	{ 0x26aa5f3, "snd_soc_put_volsw" },
	{ 0xe35415b5, "snd_soc_component_update_bits" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x815588a6, "clk_enable" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xa6fb68b9, "__devm_regmap_init" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("i2c:tas5707");
MODULE_ALIAS("i2c:tas5711");
MODULE_ALIAS("i2c:tas5717");
MODULE_ALIAS("i2c:tas5719");
MODULE_ALIAS("i2c:tas5721");
MODULE_ALIAS("i2c:tas5733");
MODULE_ALIAS("of:N*T*Cti,tas5707");
MODULE_ALIAS("of:N*T*Cti,tas5707C*");
MODULE_ALIAS("of:N*T*Cti,tas5711");
MODULE_ALIAS("of:N*T*Cti,tas5711C*");
MODULE_ALIAS("of:N*T*Cti,tas5717");
MODULE_ALIAS("of:N*T*Cti,tas5717C*");
MODULE_ALIAS("of:N*T*Cti,tas5719");
MODULE_ALIAS("of:N*T*Cti,tas5719C*");
MODULE_ALIAS("of:N*T*Cti,tas5721");
MODULE_ALIAS("of:N*T*Cti,tas5721C*");
MODULE_ALIAS("of:N*T*Cti,tas5733");
MODULE_ALIAS("of:N*T*Cti,tas5733C*");

MODULE_INFO(srcversion, "07BDEB895ACE90BA44F2C04");
