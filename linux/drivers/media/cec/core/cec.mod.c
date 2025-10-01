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

KSYMTAB_FUNC(cec_allocate_adapter, "_gpl", "");
KSYMTAB_FUNC(cec_register_adapter, "_gpl", "");
KSYMTAB_FUNC(cec_unregister_adapter, "_gpl", "");
KSYMTAB_FUNC(cec_delete_adapter, "_gpl", "");
KSYMTAB_FUNC(cec_get_edid_phys_addr, "_gpl", "");
KSYMTAB_FUNC(cec_fill_conn_info_from_drm, "_gpl", "");
KSYMTAB_FUNC(cec_queue_pin_cec_event, "_gpl", "");
KSYMTAB_FUNC(cec_queue_pin_hpd_event, "_gpl", "");
KSYMTAB_FUNC(cec_queue_pin_5v_event, "_gpl", "");
KSYMTAB_FUNC(cec_transmit_done_ts, "_gpl", "");
KSYMTAB_FUNC(cec_transmit_attempt_done_ts, "_gpl", "");
KSYMTAB_FUNC(cec_transmit_msg, "_gpl", "");
KSYMTAB_FUNC(cec_received_msg_ts, "_gpl", "");
KSYMTAB_FUNC(cec_s_phys_addr, "_gpl", "");
KSYMTAB_FUNC(cec_s_phys_addr_from_edid, "_gpl", "");
KSYMTAB_FUNC(cec_s_conn_info, "_gpl", "");
KSYMTAB_FUNC(cec_s_log_addrs, "_gpl", "");

SYMBOL_CRC(cec_allocate_adapter, 0xec8fb7a8, "_gpl");
SYMBOL_CRC(cec_register_adapter, 0x462aedb0, "_gpl");
SYMBOL_CRC(cec_unregister_adapter, 0x5227fda3, "_gpl");
SYMBOL_CRC(cec_delete_adapter, 0x327c9a5d, "_gpl");
SYMBOL_CRC(cec_get_edid_phys_addr, 0xbe4de675, "_gpl");
SYMBOL_CRC(cec_fill_conn_info_from_drm, 0xc2d3d5da, "_gpl");
SYMBOL_CRC(cec_queue_pin_cec_event, 0xc7c88211, "_gpl");
SYMBOL_CRC(cec_queue_pin_hpd_event, 0x220b3ea7, "_gpl");
SYMBOL_CRC(cec_queue_pin_5v_event, 0xb266ef05, "_gpl");
SYMBOL_CRC(cec_transmit_done_ts, 0xa3497839, "_gpl");
SYMBOL_CRC(cec_transmit_attempt_done_ts, 0x26bf8e5e, "_gpl");
SYMBOL_CRC(cec_transmit_msg, 0x0c3fc59d, "_gpl");
SYMBOL_CRC(cec_received_msg_ts, 0x6256cac2, "_gpl");
SYMBOL_CRC(cec_s_phys_addr, 0x03dfb7db, "_gpl");
SYMBOL_CRC(cec_s_phys_addr_from_edid, 0x1d0f9961, "_gpl");
SYMBOL_CRC(cec_s_conn_info, 0xf1cc74a3, "_gpl");
SYMBOL_CRC(cec_s_log_addrs, 0x6275b09e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x70c69a78, "cdev_device_del" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x16965a52, "device_initialize" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0x99ed6ef6, "get_device" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x122c3a7e, "_printk" },
	{ 0xcb9c0934, "cdev_device_add" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfc28cd6b, "debugfs_create_devm_seqfile" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x36dc6ece, "put_device" },
	{ 0xc6cbbc89, "capable" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb3b75fb9, "rc_keyup" },
	{ 0xbf8790c5, "bus_unregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x661f928c, "rc_register_device" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x9128f4c2, "rc_keydown" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x20463df4, "wait_for_completion_killable" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x5dc3d1bc, "rc_free_device" },
	{ 0xdcb764ad, "memset" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0x419a348c, "rc_allocate_device" },
	{ 0x661256ad, "seq_read" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0xb53675e6, "seq_write" },
	{ 0x6080511e, "kobject_set_name" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x10139ad8, "single_release" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x71c90ddc, "single_open" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0xf399eccc, "rc_unregister_device" },
	{ 0xa01f13a6, "cdev_init" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x1b367b9c, "bus_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DB0E9E1B952A39D0C6A086A");
