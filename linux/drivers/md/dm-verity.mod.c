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
	{ 0x582ff1ed, "bio_associate_blkg" },
	{ 0xf021ef55, "crypto_alloc_ahash" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xbf656775, "dm_audit_log_ti" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xabfb730c, "crypto_shash_import" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x2c834418, "static_key_slow_inc" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xac258851, "vmalloc_to_page" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb081c7dd, "dm_per_bio_data" },
	{ 0xd8e99ff5, "system_bh_wq" },
	{ 0x929ffdc, "dm_put_device" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x96848186, "scnprintf" },
	{ 0xf7370f56, "system_state" },
	{ 0x24772bfe, "dm_bufio_get" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x406f2cd1, "dm_bio_from_per_bio_data" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0xeef9990f, "security_bdev_setintegrity" },
	{ 0xc35aaa13, "crypto_destroy_tfm" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xeca7949e, "dm_bufio_client_destroy" },
	{ 0x49ff8ad6, "dm_bufio_prefetch_with_ioprio" },
	{ 0xfeb343d1, "mempool_alloc_noprof" },
	{ 0x9f37e570, "kobject_uevent_env" },
	{ 0xe798fba6, "crypto_ahash_init" },
	{ 0x1bba52b3, "bio_endio" },
	{ 0xa8e458b, "crypto_req_done" },
	{ 0x6b914b93, "dm_audit_log_bio" },
	{ 0x18332c7f, "submit_bio_noacct" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd985dc99, "mempool_free_pages" },
	{ 0x7d27e504, "dm_shift_arg" },
	{ 0x77eafaa4, "dm_bufio_client_create" },
	{ 0xe6024e59, "dm_bufio_release" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x184aa1ca, "dm_unregister_target" },
	{ 0xf1e046cc, "panic" },
	{ 0x828b8f68, "crypto_shash_update" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xdcb764ad, "memset" },
	{ 0x39c74235, "dm_read_arg_group" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x95988557, "crypto_ahash_final" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe7bc6725, "dm_disk" },
	{ 0xbf2a6b2b, "dm_register_target" },
	{ 0xd95289aa, "crypto_shash_finup" },
	{ 0x656100cc, "dm_bufio_client_reset" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9eb216a8, "dm_table_get_mode" },
	{ 0x9386f362, "dm_table_get_md" },
	{ 0x26d0d7d8, "dm_bufio_read_with_ioprio" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xd991e3b9, "dm_bufio_get_device_size" },
	{ 0xf2d95916, "mempool_init_noprof" },
	{ 0x34df6d52, "dm_io" },
	{ 0x6c624142, "dm_get_device" },
	{ 0x98cf60b3, "strlen" },
	{ 0x838aef8, "crypto_ahash_update" },
	{ 0x74dcd98c, "dm_bufio_get_aux_data" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x1e7bbcb3, "kernel_restart" },
	{ 0xf39a6dab, "crypto_alloc_shash" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x411a4273, "crypto_shash_export" },
	{ 0x766a0927, "mempool_alloc_pages" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dm-mod,dm-bufio");


MODULE_INFO(srcversion, "1F0746D5BCAD9EEDBF3344F");
