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

KSYMTAB_FUNC(drm_gem_vram_create, "", "");
KSYMTAB_FUNC(drm_gem_vram_put, "", "");
KSYMTAB_FUNC(drm_gem_vram_offset, "", "");
KSYMTAB_FUNC(drm_gem_vram_pin, "", "");
KSYMTAB_FUNC(drm_gem_vram_unpin, "", "");
KSYMTAB_FUNC(drm_gem_vram_vmap, "", "");
KSYMTAB_FUNC(drm_gem_vram_vunmap, "", "");
KSYMTAB_FUNC(drm_gem_vram_fill_create_dumb, "", "");
KSYMTAB_FUNC(drm_gem_vram_driver_dumb_create, "", "");
KSYMTAB_FUNC(drm_gem_vram_plane_helper_prepare_fb, "", "");
KSYMTAB_FUNC(drm_gem_vram_plane_helper_cleanup_fb, "", "");
KSYMTAB_FUNC(drm_gem_vram_simple_display_pipe_prepare_fb, "", "");
KSYMTAB_FUNC(drm_gem_vram_simple_display_pipe_cleanup_fb, "", "");
KSYMTAB_FUNC(drm_vram_mm_debugfs_init, "", "");
KSYMTAB_FUNC(drmm_vram_helper_init, "", "");
KSYMTAB_FUNC(drm_vram_helper_mode_valid, "", "");

SYMBOL_CRC(drm_gem_vram_create, 0x9f2fda14, "");
SYMBOL_CRC(drm_gem_vram_put, 0x85c2e516, "");
SYMBOL_CRC(drm_gem_vram_offset, 0xc46db647, "");
SYMBOL_CRC(drm_gem_vram_pin, 0x57ce6be3, "");
SYMBOL_CRC(drm_gem_vram_unpin, 0x5f1abd18, "");
SYMBOL_CRC(drm_gem_vram_vmap, 0x3ec5dcca, "");
SYMBOL_CRC(drm_gem_vram_vunmap, 0x63074ccb, "");
SYMBOL_CRC(drm_gem_vram_fill_create_dumb, 0xa668e927, "");
SYMBOL_CRC(drm_gem_vram_driver_dumb_create, 0x22e03d54, "");
SYMBOL_CRC(drm_gem_vram_plane_helper_prepare_fb, 0x96c31956, "");
SYMBOL_CRC(drm_gem_vram_plane_helper_cleanup_fb, 0xd59da05f, "");
SYMBOL_CRC(drm_gem_vram_simple_display_pipe_prepare_fb, 0x5629d91b, "");
SYMBOL_CRC(drm_gem_vram_simple_display_pipe_cleanup_fb, 0x733315cd, "");
SYMBOL_CRC(drm_vram_mm_debugfs_init, 0x0e10ed8c, "");
SYMBOL_CRC(drmm_vram_helper_init, 0xa6265b64, "");
SYMBOL_CRC(drm_vram_helper_mode_valid, 0xc46d694d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb0c5e676, "ttm_range_man_init_nocheck" },
	{ 0xef9472a8, "ww_mutex_lock_interruptible" },
	{ 0xa6f2b0ae, "ttm_resource_manager_debug" },
	{ 0x3b6df30a, "ww_mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x5e2ba38d, "ttm_range_man_fini_nocheck" },
	{ 0x19e685ab, "drm_gem_object_init" },
	{ 0x2140e8a1, "__drm_printfn_seq_file" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x50c6a28b, "ttm_bo_pin" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0x530c3d31, "drm_gem_ttm_mmap" },
	{ 0xcf01bd2a, "__drmm_add_action_or_reset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x58278659, "ttm_bo_vunmap" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0x313720fa, "drm_gem_object_release" },
	{ 0x431f5918, "ttm_tt_init" },
	{ 0xd9a86d77, "drm_gem_handle_create" },
	{ 0xd730b065, "drm_gem_fb_get_obj" },
	{ 0xbae192fc, "ttm_bo_unpin" },
	{ 0x25b1a326, "__drm_puts_seq_file" },
	{ 0xe9ac2838, "drm_debugfs_add_files" },
	{ 0x39df2c38, "ttm_bo_init_validate" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x411ec385, "ttm_device_init" },
	{ 0x868202a4, "ttm_bo_validate" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xcbe47ecb, "ttm_bo_move_to_lru_tail" },
	{ 0xea54bc64, "ttm_bo_vmap" },
	{ 0x2701ef25, "ttm_bo_put" },
	{ 0x4002489b, "ttm_resource_free" },
	{ 0xd2ee4c3a, "ttm_bo_move_memcpy" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7d05c75a, "ttm_tt_fini" },
	{ 0xfc411354, "ttm_device_fini" },
	{ 0xbf55fcce, "drm_gem_plane_helper_prepare_fb" },
	{ 0x7b3d0ea7, "ttm_bo_eviction_valuable" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x630eac04, "drm_gem_ttm_print_info" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ttm,drm,drm_ttm_helper,drm_kms_helper");


MODULE_INFO(srcversion, "45A49E51DAFAA14BA8045FA");
