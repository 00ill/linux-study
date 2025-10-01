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
	{ 0xfa474811, "__platform_driver_register" },
	{ 0xe869527e, "of_clk_del_provider" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0xa8a523fe, "of_match_node" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x54064512, "devm_clk_register" },
	{ 0xe0dc2aaf, "of_clk_src_simple_get" },
	{ 0x8bab56fd, "of_clk_add_provider" },
	{ 0x669c413b, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Chifiberry,dacpro-clk");
MODULE_ALIAS("of:N*T*Chifiberry,dacpro-clkC*");
MODULE_ALIAS("of:N*T*Callo,dac-clk");
MODULE_ALIAS("of:N*T*Callo,dac-clkC*");

MODULE_INFO(srcversion, "EA54471FE09BA8DA39C15C6");
