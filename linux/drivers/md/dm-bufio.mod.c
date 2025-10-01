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

KSYMTAB_FUNC(dm_bufio_get, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_read, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_read_with_ioprio, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_new, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_prefetch, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_prefetch_with_ioprio, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_release, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_mark_partial_buffer_dirty, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_mark_buffer_dirty, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_write_dirty_buffers_async, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_write_dirty_buffers, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_issue_flush, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_issue_discard, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_forget, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_forget_buffers, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_set_minimum_buffers, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_get_block_size, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_get_device_size, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_get_dm_io_client, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_get_block_number, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_get_block_data, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_get_aux_data, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_get_client, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_client_create, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_client_destroy, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_client_reset, "_gpl", "");
KSYMTAB_FUNC(dm_bufio_set_sector_offset, "_gpl", "");

SYMBOL_CRC(dm_bufio_get, 0x24772bfe, "_gpl");
SYMBOL_CRC(dm_bufio_read, 0xb04f56ab, "_gpl");
SYMBOL_CRC(dm_bufio_read_with_ioprio, 0x26d0d7d8, "_gpl");
SYMBOL_CRC(dm_bufio_new, 0xc0d7df85, "_gpl");
SYMBOL_CRC(dm_bufio_prefetch, 0x6cdb2d56, "_gpl");
SYMBOL_CRC(dm_bufio_prefetch_with_ioprio, 0x49ff8ad6, "_gpl");
SYMBOL_CRC(dm_bufio_release, 0xe6024e59, "_gpl");
SYMBOL_CRC(dm_bufio_mark_partial_buffer_dirty, 0x6a2f40e1, "_gpl");
SYMBOL_CRC(dm_bufio_mark_buffer_dirty, 0x0ad0dc4f, "_gpl");
SYMBOL_CRC(dm_bufio_write_dirty_buffers_async, 0xc9a3422d, "_gpl");
SYMBOL_CRC(dm_bufio_write_dirty_buffers, 0xa82b2066, "_gpl");
SYMBOL_CRC(dm_bufio_issue_flush, 0xd4bddf5c, "_gpl");
SYMBOL_CRC(dm_bufio_issue_discard, 0x6aebce95, "_gpl");
SYMBOL_CRC(dm_bufio_forget, 0xcd2ba798, "_gpl");
SYMBOL_CRC(dm_bufio_forget_buffers, 0xf241a6eb, "_gpl");
SYMBOL_CRC(dm_bufio_set_minimum_buffers, 0x91f00abc, "_gpl");
SYMBOL_CRC(dm_bufio_get_block_size, 0x6d83826d, "_gpl");
SYMBOL_CRC(dm_bufio_get_device_size, 0xd991e3b9, "_gpl");
SYMBOL_CRC(dm_bufio_get_dm_io_client, 0x867e87eb, "_gpl");
SYMBOL_CRC(dm_bufio_get_block_number, 0x2e0774dc, "_gpl");
SYMBOL_CRC(dm_bufio_get_block_data, 0xebcc64a4, "_gpl");
SYMBOL_CRC(dm_bufio_get_aux_data, 0x74dcd98c, "_gpl");
SYMBOL_CRC(dm_bufio_get_client, 0x6d3f57bd, "_gpl");
SYMBOL_CRC(dm_bufio_client_create, 0x77eafaa4, "_gpl");
SYMBOL_CRC(dm_bufio_client_destroy, 0xeca7949e, "_gpl");
SYMBOL_CRC(dm_bufio_client_reset, 0x656100cc, "_gpl");
SYMBOL_CRC(dm_bufio_set_sector_offset, 0xed3283a4, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa8ab3192, "bio_uninit" },
	{ 0x37a0cba, "kfree" },
	{ 0x34df6d52, "dm_io" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xe25b3817, "bio_kmalloc" },
	{ 0x941027cb, "bio_init" },
	{ 0xfd3a2879, "__bio_add_page" },
	{ 0x728d7feb, "submit_bio" },
	{ 0xdcb764ad, "memset" },
	{ 0x60b7c3e5, "blk_start_plug" },
	{ 0x1d421352, "blk_finish_plug" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x122c3a7e, "_printk" },
	{ 0x668b19a1, "down_read" },
	{ 0x53b954a2, "up_read" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xe2964344, "__wake_up" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x58e3306d, "bit_wait_io" },
	{ 0xb3687850, "out_of_line_wait_on_bit_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x4a3c8253, "kmem_cache_free" },
	{ 0x999e8297, "vfree" },
	{ 0x6f61551b, "kmem_cache_alloc_noprof" },
	{ 0x2c4f2e35, "__vmalloc_noprof" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8450a53a, "__kmem_cache_create_args" },
	{ 0x962e74ce, "shrinker_alloc" },
	{ 0x36e33c9f, "shrinker_register" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x656f612b, "kmem_cache_destroy" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0x2c834418, "static_key_slow_inc" },
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0xce807a25, "up_write" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x57bc19d2, "down_write" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x20bdd485, "shrinker_free" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xfbc4f89e, "io_schedule_timeout" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x49a2e97f, "param_ops_ulong" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "551D197EC25C3477A10A8AF");
