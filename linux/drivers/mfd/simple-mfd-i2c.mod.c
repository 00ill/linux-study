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
	{ 0xe806e4fd, "device_get_match_data" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xd2e67468, "devm_mfd_add_devices" },
	{ 0x13209bff, "devm_of_platform_populate" },
	{ 0x669c413b, "_dev_err" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Ckontron,sl28cpld");
MODULE_ALIAS("of:N*T*Ckontron,sl28cpldC*");
MODULE_ALIAS("of:N*T*Csilergy,sy7636a");
MODULE_ALIAS("of:N*T*Csilergy,sy7636aC*");
MODULE_ALIAS("of:N*T*Cmaxim,max5970");
MODULE_ALIAS("of:N*T*Cmaxim,max5970C*");
MODULE_ALIAS("of:N*T*Cmaxim,max5978");
MODULE_ALIAS("of:N*T*Cmaxim,max5978C*");
MODULE_ALIAS("of:N*T*Craspberrypi,poe-core");
MODULE_ALIAS("of:N*T*Craspberrypi,poe-coreC*");
MODULE_ALIAS("of:N*T*Craspberrypi,sensehat");
MODULE_ALIAS("of:N*T*Craspberrypi,sensehatC*");

MODULE_INFO(srcversion, "B33EAED001BDB7A106A0597");
