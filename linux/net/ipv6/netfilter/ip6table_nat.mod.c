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
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0xb7d6f7c4, "xt_register_template" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0xd54cbb5a, "ip6t_unregister_table_exit" },
	{ 0x59c333ed, "ip6t_alloc_initial_table" },
	{ 0xa78e3cd9, "ip6t_register_table" },
	{ 0x8f0c8ff1, "xt_find_table" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xe3cebc95, "nf_nat_ipv6_register_fn" },
	{ 0x37a0cba, "kfree" },
	{ 0xa9268f94, "nf_nat_ipv6_unregister_fn" },
	{ 0x9e616d02, "xt_unregister_template" },
	{ 0xf1ab5cef, "ip6t_do_table" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables,ip6_tables,nf_nat");


MODULE_INFO(srcversion, "9BF93B7A5E351882417C4C3");
