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

KSYMTAB_DATA(xor_block_inner_neon, "", "");

SYMBOL_CRC(xor_block_inner_neon, 0xdb786e41, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x41237f71, "cpu_have_feature" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "08ED22D69C3AF88511CAFDF");
