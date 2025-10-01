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
	{ 0xea0fc14b, "ad193x_probe" },
	{ 0xdcb764ad, "memset" },
	{ 0xb79bb3c0, "ad193x_regmap_config" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c,snd-soc-ad193x");

MODULE_ALIAS("i2c:ad1936");
MODULE_ALIAS("i2c:ad1937");

MODULE_INFO(srcversion, "D6CAC3FD765E76EE08888B2");
