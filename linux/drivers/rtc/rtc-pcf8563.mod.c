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
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xefa7f375, "i2c_smbus_read_byte_data" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0xeff6614, "rtc_update_irq" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x54062ddb, "devm_rtc_allocate_device" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0x2ff19fcf, "__devm_rtc_register_device" },
	{ 0xdcb764ad, "memset" },
	{ 0x3a1aed17, "of_property_read_string" },
	{ 0x54064512, "devm_clk_register" },
	{ 0xe0dc2aaf, "of_clk_src_simple_get" },
	{ 0x8bab56fd, "of_clk_add_provider" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pcf8563");
MODULE_ALIAS("of:N*T*Cnxp,pcf8563C*");
MODULE_ALIAS("of:N*T*Cepson,rtc8564");
MODULE_ALIAS("of:N*T*Cepson,rtc8564C*");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8564");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8564C*");
MODULE_ALIAS("of:N*T*Cnxp,pca8565");
MODULE_ALIAS("of:N*T*Cnxp,pca8565C*");
MODULE_ALIAS("i2c:pcf8563");
MODULE_ALIAS("i2c:rtc8564");
MODULE_ALIAS("i2c:pca8565");

MODULE_INFO(srcversion, "3C7EAFFF5887857A1FA8C1D");
