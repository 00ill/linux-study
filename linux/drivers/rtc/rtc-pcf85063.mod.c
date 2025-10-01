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
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x945446cb, "regmap_bulk_write" },
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xeff6614, "rtc_update_irq" },
	{ 0xdcb764ad, "memset" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xda1bd86, "i2c_get_match_data" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0x54062ddb, "devm_rtc_allocate_device" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x8ffb601d, "devm_rtc_nvmem_register" },
	{ 0xec905c5d, "of_get_child_by_name" },
	{ 0x3a1aed17, "of_property_read_string" },
	{ 0x54064512, "devm_clk_register" },
	{ 0xe0dc2aaf, "of_clk_src_simple_get" },
	{ 0x8bab56fd, "of_clk_add_provider" },
	{ 0x2ff19fcf, "__devm_rtc_register_device" },
	{ 0x669c413b, "_dev_err" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x6853ca42, "dev_pm_set_wake_irq" },
	{ 0x469438cc, "of_node_put" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cnxp,pca85073a");
MODULE_ALIAS("of:N*T*Cnxp,pca85073aC*");
MODULE_ALIAS("of:N*T*Cnxp,pcf85063");
MODULE_ALIAS("of:N*T*Cnxp,pcf85063C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf85063tp");
MODULE_ALIAS("of:N*T*Cnxp,pcf85063tpC*");
MODULE_ALIAS("of:N*T*Cnxp,pcf85063a");
MODULE_ALIAS("of:N*T*Cnxp,pcf85063aC*");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8263");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8263C*");
MODULE_ALIAS("i2c:pca85073a");
MODULE_ALIAS("i2c:pcf85063");
MODULE_ALIAS("i2c:pcf85063tp");
MODULE_ALIAS("i2c:pcf85063a");
MODULE_ALIAS("i2c:rv8263");

MODULE_INFO(srcversion, "1D21767DD3F41BE61138AC2");
