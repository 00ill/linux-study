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
	{ 0xe4201e28, "lowpan_nhc_add" },
	{ 0xbe4ed3b7, "lowpan_nhc_del" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "6lowpan");


MODULE_INFO(srcversion, "B0E6352263D3FDB3C887568");
