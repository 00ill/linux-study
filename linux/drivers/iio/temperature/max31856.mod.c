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
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbe28820f, "spi_write_then_read" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x92893115, "driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0xce12c86b, "spi_sync" },
	{ 0x8e7ae2d3, "spi_get_device_id" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0xd02eafcc, "__devm_iio_device_register" },
	{ 0x669c413b, "_dev_err" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cmaxim,max31856");
MODULE_ALIAS("of:N*T*Cmaxim,max31856C*");
MODULE_ALIAS("spi:max31856");

MODULE_INFO(srcversion, "2049C9EE40C0E6EEDADFFF9");
