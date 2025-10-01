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
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5905b725, "tty_register_ldisc" },
	{ 0x122c3a7e, "_printk" },
	{ 0x6af0d2b9, "serio_interrupt" },
	{ 0xe2964344, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x83fc2de9, "tty_unregister_ldisc" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x631f4468, "tty_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6d9de2ac, "__serio_register_port" },
	{ 0xfb579c8e, "serio_unregister_port" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "serio");


MODULE_INFO(srcversion, "1A0AC9B09C173A0182EFBB1");
