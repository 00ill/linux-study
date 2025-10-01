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
	{ 0xefa7f375, "i2c_smbus_read_byte_data" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x555dcc70, "i2c_smbus_write_byte_data" },
	{ 0x6bcc92c6, "hwmon_notify_event" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x7c913590, "regulator_disable" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xda1bd86, "i2c_get_match_data" },
	{ 0x63c42bd1, "devm_regulator_get" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0xc8aca20f, "devm_hwmon_device_register_with_info" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cadi,adt75");
MODULE_ALIAS("of:N*T*Cadi,adt75C*");
MODULE_ALIAS("of:N*T*Cams,as6200");
MODULE_ALIAS("of:N*T*Cams,as6200C*");
MODULE_ALIAS("of:N*T*Catmel,at30ts74");
MODULE_ALIAS("of:N*T*Catmel,at30ts74C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1775");
MODULE_ALIAS("of:N*T*Cdallas,ds1775C*");
MODULE_ALIAS("of:N*T*Cdallas,ds75");
MODULE_ALIAS("of:N*T*Cdallas,ds75C*");
MODULE_ALIAS("of:N*T*Cdallas,ds7505");
MODULE_ALIAS("of:N*T*Cdallas,ds7505C*");
MODULE_ALIAS("of:N*T*Cgmt,g751");
MODULE_ALIAS("of:N*T*Cgmt,g751C*");
MODULE_ALIAS("of:N*T*Cnational,lm75");
MODULE_ALIAS("of:N*T*Cnational,lm75C*");
MODULE_ALIAS("of:N*T*Cnational,lm75a");
MODULE_ALIAS("of:N*T*Cnational,lm75aC*");
MODULE_ALIAS("of:N*T*Cnational,lm75b");
MODULE_ALIAS("of:N*T*Cnational,lm75bC*");
MODULE_ALIAS("of:N*T*Cmaxim,max6625");
MODULE_ALIAS("of:N*T*Cmaxim,max6625C*");
MODULE_ALIAS("of:N*T*Cmaxim,max6626");
MODULE_ALIAS("of:N*T*Cmaxim,max6626C*");
MODULE_ALIAS("of:N*T*Cmaxim,max31725");
MODULE_ALIAS("of:N*T*Cmaxim,max31725C*");
MODULE_ALIAS("of:N*T*Cmaxim,max31726");
MODULE_ALIAS("of:N*T*Cmaxim,max31726C*");
MODULE_ALIAS("of:N*T*Cmaxim,mcp980x");
MODULE_ALIAS("of:N*T*Cmaxim,mcp980xC*");
MODULE_ALIAS("of:N*T*Cnxp,pct2075");
MODULE_ALIAS("of:N*T*Cnxp,pct2075C*");
MODULE_ALIAS("of:N*T*Cst,stds75");
MODULE_ALIAS("of:N*T*Cst,stds75C*");
MODULE_ALIAS("of:N*T*Cst,stlm75");
MODULE_ALIAS("of:N*T*Cst,stlm75C*");
MODULE_ALIAS("of:N*T*Cmicrochip,tcn75");
MODULE_ALIAS("of:N*T*Cmicrochip,tcn75C*");
MODULE_ALIAS("of:N*T*Cti,tmp100");
MODULE_ALIAS("of:N*T*Cti,tmp100C*");
MODULE_ALIAS("of:N*T*Cti,tmp101");
MODULE_ALIAS("of:N*T*Cti,tmp101C*");
MODULE_ALIAS("of:N*T*Cti,tmp105");
MODULE_ALIAS("of:N*T*Cti,tmp105C*");
MODULE_ALIAS("of:N*T*Cti,tmp112");
MODULE_ALIAS("of:N*T*Cti,tmp112C*");
MODULE_ALIAS("of:N*T*Cti,tmp175");
MODULE_ALIAS("of:N*T*Cti,tmp175C*");
MODULE_ALIAS("of:N*T*Cti,tmp275");
MODULE_ALIAS("of:N*T*Cti,tmp275C*");
MODULE_ALIAS("of:N*T*Cti,tmp75");
MODULE_ALIAS("of:N*T*Cti,tmp75C*");
MODULE_ALIAS("of:N*T*Cti,tmp75b");
MODULE_ALIAS("of:N*T*Cti,tmp75bC*");
MODULE_ALIAS("of:N*T*Cti,tmp75c");
MODULE_ALIAS("of:N*T*Cti,tmp75cC*");
MODULE_ALIAS("of:N*T*Cti,tmp1075");
MODULE_ALIAS("of:N*T*Cti,tmp1075C*");
MODULE_ALIAS("i2c:adt75");
MODULE_ALIAS("i2c:as6200");
MODULE_ALIAS("i2c:at30ts74");
MODULE_ALIAS("i2c:ds1775");
MODULE_ALIAS("i2c:ds75");
MODULE_ALIAS("i2c:ds7505");
MODULE_ALIAS("i2c:g751");
MODULE_ALIAS("i2c:lm75");
MODULE_ALIAS("i2c:lm75a");
MODULE_ALIAS("i2c:lm75b");
MODULE_ALIAS("i2c:max6625");
MODULE_ALIAS("i2c:max6626");
MODULE_ALIAS("i2c:max31725");
MODULE_ALIAS("i2c:max31726");
MODULE_ALIAS("i2c:mcp980x");
MODULE_ALIAS("i2c:pct2075");
MODULE_ALIAS("i2c:stds75");
MODULE_ALIAS("i2c:stlm75");
MODULE_ALIAS("i2c:tcn75");
MODULE_ALIAS("i2c:tmp100");
MODULE_ALIAS("i2c:tmp101");
MODULE_ALIAS("i2c:tmp105");
MODULE_ALIAS("i2c:tmp112");
MODULE_ALIAS("i2c:tmp175");
MODULE_ALIAS("i2c:tmp275");
MODULE_ALIAS("i2c:tmp75");
MODULE_ALIAS("i2c:tmp75b");
MODULE_ALIAS("i2c:tmp75c");
MODULE_ALIAS("i2c:tmp1075");

MODULE_INFO(srcversion, "3742360F378EE15575EF12C");
