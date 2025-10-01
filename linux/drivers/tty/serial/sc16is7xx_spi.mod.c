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
	{ 0x19cd5b0f, "sc16is7xx_remove" },
	{ 0xdcb764ad, "memset" },
	{ 0xbde79ba4, "spi_setup" },
	{ 0x5f35de40, "spi_get_device_match_data" },
	{ 0x6cf9ed1c, "sc16is7xx_regcfg" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe64f5280, "sc16is7xx_regmap_name" },
	{ 0x1e26f72, "sc16is7xx_regmap_port_mask" },
	{ 0x3fed91ff, "__devm_regmap_init_spi" },
	{ 0x111ae705, "sc16is7xx_probe" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x92893115, "driver_unregister" },
	{ 0x561783a9, "sc16is74x_devtype" },
	{ 0x1af41b3d, "sc16is750_devtype" },
	{ 0x1e01cb00, "sc16is752_devtype" },
	{ 0x83167d3c, "sc16is760_devtype" },
	{ 0x87e3ad01, "sc16is762_devtype" },
	{ 0x97b77680, "sc16is7xx_dt_ids" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "sc16is7xx,regmap-spi");

MODULE_ALIAS("spi:sc16is74x");
MODULE_ALIAS("spi:sc16is740");
MODULE_ALIAS("spi:sc16is741");
MODULE_ALIAS("spi:sc16is750");
MODULE_ALIAS("spi:sc16is752");
MODULE_ALIAS("spi:sc16is760");
MODULE_ALIAS("spi:sc16is762");

MODULE_INFO(srcversion, "3D46BAEE57FCE783B3E2E8F");
