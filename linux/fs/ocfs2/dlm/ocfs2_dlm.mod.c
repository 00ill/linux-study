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

KSYMTAB_FUNC(dlm_unregister_domain, "_gpl", "");
KSYMTAB_FUNC(dlm_register_domain, "_gpl", "");
KSYMTAB_FUNC(dlm_setup_eviction_cb, "_gpl", "");
KSYMTAB_FUNC(dlm_register_eviction_cb, "_gpl", "");
KSYMTAB_FUNC(dlm_unregister_eviction_cb, "_gpl", "");
KSYMTAB_FUNC(dlm_print_one_lock, "_gpl", "");
KSYMTAB_FUNC(dlm_errmsg, "_gpl", "");
KSYMTAB_FUNC(dlm_errname, "_gpl", "");
KSYMTAB_FUNC(dlmlock, "_gpl", "");
KSYMTAB_FUNC(dlmunlock, "_gpl", "");

SYMBOL_CRC(dlm_unregister_domain, 0x4ce34ca5, "_gpl");
SYMBOL_CRC(dlm_register_domain, 0xfad22990, "_gpl");
SYMBOL_CRC(dlm_setup_eviction_cb, 0x7a1211f8, "_gpl");
SYMBOL_CRC(dlm_register_eviction_cb, 0x4c4360ec, "_gpl");
SYMBOL_CRC(dlm_unregister_eviction_cb, 0xd8fa57a6, "_gpl");
SYMBOL_CRC(dlm_print_one_lock, 0x3d6d6e2b, "_gpl");
SYMBOL_CRC(dlm_errmsg, 0xd7ba575e, "_gpl");
SYMBOL_CRC(dlm_errname, 0xfb86b96f, "_gpl");
SYMBOL_CRC(dlmlock, 0xc5139fb3, "_gpl");
SYMBOL_CRC(dlmunlock, 0xeee730ad, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x96848186, "scnprintf" },
	{ 0xb6ebf62a, "o2nm_this_node" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xbd13ee5d, "o2hb_check_node_heartbeating_no_sem" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x6d11488, "__bitmap_equal" },
	{ 0x122c3a7e, "_printk" },
	{ 0x3d9ee9f0, "clear_page" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xa41a231f, "o2nm_get_node_by_num" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6a0c3847, "__mlog_printk" },
	{ 0xa02aa74a, "__cond_resched_lock" },
	{ 0x8f14d45b, "get_zeroed_page_noprof" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc2d395d0, "o2hb_setup_callback" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4a3c8253, "kmem_cache_free" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0xbfd7d7a2, "o2hb_global_heartbeat_active" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0xb3ba1a7a, "__seq_open_private" },
	{ 0xdcb764ad, "memset" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x6f61551b, "kmem_cache_alloc_noprof" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcf4fdd4d, "_atomic_dec_and_lock" },
	{ 0x8450a53a, "__kmem_cache_create_args" },
	{ 0x668b19a1, "down_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x661256ad, "seq_read" },
	{ 0x5e95a4b2, "o2net_send_message_vec" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0xa941cb47, "o2hb_fill_node_map" },
	{ 0xf1a5611d, "o2net_unregister_handler_list" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xf982e6db, "o2net_send_message" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xfe1298f3, "o2net_register_handler" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xbf677e7a, "seq_release_private" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc2f799c3, "o2hb_register_callback" },
	{ 0x58c88ff2, "o2hb_get_all_regions" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0xe9af6d33, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x53b954a2, "up_read" },
	{ 0x1a6e6619, "o2hb_unregister_callback" },
	{ 0xf89aed53, "o2nm_node_put" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x656f612b, "kmem_cache_destroy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ocfs2_nodemanager");


MODULE_INFO(srcversion, "61AAD86A714F7E2AFCB387E");
