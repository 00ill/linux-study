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

KSYMTAB_FUNC(drm_gem_ttm_print_info, "", "");
KSYMTAB_FUNC(drm_gem_ttm_vmap, "", "");
KSYMTAB_FUNC(drm_gem_ttm_vunmap, "", "");
KSYMTAB_FUNC(drm_gem_ttm_mmap, "", "");
KSYMTAB_FUNC(drm_gem_ttm_dumb_map_offset, "", "");
KSYMTAB_FUNC(drm_fbdev_ttm_driver_fbdev_probe, "", "");
KSYMTAB_FUNC(drm_fbdev_ttm_setup, "", "");

SYMBOL_CRC(drm_gem_ttm_print_info, 0x630eac04, "");
SYMBOL_CRC(drm_gem_ttm_vmap, 0x3e999467, "");
SYMBOL_CRC(drm_gem_ttm_vunmap, 0x03a69abd, "");
SYMBOL_CRC(drm_gem_ttm_mmap, 0x530c3d31, "");
SYMBOL_CRC(drm_gem_ttm_dumb_map_offset, 0xc03f6888, "");
SYMBOL_CRC(drm_fbdev_ttm_driver_fbdev_probe, 0x053120ec, "");
SYMBOL_CRC(drm_fbdev_ttm_setup, 0x2459cb00, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe7840f0, "drm_client_register" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x694390f, "drm_fb_helper_init" },
	{ 0xbf3fcbe1, "drm_fb_helper_debug_enter" },
	{ 0x426ce613, "drm_fb_helper_lastclose" },
	{ 0xb96c445b, "drm_fb_helper_setcmap" },
	{ 0x9fa1cb85, "drm_fb_helper_alloc_info" },
	{ 0x35d7267b, "drm_helper_disable_unused_functions" },
	{ 0xf27f7d7, "drm_fb_helper_unprepare" },
	{ 0xe2d83dfb, "drm_fb_helper_fini" },
	{ 0x93f33c2c, "drm_client_framebuffer_delete" },
	{ 0x80cbf03c, "drm_client_framebuffer_create" },
	{ 0x89ca207e, "drm_fb_helper_deferred_io" },
	{ 0xd2c9bf93, "drm_fb_helper_release_info" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x711c02a8, "drm_driver_legacy_fb_format" },
	{ 0xeda51cc7, "drm_fb_helper_fill_info" },
	{ 0xb3058b55, "fb_deferred_io_init" },
	{ 0xc7271929, "fb_deferred_io_cleanup" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0x456ed1d1, "drm_fb_helper_hotplug_event" },
	{ 0x63ec7918, "drm_gem_object_lookup" },
	{ 0x43650a37, "fb_sys_write" },
	{ 0xa2c8ab97, "sys_imageblit" },
	{ 0x381c48be, "drm_fb_helper_damage_range" },
	{ 0x5e9888df, "drm_fb_helper_blank" },
	{ 0x66eb2f8e, "drm_fb_helper_check_var" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x5bd88a95, "drm_fb_helper_damage_area" },
	{ 0x6dcebf17, "sys_fillrect" },
	{ 0x9d9e8944, "module_put" },
	{ 0x58278659, "ttm_bo_vunmap" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0x4b70fd73, "drm_client_init" },
	{ 0x1a01342e, "drm_print_bits" },
	{ 0xc779d218, "drm_fb_helper_prepare" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf77555cd, "__memcpy_toio" },
	{ 0x1d6d457d, "__drm_dev_dbg" },
	{ 0xcad93fec, "fb_deferred_io_mmap" },
	{ 0xa65a02fd, "drm_fb_helper_pan_display" },
	{ 0xe633a4cd, "drm_format_info_bpp" },
	{ 0xdbc0a41a, "drm_client_release" },
	{ 0xa548b29e, "sys_copyarea" },
	{ 0xbc0d826d, "drm_printf" },
	{ 0x999e8297, "vfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb832fe45, "fb_sys_read" },
	{ 0x2bf0bf75, "drm_fb_helper_debug_leave" },
	{ 0x51ee08e9, "ttm_bo_mmap_obj" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x29f99752, "drm_client_buffer_vunmap_local" },
	{ 0xea54bc64, "ttm_bo_vmap" },
	{ 0x5c5ffa7e, "drm_client_buffer_vmap_local" },
	{ 0xc89361e7, "drm_fb_helper_initial_config" },
	{ 0x66e267ca, "drm_fb_helper_unregister_info" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x25929047, "drm_fb_helper_ioctl" },
	{ 0xf7f1f91d, "drm_fb_helper_set_par" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,ttm");


MODULE_INFO(srcversion, "27A46B00689AB667B550249");
