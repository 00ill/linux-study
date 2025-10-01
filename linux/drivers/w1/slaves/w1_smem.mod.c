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
	{ 0x26130a71, "w1_register_family" },
	{ 0xcc223af9, "w1_unregister_family" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "AC0AC8129CF148F765C7FB0");
