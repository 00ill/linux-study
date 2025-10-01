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

KSYMTAB_FUNC(__mt76u_vendor_request, "_gpl", "");
KSYMTAB_FUNC(mt76u_vendor_request, "_gpl", "");
KSYMTAB_FUNC(___mt76u_rr, "_gpl", "");
KSYMTAB_FUNC(___mt76u_wr, "_gpl", "");
KSYMTAB_FUNC(mt76u_read_copy, "_gpl", "");
KSYMTAB_FUNC(mt76u_single_wr, "_gpl", "");
KSYMTAB_FUNC(mt76u_alloc_mcu_queue, "_gpl", "");
KSYMTAB_FUNC(mt76u_stop_rx, "_gpl", "");
KSYMTAB_FUNC(mt76u_resume_rx, "_gpl", "");
KSYMTAB_FUNC(mt76u_stop_tx, "_gpl", "");
KSYMTAB_FUNC(mt76u_queues_deinit, "_gpl", "");
KSYMTAB_FUNC(mt76u_alloc_queues, "_gpl", "");
KSYMTAB_FUNC(__mt76u_init, "_gpl", "");
KSYMTAB_FUNC(mt76u_init, "_gpl", "");

SYMBOL_CRC(__mt76u_vendor_request, 0x47f879ff, "_gpl");
SYMBOL_CRC(mt76u_vendor_request, 0x13526b87, "_gpl");
SYMBOL_CRC(___mt76u_rr, 0x4e41baf9, "_gpl");
SYMBOL_CRC(___mt76u_wr, 0x6c89395c, "_gpl");
SYMBOL_CRC(mt76u_read_copy, 0x0dc751d4, "_gpl");
SYMBOL_CRC(mt76u_single_wr, 0x93cbd35c, "_gpl");
SYMBOL_CRC(mt76u_alloc_mcu_queue, 0xb1f0d7e5, "_gpl");
SYMBOL_CRC(mt76u_stop_rx, 0x6e010221, "_gpl");
SYMBOL_CRC(mt76u_resume_rx, 0xd35d8be2, "_gpl");
SYMBOL_CRC(mt76u_stop_tx, 0x52b314bb, "_gpl");
SYMBOL_CRC(mt76u_queues_deinit, 0x658a8157, "_gpl");
SYMBOL_CRC(mt76u_alloc_queues, 0x22b5830a, "_gpl");
SYMBOL_CRC(__mt76u_init, 0x8a736088, "_gpl");
SYMBOL_CRC(mt76u_init, 0x63e1634b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe93aaf05, "page_pool_alloc_frag" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x180cd0ba, "trace_raw_output_prep" },
	{ 0xa50bb103, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xfbfd5863, "trace_event_printf" },
	{ 0xe1bafd45, "trace_event_raw_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x378805b6, "mt76_has_tx_pending" },
	{ 0x4c10c0b0, "page_pool_destroy" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x9a38130e, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbbc442b1, "kthread_park" },
	{ 0xa89db49f, "sched_set_fifo_low" },
	{ 0x975c6780, "mt76_tx_status_check" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0xea427052, "trace_event_buffer_commit" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xc56c18c0, "kthread_unpark" },
	{ 0x242d8f51, "build_skb" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x91ac9254, "perf_trace_run_bpf_submit" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0xf74654c, "usb_poison_urb" },
	{ 0xfe479535, "trace_event_reg" },
	{ 0xd4d6b2da, "usb_unpoison_urb" },
	{ 0xc6634315, "mt76_ac_to_hwq" },
	{ 0x7137b995, "page_pool_put_unrefed_netmem" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd8da42d, "mt76_queue_tx_complete" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0xf2da001e, "bpf_trace_run3" },
	{ 0x8df43a93, "mt76_rx_poll_complete" },
	{ 0x2f828d33, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1ec57b4f, "__mt76_worker_fn" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xbc04b8e9, "usb_init_urb" },
	{ 0xc86c3f91, "skb_add_rx_frag_netmem" },
	{ 0x3aa9ebe3, "mt76_create_page_pool" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x421e7a37, "skb_to_sgvec" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mt76");


MODULE_INFO(srcversion, "476E659C72C3397453F82F6");
