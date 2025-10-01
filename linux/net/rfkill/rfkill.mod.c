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

KSYMTAB_FUNC(rfkill_get_led_trigger_name, "", "");
KSYMTAB_FUNC(rfkill_set_led_trigger_name, "", "");
KSYMTAB_FUNC(rfkill_set_hw_state_reason, "", "");
KSYMTAB_FUNC(rfkill_set_sw_state, "", "");
KSYMTAB_FUNC(rfkill_init_sw_state, "", "");
KSYMTAB_FUNC(rfkill_set_states, "", "");
KSYMTAB_FUNC(rfkill_find_type, "", "");
KSYMTAB_FUNC(rfkill_pause_polling, "", "");
KSYMTAB_FUNC(rfkill_resume_polling, "", "");
KSYMTAB_FUNC(rfkill_blocked, "", "");
KSYMTAB_FUNC(rfkill_soft_blocked, "", "");
KSYMTAB_FUNC(rfkill_alloc, "", "");
KSYMTAB_FUNC(rfkill_register, "", "");
KSYMTAB_FUNC(rfkill_unregister, "", "");
KSYMTAB_FUNC(rfkill_destroy, "", "");

SYMBOL_CRC(rfkill_get_led_trigger_name, 0xaa6f23ad, "");
SYMBOL_CRC(rfkill_set_led_trigger_name, 0x9cab34a6, "");
SYMBOL_CRC(rfkill_set_hw_state_reason, 0xfcd01236, "");
SYMBOL_CRC(rfkill_set_sw_state, 0x8a490c90, "");
SYMBOL_CRC(rfkill_init_sw_state, 0xaad6d92f, "");
SYMBOL_CRC(rfkill_set_states, 0x85b5e625, "");
SYMBOL_CRC(rfkill_find_type, 0x50b73ce2, "");
SYMBOL_CRC(rfkill_pause_polling, 0x3939f8f0, "");
SYMBOL_CRC(rfkill_resume_polling, 0xc781bd9f, "");
SYMBOL_CRC(rfkill_blocked, 0xc0763484, "");
SYMBOL_CRC(rfkill_soft_blocked, 0xd24108d4, "");
SYMBOL_CRC(rfkill_alloc, 0x4ff61f23, "");
SYMBOL_CRC(rfkill_register, 0xff282521, "");
SYMBOL_CRC(rfkill_unregister, 0x083eb21c, "");
SYMBOL_CRC(rfkill_destroy, 0xdb68bbad, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0xe914e41e, "strcpy" },
	{ 0x94090688, "misc_deregister" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x16965a52, "device_initialize" },
	{ 0x37a0cba, "kfree" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x6ca668f7, "input_register_handle" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x36dc6ece, "put_device" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf8ce1c00, "compat_ptr_ioctl" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7b1a51f0, "device_add" },
	{ 0x988e769a, "input_open_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x7143a676, "class_unregister" },
	{ 0xbb302169, "led_trigger_unregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa4f9007c, "input_close_device" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x73f49957, "device_del" },
	{ 0xe98a713e, "input_unregister_handler" },
	{ 0xdcb764ad, "memset" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x2002cbd1, "misc_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x570c1267, "input_register_handler" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xba3e8f12, "led_trigger_register" },
	{ 0x5a9883e, "input_unregister_handle" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x32700730, "kobject_uevent" },
	{ 0xe0ff878f, "stream_open" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x3e7cf756, "led_trigger_event" },
	{ 0x98cf60b3, "strlen" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xa42d469b, "class_register" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "429101E2816365B6EE81D47");
