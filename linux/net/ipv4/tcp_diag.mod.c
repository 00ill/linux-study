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
	{ 0x44d32385, "inet_diag_register" },
	{ 0xf00b08e1, "tcp_get_info" },
	{ 0xa725b5cf, "inet_diag_dump_one_icsk" },
	{ 0x3636b190, "inet_diag_dump_icsk" },
	{ 0xcf000982, "inet_diag_unregister" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x98cf60b3, "strlen" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "inet_diag");


MODULE_INFO(srcversion, "CE341561122078DB55CB484");
