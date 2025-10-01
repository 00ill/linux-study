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
	{ 0x2c30f801, "ebt_register_template" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0xb98048d0, "ebt_unregister_template" },
	{ 0x119f160f, "ebt_unregister_table" },
	{ 0xd1f82f87, "ebt_unregister_table_pre_exit" },
	{ 0x795af6db, "ebt_register_table" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0x9f9a173e, "ebt_do_table" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ebtables");


MODULE_INFO(srcversion, "6B9936859741A0DFB412E69");
