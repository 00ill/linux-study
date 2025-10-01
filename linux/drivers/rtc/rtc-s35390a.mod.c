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
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xccdde0a2, "devm_i2c_new_dummy_device" },
	{ 0x54062ddb, "devm_rtc_allocate_device" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x2ff19fcf, "__devm_rtc_register_device" },
	{ 0x669c413b, "_dev_err" },
	{ 0xeff6614, "rtc_update_irq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csii,s35390a");
MODULE_ALIAS("of:N*T*Csii,s35390aC*");
MODULE_ALIAS("i2c:s35390a");

MODULE_INFO(srcversion, "2DF670532D1ED319264080B");
