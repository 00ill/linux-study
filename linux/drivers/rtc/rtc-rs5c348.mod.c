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
	{ 0x92893115, "driver_unregister" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xbe28820f, "spi_write_then_read" },
	{ 0x669c413b, "_dev_err" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x54062ddb, "devm_rtc_allocate_device" },
	{ 0x2ff19fcf, "__devm_rtc_register_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "850484904F771491B0E83DC");
