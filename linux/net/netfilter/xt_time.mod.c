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
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x122c3a7e, "_printk" },
	{ 0xd1d1c7ef, "xt_register_match" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xb1a6bfbc, "xt_unregister_match" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "1AE1B7BBB3C00D9ACCF12B3");
