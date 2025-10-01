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
	{ 0x19cd5b0f, "sc16is7xx_remove" },
	{ 0xdcb764ad, "memset" },
	{ 0xda1bd86, "i2c_get_match_data" },
	{ 0x6cf9ed1c, "sc16is7xx_regcfg" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe64f5280, "sc16is7xx_regmap_name" },
	{ 0x1e26f72, "sc16is7xx_regmap_port_mask" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0x111ae705, "sc16is7xx_probe" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x561783a9, "sc16is74x_devtype" },
	{ 0x1af41b3d, "sc16is750_devtype" },
	{ 0x1e01cb00, "sc16is752_devtype" },
	{ 0x83167d3c, "sc16is760_devtype" },
	{ 0x87e3ad01, "sc16is762_devtype" },
	{ 0x97b77680, "sc16is7xx_dt_ids" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "sc16is7xx,regmap-i2c");

MODULE_ALIAS("i2c:sc16is74x");
MODULE_ALIAS("i2c:sc16is740");
MODULE_ALIAS("i2c:sc16is741");
MODULE_ALIAS("i2c:sc16is750");
MODULE_ALIAS("i2c:sc16is752");
MODULE_ALIAS("i2c:sc16is760");
MODULE_ALIAS("i2c:sc16is762");

MODULE_INFO(srcversion, "900CF860B65A5E33B369041");
