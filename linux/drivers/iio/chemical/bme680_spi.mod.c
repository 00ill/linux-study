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
	{ 0x8e7ae2d3, "spi_get_device_id" },
	{ 0xbde79ba4, "spi_setup" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xc40e5c3c, "bme680_regmap_config" },
	{ 0xa6fb68b9, "__devm_regmap_init" },
	{ 0xded1bf65, "bme680_core_probe" },
	{ 0x669c413b, "_dev_err" },
	{ 0x92893115, "driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0xce12c86b, "spi_sync" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbe28820f, "spi_write_then_read" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "bme680_core");

MODULE_ALIAS("of:N*T*Cbosch,bme680");
MODULE_ALIAS("of:N*T*Cbosch,bme680C*");
MODULE_ALIAS("spi:bme680");

MODULE_INFO(srcversion, "789D61BB3C6F3BB3FFF25D7");
