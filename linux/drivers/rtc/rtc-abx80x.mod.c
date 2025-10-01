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
	{ 0xefa7f375, "i2c_smbus_read_byte_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x669c413b, "_dev_err" },
	{ 0x57852c0e, "_dev_alert" },
	{ 0xeff6614, "rtc_update_irq" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x1f305853, "i2c_smbus_write_i2c_block_data" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1f09285b, "i2c_smbus_read_i2c_block_data" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xdcb764ad, "memset" },
	{ 0x8ffb601d, "devm_rtc_nvmem_register" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x5a921311, "strncmp" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x4805b066, "i2c_match_id" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x54062ddb, "devm_rtc_allocate_device" },
	{ 0xcf868890, "devm_watchdog_register_device" },
	{ 0x78804cc2, "rtc_add_group" },
	{ 0x2ff19fcf, "__devm_rtc_register_device" },
	{ 0x3a1aed17, "of_property_read_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cabracon,abx80x");
MODULE_ALIAS("of:N*T*Cabracon,abx80xC*");
MODULE_ALIAS("of:N*T*Cabracon,ab0801");
MODULE_ALIAS("of:N*T*Cabracon,ab0801C*");
MODULE_ALIAS("of:N*T*Cabracon,ab0803");
MODULE_ALIAS("of:N*T*Cabracon,ab0803C*");
MODULE_ALIAS("of:N*T*Cabracon,ab0804");
MODULE_ALIAS("of:N*T*Cabracon,ab0804C*");
MODULE_ALIAS("of:N*T*Cabracon,ab0805");
MODULE_ALIAS("of:N*T*Cabracon,ab0805C*");
MODULE_ALIAS("of:N*T*Cabracon,ab1801");
MODULE_ALIAS("of:N*T*Cabracon,ab1801C*");
MODULE_ALIAS("of:N*T*Cabracon,ab1803");
MODULE_ALIAS("of:N*T*Cabracon,ab1803C*");
MODULE_ALIAS("of:N*T*Cabracon,ab1804");
MODULE_ALIAS("of:N*T*Cabracon,ab1804C*");
MODULE_ALIAS("of:N*T*Cabracon,ab1805");
MODULE_ALIAS("of:N*T*Cabracon,ab1805C*");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv1805");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv1805C*");
MODULE_ALIAS("i2c:abx80x");
MODULE_ALIAS("i2c:ab0801");
MODULE_ALIAS("i2c:ab0803");
MODULE_ALIAS("i2c:ab0804");
MODULE_ALIAS("i2c:ab0805");
MODULE_ALIAS("i2c:ab1801");
MODULE_ALIAS("i2c:ab1803");
MODULE_ALIAS("i2c:ab1804");
MODULE_ALIAS("i2c:ab1805");
MODULE_ALIAS("i2c:rv1805");

MODULE_INFO(srcversion, "BE32538E948E8E54C51FCC0");
