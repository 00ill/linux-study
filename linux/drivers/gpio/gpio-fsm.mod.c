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
	{ 0x84a10e08, "_dev_info" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf2cffaef, "gpiod_get_value_cansleep" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xe2964344, "__wake_up" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x35ef1cd, "gpiochip_get_data" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x7143a676, "class_unregister" },
	{ 0xa42d469b, "class_register" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x9a354cc, "devm_gpiod_get_array_optional" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x2795b5f0, "gpiod_to_irq" },
	{ 0x5789e9b7, "gpiod_is_active_low" },
	{ 0x669c413b, "_dev_err" },
	{ 0x50a58b43, "of_get_next_child" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5f1a67f6, "device_create_with_groups" },
	{ 0x71d5ffb9, "devm_gpiochip_add_data_with_key" },
	{ 0x847188e8, "krealloc_noprof" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crpi,gpio-fsm");
MODULE_ALIAS("of:N*T*Crpi,gpio-fsmC*");

MODULE_INFO(srcversion, "3832E2DEE05405662C1BF31");
