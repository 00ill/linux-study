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

KSYMTAB_FUNC(snd_timer_instance_new, "", "");
KSYMTAB_FUNC(snd_timer_instance_free, "", "");
KSYMTAB_FUNC(snd_timer_open, "", "");
KSYMTAB_FUNC(snd_timer_close, "", "");
KSYMTAB_FUNC(snd_timer_resolution, "", "");
KSYMTAB_FUNC(snd_timer_start, "", "");
KSYMTAB_FUNC(snd_timer_stop, "", "");
KSYMTAB_FUNC(snd_timer_continue, "", "");
KSYMTAB_FUNC(snd_timer_pause, "", "");
KSYMTAB_FUNC(snd_timer_interrupt, "", "");
KSYMTAB_FUNC(snd_timer_new, "", "");
KSYMTAB_FUNC(snd_timer_notify, "", "");
KSYMTAB_FUNC(snd_timer_global_new, "", "");
KSYMTAB_FUNC(snd_timer_global_free, "", "");
KSYMTAB_FUNC(snd_timer_global_register, "", "");

SYMBOL_CRC(snd_timer_instance_new, 0xe2389a17, "");
SYMBOL_CRC(snd_timer_instance_free, 0x85da3d5e, "");
SYMBOL_CRC(snd_timer_open, 0x77f590df, "");
SYMBOL_CRC(snd_timer_close, 0x05f2d09a, "");
SYMBOL_CRC(snd_timer_resolution, 0xc2b0bb91, "");
SYMBOL_CRC(snd_timer_start, 0x23154783, "");
SYMBOL_CRC(snd_timer_stop, 0x3ced7cbc, "");
SYMBOL_CRC(snd_timer_continue, 0x0eda181d, "");
SYMBOL_CRC(snd_timer_pause, 0x5f8327a7, "");
SYMBOL_CRC(snd_timer_interrupt, 0x55e00b19, "");
SYMBOL_CRC(snd_timer_new, 0x86f25069, "");
SYMBOL_CRC(snd_timer_notify, 0x18459235, "");
SYMBOL_CRC(snd_timer_global_new, 0x586db4a7, "");
SYMBOL_CRC(snd_timer_global_free, 0x537d6814, "");
SYMBOL_CRC(snd_timer_global_register, 0x9d516649, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3aaa0000, "try_module_get" },
	{ 0xc68b08a3, "snd_info_register" },
	{ 0x9507edad, "snd_info_create_module_entry" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x7c2b253b, "snd_info_free_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x43c792dd, "snd_fasync_helper" },
	{ 0xe2964344, "__wake_up" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x99ed6ef6, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x36dc6ece, "put_device" },
	{ 0x9d9e8944, "module_put" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0x85194765, "snd_unregister_device" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xff106c56, "snd_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb6266700, "snd_device_new" },
	{ 0xdcb764ad, "memset" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x5af762f1, "snd_fasync_free" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xe0ff878f, "stream_open" },
	{ 0xf8f2a4eb, "snd_kill_fasync" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x30647f39, "snd_register_device" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "6ACC2888935D52E7B00CF5B");
