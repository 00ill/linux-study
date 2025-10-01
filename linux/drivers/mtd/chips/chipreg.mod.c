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

KSYMTAB_FUNC(register_mtd_chip_driver, "", "");
KSYMTAB_FUNC(unregister_mtd_chip_driver, "", "");
KSYMTAB_FUNC(do_map_probe, "", "");
KSYMTAB_FUNC(map_destroy, "", "");

SYMBOL_CRC(register_mtd_chip_driver, 0x167ecdf3, "");
SYMBOL_CRC(unregister_mtd_chip_driver, 0x3deff18f, "");
SYMBOL_CRC(do_map_probe, 0xa4203e5e, "");
SYMBOL_CRC(map_destroy, 0x5534384a, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x9d9e8944, "module_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x37a0cba, "kfree" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7680519B1FE457786231F1E");
