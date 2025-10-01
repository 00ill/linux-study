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
	{ 0x3bc17c49, "nf_nat_masquerade_inet_register_notifiers" },
	{ 0x93e774d2, "xt_unregister_targets" },
	{ 0x23defc63, "nf_ct_netns_get" },
	{ 0xdcb764ad, "memset" },
	{ 0x9dce77c1, "nf_nat_masquerade_ipv4" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5eab8ad3, "nf_ct_netns_put" },
	{ 0xb7f5339, "nf_nat_masquerade_ipv6" },
	{ 0xd9c25654, "nf_nat_masquerade_inet_unregister_notifiers" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables,nf_nat,nf_conntrack");


MODULE_INFO(srcversion, "9F618463DEF62CC3ADB3C2A");
