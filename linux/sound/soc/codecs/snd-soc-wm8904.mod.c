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
	{ 0x5d3260cd, "snd_soc_dapm_put_enum_double" },
	{ 0x91074fa1, "regcache_cache_only" },
	{ 0xd49bc814, "regcache_sync" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xd50a6007, "snd_soc_component_read" },
	{ 0x4805b066, "i2c_match_id" },
	{ 0x37a0cba, "kfree" },
	{ 0xd44144c9, "snd_soc_put_enum_double" },
	{ 0xe7b70404, "regcache_mark_dirty" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0x244c4519, "snd_soc_component_write" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x122c3a7e, "_printk" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x94cdce7d, "regulator_bulk_disable" },
	{ 0x1a32c879, "snd_soc_get_enum_double" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0xd203810d, "snd_ctl_boolean_mono_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0xddfb6567, "snd_soc_add_component_controls" },
	{ 0xa8a523fe, "of_match_node" },
	{ 0x7e606130, "snd_soc_calc_bclk" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x6c7b687c, "snd_soc_dapm_add_routes" },
	{ 0x2bfdd58b, "snd_soc_info_enum_double" },
	{ 0x994edb3c, "regulator_bulk_enable" },
	{ 0x273de036, "devm_regulator_bulk_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xc7ba913d, "snd_soc_get_volsw" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x26aa5f3, "snd_soc_put_volsw" },
	{ 0xe35415b5, "snd_soc_component_update_bits" },
	{ 0xa9c7f153, "snd_soc_dapm_new_controls" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x892f2f94, "snd_soc_dapm_get_enum_double" },
	{ 0x815588a6, "clk_enable" },
	{ 0x2acda8a0, "snd_soc_params_to_bclk" },
	{ 0xf9a482f9, "msleep" },
	{ 0x847188e8, "krealloc_noprof" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,regmap-i2c,snd,snd-pcm");

MODULE_ALIAS("i2c:wm8904");
MODULE_ALIAS("i2c:wm8912");
MODULE_ALIAS("i2c:wm8918");
MODULE_ALIAS("of:N*T*Cwlf,wm8904");
MODULE_ALIAS("of:N*T*Cwlf,wm8904C*");
MODULE_ALIAS("of:N*T*Cwlf,wm8912");
MODULE_ALIAS("of:N*T*Cwlf,wm8912C*");

MODULE_INFO(srcversion, "4A7A3A436667F67598B20B4");
