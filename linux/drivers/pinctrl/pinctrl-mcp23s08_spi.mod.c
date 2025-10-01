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
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xce12c86b, "spi_sync" },
	{ 0x5f35de40, "spi_get_device_match_data" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x669c413b, "_dev_err" },
	{ 0x5fc625c6, "devm_kasprintf" },
	{ 0x4679d10c, "devm_kmemdup" },
	{ 0xa6fb68b9, "__devm_regmap_init" },
	{ 0xec2108c6, "mcp23s08_probe_one" },
	{ 0x92893115, "driver_unregister" },
	{ 0xccd1b8d, "mcp23x17_regmap" },
	{ 0x3cb6bf62, "mcp23x08_regmap" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "pinctrl-mcp23s08");

MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s08");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s08C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s17");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s17C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s18");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s18C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s08");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s08C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s17");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s17C*");
MODULE_ALIAS("spi:mcp23s08");
MODULE_ALIAS("spi:mcp23s17");
MODULE_ALIAS("spi:mcp23s18");

MODULE_INFO(srcversion, "40DF99E67D4DBFE7E21C29D");
