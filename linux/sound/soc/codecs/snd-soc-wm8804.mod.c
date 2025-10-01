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

KSYMTAB_DATA(wm8804_regmap_config, "_gpl", "");
KSYMTAB_FUNC(wm8804_probe, "_gpl", "");
KSYMTAB_FUNC(wm8804_remove, "_gpl", "");
KSYMTAB_DATA(wm8804_pm, "_gpl", "");

SYMBOL_CRC(wm8804_regmap_config, 0x160249c4, "_gpl");
SYMBOL_CRC(wm8804_probe, 0xa20c600e, "_gpl");
SYMBOL_CRC(wm8804_remove, 0x87cc5b89, "_gpl");
SYMBOL_CRC(wm8804_pm, 0xb229ddc1, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd49bc814, "regcache_sync" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xd50a6007, "snd_soc_component_read" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x888069f8, "snd_soc_component_test_bits" },
	{ 0xe7b70404, "regcache_mark_dirty" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x244c4519, "snd_soc_component_write" },
	{ 0x437d0342, "__pm_runtime_set_status" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0xcb79172c, "devm_regulator_register_notifier" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0x94cdce7d, "regulator_bulk_disable" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4ea8cba3, "snd_soc_dapm_kcontrol_dapm" },
	{ 0x2bfdd58b, "snd_soc_info_enum_double" },
	{ 0x994edb3c, "regulator_bulk_enable" },
	{ 0x273de036, "devm_regulator_bulk_get" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0xe35415b5, "snd_soc_component_update_bits" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x892f2f94, "snd_soc_dapm_get_enum_double" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");


MODULE_INFO(srcversion, "5A1F1CDB07882B800B575B3");
