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

KSYMTAB_FUNC(eeprom_93cx6_read, "_gpl", "");
KSYMTAB_FUNC(eeprom_93cx6_multiread, "_gpl", "");
KSYMTAB_FUNC(eeprom_93cx6_readb, "_gpl", "");
KSYMTAB_FUNC(eeprom_93cx6_multireadb, "_gpl", "");
KSYMTAB_FUNC(eeprom_93cx6_wren, "_gpl", "");
KSYMTAB_FUNC(eeprom_93cx6_write, "_gpl", "");

SYMBOL_CRC(eeprom_93cx6_read, 0xa51e8d0d, "_gpl");
SYMBOL_CRC(eeprom_93cx6_multiread, 0x4b0b05dc, "_gpl");
SYMBOL_CRC(eeprom_93cx6_readb, 0xa547ae90, "_gpl");
SYMBOL_CRC(eeprom_93cx6_multireadb, 0xf447efd4, "_gpl");
SYMBOL_CRC(eeprom_93cx6_wren, 0x32952d32, "_gpl");
SYMBOL_CRC(eeprom_93cx6_write, 0xd848391b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x122c3a7e, "_printk" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "39E4FF341150309251818DE");
