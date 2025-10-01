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
	{ 0x555dcc70, "i2c_smbus_write_byte_data" },
	{ 0x669c413b, "_dev_err" },
	{ 0x1f305853, "i2c_smbus_write_i2c_block_data" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1f09285b, "i2c_smbus_read_i2c_block_data" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xda1bd86, "i2c_get_match_data" },
	{ 0xef54673c, "devm_clk_get_optional" },
	{ 0x54062ddb, "devm_rtc_allocate_device" },
	{ 0xdcb764ad, "memset" },
	{ 0x78804cc2, "rtc_add_group" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x8ffb601d, "devm_rtc_nvmem_register" },
	{ 0x2ff19fcf, "__devm_rtc_register_device" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x5cc77b0, "of_irq_get_byname" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeff6614, "rtc_update_irq" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x304e7bbf, "sysfs_notify" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cisil,isl1208");
MODULE_ALIAS("of:N*T*Cisil,isl1208C*");
MODULE_ALIAS("of:N*T*Cisil,isl1209");
MODULE_ALIAS("of:N*T*Cisil,isl1209C*");
MODULE_ALIAS("of:N*T*Cisil,isl1218");
MODULE_ALIAS("of:N*T*Cisil,isl1218C*");
MODULE_ALIAS("of:N*T*Cisil,isl1219");
MODULE_ALIAS("of:N*T*Cisil,isl1219C*");
MODULE_ALIAS("i2c:isl1208");
MODULE_ALIAS("i2c:isl1209");
MODULE_ALIAS("i2c:isl1218");
MODULE_ALIAS("i2c:isl1219");
MODULE_ALIAS("i2c:raa215300_a0");

MODULE_INFO(srcversion, "837F31C194DE7D02B370839");
