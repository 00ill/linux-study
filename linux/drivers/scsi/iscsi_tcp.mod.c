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
	{ 0xab986916, "iscsi_register_transport" },
	{ 0x122c3a7e, "_printk" },
	{ 0x67c78b8b, "iscsi_dbg_trace" },
	{ 0x374647f3, "_dev_printk" },
	{ 0xdcb764ad, "memset" },
	{ 0x44add28b, "iscsi_segment_init_linear" },
	{ 0x1a19c3bf, "iscsi_segment_seek_sg" },
	{ 0x4996f54a, "iscsi_tcp_dgst_header" },
	{ 0xefbf72d, "iov_iter_bvec" },
	{ 0x8045b26e, "sock_sendmsg" },
	{ 0xaed0d41e, "iscsi_tcp_segment_done" },
	{ 0x9567b975, "iscsi_tcp_segment_unmap" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa13e338a, "iscsi_conn_failure" },
	{ 0x4142aa5b, "iscsi_tcp_conn_get_stats" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x87da9b7d, "iscsi_get_conn" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xafba3f1a, "kernel_getsockname" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbbb6d9bd, "iscsi_put_conn" },
	{ 0xeab9cbd5, "iscsi_conn_get_addr_param" },
	{ 0x4e98dd02, "iscsi_host_get_param" },
	{ 0x8cb0f0e8, "iscsi_conn_get_param" },
	{ 0x83884a84, "kernel_getpeername" },
	{ 0xf514f98c, "iscsi_set_param" },
	{ 0x8b3dcfaa, "iscsi_tcp_set_max_r2t" },
	{ 0x33e54082, "sockfd_lookup" },
	{ 0xacceb7d8, "fput" },
	{ 0xf466b0bf, "iscsi_conn_bind" },
	{ 0x435e23d, "sk_set_memalloc" },
	{ 0x114b7867, "sock_no_linger" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x8d9a8097, "iscsi_tcp_hdr_recv_prep" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x6dee44d1, "iscsi_conn_queue_xmit" },
	{ 0xab9e79ab, "iscsi_tcp_recv_skb" },
	{ 0xd59dd96, "scsi_is_host_device" },
	{ 0x591ac125, "iscsi_session_remove" },
	{ 0xf63784cb, "iscsi_host_remove" },
	{ 0x844fe48, "iscsi_tcp_r2tpool_free" },
	{ 0x8a606ab7, "iscsi_session_free" },
	{ 0x6fe7245d, "iscsi_host_free" },
	{ 0xa3e091e2, "iscsi_host_alloc" },
	{ 0xb512b166, "iscsi_host_get_max_scsi_cmds" },
	{ 0xe79a7fc0, "iscsi_host_add" },
	{ 0xa10a7106, "iscsi_session_setup" },
	{ 0x815d37cb, "iscsi_tcp_r2tpool_alloc" },
	{ 0xf76395ab, "iscsi_session_teardown" },
	{ 0xc5a28e0d, "iscsi_unregister_transport" },
	{ 0xa3e70c7e, "kernel_sock_shutdown" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x768625b8, "iscsi_suspend_rx" },
	{ 0xf33af8b9, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xc35aaa13, "crypto_destroy_tfm" },
	{ 0xd6cfeae, "iscsi_tcp_conn_teardown" },
	{ 0xe2964344, "__wake_up" },
	{ 0xed1b86c8, "iscsi_suspend_tx" },
	{ 0xd25bccc1, "iscsi_conn_stop" },
	{ 0xa3ac06cf, "__tracepoint_iscsi_dbg_sw_tcp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xe4ac8028, "__traceiter_iscsi_dbg_sw_tcp" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xe6aef439, "__tracepoint_sk_data_ready" },
	{ 0x6e75a11f, "tcp_read_sock" },
	{ 0x9b3f44e0, "iscsi_conn_queue_recv" },
	{ 0xac104271, "__traceiter_sk_data_ready" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0xd2d80c01, "release_sock" },
	{ 0x1dab6f97, "iscsi_tcp_conn_setup" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf021ef55, "crypto_alloc_ahash" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x2c9f70ce, "iscsi_queuecommand" },
	{ 0x576b2146, "iscsi_eh_abort" },
	{ 0x28b6ba69, "iscsi_eh_device_reset" },
	{ 0x983fc025, "iscsi_eh_recover_target" },
	{ 0xe9ef8cde, "scsi_change_queue_depth" },
	{ 0x8f4e00f9, "iscsi_eh_cmd_timed_out" },
	{ 0x3e652cd7, "iscsi_conn_start" },
	{ 0xada3ef94, "iscsi_session_get_param" },
	{ 0x4257a34f, "iscsi_host_set_param" },
	{ 0xa44fe576, "iscsi_conn_send_pdu" },
	{ 0x95384e2, "iscsi_tcp_task_init" },
	{ 0x5c05ba04, "iscsi_tcp_task_xmit" },
	{ 0x23e137fd, "iscsi_tcp_cleanup_task" },
	{ 0x1dc25cb2, "iscsi_session_recovery_timedout" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "libiscsi_tcp,libiscsi");


MODULE_INFO(srcversion, "942BC462961DE37CFD1F3E8");
