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

KSYMTAB_FUNC(__max730x_probe, "_gpl", "");
KSYMTAB_FUNC(__max730x_remove, "_gpl", "");

SYMBOL_CRC(__max730x_probe, 0x2ec532e6, "_gpl");
SYMBOL_CRC(__max730x_remove, 0xa6726ef7, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x35ef1cd, "gpiochip_get_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x79d02d44, "gpiochip_add_data_with_key" },
	{ 0x654a2723, "gpiochip_remove" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7C6F8D32A9B12D251FBDE55");
