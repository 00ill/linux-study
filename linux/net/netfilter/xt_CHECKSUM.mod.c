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
	{ 0x122c3a7e, "_printk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x93e774d2, "xt_unregister_targets" },
	{ 0x1301cc57, "skb_checksum_help" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "F3EFACC824E3125A4199618");
