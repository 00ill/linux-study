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
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xda1bd86, "i2c_get_match_data" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xec2108c6, "mcp23s08_probe_one" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xccd1b8d, "mcp23x17_regmap" },
	{ 0x3cb6bf62, "mcp23x08_regmap" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c,pinctrl-mcp23s08");

MODULE_ALIAS("of:N*T*Cmicrochip,mcp23008");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23008C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23017");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23017C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23018");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23018C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23008");
MODULE_ALIAS("of:N*T*Cmcp,mcp23008C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23017");
MODULE_ALIAS("of:N*T*Cmcp,mcp23017C*");
MODULE_ALIAS("i2c:mcp23008");
MODULE_ALIAS("i2c:mcp23017");
MODULE_ALIAS("i2c:mcp23018");

MODULE_INFO(srcversion, "0D935124E67D9C3D126D0C9");
