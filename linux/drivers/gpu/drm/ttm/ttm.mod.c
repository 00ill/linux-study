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

KSYMTAB_FUNC(ttm_tt_init, "", "");
KSYMTAB_FUNC(ttm_tt_fini, "", "");
KSYMTAB_FUNC(ttm_sg_tt_init, "", "");
KSYMTAB_FUNC(ttm_tt_populate, "", "");
KSYMTAB_FUNC(ttm_kmap_iter_tt_init, "", "");
KSYMTAB_FUNC(ttm_tt_pages_limit, "", "");
KSYMTAB_FUNC(ttm_bo_move_to_lru_tail, "", "");
KSYMTAB_FUNC(ttm_bo_set_bulk_move, "", "");
KSYMTAB_FUNC(ttm_bo_put, "", "");
KSYMTAB_FUNC(ttm_bo_eviction_valuable, "", "");
KSYMTAB_FUNC(ttm_bo_pin, "", "");
KSYMTAB_FUNC(ttm_bo_unpin, "", "");
KSYMTAB_FUNC(ttm_bo_mem_space, "", "");
KSYMTAB_FUNC(ttm_bo_validate, "", "");
KSYMTAB_FUNC(ttm_bo_init_reserved, "", "");
KSYMTAB_FUNC(ttm_bo_init_validate, "", "");
KSYMTAB_FUNC(ttm_bo_unmap_virtual, "", "");
KSYMTAB_FUNC(ttm_bo_wait_ctx, "", "");
KSYMTAB_FUNC(ttm_move_memcpy, "", "");
KSYMTAB_FUNC(ttm_bo_move_memcpy, "", "");
KSYMTAB_FUNC(ttm_io_prot, "", "");
KSYMTAB_FUNC(ttm_bo_kmap, "", "");
KSYMTAB_FUNC(ttm_bo_kunmap, "", "");
KSYMTAB_FUNC(ttm_bo_vmap, "", "");
KSYMTAB_FUNC(ttm_bo_vunmap, "", "");
KSYMTAB_FUNC(ttm_bo_move_accel_cleanup, "", "");
KSYMTAB_FUNC(ttm_bo_move_sync_cleanup, "", "");
KSYMTAB_FUNC(ttm_bo_vm_reserve, "", "");
KSYMTAB_FUNC(ttm_bo_vm_fault_reserved, "", "");
KSYMTAB_FUNC(ttm_bo_vm_dummy_page, "", "");
KSYMTAB_FUNC(ttm_bo_vm_fault, "", "");
KSYMTAB_FUNC(ttm_bo_vm_open, "", "");
KSYMTAB_FUNC(ttm_bo_vm_close, "", "");
KSYMTAB_FUNC(ttm_bo_vm_access, "", "");
KSYMTAB_FUNC(ttm_bo_mmap_obj, "", "");
KSYMTAB_FUNC(ttm_eu_backoff_reservation, "", "");
KSYMTAB_FUNC(ttm_eu_reserve_buffers, "", "");
KSYMTAB_FUNC(ttm_eu_fence_buffer_objects, "", "");
KSYMTAB_FUNC(ttm_range_man_init_nocheck, "", "");
KSYMTAB_FUNC(ttm_range_man_fini_nocheck, "", "");
KSYMTAB_FUNC(ttm_lru_bulk_move_init, "", "");
KSYMTAB_FUNC(ttm_lru_bulk_move_fini, "", "");
KSYMTAB_FUNC(ttm_lru_bulk_move_tail, "", "");
KSYMTAB_FUNC(ttm_resource_init, "", "");
KSYMTAB_FUNC(ttm_resource_fini, "", "");
KSYMTAB_FUNC(ttm_resource_free, "", "");
KSYMTAB_FUNC(ttm_resource_manager_init, "", "");
KSYMTAB_FUNC(ttm_resource_manager_evict_all, "", "");
KSYMTAB_FUNC(ttm_resource_manager_usage, "", "");
KSYMTAB_FUNC(ttm_resource_manager_debug, "", "");
KSYMTAB_FUNC(ttm_kmap_iter_iomap_init, "", "");
KSYMTAB_FUNC(ttm_resource_manager_create_debugfs, "", "");
KSYMTAB_FUNC(ttm_pool_alloc, "", "");
KSYMTAB_FUNC(ttm_pool_free, "", "");
KSYMTAB_FUNC(ttm_pool_init, "", "");
KSYMTAB_FUNC(ttm_pool_fini, "", "");
KSYMTAB_FUNC(ttm_pool_debugfs, "", "");
KSYMTAB_DATA(ttm_glob, "", "");
KSYMTAB_FUNC(ttm_device_swapout, "", "");
KSYMTAB_FUNC(ttm_device_init, "", "");
KSYMTAB_FUNC(ttm_device_fini, "", "");
KSYMTAB_FUNC(ttm_device_clear_dma_mappings, "", "");

SYMBOL_CRC(ttm_tt_init, 0x431f5918, "");
SYMBOL_CRC(ttm_tt_fini, 0x7d05c75a, "");
SYMBOL_CRC(ttm_sg_tt_init, 0x2e91a1e0, "");
SYMBOL_CRC(ttm_tt_populate, 0xa442133a, "");
SYMBOL_CRC(ttm_kmap_iter_tt_init, 0x72972185, "");
SYMBOL_CRC(ttm_tt_pages_limit, 0x69cc2943, "");
SYMBOL_CRC(ttm_bo_move_to_lru_tail, 0xcbe47ecb, "");
SYMBOL_CRC(ttm_bo_set_bulk_move, 0xc42dfe4d, "");
SYMBOL_CRC(ttm_bo_put, 0x2701ef25, "");
SYMBOL_CRC(ttm_bo_eviction_valuable, 0x7b3d0ea7, "");
SYMBOL_CRC(ttm_bo_pin, 0x50c6a28b, "");
SYMBOL_CRC(ttm_bo_unpin, 0xbae192fc, "");
SYMBOL_CRC(ttm_bo_mem_space, 0xd50ba328, "");
SYMBOL_CRC(ttm_bo_validate, 0x868202a4, "");
SYMBOL_CRC(ttm_bo_init_reserved, 0xd3badba1, "");
SYMBOL_CRC(ttm_bo_init_validate, 0x39df2c38, "");
SYMBOL_CRC(ttm_bo_unmap_virtual, 0x9873dafc, "");
SYMBOL_CRC(ttm_bo_wait_ctx, 0x15a0e67a, "");
SYMBOL_CRC(ttm_move_memcpy, 0x1a71d30c, "");
SYMBOL_CRC(ttm_bo_move_memcpy, 0xd2ee4c3a, "");
SYMBOL_CRC(ttm_io_prot, 0xad42555e, "");
SYMBOL_CRC(ttm_bo_kmap, 0x025e25f9, "");
SYMBOL_CRC(ttm_bo_kunmap, 0x2aada2b9, "");
SYMBOL_CRC(ttm_bo_vmap, 0xea54bc64, "");
SYMBOL_CRC(ttm_bo_vunmap, 0x58278659, "");
SYMBOL_CRC(ttm_bo_move_accel_cleanup, 0x60a7035c, "");
SYMBOL_CRC(ttm_bo_move_sync_cleanup, 0xa3abeb8a, "");
SYMBOL_CRC(ttm_bo_vm_reserve, 0xf483c614, "");
SYMBOL_CRC(ttm_bo_vm_fault_reserved, 0xa2c11328, "");
SYMBOL_CRC(ttm_bo_vm_dummy_page, 0xc72a3272, "");
SYMBOL_CRC(ttm_bo_vm_fault, 0xa02a85f4, "");
SYMBOL_CRC(ttm_bo_vm_open, 0x62d894b0, "");
SYMBOL_CRC(ttm_bo_vm_close, 0x7ee7de62, "");
SYMBOL_CRC(ttm_bo_vm_access, 0x2b7df25c, "");
SYMBOL_CRC(ttm_bo_mmap_obj, 0x51ee08e9, "");
SYMBOL_CRC(ttm_eu_backoff_reservation, 0x5837b0de, "");
SYMBOL_CRC(ttm_eu_reserve_buffers, 0xfc3bb3d9, "");
SYMBOL_CRC(ttm_eu_fence_buffer_objects, 0x46b8de71, "");
SYMBOL_CRC(ttm_range_man_init_nocheck, 0xb0c5e676, "");
SYMBOL_CRC(ttm_range_man_fini_nocheck, 0x5e2ba38d, "");
SYMBOL_CRC(ttm_lru_bulk_move_init, 0x6aac7147, "");
SYMBOL_CRC(ttm_lru_bulk_move_fini, 0x9b7c17ea, "");
SYMBOL_CRC(ttm_lru_bulk_move_tail, 0x3f0a7a35, "");
SYMBOL_CRC(ttm_resource_init, 0x1bdd6fcc, "");
SYMBOL_CRC(ttm_resource_fini, 0xc7ccf5b2, "");
SYMBOL_CRC(ttm_resource_free, 0x4002489b, "");
SYMBOL_CRC(ttm_resource_manager_init, 0xd0e11c7d, "");
SYMBOL_CRC(ttm_resource_manager_evict_all, 0x7f5e3abc, "");
SYMBOL_CRC(ttm_resource_manager_usage, 0xfc05f34e, "");
SYMBOL_CRC(ttm_resource_manager_debug, 0xa6f2b0ae, "");
SYMBOL_CRC(ttm_kmap_iter_iomap_init, 0x0c231474, "");
SYMBOL_CRC(ttm_resource_manager_create_debugfs, 0x39e73bce, "");
SYMBOL_CRC(ttm_pool_alloc, 0xd1344a6d, "");
SYMBOL_CRC(ttm_pool_free, 0x760b42e1, "");
SYMBOL_CRC(ttm_pool_init, 0x67c5331f, "");
SYMBOL_CRC(ttm_pool_fini, 0xa2520a46, "");
SYMBOL_CRC(ttm_pool_debugfs, 0xbc5fe1e5, "");
SYMBOL_CRC(ttm_glob, 0xf7e03b03, "");
SYMBOL_CRC(ttm_device_swapout, 0xde83d165, "");
SYMBOL_CRC(ttm_device_init, 0x411ec385, "");
SYMBOL_CRC(ttm_device_fini, 0xfc411354, "");
SYMBOL_CRC(ttm_device_clear_dma_mappings, 0x3d062de5, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x962e74ce, "shrinker_alloc" },
	{ 0xef9472a8, "ww_mutex_lock_interruptible" },
	{ 0xd64810fa, "drm_dev_enter" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x49a2e97f, "param_ops_ulong" },
	{ 0x489785d7, "dma_resv_reserve_fences" },
	{ 0x4b7ebf95, "drm_mm_remove_node" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0xac258851, "vmalloc_to_page" },
	{ 0xd70e6362, "dma_resv_init" },
	{ 0x8da70093, "dma_resv_wait_timeout" },
	{ 0x5fafb06f, "__drm_printfn_dbg" },
	{ 0x57698a50, "drm_mm_takedown" },
	{ 0xfa666974, "queue_work_node" },
	{ 0xbd232569, "dma_unmap_page_attrs" },
	{ 0xb4032484, "drm_mm_insert_node_in_range" },
	{ 0x3b6df30a, "ww_mutex_unlock" },
	{ 0xedc03953, "iounmap" },
	{ 0xd8d9b1c7, "debugfs_create_atomic_t" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd4140122, "unmap_mapping_range" },
	{ 0x8626bd01, "dma_resv_add_fence" },
	{ 0x94961283, "vunmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0xe8a0e334, "drm_vma_offset_add" },
	{ 0x2140e8a1, "__drm_printfn_seq_file" },
	{ 0x4d924f20, "memremap" },
	{ 0xd469bccc, "__tracepoint_mmap_lock_released" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x31671877, "node_states" },
	{ 0x64d11af1, "dma_fence_wait_timeout" },
	{ 0x20bdd485, "shrinker_free" },
	{ 0x384b280d, "drm_mm_print" },
	{ 0x9df57208, "dma_map_page_attrs" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x352833ed, "__alloc_pages_noprof" },
	{ 0x122c3a7e, "_printk" },
	{ 0x3d9ee9f0, "clear_page" },
	{ 0x1b9bea23, "ww_mutex_trylock" },
	{ 0xcf01bd2a, "__drmm_add_action_or_reset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x36e33c9f, "shrinker_register" },
	{ 0x618911fc, "numa_node" },
	{ 0x6c736d6, "__free_pages" },
	{ 0x380af4da, "mark_page_accessed" },
	{ 0x7472071e, "shmem_file_setup" },
	{ 0x9ceefea3, "copy_highpage" },
	{ 0xacceb7d8, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0xaacf03c1, "dma_fence_signal" },
	{ 0x6bd2fff6, "dma_resv_fini" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x576d600d, "dma_alloc_attrs" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x3dfbc684, "seq_putc" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x772f9ff8, "ww_mutex_lock" },
	{ 0x317109ca, "shmem_read_mapping_page_gfp" },
	{ 0x762f145d, "vmap" },
	{ 0x18b48e28, "__memset_io" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xdf276c3c, "vmf_insert_pfn_prot" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0517d7a, "drm_mm_init" },
	{ 0x25b1a326, "__drm_puts_seq_file" },
	{ 0xf6f9d58d, "init_on_free" },
	{ 0x668b19a1, "down_read" },
	{ 0x72e9a881, "dma_resv_copy_fences" },
	{ 0x4b52a423, "set_page_dirty" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0x661256ad, "seq_read" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0xa38c4c94, "drm_memcpy_from_wc" },
	{ 0x7c2d03a6, "dma_fence_enable_sw_signaling" },
	{ 0x681fdc29, "dma_free_attrs" },
	{ 0xbc0d826d, "drm_printf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x285d3206, "dma_resv_iter_next_unlocked" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xb53675e6, "seq_write" },
	{ 0xd9aab56f, "__folio_put" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x46205e18, "__mmap_lock_do_trace_released" },
	{ 0xdeaa1b02, "dma_resv_iter_first_unlocked" },
	{ 0xa26dbdbf, "alloc_pages_noprof" },
	{ 0x10139ad8, "single_release" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x764ea5bf, "dma_resv_test_signaled" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0xcc328a5c, "reservation_ww_class" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x71c90ddc, "single_open" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x53b954a2, "up_read" },
	{ 0x4831da6e, "drm_vma_offset_remove" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "drm");


MODULE_INFO(srcversion, "5E14C7EED4E7CB841D7A4B5");
