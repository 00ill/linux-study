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
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x43b4bdc6, "tlv320aic23_regmap" },
	{ 0x721381, "tlv320aic23_probe" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c,snd-soc-tlv320aic23");

MODULE_ALIAS("i2c:tlv320aic23");
MODULE_ALIAS("of:N*T*Cti,tlv320aic23");
MODULE_ALIAS("of:N*T*Cti,tlv320aic23C*");

MODULE_INFO(srcversion, "963CA5F104164C23403E415");
