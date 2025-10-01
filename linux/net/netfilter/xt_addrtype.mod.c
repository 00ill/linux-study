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
	{ 0xfd7f342e, "xt_register_matches" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xdcb764ad, "memset" },
	{ 0x13fbc60, "nf_ipv6_ops" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x464dc177, "inet_dev_addr_type" },
	{ 0x5907e5ea, "xt_unregister_matches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "E599449E20765FEB1FB518A");
