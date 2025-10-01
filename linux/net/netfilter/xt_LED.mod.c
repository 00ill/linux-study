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
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0xbb302169, "led_trigger_unregister" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x3e7cf756, "led_trigger_event" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2c621a86, "led_trigger_blink_oneshot" },
	{ 0x93e774d2, "xt_unregister_targets" },
	{ 0xa07a37f0, "memchr" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xba3e8f12, "led_trigger_register" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "04E5F2D1A4DE52AA7128762");
