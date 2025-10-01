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
	{ 0x4348fdfc, "ipt_unregister_table_exit" },
	{ 0x5b3f0312, "ipt_alloc_initial_table" },
	{ 0x2c5e77bd, "ipt_register_table" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8f0c8ff1, "xt_find_table" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xaaba5777, "nf_nat_ipv4_register_fn" },
	{ 0x37a0cba, "kfree" },
	{ 0xf2b66c7e, "nf_nat_ipv4_unregister_fn" },
	{ 0x9e616d02, "xt_unregister_template" },
	{ 0x825e6448, "ipt_do_table" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables,ip_tables,nf_nat");


MODULE_INFO(srcversion, "635964AC0F85F8978088DAC");
