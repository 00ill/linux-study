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

KSYMTAB_FUNC(vb2_buffer_in_use, "", "");
KSYMTAB_FUNC(vb2_core_querybuf, "_gpl", "");
KSYMTAB_FUNC(vb2_verify_memory_type, "", "");
KSYMTAB_FUNC(vb2_core_reqbufs, "_gpl", "");
KSYMTAB_FUNC(vb2_core_create_bufs, "_gpl", "");
KSYMTAB_FUNC(vb2_plane_vaddr, "_gpl", "");
KSYMTAB_FUNC(vb2_plane_cookie, "_gpl", "");
KSYMTAB_FUNC(vb2_buffer_done, "_gpl", "");
KSYMTAB_FUNC(vb2_discard_done, "_gpl", "");
KSYMTAB_FUNC(vb2_request_object_is_buffer, "_gpl", "");
KSYMTAB_FUNC(vb2_request_buffer_cnt, "_gpl", "");
KSYMTAB_FUNC(vb2_core_prepare_buf, "_gpl", "");
KSYMTAB_FUNC(vb2_core_remove_bufs, "_gpl", "");
KSYMTAB_FUNC(vb2_core_qbuf, "_gpl", "");
KSYMTAB_FUNC(vb2_wait_for_all_buffers, "_gpl", "");
KSYMTAB_FUNC(vb2_core_dqbuf, "_gpl", "");
KSYMTAB_FUNC(vb2_core_streamon, "_gpl", "");
KSYMTAB_FUNC(vb2_queue_error, "_gpl", "");
KSYMTAB_FUNC(vb2_core_streamoff, "_gpl", "");
KSYMTAB_FUNC(vb2_core_expbuf_dmabuf, "_gpl", "");
KSYMTAB_FUNC(vb2_core_expbuf, "_gpl", "");
KSYMTAB_FUNC(vb2_mmap, "_gpl", "");
KSYMTAB_FUNC(vb2_core_queue_init, "_gpl", "");
KSYMTAB_FUNC(vb2_core_queue_release, "_gpl", "");
KSYMTAB_FUNC(vb2_core_poll, "_gpl", "");
KSYMTAB_FUNC(vb2_read, "_gpl", "");
KSYMTAB_FUNC(vb2_write, "_gpl", "");
KSYMTAB_FUNC(vb2_thread_start, "_gpl", "");
KSYMTAB_FUNC(vb2_thread_stop, "_gpl", "");
KSYMTAB_FUNC(get_vaddr_frames, "", "");
KSYMTAB_FUNC(put_vaddr_frames, "", "");
KSYMTAB_FUNC(frame_vector_to_pages, "", "");
KSYMTAB_FUNC(frame_vector_to_pfns, "", "");
KSYMTAB_FUNC(frame_vector_create, "", "");
KSYMTAB_FUNC(frame_vector_destroy, "", "");
KSYMTAB_DATA(__tracepoint_vb2_buf_done, "_gpl", "");
KSYMTAB_FUNC(__traceiter_vb2_buf_done, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_vb2_buf_done, "_gpl", "");
KSYMTAB_DATA(__tracepoint_vb2_buf_queue, "_gpl", "");
KSYMTAB_FUNC(__traceiter_vb2_buf_queue, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_vb2_buf_queue, "_gpl", "");
KSYMTAB_DATA(__tracepoint_vb2_dqbuf, "_gpl", "");
KSYMTAB_FUNC(__traceiter_vb2_dqbuf, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_vb2_dqbuf, "_gpl", "");
KSYMTAB_DATA(__tracepoint_vb2_qbuf, "_gpl", "");
KSYMTAB_FUNC(__traceiter_vb2_qbuf, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_vb2_qbuf, "_gpl", "");

SYMBOL_CRC(vb2_buffer_in_use, 0xc1b39fea, "");
SYMBOL_CRC(vb2_core_querybuf, 0xd85e2196, "_gpl");
SYMBOL_CRC(vb2_verify_memory_type, 0xfe76ae1f, "");
SYMBOL_CRC(vb2_core_reqbufs, 0xae4f7ac4, "_gpl");
SYMBOL_CRC(vb2_core_create_bufs, 0xa05af789, "_gpl");
SYMBOL_CRC(vb2_plane_vaddr, 0x179f2fe4, "_gpl");
SYMBOL_CRC(vb2_plane_cookie, 0xc4cdc578, "_gpl");
SYMBOL_CRC(vb2_buffer_done, 0x72764206, "_gpl");
SYMBOL_CRC(vb2_discard_done, 0x3bb3de33, "_gpl");
SYMBOL_CRC(vb2_request_object_is_buffer, 0xb4ffbc63, "_gpl");
SYMBOL_CRC(vb2_request_buffer_cnt, 0x3c9e91b2, "_gpl");
SYMBOL_CRC(vb2_core_prepare_buf, 0x31015211, "_gpl");
SYMBOL_CRC(vb2_core_remove_bufs, 0x0a5e6769, "_gpl");
SYMBOL_CRC(vb2_core_qbuf, 0x176b882a, "_gpl");
SYMBOL_CRC(vb2_wait_for_all_buffers, 0xe0d6e4b1, "_gpl");
SYMBOL_CRC(vb2_core_dqbuf, 0x8f9f878b, "_gpl");
SYMBOL_CRC(vb2_core_streamon, 0x74c065c8, "_gpl");
SYMBOL_CRC(vb2_queue_error, 0xb33d20ed, "_gpl");
SYMBOL_CRC(vb2_core_streamoff, 0x986d9922, "_gpl");
SYMBOL_CRC(vb2_core_expbuf_dmabuf, 0x71c32f71, "_gpl");
SYMBOL_CRC(vb2_core_expbuf, 0xa995145f, "_gpl");
SYMBOL_CRC(vb2_mmap, 0xc51cfd5e, "_gpl");
SYMBOL_CRC(vb2_core_queue_init, 0x6703705e, "_gpl");
SYMBOL_CRC(vb2_core_queue_release, 0xabf082ab, "_gpl");
SYMBOL_CRC(vb2_core_poll, 0xba4daa24, "_gpl");
SYMBOL_CRC(vb2_read, 0x01551cbb, "_gpl");
SYMBOL_CRC(vb2_write, 0xd810e4a3, "_gpl");
SYMBOL_CRC(vb2_thread_start, 0xb0def8e6, "_gpl");
SYMBOL_CRC(vb2_thread_stop, 0xb5ea1527, "_gpl");
SYMBOL_CRC(get_vaddr_frames, 0xe20dfe0f, "");
SYMBOL_CRC(put_vaddr_frames, 0x1b700d37, "");
SYMBOL_CRC(frame_vector_to_pages, 0xc5e5573a, "");
SYMBOL_CRC(frame_vector_to_pfns, 0xdffb744b, "");
SYMBOL_CRC(frame_vector_create, 0x065246b8, "");
SYMBOL_CRC(frame_vector_destroy, 0x1d5f9555, "");
SYMBOL_CRC(__tracepoint_vb2_buf_done, 0xf97a7c84, "_gpl");
SYMBOL_CRC(__traceiter_vb2_buf_done, 0x5852762e, "_gpl");
SYMBOL_CRC(__SCK__tp_func_vb2_buf_done, 0xc7b45aa4, "_gpl");
SYMBOL_CRC(__tracepoint_vb2_buf_queue, 0x3c22713a, "_gpl");
SYMBOL_CRC(__traceiter_vb2_buf_queue, 0x8732b781, "_gpl");
SYMBOL_CRC(__SCK__tp_func_vb2_buf_queue, 0x07729fd4, "_gpl");
SYMBOL_CRC(__tracepoint_vb2_dqbuf, 0x7ee32286, "_gpl");
SYMBOL_CRC(__traceiter_vb2_dqbuf, 0x1e5042f4, "_gpl");
SYMBOL_CRC(__SCK__tp_func_vb2_dqbuf, 0xb9d2df39, "_gpl");
SYMBOL_CRC(__tracepoint_vb2_qbuf, 0x50a1bb4a, "_gpl");
SYMBOL_CRC(__traceiter_vb2_qbuf, 0xa93987b2, "_gpl");
SYMBOL_CRC(__SCK__tp_func_vb2_qbuf, 0xb6f4b031, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb465e40a, "pin_user_pages_fast" },
	{ 0xad7dcd48, "media_request_object_init" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x180cd0ba, "trace_raw_output_prep" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0xa50bb103, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xfbfd5863, "trace_event_printf" },
	{ 0xfa56e842, "media_request_object_unbind" },
	{ 0xb4f75385, "unpin_user_pages" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xe1bafd45, "trace_event_raw_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a38130e, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0xea427052, "trace_event_buffer_commit" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xd73653c4, "freezer_active" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8c8417be, "media_request_object_put" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x91ac9254, "perf_trace_run_bpf_submit" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xae62c17, "media_request_put" },
	{ 0x3199fbeb, "mem_section" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x941da81d, "dma_buf_get" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xfe479535, "trace_event_reg" },
	{ 0x70123581, "dma_buf_put" },
	{ 0x7e90cb4e, "media_request_object_bind" },
	{ 0x300820b, "dma_buf_fd" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4958742, "freezing_slow_path" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0x2f828d33, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mc");


MODULE_INFO(srcversion, "981009818631CC45DDFEBFA");
