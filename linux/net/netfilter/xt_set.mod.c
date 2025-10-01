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
	{ 0xf4a0aaa, "xt_register_targets" },
	{ 0x5907e5ea, "xt_unregister_matches" },
	{ 0x2301b333, "ip_set_nfnl_put" },
	{ 0x77bc3ac4, "ip_set_nfnl_get_byindex" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdcb764ad, "memset" },
	{ 0xb5faa0a1, "ip_set_add" },
	{ 0xdcb678d6, "ip_set_del" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x82f0dea4, "ip_set_test" },
	{ 0x93e774d2, "xt_unregister_targets" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables,ip_set");


MODULE_INFO(srcversion, "2664E89D13CED67CA5A2AEC");
