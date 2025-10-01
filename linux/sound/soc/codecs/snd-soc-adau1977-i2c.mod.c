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
	{ 0x4805b066, "i2c_match_id" },
	{ 0x4829a47e, "memcpy" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0xf7baf5ca, "adau1977_regmap_config" },
	{ 0xdcb764ad, "memset" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xf5977246, "adau1977_probe" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c,snd-soc-adau1977");

MODULE_ALIAS("i2c:adau1977");
MODULE_ALIAS("i2c:adau1978");
MODULE_ALIAS("i2c:adau1979");
MODULE_ALIAS("of:N*T*Cadi,adau1977");
MODULE_ALIAS("of:N*T*Cadi,adau1977C*");
MODULE_ALIAS("of:N*T*Cadi,adau1978");
MODULE_ALIAS("of:N*T*Cadi,adau1978C*");
MODULE_ALIAS("of:N*T*Cadi,adau1979");
MODULE_ALIAS("of:N*T*Cadi,adau1979C*");

MODULE_INFO(srcversion, "FABB5608B625E8450AC0CAE");
