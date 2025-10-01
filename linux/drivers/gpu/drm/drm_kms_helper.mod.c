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

KSYMTAB_FUNC(drm_atomic_helper_check_modeset, "", "");
KSYMTAB_FUNC(drm_atomic_helper_check_wb_connector_state, "", "");
KSYMTAB_FUNC(drm_atomic_helper_check_plane_state, "", "");
KSYMTAB_FUNC(drm_atomic_helper_check_crtc_primary_plane, "", "");
KSYMTAB_FUNC(drm_atomic_helper_check_planes, "", "");
KSYMTAB_FUNC(drm_atomic_helper_check, "", "");
KSYMTAB_FUNC(drm_atomic_helper_update_legacy_modeset_state, "", "");
KSYMTAB_FUNC(drm_atomic_helper_calc_timestamping_constants, "", "");
KSYMTAB_FUNC(drm_atomic_helper_commit_modeset_disables, "", "");
KSYMTAB_FUNC(drm_atomic_helper_commit_modeset_enables, "", "");
KSYMTAB_FUNC(drm_atomic_helper_wait_for_fences, "", "");
KSYMTAB_FUNC(drm_atomic_helper_wait_for_vblanks, "", "");
KSYMTAB_FUNC(drm_atomic_helper_wait_for_flip_done, "", "");
KSYMTAB_FUNC(drm_atomic_helper_commit_tail, "", "");
KSYMTAB_FUNC(drm_atomic_helper_commit_tail_rpm, "", "");
KSYMTAB_FUNC(drm_atomic_helper_async_check, "", "");
KSYMTAB_FUNC(drm_atomic_helper_async_commit, "", "");
KSYMTAB_FUNC(drm_atomic_helper_commit, "", "");
KSYMTAB_FUNC(drm_atomic_helper_setup_commit, "", "");
KSYMTAB_FUNC(drm_atomic_helper_wait_for_dependencies, "", "");
KSYMTAB_FUNC(drm_atomic_helper_fake_vblank, "", "");
KSYMTAB_FUNC(drm_atomic_helper_commit_hw_done, "", "");
KSYMTAB_FUNC(drm_atomic_helper_commit_cleanup_done, "", "");
KSYMTAB_FUNC(drm_atomic_helper_prepare_planes, "", "");
KSYMTAB_FUNC(drm_atomic_helper_unprepare_planes, "", "");
KSYMTAB_FUNC(drm_atomic_helper_commit_planes, "", "");
KSYMTAB_FUNC(drm_atomic_helper_commit_planes_on_crtc, "", "");
KSYMTAB_FUNC(drm_atomic_helper_disable_planes_on_crtc, "", "");
KSYMTAB_FUNC(drm_atomic_helper_cleanup_planes, "", "");
KSYMTAB_FUNC(drm_atomic_helper_swap_state, "", "");
KSYMTAB_FUNC(drm_atomic_helper_update_plane, "", "");
KSYMTAB_FUNC(drm_atomic_helper_disable_plane, "", "");
KSYMTAB_FUNC(drm_atomic_helper_set_config, "", "");
KSYMTAB_FUNC(drm_atomic_helper_disable_all, "", "");
KSYMTAB_FUNC(drm_atomic_helper_shutdown, "", "");
KSYMTAB_FUNC(drm_atomic_helper_duplicate_state, "", "");
KSYMTAB_FUNC(drm_atomic_helper_suspend, "", "");
KSYMTAB_FUNC(drm_atomic_helper_commit_duplicated_state, "", "");
KSYMTAB_FUNC(drm_atomic_helper_resume, "", "");
KSYMTAB_FUNC(drm_atomic_helper_page_flip, "", "");
KSYMTAB_FUNC(drm_atomic_helper_page_flip_target, "", "");
KSYMTAB_FUNC(drm_atomic_helper_bridge_propagate_bus_fmt, "", "");
KSYMTAB_FUNC(__drm_atomic_helper_crtc_state_reset, "", "");
KSYMTAB_FUNC(__drm_atomic_helper_crtc_reset, "", "");
KSYMTAB_FUNC(drm_atomic_helper_crtc_reset, "", "");
KSYMTAB_FUNC(__drm_atomic_helper_crtc_duplicate_state, "", "");
KSYMTAB_FUNC(drm_atomic_helper_crtc_duplicate_state, "", "");
KSYMTAB_FUNC(__drm_atomic_helper_crtc_destroy_state, "", "");
KSYMTAB_FUNC(drm_atomic_helper_crtc_destroy_state, "", "");
KSYMTAB_FUNC(__drm_atomic_helper_plane_state_reset, "", "");
KSYMTAB_FUNC(__drm_atomic_helper_plane_reset, "", "");
KSYMTAB_FUNC(drm_atomic_helper_plane_reset, "", "");
KSYMTAB_FUNC(__drm_atomic_helper_plane_duplicate_state, "", "");
KSYMTAB_FUNC(drm_atomic_helper_plane_duplicate_state, "", "");
KSYMTAB_FUNC(__drm_atomic_helper_plane_destroy_state, "", "");
KSYMTAB_FUNC(drm_atomic_helper_plane_destroy_state, "", "");
KSYMTAB_FUNC(__drm_atomic_helper_connector_state_reset, "", "");
KSYMTAB_FUNC(__drm_atomic_helper_connector_reset, "", "");
KSYMTAB_FUNC(drm_atomic_helper_connector_reset, "", "");
KSYMTAB_FUNC(drm_atomic_helper_connector_tv_margins_reset, "", "");
KSYMTAB_FUNC(drm_atomic_helper_connector_tv_reset, "", "");
KSYMTAB_FUNC(drm_atomic_helper_connector_tv_check, "", "");
KSYMTAB_FUNC(__drm_atomic_helper_connector_duplicate_state, "", "");
KSYMTAB_FUNC(drm_atomic_helper_connector_duplicate_state, "", "");
KSYMTAB_FUNC(__drm_atomic_helper_connector_destroy_state, "", "");
KSYMTAB_FUNC(drm_atomic_helper_connector_destroy_state, "", "");
KSYMTAB_FUNC(__drm_atomic_helper_private_obj_duplicate_state, "", "");
KSYMTAB_FUNC(__drm_atomic_helper_bridge_duplicate_state, "", "");
KSYMTAB_FUNC(drm_atomic_helper_bridge_duplicate_state, "", "");
KSYMTAB_FUNC(drm_atomic_helper_bridge_destroy_state, "", "");
KSYMTAB_FUNC(__drm_atomic_helper_bridge_reset, "", "");
KSYMTAB_FUNC(drm_atomic_helper_bridge_reset, "", "");
KSYMTAB_FUNC(drm_helper_encoder_in_use, "", "");
KSYMTAB_FUNC(drm_helper_crtc_in_use, "", "");
KSYMTAB_FUNC(drm_helper_disable_unused_functions, "", "");
KSYMTAB_FUNC(drm_crtc_helper_set_mode, "", "");
KSYMTAB_FUNC(drm_crtc_helper_atomic_check, "", "");
KSYMTAB_FUNC(drm_crtc_helper_set_config, "", "");
KSYMTAB_FUNC(drm_helper_connector_dpms, "", "");
KSYMTAB_FUNC(drm_helper_resume_force_mode, "", "");
KSYMTAB_FUNC(drm_helper_force_disable_all, "", "");
KSYMTAB_FUNC(drm_atomic_helper_check_plane_damage, "", "");
KSYMTAB_FUNC(drm_atomic_helper_dirtyfb, "", "");
KSYMTAB_FUNC(drm_atomic_helper_damage_iter_init, "", "");
KSYMTAB_FUNC(drm_atomic_helper_damage_iter_next, "", "");
KSYMTAB_FUNC(drm_atomic_helper_damage_merged, "", "");
KSYMTAB_FUNC(drm_i2c_encoder_init, "", "");
KSYMTAB_FUNC(drm_i2c_encoder_destroy, "", "");
KSYMTAB_FUNC(drm_i2c_encoder_dpms, "", "");
KSYMTAB_FUNC(drm_i2c_encoder_mode_fixup, "", "");
KSYMTAB_FUNC(drm_i2c_encoder_prepare, "", "");
KSYMTAB_FUNC(drm_i2c_encoder_commit, "", "");
KSYMTAB_FUNC(drm_i2c_encoder_mode_set, "", "");
KSYMTAB_FUNC(drm_i2c_encoder_detect, "", "");
KSYMTAB_FUNC(drm_i2c_encoder_save, "", "");
KSYMTAB_FUNC(drm_i2c_encoder_restore, "", "");
KSYMTAB_FUNC(drm_flip_work_queue, "", "");
KSYMTAB_FUNC(drm_flip_work_commit, "", "");
KSYMTAB_FUNC(drm_flip_work_init, "", "");
KSYMTAB_FUNC(drm_flip_work_cleanup, "", "");
KSYMTAB_FUNC(drm_format_conv_state_init, "", "");
KSYMTAB_FUNC(drm_format_conv_state_copy, "", "");
KSYMTAB_FUNC(drm_format_conv_state_reserve, "", "");
KSYMTAB_FUNC(drm_format_conv_state_release, "", "");
KSYMTAB_FUNC(drm_fb_clip_offset, "", "");
KSYMTAB_FUNC(drm_fb_memcpy, "", "");
KSYMTAB_FUNC(drm_fb_swab, "", "");
KSYMTAB_FUNC(drm_fb_xrgb8888_to_rgb332, "", "");
KSYMTAB_FUNC(drm_fb_xrgb8888_to_rgb565, "", "");
KSYMTAB_FUNC(drm_fb_xrgb8888_to_xrgb1555, "", "");
KSYMTAB_FUNC(drm_fb_xrgb8888_to_argb1555, "", "");
KSYMTAB_FUNC(drm_fb_xrgb8888_to_rgba5551, "", "");
KSYMTAB_FUNC(drm_fb_xrgb8888_to_rgb888, "", "");
KSYMTAB_FUNC(drm_fb_xrgb8888_to_bgr888, "", "");
KSYMTAB_FUNC(drm_fb_xrgb8888_to_argb8888, "", "");
KSYMTAB_FUNC(drm_fb_xrgb8888_to_abgr8888, "", "");
KSYMTAB_FUNC(drm_fb_xrgb8888_to_xbgr8888, "", "");
KSYMTAB_FUNC(drm_fb_xrgb8888_to_bgrx8888, "", "");
KSYMTAB_FUNC(drm_fb_xrgb8888_to_xrgb2101010, "", "");
KSYMTAB_FUNC(drm_fb_xrgb8888_to_argb2101010, "", "");
KSYMTAB_FUNC(drm_fb_xrgb8888_to_gray8, "", "");
KSYMTAB_FUNC(drm_fb_blit, "", "");
KSYMTAB_FUNC(drm_fb_xrgb8888_to_mono, "", "");
KSYMTAB_FUNC(drm_fb_build_fourcc_list, "", "");
KSYMTAB_FUNC(drm_gem_plane_helper_prepare_fb, "_gpl", "");
KSYMTAB_FUNC(__drm_gem_duplicate_shadow_plane_state, "", "");
KSYMTAB_FUNC(drm_gem_duplicate_shadow_plane_state, "", "");
KSYMTAB_FUNC(__drm_gem_destroy_shadow_plane_state, "", "");
KSYMTAB_FUNC(drm_gem_destroy_shadow_plane_state, "", "");
KSYMTAB_FUNC(__drm_gem_reset_shadow_plane, "", "");
KSYMTAB_FUNC(drm_gem_reset_shadow_plane, "", "");
KSYMTAB_FUNC(drm_gem_begin_shadow_fb_access, "", "");
KSYMTAB_FUNC(drm_gem_end_shadow_fb_access, "", "");
KSYMTAB_FUNC(drm_gem_simple_kms_begin_shadow_fb_access, "", "");
KSYMTAB_FUNC(drm_gem_simple_kms_end_shadow_fb_access, "", "");
KSYMTAB_FUNC(drm_gem_simple_kms_reset_shadow_plane, "", "");
KSYMTAB_FUNC(drm_gem_simple_kms_duplicate_shadow_plane_state, "", "");
KSYMTAB_FUNC(drm_gem_simple_kms_destroy_shadow_plane_state, "", "");
KSYMTAB_FUNC(drm_gem_fb_get_obj, "_gpl", "");
KSYMTAB_FUNC(drm_gem_fb_destroy, "", "");
KSYMTAB_FUNC(drm_gem_fb_create_handle, "", "");
KSYMTAB_FUNC(drm_gem_fb_init_with_funcs, "_gpl", "");
KSYMTAB_FUNC(drm_gem_fb_create_with_funcs, "_gpl", "");
KSYMTAB_FUNC(drm_gem_fb_create, "_gpl", "");
KSYMTAB_FUNC(drm_gem_fb_create_with_dirty, "_gpl", "");
KSYMTAB_FUNC(drm_gem_fb_vmap, "", "");
KSYMTAB_FUNC(drm_gem_fb_vunmap, "", "");
KSYMTAB_FUNC(drm_gem_fb_begin_cpu_access, "", "");
KSYMTAB_FUNC(drm_gem_fb_end_cpu_access, "", "");
KSYMTAB_FUNC(drm_gem_fb_afbc_init, "_gpl", "");
KSYMTAB_FUNC(drm_helper_move_panel_connectors_to_head, "", "");
KSYMTAB_FUNC(drm_helper_mode_fill_fb_struct, "", "");
KSYMTAB_FUNC(drm_crtc_init, "", "");
KSYMTAB_FUNC(drm_mode_config_helper_suspend, "", "");
KSYMTAB_FUNC(drm_mode_config_helper_resume, "", "");
KSYMTAB_FUNC(drm_plane_helper_update_primary, "", "");
KSYMTAB_FUNC(drm_plane_helper_disable_primary, "", "");
KSYMTAB_FUNC(drm_plane_helper_destroy, "", "");
KSYMTAB_FUNC(drm_kms_helper_poll_enable, "", "");
KSYMTAB_FUNC(drm_kms_helper_poll_reschedule, "", "");
KSYMTAB_FUNC(drm_helper_probe_detect, "", "");
KSYMTAB_FUNC(drm_helper_probe_single_connector_modes, "", "");
KSYMTAB_FUNC(drm_kms_helper_hotplug_event, "", "");
KSYMTAB_FUNC(drm_kms_helper_connector_hotplug_event, "", "");
KSYMTAB_FUNC(drm_kms_helper_is_poll_worker, "", "");
KSYMTAB_FUNC(drm_kms_helper_poll_disable, "", "");
KSYMTAB_FUNC(drm_kms_helper_poll_init, "", "");
KSYMTAB_FUNC(drm_kms_helper_poll_fini, "", "");
KSYMTAB_FUNC(drmm_kms_helper_poll_init, "", "");
KSYMTAB_FUNC(drm_connector_helper_hpd_irq_event, "", "");
KSYMTAB_FUNC(drm_helper_hpd_irq_event, "", "");
KSYMTAB_FUNC(drm_crtc_helper_mode_valid_fixed, "", "");
KSYMTAB_FUNC(drm_connector_helper_get_modes_fixed, "", "");
KSYMTAB_FUNC(drm_connector_helper_get_modes, "", "");
KSYMTAB_FUNC(drm_connector_helper_tv_get_modes, "", "");
KSYMTAB_FUNC(drm_connector_helper_detect_from_ddc, "", "");
KSYMTAB_FUNC(drm_rect_intersect, "", "");
KSYMTAB_FUNC(drm_rect_clip_scaled, "", "");
KSYMTAB_FUNC(drm_rect_calc_hscale, "", "");
KSYMTAB_FUNC(drm_rect_calc_vscale, "", "");
KSYMTAB_FUNC(drm_rect_debug_print, "", "");
KSYMTAB_FUNC(drm_rect_rotate, "", "");
KSYMTAB_FUNC(drm_rect_rotate_inv, "", "");
KSYMTAB_FUNC(drm_self_refresh_helper_update_avg_times, "", "");
KSYMTAB_FUNC(drm_self_refresh_helper_alter_state, "", "");
KSYMTAB_FUNC(drm_self_refresh_helper_init, "", "");
KSYMTAB_FUNC(drm_self_refresh_helper_cleanup, "", "");
KSYMTAB_FUNC(drm_simple_encoder_init, "", "");
KSYMTAB_FUNC(__drmm_simple_encoder_alloc, "", "");
KSYMTAB_FUNC(drm_simple_display_pipe_attach_bridge, "", "");
KSYMTAB_FUNC(drm_simple_display_pipe_init, "", "");
KSYMTAB_FUNC(drm_client_setup, "", "");
KSYMTAB_FUNC(drm_client_setup_with_fourcc, "", "");
KSYMTAB_FUNC(drm_client_setup_with_color_mode, "", "");
KSYMTAB_FUNC(drm_bridge_is_panel, "", "");
KSYMTAB_FUNC(drm_panel_bridge_add, "", "");
KSYMTAB_FUNC(drm_panel_bridge_add_typed, "", "");
KSYMTAB_FUNC(drm_panel_bridge_remove, "", "");
KSYMTAB_FUNC(drm_panel_bridge_set_orientation, "", "");
KSYMTAB_FUNC(devm_drm_panel_bridge_add, "", "");
KSYMTAB_FUNC(devm_drm_panel_bridge_add_typed, "", "");
KSYMTAB_FUNC(drmm_panel_bridge_add, "", "");
KSYMTAB_FUNC(drm_panel_bridge_connector, "", "");
KSYMTAB_FUNC(devm_drm_of_get_bridge, "", "");
KSYMTAB_FUNC(drmm_of_get_bridge, "", "");
KSYMTAB_FUNC(drm_fbdev_client_setup, "", "");
KSYMTAB_FUNC(drm_fb_helper_debug_enter, "", "");
KSYMTAB_FUNC(drm_fb_helper_debug_leave, "", "");
KSYMTAB_FUNC(drm_fb_helper_restore_fbdev_mode_unlocked, "", "");
KSYMTAB_FUNC(drm_fb_helper_blank, "", "");
KSYMTAB_FUNC(drm_fb_helper_prepare, "", "");
KSYMTAB_FUNC(drm_fb_helper_unprepare, "", "");
KSYMTAB_FUNC(drm_fb_helper_init, "", "");
KSYMTAB_FUNC(drm_fb_helper_alloc_info, "", "");
KSYMTAB_FUNC(drm_fb_helper_release_info, "", "");
KSYMTAB_FUNC(drm_fb_helper_unregister_info, "", "");
KSYMTAB_FUNC(drm_fb_helper_fini, "", "");
KSYMTAB_FUNC(drm_fb_helper_damage_range, "", "");
KSYMTAB_FUNC(drm_fb_helper_damage_area, "", "");
KSYMTAB_FUNC(drm_fb_helper_deferred_io, "", "");
KSYMTAB_FUNC(drm_fb_helper_set_suspend, "", "");
KSYMTAB_FUNC(drm_fb_helper_set_suspend_unlocked, "", "");
KSYMTAB_FUNC(drm_fb_helper_setcmap, "", "");
KSYMTAB_FUNC(drm_fb_helper_ioctl, "", "");
KSYMTAB_FUNC(drm_fb_helper_check_var, "", "");
KSYMTAB_FUNC(drm_fb_helper_set_par, "", "");
KSYMTAB_FUNC(drm_fb_helper_pan_display, "", "");
KSYMTAB_FUNC(drm_fb_helper_fill_info, "", "");
KSYMTAB_FUNC(drm_fb_helper_initial_config, "", "");
KSYMTAB_FUNC(drm_fb_helper_hotplug_event, "", "");
KSYMTAB_FUNC(drm_fb_helper_lastclose, "", "");

SYMBOL_CRC(drm_atomic_helper_check_modeset, 0x33257c40, "");
SYMBOL_CRC(drm_atomic_helper_check_wb_connector_state, 0x118e00a1, "");
SYMBOL_CRC(drm_atomic_helper_check_plane_state, 0xa860e858, "");
SYMBOL_CRC(drm_atomic_helper_check_crtc_primary_plane, 0x75d7c930, "");
SYMBOL_CRC(drm_atomic_helper_check_planes, 0xb9cbc4df, "");
SYMBOL_CRC(drm_atomic_helper_check, 0x7b17c290, "");
SYMBOL_CRC(drm_atomic_helper_update_legacy_modeset_state, 0x6ff4e1c5, "");
SYMBOL_CRC(drm_atomic_helper_calc_timestamping_constants, 0x86c9a91a, "");
SYMBOL_CRC(drm_atomic_helper_commit_modeset_disables, 0x24704797, "");
SYMBOL_CRC(drm_atomic_helper_commit_modeset_enables, 0x14d578d4, "");
SYMBOL_CRC(drm_atomic_helper_wait_for_fences, 0xa68749db, "");
SYMBOL_CRC(drm_atomic_helper_wait_for_vblanks, 0x9e95398b, "");
SYMBOL_CRC(drm_atomic_helper_wait_for_flip_done, 0xa18395ef, "");
SYMBOL_CRC(drm_atomic_helper_commit_tail, 0x645ad7d0, "");
SYMBOL_CRC(drm_atomic_helper_commit_tail_rpm, 0xd7460a97, "");
SYMBOL_CRC(drm_atomic_helper_async_check, 0x812240b2, "");
SYMBOL_CRC(drm_atomic_helper_async_commit, 0x2f1af975, "");
SYMBOL_CRC(drm_atomic_helper_commit, 0x8ea37240, "");
SYMBOL_CRC(drm_atomic_helper_setup_commit, 0x15b2b617, "");
SYMBOL_CRC(drm_atomic_helper_wait_for_dependencies, 0xbcfd9af6, "");
SYMBOL_CRC(drm_atomic_helper_fake_vblank, 0x429dee80, "");
SYMBOL_CRC(drm_atomic_helper_commit_hw_done, 0xb9d965ab, "");
SYMBOL_CRC(drm_atomic_helper_commit_cleanup_done, 0x09b9d9e6, "");
SYMBOL_CRC(drm_atomic_helper_prepare_planes, 0x5bb802ed, "");
SYMBOL_CRC(drm_atomic_helper_unprepare_planes, 0xbc2fb1bd, "");
SYMBOL_CRC(drm_atomic_helper_commit_planes, 0x941a350a, "");
SYMBOL_CRC(drm_atomic_helper_commit_planes_on_crtc, 0x656c8f09, "");
SYMBOL_CRC(drm_atomic_helper_disable_planes_on_crtc, 0x8f673681, "");
SYMBOL_CRC(drm_atomic_helper_cleanup_planes, 0x243e7003, "");
SYMBOL_CRC(drm_atomic_helper_swap_state, 0x3d4bf3ea, "");
SYMBOL_CRC(drm_atomic_helper_update_plane, 0x759b0caa, "");
SYMBOL_CRC(drm_atomic_helper_disable_plane, 0xab0090ef, "");
SYMBOL_CRC(drm_atomic_helper_set_config, 0xd7951635, "");
SYMBOL_CRC(drm_atomic_helper_disable_all, 0xf8238d31, "");
SYMBOL_CRC(drm_atomic_helper_shutdown, 0x0b7c5e0a, "");
SYMBOL_CRC(drm_atomic_helper_duplicate_state, 0xb3681d7e, "");
SYMBOL_CRC(drm_atomic_helper_suspend, 0xe749a0ed, "");
SYMBOL_CRC(drm_atomic_helper_commit_duplicated_state, 0xb2a66aad, "");
SYMBOL_CRC(drm_atomic_helper_resume, 0x896790f9, "");
SYMBOL_CRC(drm_atomic_helper_page_flip, 0xe2d7d12e, "");
SYMBOL_CRC(drm_atomic_helper_page_flip_target, 0x46b29c66, "");
SYMBOL_CRC(drm_atomic_helper_bridge_propagate_bus_fmt, 0x2edf1ad0, "");
SYMBOL_CRC(__drm_atomic_helper_crtc_state_reset, 0x4ff50f4b, "");
SYMBOL_CRC(__drm_atomic_helper_crtc_reset, 0x25943e65, "");
SYMBOL_CRC(drm_atomic_helper_crtc_reset, 0x1057a590, "");
SYMBOL_CRC(__drm_atomic_helper_crtc_duplicate_state, 0x110bc9e3, "");
SYMBOL_CRC(drm_atomic_helper_crtc_duplicate_state, 0x8c8a90aa, "");
SYMBOL_CRC(__drm_atomic_helper_crtc_destroy_state, 0x470f4143, "");
SYMBOL_CRC(drm_atomic_helper_crtc_destroy_state, 0xef46c7da, "");
SYMBOL_CRC(__drm_atomic_helper_plane_state_reset, 0xf2678f34, "");
SYMBOL_CRC(__drm_atomic_helper_plane_reset, 0x3a14188f, "");
SYMBOL_CRC(drm_atomic_helper_plane_reset, 0xb4b9ea1b, "");
SYMBOL_CRC(__drm_atomic_helper_plane_duplicate_state, 0xd4a7a9e4, "");
SYMBOL_CRC(drm_atomic_helper_plane_duplicate_state, 0x78e38cbd, "");
SYMBOL_CRC(__drm_atomic_helper_plane_destroy_state, 0x9a8b7dd1, "");
SYMBOL_CRC(drm_atomic_helper_plane_destroy_state, 0x1fe31480, "");
SYMBOL_CRC(__drm_atomic_helper_connector_state_reset, 0xf33a90a5, "");
SYMBOL_CRC(__drm_atomic_helper_connector_reset, 0x0fad710c, "");
SYMBOL_CRC(drm_atomic_helper_connector_reset, 0x8f0dae1c, "");
SYMBOL_CRC(drm_atomic_helper_connector_tv_margins_reset, 0xd1caf726, "");
SYMBOL_CRC(drm_atomic_helper_connector_tv_reset, 0x4d7a29f6, "");
SYMBOL_CRC(drm_atomic_helper_connector_tv_check, 0x66ae5bd7, "");
SYMBOL_CRC(__drm_atomic_helper_connector_duplicate_state, 0xa7d958b2, "");
SYMBOL_CRC(drm_atomic_helper_connector_duplicate_state, 0x3b0a7432, "");
SYMBOL_CRC(__drm_atomic_helper_connector_destroy_state, 0xf99ccc23, "");
SYMBOL_CRC(drm_atomic_helper_connector_destroy_state, 0xf5ed3c2b, "");
SYMBOL_CRC(__drm_atomic_helper_private_obj_duplicate_state, 0xc4a99017, "");
SYMBOL_CRC(__drm_atomic_helper_bridge_duplicate_state, 0xf545b3bf, "");
SYMBOL_CRC(drm_atomic_helper_bridge_duplicate_state, 0x8738a8cb, "");
SYMBOL_CRC(drm_atomic_helper_bridge_destroy_state, 0x4bd2941a, "");
SYMBOL_CRC(__drm_atomic_helper_bridge_reset, 0x9145e899, "");
SYMBOL_CRC(drm_atomic_helper_bridge_reset, 0x88276b49, "");
SYMBOL_CRC(drm_helper_encoder_in_use, 0xdf5b8f16, "");
SYMBOL_CRC(drm_helper_crtc_in_use, 0xbe47fb3a, "");
SYMBOL_CRC(drm_helper_disable_unused_functions, 0x35d7267b, "");
SYMBOL_CRC(drm_crtc_helper_set_mode, 0xed210bc0, "");
SYMBOL_CRC(drm_crtc_helper_atomic_check, 0xb0753572, "");
SYMBOL_CRC(drm_crtc_helper_set_config, 0x3b063862, "");
SYMBOL_CRC(drm_helper_connector_dpms, 0xd9f27f47, "");
SYMBOL_CRC(drm_helper_resume_force_mode, 0xaec36cfb, "");
SYMBOL_CRC(drm_helper_force_disable_all, 0xc9f267d4, "");
SYMBOL_CRC(drm_atomic_helper_check_plane_damage, 0x5880752b, "");
SYMBOL_CRC(drm_atomic_helper_dirtyfb, 0xaf446f3f, "");
SYMBOL_CRC(drm_atomic_helper_damage_iter_init, 0x9fee9565, "");
SYMBOL_CRC(drm_atomic_helper_damage_iter_next, 0x6b5c2b06, "");
SYMBOL_CRC(drm_atomic_helper_damage_merged, 0xe86dfe44, "");
SYMBOL_CRC(drm_i2c_encoder_init, 0x3cd131b3, "");
SYMBOL_CRC(drm_i2c_encoder_destroy, 0xa3e8019f, "");
SYMBOL_CRC(drm_i2c_encoder_dpms, 0x9f849dcc, "");
SYMBOL_CRC(drm_i2c_encoder_mode_fixup, 0xace8937a, "");
SYMBOL_CRC(drm_i2c_encoder_prepare, 0x5e817f66, "");
SYMBOL_CRC(drm_i2c_encoder_commit, 0xeb96cf3c, "");
SYMBOL_CRC(drm_i2c_encoder_mode_set, 0x8e54aba0, "");
SYMBOL_CRC(drm_i2c_encoder_detect, 0x4ab48923, "");
SYMBOL_CRC(drm_i2c_encoder_save, 0x7b7ecd64, "");
SYMBOL_CRC(drm_i2c_encoder_restore, 0x0843d30b, "");
SYMBOL_CRC(drm_flip_work_queue, 0x127a8c6b, "");
SYMBOL_CRC(drm_flip_work_commit, 0x842dd90c, "");
SYMBOL_CRC(drm_flip_work_init, 0x5542443b, "");
SYMBOL_CRC(drm_flip_work_cleanup, 0xc6323239, "");
SYMBOL_CRC(drm_format_conv_state_init, 0xf24700a0, "");
SYMBOL_CRC(drm_format_conv_state_copy, 0xeeffb81b, "");
SYMBOL_CRC(drm_format_conv_state_reserve, 0x84247d5d, "");
SYMBOL_CRC(drm_format_conv_state_release, 0x24e99aa5, "");
SYMBOL_CRC(drm_fb_clip_offset, 0xb6a6b711, "");
SYMBOL_CRC(drm_fb_memcpy, 0xb34fe603, "");
SYMBOL_CRC(drm_fb_swab, 0xf4b177de, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_rgb332, 0x48bbed21, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_rgb565, 0xbef1a85d, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_xrgb1555, 0x7c3f55e7, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_argb1555, 0x299e35c5, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_rgba5551, 0x51ecc90e, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_rgb888, 0xec2d9d5b, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_bgr888, 0xf0c7035e, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_argb8888, 0x1a30551e, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_abgr8888, 0x6a464b0f, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_xbgr8888, 0x3fe72b2d, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_bgrx8888, 0x1ac4f850, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_xrgb2101010, 0x3e606743, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_argb2101010, 0xc1850d41, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_gray8, 0x958353c3, "");
SYMBOL_CRC(drm_fb_blit, 0x31d29e04, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_mono, 0xfdac4268, "");
SYMBOL_CRC(drm_fb_build_fourcc_list, 0x0e91ebbe, "");
SYMBOL_CRC(drm_gem_plane_helper_prepare_fb, 0xbf55fcce, "_gpl");
SYMBOL_CRC(__drm_gem_duplicate_shadow_plane_state, 0xd610c43f, "");
SYMBOL_CRC(drm_gem_duplicate_shadow_plane_state, 0x3b3409c7, "");
SYMBOL_CRC(__drm_gem_destroy_shadow_plane_state, 0xc2da6467, "");
SYMBOL_CRC(drm_gem_destroy_shadow_plane_state, 0x1303331f, "");
SYMBOL_CRC(__drm_gem_reset_shadow_plane, 0xba8f2d83, "");
SYMBOL_CRC(drm_gem_reset_shadow_plane, 0xab405b7b, "");
SYMBOL_CRC(drm_gem_begin_shadow_fb_access, 0xcb5da82c, "");
SYMBOL_CRC(drm_gem_end_shadow_fb_access, 0xb49d79c2, "");
SYMBOL_CRC(drm_gem_simple_kms_begin_shadow_fb_access, 0xb48ac501, "");
SYMBOL_CRC(drm_gem_simple_kms_end_shadow_fb_access, 0xff97b42d, "");
SYMBOL_CRC(drm_gem_simple_kms_reset_shadow_plane, 0x200105a9, "");
SYMBOL_CRC(drm_gem_simple_kms_duplicate_shadow_plane_state, 0xb21faca6, "");
SYMBOL_CRC(drm_gem_simple_kms_destroy_shadow_plane_state, 0x3eceb9b0, "");
SYMBOL_CRC(drm_gem_fb_get_obj, 0xd730b065, "_gpl");
SYMBOL_CRC(drm_gem_fb_destroy, 0x3627cc71, "");
SYMBOL_CRC(drm_gem_fb_create_handle, 0xabcee89d, "");
SYMBOL_CRC(drm_gem_fb_init_with_funcs, 0xf50d079c, "_gpl");
SYMBOL_CRC(drm_gem_fb_create_with_funcs, 0x150023fe, "_gpl");
SYMBOL_CRC(drm_gem_fb_create, 0xe2d7440d, "_gpl");
SYMBOL_CRC(drm_gem_fb_create_with_dirty, 0xcf4d4388, "_gpl");
SYMBOL_CRC(drm_gem_fb_vmap, 0xd9c1a985, "");
SYMBOL_CRC(drm_gem_fb_vunmap, 0x7f2a95e2, "");
SYMBOL_CRC(drm_gem_fb_begin_cpu_access, 0x374bbb41, "");
SYMBOL_CRC(drm_gem_fb_end_cpu_access, 0x3870777f, "");
SYMBOL_CRC(drm_gem_fb_afbc_init, 0x2288a9fd, "_gpl");
SYMBOL_CRC(drm_helper_move_panel_connectors_to_head, 0x8f67e300, "");
SYMBOL_CRC(drm_helper_mode_fill_fb_struct, 0xc0ae2258, "");
SYMBOL_CRC(drm_crtc_init, 0x9b252f38, "");
SYMBOL_CRC(drm_mode_config_helper_suspend, 0x1f9f5256, "");
SYMBOL_CRC(drm_mode_config_helper_resume, 0xf3feca45, "");
SYMBOL_CRC(drm_plane_helper_update_primary, 0xded048c3, "");
SYMBOL_CRC(drm_plane_helper_disable_primary, 0xadada14d, "");
SYMBOL_CRC(drm_plane_helper_destroy, 0xe36cd3f7, "");
SYMBOL_CRC(drm_kms_helper_poll_enable, 0x13c79e87, "");
SYMBOL_CRC(drm_kms_helper_poll_reschedule, 0xf11232ed, "");
SYMBOL_CRC(drm_helper_probe_detect, 0xf2656af1, "");
SYMBOL_CRC(drm_helper_probe_single_connector_modes, 0xeaa8bb30, "");
SYMBOL_CRC(drm_kms_helper_hotplug_event, 0xcf5104f3, "");
SYMBOL_CRC(drm_kms_helper_connector_hotplug_event, 0x3d8e86d2, "");
SYMBOL_CRC(drm_kms_helper_is_poll_worker, 0x5a4734d1, "");
SYMBOL_CRC(drm_kms_helper_poll_disable, 0x406b4aec, "");
SYMBOL_CRC(drm_kms_helper_poll_init, 0xe358c2e0, "");
SYMBOL_CRC(drm_kms_helper_poll_fini, 0x78ac5d56, "");
SYMBOL_CRC(drmm_kms_helper_poll_init, 0x382542dc, "");
SYMBOL_CRC(drm_connector_helper_hpd_irq_event, 0x6766b19c, "");
SYMBOL_CRC(drm_helper_hpd_irq_event, 0xd3a5176f, "");
SYMBOL_CRC(drm_crtc_helper_mode_valid_fixed, 0x07027c89, "");
SYMBOL_CRC(drm_connector_helper_get_modes_fixed, 0x1177079f, "");
SYMBOL_CRC(drm_connector_helper_get_modes, 0x63861cf0, "");
SYMBOL_CRC(drm_connector_helper_tv_get_modes, 0xb69939a1, "");
SYMBOL_CRC(drm_connector_helper_detect_from_ddc, 0x0a4f980e, "");
SYMBOL_CRC(drm_rect_intersect, 0x871ab41a, "");
SYMBOL_CRC(drm_rect_clip_scaled, 0x99fd20aa, "");
SYMBOL_CRC(drm_rect_calc_hscale, 0x2d50570f, "");
SYMBOL_CRC(drm_rect_calc_vscale, 0x91fec1cc, "");
SYMBOL_CRC(drm_rect_debug_print, 0xcb2340b8, "");
SYMBOL_CRC(drm_rect_rotate, 0xb053adda, "");
SYMBOL_CRC(drm_rect_rotate_inv, 0x6e30ba8e, "");
SYMBOL_CRC(drm_self_refresh_helper_update_avg_times, 0x75715f4f, "");
SYMBOL_CRC(drm_self_refresh_helper_alter_state, 0xbfe4d6c1, "");
SYMBOL_CRC(drm_self_refresh_helper_init, 0xa00cd6e9, "");
SYMBOL_CRC(drm_self_refresh_helper_cleanup, 0x952bf582, "");
SYMBOL_CRC(drm_simple_encoder_init, 0xac30db4e, "");
SYMBOL_CRC(__drmm_simple_encoder_alloc, 0x5195c376, "");
SYMBOL_CRC(drm_simple_display_pipe_attach_bridge, 0x1ae01d5f, "");
SYMBOL_CRC(drm_simple_display_pipe_init, 0x104a6fc1, "");
SYMBOL_CRC(drm_client_setup, 0x423dcf00, "");
SYMBOL_CRC(drm_client_setup_with_fourcc, 0x682ae15e, "");
SYMBOL_CRC(drm_client_setup_with_color_mode, 0xc639d046, "");
SYMBOL_CRC(drm_bridge_is_panel, 0x88911f96, "");
SYMBOL_CRC(drm_panel_bridge_add, 0xd77ad88c, "");
SYMBOL_CRC(drm_panel_bridge_add_typed, 0xa898e154, "");
SYMBOL_CRC(drm_panel_bridge_remove, 0xed532aff, "");
SYMBOL_CRC(drm_panel_bridge_set_orientation, 0x248024bd, "");
SYMBOL_CRC(devm_drm_panel_bridge_add, 0xf566e43f, "");
SYMBOL_CRC(devm_drm_panel_bridge_add_typed, 0x3466867d, "");
SYMBOL_CRC(drmm_panel_bridge_add, 0x30ed29a3, "");
SYMBOL_CRC(drm_panel_bridge_connector, 0x7e013062, "");
SYMBOL_CRC(devm_drm_of_get_bridge, 0xede0def6, "");
SYMBOL_CRC(drmm_of_get_bridge, 0x95212ca6, "");
SYMBOL_CRC(drm_fbdev_client_setup, 0x232f5c44, "");
SYMBOL_CRC(drm_fb_helper_debug_enter, 0xbf3fcbe1, "");
SYMBOL_CRC(drm_fb_helper_debug_leave, 0x2bf0bf75, "");
SYMBOL_CRC(drm_fb_helper_restore_fbdev_mode_unlocked, 0xb6291c9b, "");
SYMBOL_CRC(drm_fb_helper_blank, 0x5e9888df, "");
SYMBOL_CRC(drm_fb_helper_prepare, 0xc779d218, "");
SYMBOL_CRC(drm_fb_helper_unprepare, 0x0f27f7d7, "");
SYMBOL_CRC(drm_fb_helper_init, 0x0694390f, "");
SYMBOL_CRC(drm_fb_helper_alloc_info, 0x9fa1cb85, "");
SYMBOL_CRC(drm_fb_helper_release_info, 0xd2c9bf93, "");
SYMBOL_CRC(drm_fb_helper_unregister_info, 0x66e267ca, "");
SYMBOL_CRC(drm_fb_helper_fini, 0xe2d83dfb, "");
SYMBOL_CRC(drm_fb_helper_damage_range, 0x381c48be, "");
SYMBOL_CRC(drm_fb_helper_damage_area, 0x5bd88a95, "");
SYMBOL_CRC(drm_fb_helper_deferred_io, 0x89ca207e, "");
SYMBOL_CRC(drm_fb_helper_set_suspend, 0xe780b869, "");
SYMBOL_CRC(drm_fb_helper_set_suspend_unlocked, 0x3f8f83cf, "");
SYMBOL_CRC(drm_fb_helper_setcmap, 0xb96c445b, "");
SYMBOL_CRC(drm_fb_helper_ioctl, 0x25929047, "");
SYMBOL_CRC(drm_fb_helper_check_var, 0x66eb2f8e, "");
SYMBOL_CRC(drm_fb_helper_set_par, 0xf7f1f91d, "");
SYMBOL_CRC(drm_fb_helper_pan_display, 0xa65a02fd, "");
SYMBOL_CRC(drm_fb_helper_fill_info, 0xeda51cc7, "");
SYMBOL_CRC(drm_fb_helper_initial_config, 0xc89361e7, "");
SYMBOL_CRC(drm_fb_helper_hotplug_event, 0x456ed1d1, "");
SYMBOL_CRC(drm_fb_helper_lastclose, 0x426ce613, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4cc2fbd2, "unregister_framebuffer" },
	{ 0x32bf1f65, "drm_atomic_get_old_crtc_for_encoder" },
	{ 0x8223d997, "drm_framebuffer_cleanup" },
	{ 0xe7840f0, "drm_client_register" },
	{ 0x9b4640b2, "drm_writeback_prepare_job" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x97356a9e, "drm_panel_get_modes" },
	{ 0x62677e0f, "drm_gem_vmap_unlocked" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x15b36373, "drm_connector_list_update" },
	{ 0xb96f2e38, "drm_bridge_add" },
	{ 0xc95a9782, "drm_bridge_chain_mode_valid" },
	{ 0x75c174a8, "unregister_sysrq_key" },
	{ 0x13595065, "drm_connector_register" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x82294eb4, "drm_client_rotation" },
	{ 0xac52bed6, "drm_panel_enable" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x65ec4e9f, "drm_framebuffer_init" },
	{ 0x3448ac26, "drm_mode_validate_driver" },
	{ 0x4fdd05f6, "drm_atomic_add_affected_planes" },
	{ 0xaa369c5a, "dma_buf_end_cpu_access" },
	{ 0xb40d49b1, "drm_modeset_unlock_all" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x595ea9b6, "drm_mode_probed_add" },
	{ 0xf5816bdf, "drm_atomic_add_affected_connectors" },
	{ 0x8d0edf48, "drm_gem_vunmap_unlocked" },
	{ 0x41fb2ab5, "drm_crtc_vblank_count" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x77874cab, "drm_modeset_lock_all" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xd9b4753, "drm_mode_equal" },
	{ 0xc184bf4b, "fb_set_lowest_dynamic_fb" },
	{ 0x62df097a, "drm_atomic_bridge_chain_enable" },
	{ 0x397c3d27, "drm_edid_free" },
	{ 0xedbbf41e, "drm_mode_object_get" },
	{ 0x56e8e625, "drm_edid_override_connector_update" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9cad492, "__drm_atomic_state_free" },
	{ 0x711c02a8, "drm_driver_legacy_fb_format" },
	{ 0x6cc02582, "drm_crtc_cleanup" },
	{ 0x20c78d0, "drm_connector_list_iter_begin" },
	{ 0xc4796efa, "drm_mode_set_config_internal" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x7a9d63d0, "framebuffer_alloc" },
	{ 0xc6acd46e, "drm_encoder_cleanup" },
	{ 0x3e321b4, "drm_modeset_acquire_init" },
	{ 0xccaf994e, "dma_fence_set_deadline" },
	{ 0xd3d7f574, "drm_client_modeset_probe" },
	{ 0x5504837a, "drm_warn_on_modeset_not_all_locked" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc251db6d, "drm_plane_get_damage_clips" },
	{ 0xde5315ca, "devres_add" },
	{ 0x64d11af1, "dma_fence_wait_timeout" },
	{ 0x3afa3628, "drm_add_modes_noedid" },
	{ 0x41a8eb1d, "drm_bridge_remove" },
	{ 0xcc9e6d37, "drm_mode_object_put" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0xb17ab57c, "drm_crtc_vblank_get" },
	{ 0x63ec7918, "drm_gem_object_lookup" },
	{ 0x8811271b, "drm_crtc_send_vblank_event" },
	{ 0x33b1ad47, "drm_connector_attach_encoder" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xdb7582e3, "drm_atomic_normalize_zpos" },
	{ 0x56ced639, "drm_edid_connector_update" },
	{ 0xa3bd3018, "drm_sysfs_hotplug_event" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xcf01bd2a, "__drmm_add_action_or_reset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x65cb4ce6, "drm_crtc_vblank_reset" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x40d04664, "console_trylock" },
	{ 0x80d157b7, "drm_connector_list_iter_end" },
	{ 0xa59e88d, "drm_atomic_set_crtc_for_plane" },
	{ 0xa1f4a5ea, "drm_client_modeset_dpms" },
	{ 0x4e27ac98, "drm_mode_prune_invalid" },
	{ 0x11a4f26f, "drm_client_dev_hotplug" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xf9c01236, "dma_resv_get_singleton" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0x19c3261a, "drm_plane_cleanup" },
	{ 0x4575a0ca, "drm_mode_set_crtcinfo" },
	{ 0x9d9e8944, "module_put" },
	{ 0x93ae87f9, "dma_buf_begin_cpu_access" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xc249304b, "drm_atomic_get_crtc_state" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0x4b70fd73, "drm_client_init" },
	{ 0xec8a8665, "drm_crtc_wait_one_vblank" },
	{ 0x2cff64de, "drm_crtc_next_vblank_start" },
	{ 0x67db48ab, "__drmm_encoder_alloc" },
	{ 0xd7a9cf42, "drm_mode_validate_size" },
	{ 0xc93a6fac, "drm_driver_color_mode_format" },
	{ 0x37bce600, "drm_modeset_lock" },
	{ 0x7936ad9e, "drm_client_modeset_commit_locked" },
	{ 0xe1865c09, "drm_modeset_unlock" },
	{ 0x3dd3a80c, "drm_panel_disable" },
	{ 0x6bcf157b, "drm_property_replace_blob" },
	{ 0x6910e4cd, "drm_format_info_min_pitch" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x72262e40, "drm_connector_init" },
	{ 0x2a10607e, "devm_kfree" },
	{ 0x669c413b, "_dev_err" },
	{ 0xdea65c6d, "drm_writeback_cleanup_job" },
	{ 0x44d00814, "drm_modeset_lock_all_ctx" },
	{ 0x5c362e8, "i2c_unregister_device" },
	{ 0xfaae72a7, "drm_atomic_set_fb_for_plane" },
	{ 0x8ec9b41c, "__drm_universal_plane_alloc" },
	{ 0xc6ae8403, "drm_edid_connector_add_modes" },
	{ 0x2306aa71, "drm_probe_ddc" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x74fc6fbd, "drm_format_info_block_width" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8ae2c330, "__devres_alloc_node" },
	{ 0xa2cc25cc, "drm_edid_read" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xa893c9ee, "drm_crtc_commit_wait" },
	{ 0x4d894f61, "drm_dev_has_vblank" },
	{ 0xb5d42d3e, "register_framebuffer" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x880046f7, "__drm_atomic_helper_disable_plane" },
	{ 0x4fbb7bf5, "drm_connector_set_orientation_from_panel" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xd9a86d77, "drm_gem_handle_create" },
	{ 0xe4cb11d3, "drm_atomic_set_crtc_for_connector" },
	{ 0xe3406e6c, "drm_analog_tv_mode" },
	{ 0x3bfca48b, "drm_crtc_init_with_planes" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x39439cdf, "drm_mode_duplicate" },
	{ 0xf77555cd, "__memcpy_toio" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbed82481, "drm_crtc_vblank_put" },
	{ 0x5390eff6, "i2c_new_client_device" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x1d6d457d, "__drm_dev_dbg" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x321cdbf, "of_alias_get_highest_id" },
	{ 0xdf5f80a2, "drm_plane_get_damage_clips_count" },
	{ 0xc8749d2c, "drm_atomic_commit" },
	{ 0x9ce050be, "drm_mode_copy" },
	{ 0xe34cce37, "drm_atomic_state_alloc" },
	{ 0x9af61c58, "drm_client_modeset_commit" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x6b6f6e4, "drm_atomic_bridge_chain_post_disable" },
	{ 0x836e0a71, "drm_connector_update_edid_property" },
	{ 0x88ab6fe3, "kgdb_active" },
	{ 0xe633a4cd, "drm_format_info_bpp" },
	{ 0xc631580a, "console_unlock" },
	{ 0x2073d1ba, "fb_set_suspend" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x38edb777, "drm_atomic_get_new_crtc_for_encoder" },
	{ 0xdbc0a41a, "drm_client_release" },
	{ 0xae277372, "__drm_crtc_commit_free" },
	{ 0x1cb81680, "__drm_atomic_helper_set_config" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x55b39a6d, "drm_atomic_set_mode_prop_for_crtc" },
	{ 0x1c1ef61e, "drm_connector_cleanup" },
	{ 0x2f29c8ad, "drm_get_format_info" },
	{ 0xafae9b14, "drm_universal_plane_init" },
	{ 0x89a76477, "drm_any_plane_has_format" },
	{ 0xd2d5b51b, "drm_connector_list_iter_next" },
	{ 0xb406b22, "drm_modeset_acquire_fini" },
	{ 0xc85dc5c6, "drm_encoder_init" },
	{ 0x22ac1a6, "drm_object_property_get_default_value" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xdfcc992c, "current_work" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x40601870, "drm_of_find_panel_or_bridge" },
	{ 0x57b8e2f8, "drm_master_internal_acquire" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa2338a4c, "drm_modeset_backoff" },
	{ 0xf8db04bb, "drm_panel_prepare" },
	{ 0x41b746d3, "drm_bridge_chain_mode_set" },
	{ 0xf1421d13, "drm_mode_sort" },
	{ 0x2ccaaf9c, "backlight_set_display_name" },
	{ 0xe36c448e, "of_alias_get_id" },
	{ 0x6564fcf7, "drm_atomic_get_plane_state" },
	{ 0x14945706, "drm_atomic_bridge_chain_check" },
	{ 0xf8e7ec7f, "dma_fence_chain_init" },
	{ 0xe7b9867a, "register_sysrq_key" },
	{ 0x17e59a0, "drm_property_blob_get" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0xd40855b5, "drm_property_blob_put" },
	{ 0xfc58f7a6, "drm_mode_destroy" },
	{ 0x67b3f5eb, "drm_bridge_attach" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xca313957, "drm_set_preferred_mode" },
	{ 0x92c12440, "drm_atomic_bridge_chain_pre_enable" },
	{ 0x9e667a01, "drm_atomic_state_clear" },
	{ 0xbbec3e41, "drm_mode_config_reset" },
	{ 0x419c2ab9, "drm_property_create_blob" },
	{ 0x55eb38da, "drm_format_info" },
	{ 0xd6d0ba9a, "drm_modeset_drop_locks" },
	{ 0xd044c193, "framebuffer_release" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x669926a6, "drm_atomic_bridge_chain_disable" },
	{ 0xc0073dca, "drm_mode_create_from_cmdline_mode" },
	{ 0x100d8f3, "drm_mode_validate_ycbcr420" },
	{ 0x982d09b3, "drm_format_info_block_height" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x6ee2e645, "drm_atomic_nonblocking_commit" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0x21ef374c, "try_wait_for_completion" },
	{ 0x11d750a0, "drm_master_internal_release" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x69f810a5, "drm_calc_timestamping_constants" },
	{ 0xcdb99cc9, "drm_mode_init" },
	{ 0xfd60df2, "drm_get_connector_status_name" },
	{ 0x2e9cd830, "drm_panel_unprepare" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x847188e8, "krealloc_noprof" },
	{ 0xf1330293, "drm_atomic_add_encoder_bridges" },
	{ 0x55a4ffb1, "drm_atomic_get_connector_state" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd3a7bbca, "drm_sysfs_connector_hotplug_event" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x4403a9c3, "drm_mode_get_hv_timing" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "drm,backlight");


MODULE_INFO(srcversion, "64C4BC5270D9F973EF0CE61");
