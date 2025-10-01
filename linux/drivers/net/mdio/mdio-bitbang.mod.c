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

KSYMTAB_FUNC(mdiobb_read_c22, "", "");
KSYMTAB_FUNC(mdiobb_read_c45, "", "");
KSYMTAB_FUNC(mdiobb_write_c22, "", "");
KSYMTAB_FUNC(mdiobb_write_c45, "", "");
KSYMTAB_FUNC(alloc_mdio_bitbang, "", "");
KSYMTAB_FUNC(free_mdio_bitbang, "", "");

SYMBOL_CRC(mdiobb_read_c22, 0x5749ad1a, "");
SYMBOL_CRC(mdiobb_read_c45, 0x5773dffd, "");
SYMBOL_CRC(mdiobb_write_c22, 0xcf66102c, "");
SYMBOL_CRC(mdiobb_write_c45, 0xf732abfb, "");
SYMBOL_CRC(alloc_mdio_bitbang, 0xa35d271c, "");
SYMBOL_CRC(free_mdio_bitbang, 0x9a63febf, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x56e92ac8, "mdiobus_alloc_size" },
	{ 0xd8940511, "__module_get" },
	{ 0x9d9e8944, "module_put" },
	{ 0xe10409c1, "mdiobus_free" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1E3C6BB1A4C452D645AD819");
