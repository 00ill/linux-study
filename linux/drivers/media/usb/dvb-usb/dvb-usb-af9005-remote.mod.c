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

KSYMTAB_DATA(rc_map_af9005_table, "", "");
KSYMTAB_DATA(rc_map_af9005_table_size, "", "");
KSYMTAB_FUNC(af9005_rc_decode, "", "");

SYMBOL_CRC(rc_map_af9005_table, 0x341530cb, "");
SYMBOL_CRC(rc_map_af9005_table_size, 0xd4e288db, "");
SYMBOL_CRC(af9005_rc_decode, 0x47447202, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "482A916DDB68F1B3D0CD69A");
