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
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xa6257a2f, "complete" },
	{ 0x929ffdc, "dm_put_device" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x96848186, "scnprintf" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x33940a4b, "dm_dirty_log_type_register" },
	{ 0xc6cbbc89, "capable" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xe8bc40c5, "cn_netlink_send" },
	{ 0xfeb343d1, "mempool_alloc_noprof" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xdcb764ad, "memset" },
	{ 0x168b1107, "dm_table_event" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x8450a53a, "__kmem_cache_create_args" },
	{ 0x7483e13, "cn_del_callback" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9eb216a8, "dm_table_get_mode" },
	{ 0xf2d95916, "mempool_init_noprof" },
	{ 0x6da0706, "dm_dirty_log_type_unregister" },
	{ 0x6c624142, "dm_get_device" },
	{ 0x98cf60b3, "strlen" },
	{ 0x349cba85, "strchr" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe7e06108, "cn_add_callback" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x656f612b, "kmem_cache_destroy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dm-mod,dm-log,cn");


MODULE_INFO(srcversion, "0DE4F6EEEE1B5CFF0753932");
