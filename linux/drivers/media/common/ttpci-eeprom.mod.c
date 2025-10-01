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

KSYMTAB_FUNC(ttpci_eeprom_decode_mac, "", "");
KSYMTAB_FUNC(ttpci_eeprom_parse_mac, "", "");

SYMBOL_CRC(ttpci_eeprom_decode_mac, 0x693e74ba, "");
SYMBOL_CRC(ttpci_eeprom_parse_mac, 0x500b713d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x122c3a7e, "_printk" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "56B1CE684732148022CB9E1");
