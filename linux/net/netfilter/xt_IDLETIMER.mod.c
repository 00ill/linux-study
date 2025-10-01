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
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x638c23c2, "sysfs_remove_file_ns" },
	{ 0x37a0cba, "kfree" },
	{ 0x429d3502, "alarm_cancel" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe038ea74, "alarm_start_relative" },
	{ 0x304e7bbf, "sysfs_notify" },
	{ 0x59c02473, "class_create" },
	{ 0x4ae7394, "device_create" },
	{ 0xf4a0aaa, "xt_register_targets" },
	{ 0xa6dd9149, "device_destroy" },
	{ 0x6775d5d3, "class_destroy" },
	{ 0x93e774d2, "xt_unregister_targets" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa916b694, "strnlen" },
	{ 0xfa7d15d7, "alarm_expires_remaining" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe811d67, "sysfs_create_file_ns" },
	{ 0x32700730, "kobject_uevent" },
	{ 0x2d26a116, "alarm_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "6D4C25BE3E2B15D946437AD");
