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

KSYMTAB_FUNC(drm_gem_dma_create, "_gpl", "");
KSYMTAB_FUNC(drm_gem_dma_free, "_gpl", "");
KSYMTAB_FUNC(drm_gem_dma_dumb_create_internal, "_gpl", "");
KSYMTAB_FUNC(drm_gem_dma_dumb_create, "_gpl", "");
KSYMTAB_DATA(drm_gem_dma_vm_ops, "_gpl", "");
KSYMTAB_FUNC(drm_gem_dma_print_info, "", "");
KSYMTAB_FUNC(drm_gem_dma_get_sg_table, "_gpl", "");
KSYMTAB_FUNC(drm_gem_dma_prime_import_sg_table, "_gpl", "");
KSYMTAB_FUNC(drm_gem_dma_vmap, "_gpl", "");
KSYMTAB_FUNC(drm_gem_dma_mmap, "_gpl", "");
KSYMTAB_FUNC(drm_gem_dma_prime_import_sg_table_vmap, "", "");
KSYMTAB_FUNC(drm_fbdev_dma_driver_fbdev_probe, "", "");
KSYMTAB_FUNC(drm_fbdev_dma_setup, "", "");
KSYMTAB_FUNC(drm_fb_dma_get_gem_obj, "_gpl", "");
KSYMTAB_FUNC(drm_fb_dma_get_gem_addr, "_gpl", "");
KSYMTAB_FUNC(drm_fb_dma_sync_non_coherent, "_gpl", "");
KSYMTAB_FUNC(drm_fb_dma_get_scanout_buffer, "", "");

SYMBOL_CRC(drm_gem_dma_create, 0x58346a3d, "_gpl");
SYMBOL_CRC(drm_gem_dma_free, 0xdd54e0a9, "_gpl");
SYMBOL_CRC(drm_gem_dma_dumb_create_internal, 0xeec2d624, "_gpl");
SYMBOL_CRC(drm_gem_dma_dumb_create, 0x1e1a7675, "_gpl");
SYMBOL_CRC(drm_gem_dma_vm_ops, 0x01e6c04a, "_gpl");
SYMBOL_CRC(drm_gem_dma_print_info, 0xb21e943f, "");
SYMBOL_CRC(drm_gem_dma_get_sg_table, 0x318493e5, "_gpl");
SYMBOL_CRC(drm_gem_dma_prime_import_sg_table, 0x813ec68c, "_gpl");
SYMBOL_CRC(drm_gem_dma_vmap, 0x4a6f73ce, "_gpl");
SYMBOL_CRC(drm_gem_dma_mmap, 0xca7321d1, "_gpl");
SYMBOL_CRC(drm_gem_dma_prime_import_sg_table_vmap, 0x6b113d57, "");
SYMBOL_CRC(drm_fbdev_dma_driver_fbdev_probe, 0xbeab5b61, "");
SYMBOL_CRC(drm_fbdev_dma_setup, 0x9ffb2529, "");
SYMBOL_CRC(drm_fb_dma_get_gem_obj, 0x28f4b425, "_gpl");
SYMBOL_CRC(drm_fb_dma_get_gem_addr, 0xca06a8d6, "_gpl");
SYMBOL_CRC(drm_fb_dma_sync_non_coherent, 0x3528e615, "_gpl");
SYMBOL_CRC(drm_fb_dma_get_scanout_buffer, 0x91d06c69, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe7840f0, "drm_client_register" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x694390f, "drm_fb_helper_init" },
	{ 0xbf3fcbe1, "drm_fb_helper_debug_enter" },
	{ 0x504d5ff1, "dma_buf_vunmap_unlocked" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0xce496ae9, "drm_client_buffer_vmap" },
	{ 0x426ce613, "drm_fb_helper_lastclose" },
	{ 0xb96c445b, "drm_fb_helper_setcmap" },
	{ 0x9fa1cb85, "drm_fb_helper_alloc_info" },
	{ 0x35d7267b, "drm_helper_disable_unused_functions" },
	{ 0xf27f7d7, "drm_fb_helper_unprepare" },
	{ 0x2c91e17c, "vm_get_page_prot" },
	{ 0x98a99a38, "drm_gem_prime_mmap" },
	{ 0x6b5c2b06, "drm_atomic_helper_damage_iter_next" },
	{ 0xe2d83dfb, "drm_fb_helper_fini" },
	{ 0x80e40859, "dma_mmap_pages" },
	{ 0x93f33c2c, "drm_client_framebuffer_delete" },
	{ 0x1e610f1b, "dma_free_pages" },
	{ 0x80cbf03c, "drm_client_framebuffer_create" },
	{ 0x89ca207e, "drm_fb_helper_deferred_io" },
	{ 0xd2c9bf93, "drm_fb_helper_release_info" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x711c02a8, "drm_driver_legacy_fb_format" },
	{ 0xeda51cc7, "drm_fb_helper_fill_info" },
	{ 0xc02bd205, "drm_gem_create_mmap_offset" },
	{ 0xb3058b55, "fb_deferred_io_init" },
	{ 0xc7271929, "fb_deferred_io_cleanup" },
	{ 0x19e685ab, "drm_gem_object_init" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0x456ed1d1, "drm_fb_helper_hotplug_event" },
	{ 0x43650a37, "fb_sys_write" },
	{ 0xa2c8ab97, "sys_imageblit" },
	{ 0x9fee9565, "drm_atomic_helper_damage_iter_init" },
	{ 0x381c48be, "drm_fb_helper_damage_range" },
	{ 0x5e9888df, "drm_fb_helper_blank" },
	{ 0x23935a77, "dma_alloc_pages" },
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
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x74fc6fbd, "drm_format_info_block_width" },
	{ 0x576d600d, "dma_alloc_attrs" },
	{ 0xdad9c8b1, "drm_prime_get_contiguous_size" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xd9a86d77, "drm_gem_handle_create" },
	{ 0xd730b065, "drm_gem_fb_get_obj" },
	{ 0xf77555cd, "__memcpy_toio" },
	{ 0x1d6d457d, "__drm_dev_dbg" },
	{ 0xcad93fec, "fb_deferred_io_mmap" },
	{ 0xa65a02fd, "drm_fb_helper_pan_display" },
	{ 0xe633a4cd, "drm_format_info_bpp" },
	{ 0xdbc0a41a, "drm_client_release" },
	{ 0xa548b29e, "sys_copyarea" },
	{ 0x681fdc29, "dma_free_attrs" },
	{ 0xbc0d826d, "drm_printf" },
	{ 0x999e8297, "vfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe792d1b4, "__dma_sync_single_for_device" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe067803e, "drm_client_buffer_vunmap" },
	{ 0xb832fe45, "fb_sys_read" },
	{ 0x2bf0bf75, "drm_fb_helper_debug_leave" },
	{ 0xde7775c7, "dma_buf_vmap_unlocked" },
	{ 0x389e0320, "dma_mmap_attrs" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x62c57ced, "dma_get_sgtable_attrs" },
	{ 0x982d09b3, "drm_format_info_block_height" },
	{ 0xc89361e7, "drm_fb_helper_initial_config" },
	{ 0x66e267ca, "drm_fb_helper_unregister_info" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x25929047, "drm_fb_helper_ioctl" },
	{ 0xf7f1f91d, "drm_fb_helper_set_par" },
	{ 0x19d9731f, "drm_prime_gem_destroy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");


MODULE_INFO(srcversion, "708C9B015105396078C41E4");
