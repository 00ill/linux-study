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
	{ 0xf4a0aaa, "xt_register_targets" },
	{ 0x93e774d2, "xt_unregister_targets" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc9124148, "__icmpv6_send" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "DB989096DD911C23BD8B9E6");
