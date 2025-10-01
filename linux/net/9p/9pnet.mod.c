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

KSYMTAB_FUNC(v9fs_register_trans, "", "");
KSYMTAB_FUNC(v9fs_unregister_trans, "", "");
KSYMTAB_FUNC(v9fs_get_trans_by_name, "", "");
KSYMTAB_FUNC(v9fs_get_default_trans, "", "");
KSYMTAB_FUNC(p9_is_proto_dotl, "", "");
KSYMTAB_FUNC(p9_is_proto_dotu, "", "");
KSYMTAB_FUNC(p9_show_client_options, "", "");
KSYMTAB_FUNC(p9_fcall_fini, "", "");
KSYMTAB_FUNC(p9_tag_lookup, "", "");
KSYMTAB_FUNC(p9_req_put, "", "");
KSYMTAB_FUNC(p9_client_cb, "", "");
KSYMTAB_FUNC(p9_parse_header, "", "");
KSYMTAB_DATA(__tracepoint_9p_fid_ref, "", "");
KSYMTAB_FUNC(__traceiter_9p_fid_ref, "", "");
KSYMTAB_DATA(__SCK__tp_func_9p_fid_ref, "", "");
KSYMTAB_FUNC(do_trace_9p_fid_get, "", "");
KSYMTAB_FUNC(do_trace_9p_fid_put, "", "");
KSYMTAB_FUNC(p9_client_create, "", "");
KSYMTAB_FUNC(p9_client_destroy, "", "");
KSYMTAB_FUNC(p9_client_disconnect, "", "");
KSYMTAB_FUNC(p9_client_begin_disconnect, "", "");
KSYMTAB_FUNC(p9_client_attach, "", "");
KSYMTAB_FUNC(p9_client_walk, "", "");
KSYMTAB_FUNC(p9_client_open, "", "");
KSYMTAB_FUNC(p9_client_create_dotl, "", "");
KSYMTAB_FUNC(p9_client_fcreate, "", "");
KSYMTAB_FUNC(p9_client_symlink, "", "");
KSYMTAB_FUNC(p9_client_link, "", "");
KSYMTAB_FUNC(p9_client_fsync, "", "");
KSYMTAB_FUNC(p9_client_clunk, "", "");
KSYMTAB_FUNC(p9_client_remove, "", "");
KSYMTAB_FUNC(p9_client_unlinkat, "", "");
KSYMTAB_FUNC(p9_client_read, "", "");
KSYMTAB_FUNC(p9_client_read_once, "", "");
KSYMTAB_FUNC(p9_client_write, "", "");
KSYMTAB_FUNC(p9_client_write_subreq, "", "");
KSYMTAB_FUNC(p9_client_stat, "", "");
KSYMTAB_FUNC(p9_client_getattr_dotl, "", "");
KSYMTAB_FUNC(p9_client_wstat, "", "");
KSYMTAB_FUNC(p9_client_setattr, "", "");
KSYMTAB_FUNC(p9_client_statfs, "", "");
KSYMTAB_FUNC(p9_client_rename, "", "");
KSYMTAB_FUNC(p9_client_renameat, "", "");
KSYMTAB_FUNC(p9_client_xattrwalk, "_gpl", "");
KSYMTAB_FUNC(p9_client_xattrcreate, "_gpl", "");
KSYMTAB_FUNC(p9_client_readdir, "", "");
KSYMTAB_FUNC(p9_client_mknod_dotl, "", "");
KSYMTAB_FUNC(p9_client_mkdir_dotl, "", "");
KSYMTAB_FUNC(p9_client_lock_dotl, "", "");
KSYMTAB_FUNC(p9_client_getlock_dotl, "", "");
KSYMTAB_FUNC(p9_client_readlink, "", "");
KSYMTAB_FUNC(p9_error_init, "", "");
KSYMTAB_FUNC(p9_errstr2errno, "", "");
KSYMTAB_FUNC(p9stat_free, "", "");
KSYMTAB_FUNC(p9stat_read, "", "");
KSYMTAB_FUNC(p9dirent_read, "", "");
KSYMTAB_FUNC(p9_release_pages, "", "");

SYMBOL_CRC(v9fs_register_trans, 0x7903f2b6, "");
SYMBOL_CRC(v9fs_unregister_trans, 0xfae08cad, "");
SYMBOL_CRC(v9fs_get_trans_by_name, 0x28842018, "");
SYMBOL_CRC(v9fs_get_default_trans, 0xfa1897d8, "");
SYMBOL_CRC(p9_is_proto_dotl, 0x98ef6e31, "");
SYMBOL_CRC(p9_is_proto_dotu, 0x16c5495c, "");
SYMBOL_CRC(p9_show_client_options, 0xf385dae5, "");
SYMBOL_CRC(p9_fcall_fini, 0x4ba99359, "");
SYMBOL_CRC(p9_tag_lookup, 0xaa4c8251, "");
SYMBOL_CRC(p9_req_put, 0xdcfa54ec, "");
SYMBOL_CRC(p9_client_cb, 0x56bf9e3f, "");
SYMBOL_CRC(p9_parse_header, 0x761cad64, "");
SYMBOL_CRC(__tracepoint_9p_fid_ref, 0xee437897, "");
SYMBOL_CRC(__traceiter_9p_fid_ref, 0x3408081f, "");
SYMBOL_CRC(__SCK__tp_func_9p_fid_ref, 0xb55ae777, "");
SYMBOL_CRC(do_trace_9p_fid_get, 0x5fdbf9ed, "");
SYMBOL_CRC(do_trace_9p_fid_put, 0x5772ba89, "");
SYMBOL_CRC(p9_client_create, 0xc784f80f, "");
SYMBOL_CRC(p9_client_destroy, 0x8ec00996, "");
SYMBOL_CRC(p9_client_disconnect, 0x0f4aa126, "");
SYMBOL_CRC(p9_client_begin_disconnect, 0x91e7306b, "");
SYMBOL_CRC(p9_client_attach, 0xae5f158a, "");
SYMBOL_CRC(p9_client_walk, 0xe9008818, "");
SYMBOL_CRC(p9_client_open, 0xcf9190e1, "");
SYMBOL_CRC(p9_client_create_dotl, 0x17b6662e, "");
SYMBOL_CRC(p9_client_fcreate, 0x1ffde1cb, "");
SYMBOL_CRC(p9_client_symlink, 0xcfe82e09, "");
SYMBOL_CRC(p9_client_link, 0x74f5e5ab, "");
SYMBOL_CRC(p9_client_fsync, 0x77199d3b, "");
SYMBOL_CRC(p9_client_clunk, 0x87288c0e, "");
SYMBOL_CRC(p9_client_remove, 0x05b49e47, "");
SYMBOL_CRC(p9_client_unlinkat, 0x24369741, "");
SYMBOL_CRC(p9_client_read, 0x1ae100ee, "");
SYMBOL_CRC(p9_client_read_once, 0x1b0ff905, "");
SYMBOL_CRC(p9_client_write, 0x91d3e573, "");
SYMBOL_CRC(p9_client_write_subreq, 0x83c43c3b, "");
SYMBOL_CRC(p9_client_stat, 0xb7dda7c8, "");
SYMBOL_CRC(p9_client_getattr_dotl, 0xbb1e8cf6, "");
SYMBOL_CRC(p9_client_wstat, 0xac3c8901, "");
SYMBOL_CRC(p9_client_setattr, 0xc9fbd37e, "");
SYMBOL_CRC(p9_client_statfs, 0x5edbd043, "");
SYMBOL_CRC(p9_client_rename, 0xe62a3d91, "");
SYMBOL_CRC(p9_client_renameat, 0xae1d094c, "");
SYMBOL_CRC(p9_client_xattrwalk, 0x8f469dc5, "_gpl");
SYMBOL_CRC(p9_client_xattrcreate, 0xa48df13f, "_gpl");
SYMBOL_CRC(p9_client_readdir, 0x3b614433, "");
SYMBOL_CRC(p9_client_mknod_dotl, 0x7eb09b8b, "");
SYMBOL_CRC(p9_client_mkdir_dotl, 0xd571f102, "");
SYMBOL_CRC(p9_client_lock_dotl, 0x4bc31bf6, "");
SYMBOL_CRC(p9_client_getlock_dotl, 0x7446ba0c, "");
SYMBOL_CRC(p9_client_readlink, 0x94fc3293, "");
SYMBOL_CRC(p9_error_init, 0xe58a3360, "");
SYMBOL_CRC(p9_errstr2errno, 0x3d73a797, "");
SYMBOL_CRC(p9stat_free, 0xd384c683, "");
SYMBOL_CRC(p9stat_read, 0x41ce9823, "");
SYMBOL_CRC(p9dirent_read, 0x95bd8f96, "");
SYMBOL_CRC(p9_release_pages, 0x06ec027d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3aaa0000, "try_module_get" },
	{ 0x66276d18, "_copy_to_iter" },
	{ 0x438717fb, "bpf_trace_run4" },
	{ 0x20978fb9, "idr_find" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0x180cd0ba, "trace_raw_output_prep" },
	{ 0xa50bb103, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xfbfd5863, "trace_event_printf" },
	{ 0xe1bafd45, "trace_event_raw_init" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a38130e, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xea427052, "trace_event_buffer_commit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8d732959, "make_kuid" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x9d9e8944, "module_put" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x91ac9254, "perf_trace_run_bpf_submit" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x4e3567f7, "match_int" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x954f099c, "idr_preload" },
	{ 0x4a3c8253, "kmem_cache_free" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x59cd6602, "from_kgid" },
	{ 0xfe479535, "trace_event_reg" },
	{ 0xff65ed11, "iov_iter_kvec" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x29a43bb2, "from_kuid" },
	{ 0xdcb764ad, "memset" },
	{ 0x90f5f875, "netfs_write_subrequest_terminated" },
	{ 0x6f61551b, "kmem_cache_alloc_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x796c3d7, "make_kgid" },
	{ 0x8450a53a, "__kmem_cache_create_args" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xf2da001e, "bpf_trace_run3" },
	{ 0x2f828d33, "trace_event_buffer_reserve" },
	{ 0x85df9b6c, "strsep" },
	{ 0x771f0565, "init_user_ns" },
	{ 0xb53675e6, "seq_write" },
	{ 0x44e9a829, "match_token" },
	{ 0xd9aab56f, "__folio_put" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x9599b0d7, "_copy_from_iter" },
	{ 0xacf4d843, "match_strdup" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x98cf60b3, "strlen" },
	{ 0xf85b4e63, "iov_iter_revert" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x656f612b, "kmem_cache_destroy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "netfs");


MODULE_INFO(srcversion, "7F11EA0C0A43135F90027D9");
