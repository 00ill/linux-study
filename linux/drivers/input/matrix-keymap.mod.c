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

KSYMTAB_FUNC(matrix_keypad_parse_properties, "_gpl", "");
KSYMTAB_FUNC(matrix_keypad_build_keymap, "", "");

SYMBOL_CRC(matrix_keypad_parse_properties, 0x0a3f77ef, "_gpl");
SYMBOL_CRC(matrix_keypad_build_keymap, 0x218c170f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x669c413b, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5B6913ABDAFF867136529B9");
