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
	{ 0x13d6ad52, "ssd130x_shutdown" },
	{ 0x189220e2, "ssd130x_remove" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xb3aaa57c, "ssd130x_probe" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x760c3ba6, "ssd130x_variants" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ssd130x,regmap-i2c");

MODULE_ALIAS("of:N*T*Csinowealth,sh1106");
MODULE_ALIAS("of:N*T*Csinowealth,sh1106C*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1305");
MODULE_ALIAS("of:N*T*Csolomon,ssd1305C*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306C*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1307");
MODULE_ALIAS("of:N*T*Csolomon,ssd1307C*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1309");
MODULE_ALIAS("of:N*T*Csolomon,ssd1309C*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1305fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1305fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1307fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1307fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1309fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1309fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1322");
MODULE_ALIAS("of:N*T*Csolomon,ssd1322C*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1325");
MODULE_ALIAS("of:N*T*Csolomon,ssd1325C*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1327");
MODULE_ALIAS("of:N*T*Csolomon,ssd1327C*");

MODULE_INFO(srcversion, "3649880481D0985B26DA18E");
