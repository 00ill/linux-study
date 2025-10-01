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

KSYMTAB_FUNC(iscsi_tcp_segment_unmap, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_segment_done, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_dgst_header, "_gpl", "");
KSYMTAB_FUNC(iscsi_segment_init_linear, "_gpl", "");
KSYMTAB_FUNC(iscsi_segment_seek_sg, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_hdr_recv_prep, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_cleanup_task, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_recv_segment_is_hdr, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_recv_skb, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_task_init, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_task_xmit, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_conn_setup, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_conn_teardown, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_r2tpool_alloc, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_r2tpool_free, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_set_max_r2t, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_conn_get_stats, "_gpl", "");

SYMBOL_CRC(iscsi_tcp_segment_unmap, 0x9567b975, "_gpl");
SYMBOL_CRC(iscsi_tcp_segment_done, 0xaed0d41e, "_gpl");
SYMBOL_CRC(iscsi_tcp_dgst_header, 0x4996f54a, "_gpl");
SYMBOL_CRC(iscsi_segment_init_linear, 0x44add28b, "_gpl");
SYMBOL_CRC(iscsi_segment_seek_sg, 0x1a19c3bf, "_gpl");
SYMBOL_CRC(iscsi_tcp_hdr_recv_prep, 0x8d9a8097, "_gpl");
SYMBOL_CRC(iscsi_tcp_cleanup_task, 0x23e137fd, "_gpl");
SYMBOL_CRC(iscsi_tcp_recv_segment_is_hdr, 0x602de11d, "_gpl");
SYMBOL_CRC(iscsi_tcp_recv_skb, 0xab9e79ab, "_gpl");
SYMBOL_CRC(iscsi_tcp_task_init, 0x095384e2, "_gpl");
SYMBOL_CRC(iscsi_tcp_task_xmit, 0x5c05ba04, "_gpl");
SYMBOL_CRC(iscsi_tcp_conn_setup, 0x1dab6f97, "_gpl");
SYMBOL_CRC(iscsi_tcp_conn_teardown, 0x0d6cfeae, "_gpl");
SYMBOL_CRC(iscsi_tcp_r2tpool_alloc, 0x815d37cb, "_gpl");
SYMBOL_CRC(iscsi_tcp_r2tpool_free, 0x0844fe48, "_gpl");
SYMBOL_CRC(iscsi_tcp_set_max_r2t, 0x8b3dcfaa, "_gpl");
SYMBOL_CRC(iscsi_tcp_conn_get_stats, 0x4142aa5b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x67c78b8b, "iscsi_dbg_trace" },
	{ 0x374647f3, "_dev_printk" },
	{ 0x43babd19, "sg_init_one" },
	{ 0xb73b5874, "crypto_ahash_digest" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xe798fba6, "crypto_ahash_init" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x17287ea4, "iscsi_prep_data_out_pdu" },
	{ 0xc662cabb, "iscsi_put_task" },
	{ 0xa13e338a, "iscsi_conn_failure" },
	{ 0x6002a1af, "iscsi_conn_setup" },
	{ 0x62805b5e, "iscsi_conn_teardown" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x3bef2f73, "iscsi_pool_init" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x8d303b1b, "iscsi_pool_free" },
	{ 0xb32662a6, "__tracepoint_iscsi_dbg_tcp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x87e3050b, "__traceiter_iscsi_dbg_tcp" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x838aef8, "crypto_ahash_update" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x95988557, "crypto_ahash_final" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x181ad5cb, "skb_prepare_seq_read" },
	{ 0x5f5da76, "skb_seq_read" },
	{ 0x4829a47e, "memcpy" },
	{ 0xee2b6aa0, "skb_abort_seq_read" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x63b60b90, "iscsi_complete_pdu" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x66289c94, "iscsi_verify_itt" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xdc5efd2b, "iscsi_itt_to_ctask" },
	{ 0x51ac500f, "iscsi_get_task" },
	{ 0x421218f6, "iscsi_update_cmdsn" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd057b8ae, "__iscsi_complete_pdu" },
	{ 0xbc8b5104, "iscsi_requeue_task" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "libiscsi");


MODULE_INFO(srcversion, "2064390599C28F50820AC03");
