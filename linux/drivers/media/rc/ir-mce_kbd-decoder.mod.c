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
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x41cc93f6, "input_event" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xce3696f3, "ir_raw_gen_manchester" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb906bc2b, "lirc_scancode_event" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xed938257, "ir_raw_handler_unregister" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BBF666F7A439B508E7A80DD");
