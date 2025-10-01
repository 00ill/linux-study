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
	{ 0xc9061b8b, "phy_drivers_register" },
	{ 0x9e255c51, "mdiobus_write" },
	{ 0x7ee3556d, "genphy_soft_reset" },
	{ 0xeb4e97df, "phy_drivers_unregister" },
	{ 0x73c4d30f, "phy_init_hw" },
	{ 0x71489af, "_phy_start_aneg" },
	{ 0x9a1cd1e7, "genphy_update_link" },
	{ 0xe47e4c8d, "mdiobus_read" },
	{ 0x71942dde, "genphy_read_lpa" },
	{ 0xc3a989c9, "phy_resolve_aneg_linkmode" },
	{ 0x1120e01e, "genphy_suspend" },
	{ 0x8f2ed534, "genphy_resume" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:00000000001110110001100001100001");
MODULE_ALIAS("mdio:00000000001110110001100010000001");
MODULE_ALIAS("mdio:0000000000111011000110000100????");

MODULE_INFO(srcversion, "5A8CC7E65EA5B1AD1E7F16A");
