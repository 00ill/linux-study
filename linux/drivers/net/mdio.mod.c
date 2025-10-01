#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(mdio45_probe, "", "");
KSYMTAB_FUNC(mdio_set_flag, "", "");
KSYMTAB_FUNC(mdio45_links_ok, "", "");
KSYMTAB_FUNC(mdio45_nway_restart, "", "");
KSYMTAB_FUNC(mdio45_ethtool_gset_npage, "", "");
KSYMTAB_FUNC(mdio45_ethtool_ksettings_get_npage, "", "");
KSYMTAB_FUNC(mdio_mii_ioctl, "", "");

SYMBOL_CRC(mdio45_probe, 0x60443957, "");
SYMBOL_CRC(mdio_set_flag, 0x3e17f466, "");
SYMBOL_CRC(mdio45_links_ok, 0x63e0fee5, "");
SYMBOL_CRC(mdio45_nway_restart, 0xb79a54ee, "");
SYMBOL_CRC(mdio45_ethtool_gset_npage, 0xcdbdeca7, "");
SYMBOL_CRC(mdio45_ethtool_ksettings_get_npage, 0x8a7ed927, "");
SYMBOL_CRC(mdio_mii_ioctl, 0xdaceb7a6, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6F95FFCDB7A1117F27133EE");
