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
	{ 0x668d2ef9, "ir_raw_handler_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0xce3696f3, "ir_raw_gen_manchester" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9128f4c2, "rc_keydown" },
	{ 0xed938257, "ir_raw_handler_unregister" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F5E1E8771120C67D1524B6E");
