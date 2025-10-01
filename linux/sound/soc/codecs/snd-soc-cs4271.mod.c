#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_DATA(cs4271_dt_ids, "_gpl", "");
KSYMTAB_DATA(cs4271_regmap_config, "_gpl", "");
KSYMTAB_FUNC(cs4271_probe, "_gpl", "");

SYMBOL_CRC(cs4271_dt_ids, 0x7d05786f, "_gpl");
SYMBOL_CRC(cs4271_regmap_config, 0x1ea6cb64, "_gpl");
SYMBOL_CRC(cs4271_probe, 0xbb3147c4, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd49bc814, "regcache_sync" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0xe7b70404, "regcache_mark_dirty" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0x94cdce7d, "regulator_bulk_disable" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0xd203810d, "snd_ctl_boolean_mono_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0x994edb3c, "regulator_bulk_enable" },
	{ 0x273de036, "devm_regulator_bulk_get" },
	{ 0xc7ba913d, "snd_soc_get_volsw" },
	{ 0x26aa5f3, "snd_soc_put_volsw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xb3b39a03, "gpiod_set_consumer_name" },
	{ 0x6f7defa4, "gpiod_direction_output" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd");

MODULE_ALIAS("of:N*T*Ccirrus,cs4271");
MODULE_ALIAS("of:N*T*Ccirrus,cs4271C*");

MODULE_INFO(srcversion, "E74594F1C2E0EE028C29F75");
