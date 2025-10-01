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
	{ 0xcc0983c6, "regmap_write" },
	{ 0xeff6614, "rtc_update_irq" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0x54062ddb, "devm_rtc_allocate_device" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x6853ca42, "dev_pm_set_wake_irq" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0x2ff19fcf, "__devm_rtc_register_device" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x945446cb, "regmap_bulk_write" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cnxp,pcf8523");
MODULE_ALIAS("of:N*T*Cnxp,pcf8523C*");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8523");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8523C*");
MODULE_ALIAS("i2c:pcf8523");

MODULE_INFO(srcversion, "EE8DA851210F2EC5BBFC6CA");
