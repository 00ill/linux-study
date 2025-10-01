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
	{ 0xba3e8f12, "led_trigger_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x96848186, "scnprintf" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0x7ec8fd19, "led_set_brightness" },
	{ 0x37a0cba, "kfree" },
	{ 0xbb302169, "led_trigger_unregister" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x135bb7ec, "hrtimer_forward" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0xa84fc219, "led_get_default_pattern" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "003C509CC41B9FE597BB317");
