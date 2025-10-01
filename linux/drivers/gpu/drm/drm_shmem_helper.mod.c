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

KSYMTAB_FUNC(drm_gem_shmem_create, "_gpl", "");
KSYMTAB_FUNC(drm_gem_shmem_create_with_mnt, "_gpl", "");
KSYMTAB_FUNC(drm_gem_shmem_free, "_gpl", "");
KSYMTAB_FUNC(drm_gem_shmem_put_pages, "", "");
KSYMTAB_FUNC(drm_gem_shmem_pin_locked, "", "");
KSYMTAB_FUNC(drm_gem_shmem_unpin_locked, "", "");
KSYMTAB_FUNC(drm_gem_shmem_pin, "", "");
KSYMTAB_FUNC(drm_gem_shmem_unpin, "", "");
KSYMTAB_FUNC(drm_gem_shmem_vmap, "", "");
KSYMTAB_FUNC(drm_gem_shmem_vunmap, "", "");
KSYMTAB_FUNC(drm_gem_shmem_madvise, "", "");
KSYMTAB_FUNC(drm_gem_shmem_purge, "", "");
KSYMTAB_FUNC(drm_gem_shmem_dumb_create, "_gpl", "");
KSYMTAB_DATA(drm_gem_shmem_vm_ops, "_gpl", "");
KSYMTAB_FUNC(drm_gem_shmem_mmap, "_gpl", "");
KSYMTAB_FUNC(drm_gem_shmem_print_info, "", "");
KSYMTAB_FUNC(drm_gem_shmem_get_sg_table, "_gpl", "");
KSYMTAB_FUNC(drm_gem_shmem_get_pages_sgt, "_gpl", "");
KSYMTAB_FUNC(drm_gem_shmem_prime_import_sg_table, "_gpl", "");
KSYMTAB_FUNC(drm_fbdev_shmem_setup, "", "");

SYMBOL_CRC(drm_gem_shmem_create, 0x6a6e0717, "_gpl");
SYMBOL_CRC(drm_gem_shmem_create_with_mnt, 0x0efa3f6c, "_gpl");
SYMBOL_CRC(drm_gem_shmem_free, 0xe9002bb0, "_gpl");
SYMBOL_CRC(drm_gem_shmem_put_pages, 0x44d28911, "");
SYMBOL_CRC(drm_gem_shmem_pin_locked, 0x7b9dfb09, "");
SYMBOL_CRC(drm_gem_shmem_unpin_locked, 0x5225a33e, "");
SYMBOL_CRC(drm_gem_shmem_pin, 0x51ee5993, "");
SYMBOL_CRC(drm_gem_shmem_unpin, 0xb1a0e4e6, "");
SYMBOL_CRC(drm_gem_shmem_vmap, 0x6ff1f886, "");
SYMBOL_CRC(drm_gem_shmem_vunmap, 0xeb44991b, "");
SYMBOL_CRC(drm_gem_shmem_madvise, 0x12dbc6f8, "");
SYMBOL_CRC(drm_gem_shmem_purge, 0xc183c0fd, "");
SYMBOL_CRC(drm_gem_shmem_dumb_create, 0x9b98332d, "_gpl");
SYMBOL_CRC(drm_gem_shmem_vm_ops, 0x036067ca, "_gpl");
SYMBOL_CRC(drm_gem_shmem_mmap, 0x1730dd97, "_gpl");
SYMBOL_CRC(drm_gem_shmem_print_info, 0x35f4800b, "");
SYMBOL_CRC(drm_gem_shmem_get_sg_table, 0xd6c43532, "_gpl");
SYMBOL_CRC(drm_gem_shmem_get_pages_sgt, 0x59ab75b5, "_gpl");
SYMBOL_CRC(drm_gem_shmem_prime_import_sg_table, 0x82f5f5c3, "_gpl");
SYMBOL_CRC(drm_fbdev_shmem_setup, 0x8ebda65d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe7840f0, "drm_client_register" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x694390f, "drm_fb_helper_init" },
	{ 0xbf3fcbe1, "drm_fb_helper_debug_enter" },
	{ 0xef9472a8, "ww_mutex_lock_interruptible" },
	{ 0xc03152f7, "vmf_insert_pfn" },
	{ 0xee65e5d8, "drm_gem_get_pages" },
	{ 0xa8e6dc80, "dma_buf_vmap" },
	{ 0xce496ae9, "drm_client_buffer_vmap" },
	{ 0x426ce613, "drm_fb_helper_lastclose" },
	{ 0xb96c445b, "drm_fb_helper_setcmap" },
	{ 0x9fa1cb85, "drm_fb_helper_alloc_info" },
	{ 0x35d7267b, "drm_helper_disable_unused_functions" },
	{ 0xf27f7d7, "drm_fb_helper_unprepare" },
	{ 0x2c91e17c, "vm_get_page_prot" },
	{ 0xc8c85086, "sg_free_table" },
	{ 0xe2d83dfb, "drm_fb_helper_fini" },
	{ 0x93f33c2c, "drm_client_framebuffer_delete" },
	{ 0x80cbf03c, "drm_client_framebuffer_create" },
	{ 0x590b336, "invalidate_mapping_pages" },
	{ 0x3b6df30a, "ww_mutex_unlock" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x89ca207e, "drm_fb_helper_deferred_io" },
	{ 0xd2c9bf93, "drm_fb_helper_release_info" },
	{ 0xd4140122, "unmap_mapping_range" },
	{ 0x94961283, "vunmap" },
	{ 0xdfb75245, "dma_buf_mmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x711c02a8, "drm_driver_legacy_fb_format" },
	{ 0xeda51cc7, "drm_fb_helper_fill_info" },
	{ 0xc02bd205, "drm_gem_create_mmap_offset" },
	{ 0xb3058b55, "fb_deferred_io_init" },
	{ 0xc7271929, "fb_deferred_io_cleanup" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0x456ed1d1, "drm_fb_helper_hotplug_event" },
	{ 0x43650a37, "fb_sys_write" },
	{ 0xa2c8ab97, "sys_imageblit" },
	{ 0x381c48be, "drm_fb_helper_damage_range" },
	{ 0x5e9888df, "drm_fb_helper_blank" },
	{ 0xdd1c0e8f, "drm_gem_private_object_init" },
	{ 0x66eb2f8e, "drm_fb_helper_check_var" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x5bd88a95, "drm_fb_helper_damage_area" },
	{ 0x6dcebf17, "sys_fillrect" },
	{ 0x9d9e8944, "module_put" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0x4b70fd73, "drm_client_init" },
	{ 0x4b391e16, "drm_gem_vm_close" },
	{ 0x94784239, "drm_gem_vm_open" },
	{ 0xc779d218, "drm_fb_helper_prepare" },
	{ 0x57bc19d2, "down_write" },
	{ 0x669c413b, "_dev_err" },
	{ 0xce807a25, "up_write" },
	{ 0x313720fa, "drm_gem_object_release" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x772f9ff8, "ww_mutex_lock" },
	{ 0x762f145d, "vmap" },
	{ 0xd9a86d77, "drm_gem_handle_create" },
	{ 0xd730b065, "drm_gem_fb_get_obj" },
	{ 0x1d6d457d, "__drm_dev_dbg" },
	{ 0x85d1430b, "drm_prime_pages_to_sg" },
	{ 0xcad93fec, "fb_deferred_io_mmap" },
	{ 0xa65a02fd, "drm_fb_helper_pan_display" },
	{ 0xbd5ec5f4, "dma_buf_vunmap" },
	{ 0xdbc0a41a, "drm_client_release" },
	{ 0xa548b29e, "sys_copyarea" },
	{ 0x29a8cd4, "shmem_truncate_range" },
	{ 0xbc0d826d, "drm_printf" },
	{ 0x9e2608e, "dma_map_sgtable" },
	{ 0x100c8f43, "drm_gem_free_mmap_offset" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe067803e, "drm_client_buffer_vunmap" },
	{ 0xb832fe45, "fb_sys_read" },
	{ 0x2bf0bf75, "drm_fb_helper_debug_leave" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x71786abc, "drm_gem_object_init_with_mnt" },
	{ 0xe2522eee, "dma_unmap_sg_attrs" },
	{ 0xc89361e7, "drm_fb_helper_initial_config" },
	{ 0x66e267ca, "drm_fb_helper_unregister_info" },
	{ 0x8f4b53a, "drm_gem_put_pages" },
	{ 0xa850e0f7, "drm_gem_private_object_fini" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x25929047, "drm_fb_helper_ioctl" },
	{ 0xf7f1f91d, "drm_fb_helper_set_par" },
	{ 0x19d9731f, "drm_prime_gem_destroy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");


MODULE_INFO(srcversion, "F87B7D9AB7E183443FE5FEE");
