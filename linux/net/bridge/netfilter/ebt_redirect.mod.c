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
	{ 0x80869f39, "xt_register_target" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x60abba40, "skb_ensure_writable" },
	{ 0x4fce08d7, "xt_unregister_target" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "EA14F514FCFD08CABE78F07");
