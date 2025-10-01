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
	{ 0xcd47056b, "__spi_register_driver" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x945446cb, "regmap_bulk_write" },
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x92893115, "driver_unregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeff6614, "rtc_update_irq" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x3fed91ff, "__devm_regmap_init_spi" },
	{ 0x54062ddb, "devm_rtc_allocate_device" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x2ff19fcf, "__devm_rtc_register_device" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x669c413b, "_dev_err" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-spi");

MODULE_ALIAS("spi:pcf2123");
MODULE_ALIAS("spi:rv2123");
MODULE_ALIAS("spi:rtc-pcf2123");
MODULE_ALIAS("of:N*T*Cnxp,pcf2123");
MODULE_ALIAS("of:N*T*Cnxp,pcf2123C*");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv2123");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv2123C*");
MODULE_ALIAS("of:N*T*Cnxp,rtc-pcf2123");
MODULE_ALIAS("of:N*T*Cnxp,rtc-pcf2123C*");

MODULE_INFO(srcversion, "23A76182E522DA42ADBF1E1");
