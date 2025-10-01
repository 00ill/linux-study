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
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0x76dd6ed7, "cs42xx8_regmap_config" },
	{ 0xcd3794c9, "cs42448_data" },
	{ 0x7cac7292, "cs42888_data" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0xda1bd86, "i2c_get_match_data" },
	{ 0xd8151927, "cs42xx8_pm" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xb498944f, "cs42xx8_probe" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c,snd-soc-cs42xx8");

MODULE_ALIAS("of:N*T*Ccirrus,cs42448");
MODULE_ALIAS("of:N*T*Ccirrus,cs42448C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs42888");
MODULE_ALIAS("of:N*T*Ccirrus,cs42888C*");
MODULE_ALIAS("i2c:cs42448");
MODULE_ALIAS("i2c:cs42888");
MODULE_ALIAS("of:N*T*Ccirrus,cs42448");
MODULE_ALIAS("of:N*T*Ccirrus,cs42448C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs42888");
MODULE_ALIAS("of:N*T*Ccirrus,cs42888C*");

MODULE_INFO(srcversion, "BF7F46129D0146ACF407917");
