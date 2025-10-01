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
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xca798785, "devm_thermal_of_cooling_device_register" },
	{ 0xdc33c9b4, "thermal_cooling_device_register" },
	{ 0x669c413b, "_dev_err" },
	{ 0xefa7f375, "i2c_smbus_read_byte_data" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xc8aca20f, "devm_hwmon_device_register_with_info" },
	{ 0x57624c0a, "of_property_read_variable_u8_array" },
	{ 0xdcb764ad, "memset" },
	{ 0x73763383, "thermal_cooling_device_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb865073a, "i2c_smbus_read_word_data" },
	{ 0x98cf60b3, "strlen" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrochip,emc2305");
MODULE_ALIAS("of:N*T*Cmicrochip,emc2305C*");
MODULE_ALIAS("of:N*T*Cmicrochip,emc2303");
MODULE_ALIAS("of:N*T*Cmicrochip,emc2303C*");
MODULE_ALIAS("of:N*T*Cmicrochip,emc2302");
MODULE_ALIAS("of:N*T*Cmicrochip,emc2302C*");
MODULE_ALIAS("of:N*T*Cmicrochip,emc2301");
MODULE_ALIAS("of:N*T*Cmicrochip,emc2301C*");
MODULE_ALIAS("i2c:emc2305");
MODULE_ALIAS("i2c:emc2303");
MODULE_ALIAS("i2c:emc2302");
MODULE_ALIAS("i2c:emc2301");

MODULE_INFO(srcversion, "38BD380FD7197BBF7BBE7E4");
