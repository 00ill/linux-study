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
	{ 0xbf2a6b2b, "dm_register_target" },
	{ 0x96848186, "scnprintf" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x406f2cd1, "dm_bio_from_per_bio_data" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7d8852db, "dm_submit_bio_remap" },
	{ 0x9feed7ce, "timer_reduce" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xb081c7dd, "dm_per_bio_data" },
	{ 0x582ff1ed, "bio_associate_blkg" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x929ffdc, "dm_put_device" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x1000e51, "schedule" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x9eb216a8, "dm_table_get_mode" },
	{ 0x6c624142, "dm_get_device" },
	{ 0x184aa1ca, "dm_unregister_target" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x122c3a7e, "_printk" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "CF149925013FD2245B9C110");
