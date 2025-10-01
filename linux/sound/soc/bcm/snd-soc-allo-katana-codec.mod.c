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
	{ 0xd44144c9, "snd_soc_put_enum_double" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1a32c879, "snd_soc_get_enum_double" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0xc1e6e422, "snd_soc_unregister_component" },
	{ 0x669c413b, "_dev_err" },
	{ 0xdcb764ad, "memset" },
	{ 0x2bfdd58b, "snd_soc_info_enum_double" },
	{ 0xc7ba913d, "snd_soc_get_volsw" },
	{ 0x666f5d9, "snd_soc_register_component" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x26aa5f3, "snd_soc_put_volsw" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,regmap-i2c,snd-pcm");

MODULE_ALIAS("i2c:allo-katana-codec");
MODULE_ALIAS("of:N*T*Callo,allo-katana-codec");
MODULE_ALIAS("of:N*T*Callo,allo-katana-codecC*");

MODULE_INFO(srcversion, "AF96860C73CBCD4E5F095BE");
