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

KSYMTAB_FUNC(virtio_transport_deliver_tap_pkt, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_inc_tx_pkt, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_consume_skb_sent, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_get_credit, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_put_credit, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_stream_dequeue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_seqpacket_dequeue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_seqpacket_enqueue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_dgram_dequeue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_stream_has_data, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_seqpacket_has_data, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_stream_has_space, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_do_socket_init, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_buffer_size, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_poll_in, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_poll_out, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_recv_init, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_recv_pre_block, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_recv_pre_dequeue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_recv_post_dequeue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_send_init, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_send_pre_block, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_send_pre_enqueue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_send_post_enqueue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_stream_rcvhiwat, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_stream_is_active, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_stream_allow, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_dgram_bind, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_dgram_allow, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_connect, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_shutdown, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_dgram_enqueue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_stream_enqueue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_destruct, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_unsent_bytes, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_release, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_recv_pkt, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_purge_skbs, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_read_skb, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_set_rcvlowat, "_gpl", "");

SYMBOL_CRC(virtio_transport_deliver_tap_pkt, 0xa53aada5, "_gpl");
SYMBOL_CRC(virtio_transport_inc_tx_pkt, 0x6b6cdb12, "_gpl");
SYMBOL_CRC(virtio_transport_consume_skb_sent, 0x91adacec, "_gpl");
SYMBOL_CRC(virtio_transport_get_credit, 0xe297503e, "_gpl");
SYMBOL_CRC(virtio_transport_put_credit, 0xc0e22b63, "_gpl");
SYMBOL_CRC(virtio_transport_stream_dequeue, 0xacc24b3e, "_gpl");
SYMBOL_CRC(virtio_transport_seqpacket_dequeue, 0x47e01b33, "_gpl");
SYMBOL_CRC(virtio_transport_seqpacket_enqueue, 0xec509257, "_gpl");
SYMBOL_CRC(virtio_transport_dgram_dequeue, 0xe1b1431a, "_gpl");
SYMBOL_CRC(virtio_transport_stream_has_data, 0x85740d3b, "_gpl");
SYMBOL_CRC(virtio_transport_seqpacket_has_data, 0x1ccd8a0b, "_gpl");
SYMBOL_CRC(virtio_transport_stream_has_space, 0xa14674ed, "_gpl");
SYMBOL_CRC(virtio_transport_do_socket_init, 0x61b82a42, "_gpl");
SYMBOL_CRC(virtio_transport_notify_buffer_size, 0x8da45c85, "_gpl");
SYMBOL_CRC(virtio_transport_notify_poll_in, 0xa2bf4031, "_gpl");
SYMBOL_CRC(virtio_transport_notify_poll_out, 0x4ba0b002, "_gpl");
SYMBOL_CRC(virtio_transport_notify_recv_init, 0x4c736f29, "_gpl");
SYMBOL_CRC(virtio_transport_notify_recv_pre_block, 0xf276f758, "_gpl");
SYMBOL_CRC(virtio_transport_notify_recv_pre_dequeue, 0x4292519c, "_gpl");
SYMBOL_CRC(virtio_transport_notify_recv_post_dequeue, 0x651f7d06, "_gpl");
SYMBOL_CRC(virtio_transport_notify_send_init, 0x69a99213, "_gpl");
SYMBOL_CRC(virtio_transport_notify_send_pre_block, 0xd9dfd602, "_gpl");
SYMBOL_CRC(virtio_transport_notify_send_pre_enqueue, 0x821c80be, "_gpl");
SYMBOL_CRC(virtio_transport_notify_send_post_enqueue, 0xf14b8abf, "_gpl");
SYMBOL_CRC(virtio_transport_stream_rcvhiwat, 0xe8c96296, "_gpl");
SYMBOL_CRC(virtio_transport_stream_is_active, 0x9a513484, "_gpl");
SYMBOL_CRC(virtio_transport_stream_allow, 0x03a81e69, "_gpl");
SYMBOL_CRC(virtio_transport_dgram_bind, 0x65fe0146, "_gpl");
SYMBOL_CRC(virtio_transport_dgram_allow, 0xbabd30f5, "_gpl");
SYMBOL_CRC(virtio_transport_connect, 0x7341b79b, "_gpl");
SYMBOL_CRC(virtio_transport_shutdown, 0x3479e651, "_gpl");
SYMBOL_CRC(virtio_transport_dgram_enqueue, 0x8868a47f, "_gpl");
SYMBOL_CRC(virtio_transport_stream_enqueue, 0x36593882, "_gpl");
SYMBOL_CRC(virtio_transport_destruct, 0x738a6500, "_gpl");
SYMBOL_CRC(virtio_transport_unsent_bytes, 0x92672925, "_gpl");
SYMBOL_CRC(virtio_transport_release, 0x7c99e197, "_gpl");
SYMBOL_CRC(virtio_transport_recv_pkt, 0xa536d8b6, "_gpl");
SYMBOL_CRC(virtio_transport_purge_skbs, 0x586e9f0f, "_gpl");
SYMBOL_CRC(virtio_transport_read_skb, 0x25c3dbdd, "_gpl");
SYMBOL_CRC(virtio_transport_notify_set_rcvlowat, 0xce8f179c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc12c556a, "vsock_enqueue_accept" },
	{ 0x8769f7d9, "vsock_insert_connected" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x180cd0ba, "trace_raw_output_prep" },
	{ 0xa50bb103, "__trace_trigger_soft_disabled" },
	{ 0x3a97cc49, "vsock_remove_sock" },
	{ 0xfbfd5863, "trace_event_printf" },
	{ 0xa99ead46, "vsock_deliver_tap" },
	{ 0xe1bafd45, "trace_event_raw_init" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xc1b89cb8, "sk_error_report" },
	{ 0xea427052, "trace_event_buffer_commit" },
	{ 0x9c1a3623, "vsock_find_bound_socket" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x3d4b0fca, "vsock_addr_init" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x91ac9254, "perf_trace_run_bpf_submit" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xf33af8b9, "sk_free" },
	{ 0xfe479535, "trace_event_reg" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x2a079ea3, "__skb_recv_datagram" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0xdbf186a2, "vsock_stream_has_data" },
	{ 0x6a82a79e, "skb_copy_datagram_iter" },
	{ 0xacb50e4a, "bpf_trace_run9" },
	{ 0x71f22f37, "vsock_find_connected_socket" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x7a5c410e, "sock_efree" },
	{ 0x37a39f05, "bpf_trace_run10" },
	{ 0x3f05e846, "vsock_core_get_transport" },
	{ 0xdeab73e4, "__zerocopy_sg_from_iter" },
	{ 0x80503c2e, "vsock_stream_has_space" },
	{ 0xa5a853f, "skb_set_owner_w" },
	{ 0x2f828d33, "trace_event_buffer_reserve" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x9599b0d7, "_copy_from_iter" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xae6d2ab0, "msg_zerocopy_realloc" },
	{ 0x1105c57, "vsock_create_connected" },
	{ 0x815d09df, "vsock_assign_transport" },
	{ 0xf85b4e63, "iov_iter_revert" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0xaf1d87f3, "iov_iter_npages" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xd2d80c01, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3d582cba, "vsock_data_ready" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "vsock");


MODULE_INFO(srcversion, "D9B28D5AF69CF735C9F14D1");
