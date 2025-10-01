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
	{ 0xd54cbb5a, "ip6t_unregister_table_exit" },
	{ 0xaa4e162f, "ip6t_unregister_table_pre_exit" },
	{ 0xf1ab5cef, "ip6t_do_table" },
	{ 0x17f9e370, "ip6_route_me_harder" },
	{ 0x59c333ed, "ip6t_alloc_initial_table" },
	{ 0xa78e3cd9, "ip6t_register_table" },
	{ 0x37a0cba, "kfree" },
	{ 0xb7d6f7c4, "xt_register_template" },
	{ 0x5d6dbfb7, "xt_hook_ops_alloc" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0x9e616d02, "xt_unregister_template" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ip6_tables,ipv6,x_tables");


MODULE_INFO(srcversion, "0D0F4C77835BF317A4EF8D8");
