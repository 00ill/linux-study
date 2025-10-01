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
	{ 0x26130a71, "w1_register_family" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbd143cf9, "w1_reset_select_slave" },
	{ 0xd4eb9522, "w1_write_block" },
	{ 0xb61957a6, "w1_read_8" },
	{ 0x99a20da3, "w1_reset_resume_command" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xea7b044f, "w1_write_8" },
	{ 0xcc223af9, "w1_unregister_family" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "1ED728E07C8AF4A4929841C");
