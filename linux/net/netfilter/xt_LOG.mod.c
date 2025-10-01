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
	{ 0xb8cd3a7f, "nf_logger_put" },
	{ 0xd1f2eee2, "nf_logger_find_get" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xc53d42bd, "nf_log_packet" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x93e774d2, "xt_unregister_targets" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "92C421896C435E7473C5D9C");
