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
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0xbd5d4361, "arizona_dev_exit" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xda1bd86, "i2c_get_match_data" },
	{ 0x669c413b, "_dev_err" },
	{ 0x20147add, "wm5102_i2c_regmap" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0x4656ee66, "arizona_dev_init" },
	{ 0x70699035, "arizona_pm_ops" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "arizona,regmap-i2c");

MODULE_ALIAS("of:N*T*Cwlf,wm5102");
MODULE_ALIAS("of:N*T*Cwlf,wm5102C*");
MODULE_ALIAS("of:N*T*Cwlf,wm5110");
MODULE_ALIAS("of:N*T*Cwlf,wm5110C*");
MODULE_ALIAS("of:N*T*Cwlf,wm8280");
MODULE_ALIAS("of:N*T*Cwlf,wm8280C*");
MODULE_ALIAS("of:N*T*Cwlf,wm8997");
MODULE_ALIAS("of:N*T*Cwlf,wm8997C*");
MODULE_ALIAS("of:N*T*Cwlf,wm8998");
MODULE_ALIAS("of:N*T*Cwlf,wm8998C*");
MODULE_ALIAS("of:N*T*Cwlf,wm1814");
MODULE_ALIAS("of:N*T*Cwlf,wm1814C*");
MODULE_ALIAS("i2c:wm5102");
MODULE_ALIAS("i2c:wm5110");
MODULE_ALIAS("i2c:wm8280");
MODULE_ALIAS("i2c:wm8997");
MODULE_ALIAS("i2c:wm8998");
MODULE_ALIAS("i2c:wm1814");

MODULE_INFO(srcversion, "B9DF67A65E17C2B1ABA2A11");
