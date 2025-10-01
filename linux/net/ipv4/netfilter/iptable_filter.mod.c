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
	{ 0x4348fdfc, "ipt_unregister_table_exit" },
	{ 0x549dff67, "ipt_unregister_table_pre_exit" },
	{ 0x5b3f0312, "ipt_alloc_initial_table" },
	{ 0x2c5e77bd, "ipt_register_table" },
	{ 0x37a0cba, "kfree" },
	{ 0xb7d6f7c4, "xt_register_template" },
	{ 0x825e6448, "ipt_do_table" },
	{ 0x5d6dbfb7, "xt_hook_ops_alloc" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0x9e616d02, "xt_unregister_template" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ip_tables,x_tables");


MODULE_INFO(srcversion, "4A25FFD54091974314CFA22");
