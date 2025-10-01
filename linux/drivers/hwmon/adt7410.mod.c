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
	{ 0x555dcc70, "i2c_smbus_write_byte_data" },
	{ 0xe94059dd, "i2c_smbus_write_word_data" },
	{ 0xefa7f375, "i2c_smbus_read_byte_data" },
	{ 0xb865073a, "i2c_smbus_read_word_data" },
	{ 0xa6fb68b9, "__devm_regmap_init" },
	{ 0xe6c9dd65, "adt7x10_probe" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "adt7x10");

MODULE_ALIAS("of:N*T*Cadi,adt7410");
MODULE_ALIAS("of:N*T*Cadi,adt7410C*");
MODULE_ALIAS("of:N*T*Cadi,adt7420");
MODULE_ALIAS("of:N*T*Cadi,adt7420C*");
MODULE_ALIAS("i2c:adt7410");
MODULE_ALIAS("i2c:adt7420");

MODULE_INFO(srcversion, "242C2F328D0F3B5F9D7DE25");
