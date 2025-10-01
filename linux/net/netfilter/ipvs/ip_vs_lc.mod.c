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
	{ 0x40f8a274, "register_ip_vs_scheduler" },
	{ 0x2496af9a, "ip_vs_scheduler_err" },
	{ 0x6d578e07, "unregister_ip_vs_scheduler" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ip_vs");


MODULE_INFO(srcversion, "1B340251DB1B0F1FCF10D06");
