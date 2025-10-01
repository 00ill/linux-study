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
	{ 0x9ba6295b, "regmap_read" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x945446cb, "regmap_bulk_write" },
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xeff6614, "rtc_update_irq" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0xdcb764ad, "memset" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0x54062ddb, "devm_rtc_allocate_device" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x2ff19fcf, "__devm_rtc_register_device" },
	{ 0x8ffb601d, "devm_rtc_nvmem_register" },
	{ 0x3a1aed17, "of_property_read_string" },
	{ 0x54064512, "devm_clk_register" },
	{ 0xe0dc2aaf, "of_clk_src_simple_get" },
	{ 0x8bab56fd, "of_clk_add_provider" },
	{ 0xc8aca20f, "devm_hwmon_device_register_with_info" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3032");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3032C*");
MODULE_ALIAS("acpi*:MCRY3032:*");

MODULE_INFO(srcversion, "8C3ACD91F0AFEBBE932BEC8");
