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
	{ 0xbe28820f, "spi_write_then_read" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x8cf61829, "devm_rtc_device_register" },
	{ 0x669c413b, "_dev_err" },
	{ 0x92893115, "driver_unregister" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:ds1302");
MODULE_ALIAS("of:N*T*Cmaxim,ds1302");
MODULE_ALIAS("of:N*T*Cmaxim,ds1302C*");

MODULE_INFO(srcversion, "3E34132B9C1777B5FFE66E4");
