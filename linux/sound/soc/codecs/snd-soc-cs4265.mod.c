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
	{ 0xcc0983c6, "regmap_write" },
	{ 0xbe5be66f, "snd_soc_put_volsw_sx" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xbf02aec0, "snd_soc_bytes_put" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xaf6b8cd9, "snd_soc_bytes_get" },
	{ 0xd44144c9, "snd_soc_put_enum_double" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1a32c879, "snd_soc_get_enum_double" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf2fef9c5, "snd_soc_dapm_put_volsw" },
	{ 0x7ae1d2b2, "snd_soc_bytes_info" },
	{ 0x2bfdd58b, "snd_soc_info_enum_double" },
	{ 0xaae47aec, "snd_soc_info_volsw_sx" },
	{ 0xc7ba913d, "snd_soc_get_volsw" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x26aa5f3, "snd_soc_put_volsw" },
	{ 0xe35415b5, "snd_soc_component_update_bits" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2128f382, "snd_soc_dapm_get_volsw" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x892f2f94, "snd_soc_dapm_get_enum_double" },
	{ 0x18937cc3, "snd_soc_get_volsw_sx" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,regmap-i2c,snd-pcm");

MODULE_ALIAS("of:N*T*Ccirrus,cs4265");
MODULE_ALIAS("of:N*T*Ccirrus,cs4265C*");
MODULE_ALIAS("i2c:cs4265");

MODULE_INFO(srcversion, "DEBF5E79693F7662ED42FD7");
