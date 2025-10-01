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

KSYMTAB_FUNC(adau1961_set_vgnd_shorted, "", "");
KSYMTAB_FUNC(adau1961_is_hp_capless, "", "");

SYMBOL_CRC(adau1961_set_vgnd_shorted, 0xda98d9d6, "");
SYMBOL_CRC(adau1961_is_hp_capless, 0xd7b39c37, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5d3260cd, "snd_soc_dapm_put_enum_double" },
	{ 0x91074fa1, "regcache_cache_only" },
	{ 0xd49bc814, "regcache_sync" },
	{ 0x49d91fad, "snd_soc_card_get_kcontrol" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xd44144c9, "snd_soc_put_enum_double" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x122c3a7e, "_printk" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1a32c879, "snd_soc_get_enum_double" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0xf2fef9c5, "snd_soc_dapm_put_volsw" },
	{ 0x93d1d1e4, "snd_ctl_notify" },
	{ 0x3a1aed17, "of_property_read_string" },
	{ 0xddfb6567, "snd_soc_add_component_controls" },
	{ 0xdcb764ad, "memset" },
	{ 0x6c7b687c, "snd_soc_dapm_add_routes" },
	{ 0x2bfdd58b, "snd_soc_info_enum_double" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xc7ba913d, "snd_soc_get_volsw" },
	{ 0x26aa5f3, "snd_soc_put_volsw" },
	{ 0xa9c7f153, "snd_soc_dapm_new_controls" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x2128f382, "snd_soc_dapm_get_volsw" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xea124bd1, "gcd" },
	{ 0x892f2f94, "snd_soc_dapm_get_enum_double" },
	{ 0xee1be65c, "regmap_raw_write" },
	{ 0x6e336033, "snd_soc_dapm_del_routes" },
	{ 0x815588a6, "clk_enable" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,regmap-i2c,snd,snd-pcm");

MODULE_ALIAS("of:N*T*Cblokas,upisnd-codec");
MODULE_ALIAS("of:N*T*Cblokas,upisnd-codecC*");
MODULE_ALIAS("i2c:upisnd-codec");

MODULE_INFO(srcversion, "381ADEE7A8EDA572CC9C707");
