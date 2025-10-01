#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(iscsi_conn_queue_xmit, "_gpl", "");
KSYMTAB_FUNC(iscsi_conn_queue_recv, "_gpl", "");
KSYMTAB_FUNC(iscsi_update_cmdsn, "_gpl", "");
KSYMTAB_FUNC(iscsi_prep_data_out_pdu, "_gpl", "");
KSYMTAB_FUNC(iscsi_get_task, "_gpl", "");
KSYMTAB_FUNC(__iscsi_put_task, "_gpl", "");
KSYMTAB_FUNC(iscsi_put_task, "_gpl", "");
KSYMTAB_FUNC(iscsi_complete_scsi_task, "_gpl", "");
KSYMTAB_FUNC(iscsi_conn_send_pdu, "_gpl", "");
KSYMTAB_FUNC(iscsi_itt_to_task, "_gpl", "");
KSYMTAB_FUNC(__iscsi_complete_pdu, "_gpl", "");
KSYMTAB_FUNC(iscsi_complete_pdu, "_gpl", "");
KSYMTAB_FUNC(iscsi_verify_itt, "_gpl", "");
KSYMTAB_FUNC(iscsi_itt_to_ctask, "_gpl", "");
KSYMTAB_FUNC(iscsi_session_failure, "_gpl", "");
KSYMTAB_FUNC(iscsi_conn_failure, "_gpl", "");
KSYMTAB_FUNC(iscsi_requeue_task, "_gpl", "");
KSYMTAB_FUNC(iscsi_queuecommand, "_gpl", "");
KSYMTAB_FUNC(iscsi_target_alloc, "_gpl", "");
KSYMTAB_FUNC(iscsi_suspend_queue, "_gpl", "");
KSYMTAB_FUNC(iscsi_suspend_tx, "_gpl", "");
KSYMTAB_FUNC(iscsi_suspend_rx, "_gpl", "");
KSYMTAB_FUNC(iscsi_eh_cmd_timed_out, "_gpl", "");
KSYMTAB_FUNC(iscsi_conn_unbind, "_gpl", "");
KSYMTAB_FUNC(iscsi_eh_abort, "_gpl", "");
KSYMTAB_FUNC(iscsi_eh_device_reset, "_gpl", "");
KSYMTAB_FUNC(iscsi_session_recovery_timedout, "_gpl", "");
KSYMTAB_FUNC(iscsi_eh_session_reset, "_gpl", "");
KSYMTAB_FUNC(iscsi_eh_recover_target, "_gpl", "");
KSYMTAB_FUNC(iscsi_pool_init, "_gpl", "");
KSYMTAB_FUNC(iscsi_pool_free, "_gpl", "");
KSYMTAB_FUNC(iscsi_host_get_max_scsi_cmds, "_gpl", "");
KSYMTAB_FUNC(iscsi_host_add, "_gpl", "");
KSYMTAB_FUNC(iscsi_host_alloc, "_gpl", "");
KSYMTAB_FUNC(iscsi_host_remove, "_gpl", "");
KSYMTAB_FUNC(iscsi_host_free, "_gpl", "");
KSYMTAB_FUNC(iscsi_session_setup, "_gpl", "");
KSYMTAB_FUNC(iscsi_session_remove, "_gpl", "");
KSYMTAB_FUNC(iscsi_session_free, "_gpl", "");
KSYMTAB_FUNC(iscsi_session_teardown, "_gpl", "");
KSYMTAB_FUNC(iscsi_conn_setup, "_gpl", "");
KSYMTAB_FUNC(iscsi_conn_teardown, "_gpl", "");
KSYMTAB_FUNC(iscsi_conn_start, "_gpl", "");
KSYMTAB_FUNC(iscsi_conn_stop, "_gpl", "");
KSYMTAB_FUNC(iscsi_conn_bind, "_gpl", "");
KSYMTAB_FUNC(iscsi_switch_str_param, "_gpl", "");
KSYMTAB_FUNC(iscsi_set_param, "_gpl", "");
KSYMTAB_FUNC(iscsi_session_get_param, "_gpl", "");
KSYMTAB_FUNC(iscsi_conn_get_addr_param, "_gpl", "");
KSYMTAB_FUNC(iscsi_conn_get_param, "_gpl", "");
KSYMTAB_FUNC(iscsi_host_get_param, "_gpl", "");
KSYMTAB_FUNC(iscsi_host_set_param, "_gpl", "");

SYMBOL_CRC(iscsi_conn_queue_xmit, 0x6dee44d1, "_gpl");
SYMBOL_CRC(iscsi_conn_queue_recv, 0x9b3f44e0, "_gpl");
SYMBOL_CRC(iscsi_update_cmdsn, 0x421218f6, "_gpl");
SYMBOL_CRC(iscsi_prep_data_out_pdu, 0x17287ea4, "_gpl");
SYMBOL_CRC(iscsi_get_task, 0x51ac500f, "_gpl");
SYMBOL_CRC(__iscsi_put_task, 0xabdb8827, "_gpl");
SYMBOL_CRC(iscsi_put_task, 0xc662cabb, "_gpl");
SYMBOL_CRC(iscsi_complete_scsi_task, 0x2a0dab65, "_gpl");
SYMBOL_CRC(iscsi_conn_send_pdu, 0xa44fe576, "_gpl");
SYMBOL_CRC(iscsi_itt_to_task, 0x2febaa90, "_gpl");
SYMBOL_CRC(__iscsi_complete_pdu, 0xd057b8ae, "_gpl");
SYMBOL_CRC(iscsi_complete_pdu, 0x63b60b90, "_gpl");
SYMBOL_CRC(iscsi_verify_itt, 0x66289c94, "_gpl");
SYMBOL_CRC(iscsi_itt_to_ctask, 0xdc5efd2b, "_gpl");
SYMBOL_CRC(iscsi_session_failure, 0x4aa06f33, "_gpl");
SYMBOL_CRC(iscsi_conn_failure, 0xa13e338a, "_gpl");
SYMBOL_CRC(iscsi_requeue_task, 0xbc8b5104, "_gpl");
SYMBOL_CRC(iscsi_queuecommand, 0x2c9f70ce, "_gpl");
SYMBOL_CRC(iscsi_target_alloc, 0x4f16b55b, "_gpl");
SYMBOL_CRC(iscsi_suspend_queue, 0xb90c3731, "_gpl");
SYMBOL_CRC(iscsi_suspend_tx, 0xed1b86c8, "_gpl");
SYMBOL_CRC(iscsi_suspend_rx, 0x768625b8, "_gpl");
SYMBOL_CRC(iscsi_eh_cmd_timed_out, 0x8f4e00f9, "_gpl");
SYMBOL_CRC(iscsi_conn_unbind, 0x023b415f, "_gpl");
SYMBOL_CRC(iscsi_eh_abort, 0x576b2146, "_gpl");
SYMBOL_CRC(iscsi_eh_device_reset, 0x28b6ba69, "_gpl");
SYMBOL_CRC(iscsi_session_recovery_timedout, 0x1dc25cb2, "_gpl");
SYMBOL_CRC(iscsi_eh_session_reset, 0x8566e754, "_gpl");
SYMBOL_CRC(iscsi_eh_recover_target, 0x983fc025, "_gpl");
SYMBOL_CRC(iscsi_pool_init, 0x3bef2f73, "_gpl");
SYMBOL_CRC(iscsi_pool_free, 0x8d303b1b, "_gpl");
SYMBOL_CRC(iscsi_host_get_max_scsi_cmds, 0xb512b166, "_gpl");
SYMBOL_CRC(iscsi_host_add, 0xe79a7fc0, "_gpl");
SYMBOL_CRC(iscsi_host_alloc, 0xa3e091e2, "_gpl");
SYMBOL_CRC(iscsi_host_remove, 0xf63784cb, "_gpl");
SYMBOL_CRC(iscsi_host_free, 0x6fe7245d, "_gpl");
SYMBOL_CRC(iscsi_session_setup, 0xa10a7106, "_gpl");
SYMBOL_CRC(iscsi_session_remove, 0x591ac125, "_gpl");
SYMBOL_CRC(iscsi_session_free, 0x8a606ab7, "_gpl");
SYMBOL_CRC(iscsi_session_teardown, 0xf76395ab, "_gpl");
SYMBOL_CRC(iscsi_conn_setup, 0x6002a1af, "_gpl");
SYMBOL_CRC(iscsi_conn_teardown, 0x62805b5e, "_gpl");
SYMBOL_CRC(iscsi_conn_start, 0x3e652cd7, "_gpl");
SYMBOL_CRC(iscsi_conn_stop, 0xd25bccc1, "_gpl");
SYMBOL_CRC(iscsi_conn_bind, 0xf466b0bf, "_gpl");
SYMBOL_CRC(iscsi_switch_str_param, 0x12b2ad06, "_gpl");
SYMBOL_CRC(iscsi_set_param, 0xf514f98c, "_gpl");
SYMBOL_CRC(iscsi_session_get_param, 0xada3ef94, "_gpl");
SYMBOL_CRC(iscsi_conn_get_addr_param, 0xeab9cbd5, "_gpl");
SYMBOL_CRC(iscsi_conn_get_param, 0x8cb0f0e8, "_gpl");
SYMBOL_CRC(iscsi_host_get_param, 0x4e98dd02, "_gpl");
SYMBOL_CRC(iscsi_host_set_param, 0x4257a34f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x374647f3, "_dev_printk" },
	{ 0x67c78b8b, "iscsi_dbg_trace" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x3d2468f0, "scsi_done" },
	{ 0xe2964344, "__wake_up" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x37a0cba, "kfree" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x122c3a7e, "_printk" },
	{ 0x9adbb8ff, "scsi_add_host_with_dma" },
	{ 0xe96e0f1d, "scsi_host_alloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x8eb11fad, "scsi_host_put" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb3a2e5cd, "scsi_host_get" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf27296b6, "iscsi_remove_session" },
	{ 0xd4473fb7, "iscsi_alloc_conn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0xb266ee5d, "iscsi_add_conn" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xbbb6d9bd, "iscsi_put_conn" },
	{ 0x91488410, "iscsi_remove_conn" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdf242ac0, "iscsi_unblock_session" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xda09b986, "__tracepoint_iscsi_dbg_eh" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xb6658aa1, "__traceiter_iscsi_dbg_eh" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x4829a47e, "memcpy" },
	{ 0x723ff8dd, "iscsi_conn_error_event" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xdcb764ad, "memset" },
	{ 0x363ef721, "__tracepoint_iscsi_dbg_conn" },
	{ 0xb54062eb, "__traceiter_iscsi_dbg_conn" },
	{ 0xc6264e7a, "__tracepoint_iscsi_dbg_session" },
	{ 0x76505358, "__traceiter_iscsi_dbg_session" },
	{ 0xfbcc4e77, "iscsi_host_for_each_session" },
	{ 0x4d66beee, "scsi_remove_host" },
	{ 0x404dd4f7, "iscsi_force_destroy_session" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x89df56d1, "flush_signals" },
	{ 0x66fe89e, "iscsi_recv_pdu" },
	{ 0x15524fcf, "scsi_build_sense" },
	{ 0x818416e1, "scsi_set_sense_information" },
	{ 0xa9987b17, "iscsi_free_session" },
	{ 0x9d9e8944, "module_put" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x52856d0, "iscsi_block_session" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0xbd462b55, "__kfifo_init" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xda37c0aa, "iscsi_session_chkready" },
	{ 0xf7370f56, "system_state" },
	{ 0x449ffd6a, "iscsi_alloc_session" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x9c12987b, "iscsi_add_session" },
	{ 0x87da9b7d, "iscsi_get_conn" },
	{ 0x24d273d1, "add_timer" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A4CD66F8BE86431BDC2742A");
