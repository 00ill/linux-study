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
	{ 0x5bc4a8d, "arpt_unregister_table" },
	{ 0x57f633ef, "arpt_unregister_table_pre_exit" },
	{ 0xa76cf33e, "arpt_alloc_initial_table" },
	{ 0x4db0768f, "arpt_register_table" },
	{ 0x37a0cba, "kfree" },
	{ 0xb7d6f7c4, "xt_register_template" },
	{ 0x33578f97, "arpt_do_table" },
	{ 0x5d6dbfb7, "xt_hook_ops_alloc" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0x9e616d02, "xt_unregister_template" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "arp_tables,x_tables");


MODULE_INFO(srcversion, "025E77FBC92D373C2D13841");
