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
	{ 0xcc0983c6, "regmap_write" },
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x945446cb, "regmap_bulk_write" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0xcd47056b, "__spi_register_driver" },
	{ 0x122c3a7e, "_printk" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x92893115, "driver_unregister" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x54062ddb, "devm_rtc_allocate_device" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0xcf868890, "devm_watchdog_register_device" },
	{ 0xdcb764ad, "memset" },
	{ 0x8ffb601d, "devm_rtc_nvmem_register" },
	{ 0x78804cc2, "rtc_add_group" },
	{ 0x2ff19fcf, "__devm_rtc_register_device" },
	{ 0xaf639b91, "of_device_get_match_data" },
	{ 0xa6fb68b9, "__devm_regmap_init" },
	{ 0x4805b066, "i2c_match_id" },
	{ 0x3fed91ff, "__devm_regmap_init_spi" },
	{ 0x8e7ae2d3, "spi_get_device_id" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeff6614, "rtc_update_irq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-spi");

MODULE_ALIAS("spi:pcf2127");
MODULE_ALIAS("spi:pcf2129");
MODULE_ALIAS("spi:pca2129");
MODULE_ALIAS("spi:pcf2131");
MODULE_ALIAS("i2c:pcf2127");
MODULE_ALIAS("i2c:pcf2129");
MODULE_ALIAS("i2c:pca2129");
MODULE_ALIAS("i2c:pcf2131");
MODULE_ALIAS("of:N*T*Cnxp,pcf2127");
MODULE_ALIAS("of:N*T*Cnxp,pcf2127C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf2129");
MODULE_ALIAS("of:N*T*Cnxp,pcf2129C*");
MODULE_ALIAS("of:N*T*Cnxp,pca2129");
MODULE_ALIAS("of:N*T*Cnxp,pca2129C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf2131");
MODULE_ALIAS("of:N*T*Cnxp,pcf2131C*");

MODULE_INFO(srcversion, "01687655F662B12AB98EDCE");
