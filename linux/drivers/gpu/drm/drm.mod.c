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

KSYMTAB_FUNC(devm_aperture_acquire_from_firmware, "", "");
KSYMTAB_FUNC(drm_aperture_remove_conflicting_framebuffers, "", "");
KSYMTAB_FUNC(drm_aperture_remove_conflicting_pci_framebuffers, "", "");
KSYMTAB_FUNC(__drm_crtc_commit_free, "", "");
KSYMTAB_FUNC(drm_crtc_commit_wait, "", "");
KSYMTAB_FUNC(drm_atomic_state_default_release, "", "");
KSYMTAB_FUNC(drm_atomic_state_init, "", "");
KSYMTAB_FUNC(drm_atomic_state_alloc, "", "");
KSYMTAB_FUNC(drm_atomic_state_default_clear, "", "");
KSYMTAB_FUNC(drm_atomic_state_clear, "", "");
KSYMTAB_FUNC(__drm_atomic_state_free, "", "");
KSYMTAB_FUNC(drm_atomic_get_crtc_state, "", "");
KSYMTAB_FUNC(drm_atomic_get_plane_state, "", "");
KSYMTAB_FUNC(drm_atomic_private_obj_init, "", "");
KSYMTAB_FUNC(drm_atomic_private_obj_fini, "", "");
KSYMTAB_FUNC(drm_atomic_get_private_obj_state, "", "");
KSYMTAB_FUNC(drm_atomic_get_old_private_obj_state, "", "");
KSYMTAB_FUNC(drm_atomic_get_new_private_obj_state, "", "");
KSYMTAB_FUNC(drm_atomic_get_old_connector_for_encoder, "", "");
KSYMTAB_FUNC(drm_atomic_get_new_connector_for_encoder, "", "");
KSYMTAB_FUNC(drm_atomic_get_old_crtc_for_encoder, "", "");
KSYMTAB_FUNC(drm_atomic_get_new_crtc_for_encoder, "", "");
KSYMTAB_FUNC(drm_atomic_get_connector_state, "", "");
KSYMTAB_FUNC(drm_atomic_get_bridge_state, "", "");
KSYMTAB_FUNC(drm_atomic_get_old_bridge_state, "", "");
KSYMTAB_FUNC(drm_atomic_get_new_bridge_state, "", "");
KSYMTAB_FUNC(drm_atomic_add_encoder_bridges, "", "");
KSYMTAB_FUNC(drm_atomic_add_affected_connectors, "", "");
KSYMTAB_FUNC(drm_atomic_add_affected_planes, "", "");
KSYMTAB_FUNC(drm_atomic_check_only, "", "");
KSYMTAB_FUNC(drm_atomic_commit, "", "");
KSYMTAB_FUNC(drm_atomic_nonblocking_commit, "", "");
KSYMTAB_FUNC(__drm_atomic_helper_disable_plane, "", "");
KSYMTAB_FUNC(__drm_atomic_helper_set_config, "", "");
KSYMTAB_FUNC(drm_atomic_print_new_state, "", "");
KSYMTAB_FUNC(drm_state_dump, "", "");
KSYMTAB_FUNC(drm_atomic_set_mode_for_crtc, "", "");
KSYMTAB_FUNC(drm_atomic_set_mode_prop_for_crtc, "", "");
KSYMTAB_FUNC(drm_atomic_set_crtc_for_plane, "", "");
KSYMTAB_FUNC(drm_atomic_set_fb_for_plane, "", "");
KSYMTAB_FUNC(drm_atomic_set_crtc_for_connector, "", "");
KSYMTAB_FUNC(drm_is_current_master, "", "");
KSYMTAB_FUNC(drm_master_get, "", "");
KSYMTAB_FUNC(drm_file_get_master, "", "");
KSYMTAB_FUNC(drm_master_put, "", "");
KSYMTAB_FUNC(drm_master_internal_acquire, "", "");
KSYMTAB_FUNC(drm_master_internal_release, "", "");
KSYMTAB_FUNC(drm_plane_create_alpha_property, "", "");
KSYMTAB_FUNC(drm_plane_create_rotation_property, "", "");
KSYMTAB_FUNC(drm_connector_create_rotation_property, "", "");
KSYMTAB_FUNC(drm_rotation_simplify, "", "");
KSYMTAB_FUNC(drm_plane_create_zpos_property, "", "");
KSYMTAB_FUNC(drm_plane_create_zpos_immutable_property, "", "");
KSYMTAB_FUNC(drm_atomic_normalize_zpos, "", "");
KSYMTAB_FUNC(drm_plane_create_blend_mode_property, "", "");
KSYMTAB_FUNC(drm_bridge_add, "", "");
KSYMTAB_FUNC(devm_drm_bridge_add, "", "");
KSYMTAB_FUNC(drm_bridge_remove, "", "");
KSYMTAB_FUNC(drm_bridge_attach, "", "");
KSYMTAB_FUNC(drm_bridge_chain_mode_valid, "", "");
KSYMTAB_FUNC(drm_bridge_chain_mode_set, "", "");
KSYMTAB_FUNC(drm_atomic_bridge_chain_disable, "", "");
KSYMTAB_FUNC(drm_atomic_bridge_chain_post_disable, "", "");
KSYMTAB_FUNC(drm_atomic_bridge_chain_pre_enable, "", "");
KSYMTAB_FUNC(drm_atomic_bridge_chain_enable, "", "");
KSYMTAB_FUNC(drm_atomic_bridge_chain_check, "", "");
KSYMTAB_FUNC(drm_bridge_detect, "_gpl", "");
KSYMTAB_FUNC(drm_bridge_get_modes, "_gpl", "");
KSYMTAB_FUNC(drm_bridge_edid_read, "_gpl", "");
KSYMTAB_FUNC(drm_bridge_hpd_enable, "_gpl", "");
KSYMTAB_FUNC(drm_bridge_hpd_disable, "_gpl", "");
KSYMTAB_FUNC(drm_bridge_hpd_notify, "_gpl", "");
KSYMTAB_FUNC(of_drm_find_bridge, "", "");
KSYMTAB_FUNC(drm_clflush_pages, "", "");
KSYMTAB_FUNC(drm_clflush_sg, "", "");
KSYMTAB_FUNC(drm_clflush_virt_range, "", "");
KSYMTAB_FUNC(drm_need_swiotlb, "", "");
KSYMTAB_FUNC(drm_memcpy_from_wc, "", "");
KSYMTAB_FUNC(drm_client_init, "", "");
KSYMTAB_FUNC(drm_client_register, "", "");
KSYMTAB_FUNC(drm_client_release, "", "");
KSYMTAB_FUNC(drm_client_dev_unregister, "", "");
KSYMTAB_FUNC(drm_client_dev_hotplug, "", "");
KSYMTAB_FUNC(drm_client_buffer_vmap_local, "", "");
KSYMTAB_FUNC(drm_client_buffer_vunmap_local, "", "");
KSYMTAB_FUNC(drm_client_buffer_vmap, "", "");
KSYMTAB_FUNC(drm_client_buffer_vunmap, "", "");
KSYMTAB_FUNC(drm_client_framebuffer_create, "", "");
KSYMTAB_FUNC(drm_client_framebuffer_delete, "", "");
KSYMTAB_FUNC(drm_client_framebuffer_flush, "", "");
KSYMTAB_FUNC(drm_client_modeset_probe, "", "");
KSYMTAB_FUNC(drm_client_rotation, "", "");
KSYMTAB_FUNC(drm_client_modeset_check, "", "");
KSYMTAB_FUNC(drm_client_modeset_commit_locked, "", "");
KSYMTAB_FUNC(drm_client_modeset_commit, "", "");
KSYMTAB_FUNC(drm_client_modeset_dpms, "", "");
KSYMTAB_FUNC(drm_color_ctm_s31_32_to_qm_n, "", "");
KSYMTAB_FUNC(drm_crtc_enable_color_mgmt, "", "");
KSYMTAB_FUNC(drm_mode_crtc_set_gamma_size, "", "");
KSYMTAB_FUNC(drm_plane_create_color_properties, "", "");
KSYMTAB_FUNC(drm_plane_create_chroma_siting_properties, "", "");
KSYMTAB_FUNC(drm_color_lut_check, "", "");
KSYMTAB_FUNC(drm_get_connector_type_name, "", "");
KSYMTAB_FUNC(drm_connector_init, "", "");
KSYMTAB_FUNC(drm_connector_init_with_ddc, "", "");
KSYMTAB_FUNC(drmm_connector_init, "", "");
KSYMTAB_FUNC(drmm_connector_hdmi_init, "", "");
KSYMTAB_FUNC(drm_connector_attach_edid_property, "", "");
KSYMTAB_FUNC(drm_connector_attach_encoder, "", "");
KSYMTAB_FUNC(drm_connector_has_possible_encoder, "", "");
KSYMTAB_FUNC(drm_connector_cleanup, "", "");
KSYMTAB_FUNC(drm_connector_register, "", "");
KSYMTAB_FUNC(drm_connector_unregister, "", "");
KSYMTAB_FUNC(drm_get_connector_status_name, "", "");
KSYMTAB_FUNC(drm_connector_list_iter_begin, "", "");
KSYMTAB_FUNC(drm_connector_list_iter_next, "", "");
KSYMTAB_FUNC(drm_connector_list_iter_end, "", "");
KSYMTAB_FUNC(drm_get_subpixel_order_name, "", "");
KSYMTAB_FUNC(drm_display_info_set_bus_formats, "", "");
KSYMTAB_FUNC(drm_get_tv_mode_from_name, "", "");
KSYMTAB_FUNC(drm_hdmi_connector_get_broadcast_rgb_name, "", "");
KSYMTAB_FUNC(drm_hdmi_connector_get_output_format_name, "", "");
KSYMTAB_FUNC(drm_mode_create_dvi_i_properties, "", "");
KSYMTAB_FUNC(drm_connector_attach_dp_subconnector_property, "", "");
KSYMTAB_FUNC(drm_connector_attach_content_type_property, "", "");
KSYMTAB_FUNC(drm_connector_attach_tv_margin_properties, "", "");
KSYMTAB_FUNC(drm_mode_create_tv_margin_properties, "", "");
KSYMTAB_FUNC(drm_mode_create_tv_properties_legacy, "", "");
KSYMTAB_FUNC(drm_mode_create_tv_properties, "", "");
KSYMTAB_FUNC(drm_mode_create_scaling_mode_property, "", "");
KSYMTAB_FUNC(drm_connector_attach_vrr_capable_property, "", "");
KSYMTAB_FUNC(drm_connector_attach_scaling_mode_property, "", "");
KSYMTAB_FUNC(drm_mode_create_aspect_ratio_property, "", "");
KSYMTAB_FUNC(drm_mode_create_hdmi_colorspace_property, "", "");
KSYMTAB_FUNC(drm_mode_create_dp_colorspace_property, "", "");
KSYMTAB_FUNC(drm_mode_create_content_type_property, "", "");
KSYMTAB_FUNC(drm_mode_create_suggested_offset_properties, "", "");
KSYMTAB_FUNC(drm_connector_set_path_property, "", "");
KSYMTAB_FUNC(drm_connector_set_tile_property, "", "");
KSYMTAB_FUNC(drm_connector_set_link_status_property, "", "");
KSYMTAB_FUNC(drm_connector_attach_max_bpc_property, "", "");
KSYMTAB_FUNC(drm_connector_attach_hdr_output_metadata_property, "", "");
KSYMTAB_FUNC(drm_connector_attach_broadcast_rgb_property, "", "");
KSYMTAB_FUNC(drm_connector_attach_colorspace_property, "", "");
KSYMTAB_FUNC(drm_connector_atomic_hdr_metadata_equal, "", "");
KSYMTAB_FUNC(drm_connector_set_vrr_capable_property, "", "");
KSYMTAB_FUNC(drm_connector_set_panel_orientation, "", "");
KSYMTAB_FUNC(drm_connector_set_panel_orientation_with_quirk, "", "");
KSYMTAB_FUNC(drm_connector_set_orientation_from_panel, "", "");
KSYMTAB_FUNC(drm_connector_create_privacy_screen_properties, "", "");
KSYMTAB_FUNC(drm_connector_attach_privacy_screen_properties, "", "");
KSYMTAB_FUNC(drm_connector_attach_privacy_screen_provider, "", "");
KSYMTAB_FUNC(drm_connector_update_privacy_screen, "", "");
KSYMTAB_FUNC(drm_connector_oob_hotplug_event, "", "");
KSYMTAB_FUNC(drm_mode_put_tile_group, "", "");
KSYMTAB_FUNC(drm_mode_get_tile_group, "", "");
KSYMTAB_FUNC(drm_mode_create_tile_group, "", "");
KSYMTAB_FUNC(drm_crtc_from_index, "", "");
KSYMTAB_FUNC(drm_crtc_init_with_planes, "", "");
KSYMTAB_FUNC(drmm_crtc_init_with_planes, "", "");
KSYMTAB_FUNC(__drmm_crtc_alloc_with_planes, "", "");
KSYMTAB_FUNC(drm_crtc_cleanup, "", "");
KSYMTAB_FUNC(drm_mode_set_config_internal, "", "");
KSYMTAB_FUNC(drm_crtc_check_viewport, "", "");
KSYMTAB_FUNC(drm_crtc_create_scaling_filter_property, "", "");
KSYMTAB_FUNC(drm_put_dev, "", "");
KSYMTAB_FUNC(drm_dev_enter, "", "");
KSYMTAB_FUNC(drm_dev_exit, "", "");
KSYMTAB_FUNC(drm_dev_unplug, "", "");
KSYMTAB_FUNC(__devm_drm_dev_alloc, "", "");
KSYMTAB_FUNC(drm_dev_alloc, "", "");
KSYMTAB_FUNC(drm_dev_get, "", "");
KSYMTAB_FUNC(drm_dev_put, "", "");
KSYMTAB_FUNC(drm_dev_register, "", "");
KSYMTAB_FUNC(drm_dev_unregister, "", "");
KSYMTAB_FUNC(drm_edid_header_is_valid, "", "");
KSYMTAB_FUNC(drm_edid_is_valid, "", "");
KSYMTAB_FUNC(drm_edid_valid, "", "");
KSYMTAB_FUNC(drm_edid_override_connector_update, "", "");
KSYMTAB_FUNC(drm_edid_raw, "", "");
KSYMTAB_FUNC(drm_edid_alloc, "", "");
KSYMTAB_FUNC(drm_edid_dup, "", "");
KSYMTAB_FUNC(drm_edid_free, "", "");
KSYMTAB_FUNC(drm_probe_ddc, "", "");
KSYMTAB_FUNC(drm_get_edid, "", "");
KSYMTAB_FUNC(drm_edid_read_custom, "", "");
KSYMTAB_FUNC(drm_edid_read_ddc, "", "");
KSYMTAB_FUNC(drm_edid_read, "", "");
KSYMTAB_FUNC(drm_edid_get_product_id, "", "");
KSYMTAB_FUNC(drm_edid_print_product_id, "", "");
KSYMTAB_FUNC(drm_edid_get_panel_id, "", "");
KSYMTAB_FUNC(drm_edid_read_base_block, "", "");
KSYMTAB_FUNC(drm_get_edid_switcheroo, "", "");
KSYMTAB_FUNC(drm_edid_read_switcheroo, "", "");
KSYMTAB_FUNC(drm_edid_duplicate, "", "");
KSYMTAB_FUNC(drm_mode_find_dmt, "", "");
KSYMTAB_FUNC(drm_match_cea_mode, "", "");
KSYMTAB_FUNC(drm_display_mode_from_cea_vic, "", "");
KSYMTAB_FUNC(drm_edid_match, "", "");
KSYMTAB_FUNC(drm_edid_get_monitor_name, "", "");
KSYMTAB_FUNC(drm_edid_to_sad, "", "");
KSYMTAB_FUNC(drm_edid_to_speaker_allocation, "", "");
KSYMTAB_FUNC(drm_av_sync_delay, "", "");
KSYMTAB_FUNC(drm_detect_hdmi_monitor, "", "");
KSYMTAB_FUNC(drm_detect_monitor_audio, "", "");
KSYMTAB_FUNC(drm_default_rgb_quant_range, "", "");
KSYMTAB_FUNC(drm_edid_connector_update, "", "");
KSYMTAB_FUNC(drm_edid_connector_add_modes, "", "");
KSYMTAB_FUNC(drm_connector_update_edid_property, "", "");
KSYMTAB_FUNC(drm_add_edid_modes, "", "");
KSYMTAB_FUNC(drm_add_modes_noedid, "", "");
KSYMTAB_FUNC(drm_hdmi_avi_infoframe_from_display_mode, "", "");
KSYMTAB_FUNC(drm_hdmi_avi_infoframe_quant_range, "", "");
KSYMTAB_FUNC(drm_hdmi_vendor_infoframe_from_display_mode, "", "");
KSYMTAB_FUNC(drm_edid_is_digital, "", "");
KSYMTAB_FUNC(drm_eld_sad_get, "", "");
KSYMTAB_FUNC(drm_eld_sad_set, "", "");
KSYMTAB_FUNC(drm_encoder_init, "", "");
KSYMTAB_FUNC(drm_encoder_cleanup, "", "");
KSYMTAB_FUNC(__drmm_encoder_alloc, "", "");
KSYMTAB_FUNC(drmm_encoder_init, "", "");
KSYMTAB_FUNC(drm_open, "", "");
KSYMTAB_FUNC(drm_release, "", "");
KSYMTAB_FUNC(drm_release_noglobal, "", "");
KSYMTAB_FUNC(drm_read, "", "");
KSYMTAB_FUNC(drm_poll, "", "");
KSYMTAB_FUNC(drm_event_reserve_init_locked, "", "");
KSYMTAB_FUNC(drm_event_reserve_init, "", "");
KSYMTAB_FUNC(drm_event_cancel_free, "", "");
KSYMTAB_FUNC(drm_send_event_timestamp_locked, "", "");
KSYMTAB_FUNC(drm_send_event_locked, "", "");
KSYMTAB_FUNC(drm_send_event, "", "");
KSYMTAB_FUNC(drm_print_memory_stats, "", "");
KSYMTAB_FUNC(drm_show_memory_stats, "", "");
KSYMTAB_FUNC(drm_show_fdinfo, "", "");
KSYMTAB_FUNC(drm_mode_legacy_fb_format, "", "");
KSYMTAB_FUNC(drm_driver_legacy_fb_format, "", "");
KSYMTAB_FUNC(drm_driver_color_mode_format, "", "");
KSYMTAB_FUNC(drm_format_info, "", "");
KSYMTAB_FUNC(drm_get_format_info, "", "");
KSYMTAB_FUNC(drm_format_info_block_width, "", "");
KSYMTAB_FUNC(drm_format_info_block_height, "", "");
KSYMTAB_FUNC(drm_format_info_bpp, "", "");
KSYMTAB_FUNC(drm_format_info_min_pitch, "", "");
KSYMTAB_FUNC(drm_framebuffer_init, "", "");
KSYMTAB_FUNC(drm_framebuffer_lookup, "", "");
KSYMTAB_FUNC(drm_framebuffer_unregister_private, "", "");
KSYMTAB_FUNC(drm_framebuffer_cleanup, "", "");
KSYMTAB_FUNC(drm_framebuffer_remove, "", "");
KSYMTAB_FUNC(drm_gem_object_init_with_mnt, "", "");
KSYMTAB_FUNC(drm_gem_object_init, "", "");
KSYMTAB_FUNC(drm_gem_private_object_init, "", "");
KSYMTAB_FUNC(drm_gem_private_object_fini, "", "");
KSYMTAB_FUNC(drm_gem_handle_delete, "", "");
KSYMTAB_FUNC(drm_gem_dumb_map_offset, "_gpl", "");
KSYMTAB_FUNC(drm_gem_handle_create, "", "");
KSYMTAB_FUNC(drm_gem_free_mmap_offset, "", "");
KSYMTAB_FUNC(drm_gem_create_mmap_offset_size, "", "");
KSYMTAB_FUNC(drm_gem_create_mmap_offset, "", "");
KSYMTAB_FUNC(drm_gem_get_pages, "", "");
KSYMTAB_FUNC(drm_gem_put_pages, "", "");
KSYMTAB_FUNC(drm_gem_objects_lookup, "", "");
KSYMTAB_FUNC(drm_gem_object_lookup, "", "");
KSYMTAB_FUNC(drm_gem_dma_resv_wait, "", "");
KSYMTAB_FUNC(drm_gem_object_release, "", "");
KSYMTAB_FUNC(drm_gem_object_free, "", "");
KSYMTAB_FUNC(drm_gem_vm_open, "", "");
KSYMTAB_FUNC(drm_gem_vm_close, "", "");
KSYMTAB_FUNC(drm_gem_mmap_obj, "", "");
KSYMTAB_FUNC(drm_gem_mmap, "", "");
KSYMTAB_FUNC(drm_gem_vmap, "", "");
KSYMTAB_FUNC(drm_gem_vunmap, "", "");
KSYMTAB_FUNC(drm_gem_lock, "", "");
KSYMTAB_FUNC(drm_gem_unlock, "", "");
KSYMTAB_FUNC(drm_gem_vmap_unlocked, "", "");
KSYMTAB_FUNC(drm_gem_vunmap_unlocked, "", "");
KSYMTAB_FUNC(drm_gem_lock_reservations, "", "");
KSYMTAB_FUNC(drm_gem_unlock_reservations, "", "");
KSYMTAB_FUNC(drm_gem_lru_init, "", "");
KSYMTAB_FUNC(drm_gem_lru_remove, "", "");
KSYMTAB_FUNC(drm_gem_lru_move_tail_locked, "", "");
KSYMTAB_FUNC(drm_gem_lru_move_tail, "", "");
KSYMTAB_FUNC(drm_gem_lru_scan, "", "");
KSYMTAB_FUNC(drm_gem_evict, "", "");
KSYMTAB_FUNC(drm_noop, "", "");
KSYMTAB_FUNC(drm_invalid_op, "", "");
KSYMTAB_FUNC(drm_ioctl_kernel, "", "");
KSYMTAB_FUNC(drm_ioctl, "", "");
KSYMTAB_FUNC(drm_ioctl_flags, "", "");
KSYMTAB_FUNC(__drmm_add_action, "", "");
KSYMTAB_FUNC(__drmm_add_action_or_reset, "", "");
KSYMTAB_FUNC(drmm_release_action, "", "");
KSYMTAB_FUNC(drmm_kmalloc, "", "");
KSYMTAB_FUNC(drmm_kstrdup, "_gpl", "");
KSYMTAB_FUNC(drmm_kfree, "", "");
KSYMTAB_FUNC(__drmm_mutex_release, "", "");
KSYMTAB_FUNC(__drm_mm_interval_first, "", "");
KSYMTAB_FUNC(drm_mm_reserve_node, "", "");
KSYMTAB_FUNC(drm_mm_insert_node_in_range, "", "");
KSYMTAB_FUNC(drm_mm_remove_node, "", "");
KSYMTAB_FUNC(drm_mm_scan_init_with_range, "", "");
KSYMTAB_FUNC(drm_mm_scan_add_block, "", "");
KSYMTAB_FUNC(drm_mm_scan_remove_block, "", "");
KSYMTAB_FUNC(drm_mm_scan_color_evict, "", "");
KSYMTAB_FUNC(drm_mm_init, "", "");
KSYMTAB_FUNC(drm_mm_takedown, "", "");
KSYMTAB_FUNC(drm_mm_print, "", "");
KSYMTAB_FUNC(drm_mode_config_reset, "", "");
KSYMTAB_FUNC(drmm_mode_config_init, "", "");
KSYMTAB_FUNC(drm_mode_config_cleanup, "", "");
KSYMTAB_FUNC(drm_mode_object_find, "", "");
KSYMTAB_FUNC(drm_mode_object_put, "", "");
KSYMTAB_FUNC(drm_mode_object_get, "", "");
KSYMTAB_FUNC(drm_object_attach_property, "", "");
KSYMTAB_FUNC(drm_object_property_set_value, "", "");
KSYMTAB_FUNC(drm_object_property_get_value, "", "");
KSYMTAB_FUNC(drm_object_property_get_default_value, "", "");
KSYMTAB_FUNC(drm_mode_debug_printmodeline, "", "");
KSYMTAB_FUNC(drm_mode_create, "", "");
KSYMTAB_FUNC(drm_mode_destroy, "", "");
KSYMTAB_FUNC(drm_mode_probed_add, "", "");
KSYMTAB_FUNC(drm_analog_tv_mode, "", "");
KSYMTAB_FUNC(drm_cvt_mode, "", "");
KSYMTAB_FUNC(drm_gtf_mode_complex, "", "");
KSYMTAB_FUNC(drm_gtf_mode, "", "");
KSYMTAB_FUNC(drm_display_mode_from_videomode, "_gpl", "");
KSYMTAB_FUNC(drm_display_mode_to_videomode, "_gpl", "");
KSYMTAB_FUNC(drm_bus_flags_from_videomode, "_gpl", "");
KSYMTAB_FUNC(of_get_drm_display_mode, "_gpl", "");
KSYMTAB_FUNC(of_get_drm_panel_display_mode, "_gpl", "");
KSYMTAB_FUNC(drm_mode_set_name, "", "");
KSYMTAB_FUNC(drm_mode_vrefresh, "", "");
KSYMTAB_FUNC(drm_mode_get_hv_timing, "", "");
KSYMTAB_FUNC(drm_mode_set_crtcinfo, "", "");
KSYMTAB_FUNC(drm_mode_copy, "", "");
KSYMTAB_FUNC(drm_mode_init, "", "");
KSYMTAB_FUNC(drm_mode_duplicate, "", "");
KSYMTAB_FUNC(drm_mode_match, "", "");
KSYMTAB_FUNC(drm_mode_equal, "", "");
KSYMTAB_FUNC(drm_mode_equal_no_clocks, "", "");
KSYMTAB_FUNC(drm_mode_equal_no_clocks_no_stereo, "", "");
KSYMTAB_FUNC(drm_mode_validate_driver, "", "");
KSYMTAB_FUNC(drm_mode_validate_size, "", "");
KSYMTAB_FUNC(drm_mode_validate_ycbcr420, "", "");
KSYMTAB_FUNC(drm_mode_prune_invalid, "", "");
KSYMTAB_FUNC(drm_mode_sort, "", "");
KSYMTAB_FUNC(drm_connector_list_update, "", "");
KSYMTAB_FUNC(drm_mode_parse_command_line_for_connector, "", "");
KSYMTAB_FUNC(drm_mode_create_from_cmdline_mode, "", "");
KSYMTAB_FUNC(drm_mode_is_420_only, "", "");
KSYMTAB_FUNC(drm_mode_is_420_also, "", "");
KSYMTAB_FUNC(drm_mode_is_420, "", "");
KSYMTAB_FUNC(drm_set_preferred_mode, "", "");
KSYMTAB_FUNC(drm_modeset_lock_all, "", "");
KSYMTAB_FUNC(drm_modeset_unlock_all, "", "");
KSYMTAB_FUNC(drm_warn_on_modeset_not_all_locked, "", "");
KSYMTAB_FUNC(drm_modeset_acquire_init, "", "");
KSYMTAB_FUNC(drm_modeset_acquire_fini, "", "");
KSYMTAB_FUNC(drm_modeset_drop_locks, "", "");
KSYMTAB_FUNC(drm_modeset_backoff, "", "");
KSYMTAB_FUNC(drm_modeset_lock_init, "", "");
KSYMTAB_FUNC(drm_modeset_lock, "", "");
KSYMTAB_FUNC(drm_modeset_lock_single_interruptible, "", "");
KSYMTAB_FUNC(drm_modeset_unlock, "", "");
KSYMTAB_FUNC(drm_modeset_lock_all_ctx, "", "");
KSYMTAB_FUNC(drm_universal_plane_init, "", "");
KSYMTAB_FUNC(__drmm_universal_plane_alloc, "", "");
KSYMTAB_FUNC(__drm_universal_plane_alloc, "", "");
KSYMTAB_FUNC(drm_plane_cleanup, "", "");
KSYMTAB_FUNC(drm_plane_from_index, "", "");
KSYMTAB_FUNC(drm_plane_force_disable, "", "");
KSYMTAB_FUNC(drm_mode_plane_set_obj_prop, "", "");
KSYMTAB_FUNC(drm_plane_has_format, "", "");
KSYMTAB_FUNC(drm_any_plane_has_format, "", "");
KSYMTAB_FUNC(drm_plane_enable_fb_damage_clips, "", "");
KSYMTAB_FUNC(drm_plane_get_damage_clips_count, "", "");
KSYMTAB_FUNC(drm_plane_get_damage_clips, "", "");
KSYMTAB_FUNC(drm_plane_create_scaling_filter_property, "", "");
KSYMTAB_FUNC(drm_plane_add_size_hints_property, "", "");
KSYMTAB_FUNC(drm_gem_dmabuf_export, "", "");
KSYMTAB_FUNC(drm_gem_dmabuf_release, "", "");
KSYMTAB_FUNC(drm_gem_prime_fd_to_handle, "", "");
KSYMTAB_FUNC(drm_gem_prime_handle_to_dmabuf, "", "");
KSYMTAB_FUNC(drm_gem_prime_handle_to_fd, "", "");
KSYMTAB_FUNC(drm_gem_map_attach, "", "");
KSYMTAB_FUNC(drm_gem_map_detach, "", "");
KSYMTAB_FUNC(drm_gem_map_dma_buf, "", "");
KSYMTAB_FUNC(drm_gem_unmap_dma_buf, "", "");
KSYMTAB_FUNC(drm_gem_dmabuf_vmap, "", "");
KSYMTAB_FUNC(drm_gem_dmabuf_vunmap, "", "");
KSYMTAB_FUNC(drm_gem_prime_mmap, "", "");
KSYMTAB_FUNC(drm_gem_dmabuf_mmap, "", "");
KSYMTAB_FUNC(drm_prime_pages_to_sg, "", "");
KSYMTAB_FUNC(drm_prime_get_contiguous_size, "", "");
KSYMTAB_FUNC(drm_gem_prime_export, "", "");
KSYMTAB_FUNC(drm_gem_prime_import_dev, "", "");
KSYMTAB_FUNC(drm_gem_prime_import, "", "");
KSYMTAB_FUNC(drm_prime_sg_to_page_array, "", "");
KSYMTAB_FUNC(drm_prime_sg_to_dma_addr_array, "", "");
KSYMTAB_FUNC(drm_prime_gem_destroy, "", "");
KSYMTAB_DATA(__drm_debug, "", "");
KSYMTAB_FUNC(__drm_puts_coredump, "", "");
KSYMTAB_FUNC(__drm_printfn_coredump, "", "");
KSYMTAB_FUNC(__drm_puts_seq_file, "", "");
KSYMTAB_FUNC(__drm_printfn_seq_file, "", "");
KSYMTAB_FUNC(__drm_printfn_info, "", "");
KSYMTAB_FUNC(__drm_printfn_dbg, "", "");
KSYMTAB_FUNC(__drm_printfn_err, "", "");
KSYMTAB_FUNC(drm_puts, "", "");
KSYMTAB_FUNC(drm_printf, "", "");
KSYMTAB_FUNC(drm_print_bits, "", "");
KSYMTAB_FUNC(drm_dev_printk, "", "");
KSYMTAB_FUNC(__drm_dev_dbg, "", "");
KSYMTAB_FUNC(__drm_err, "", "");
KSYMTAB_FUNC(drm_print_regset32, "", "");
KSYMTAB_FUNC(drm_property_create, "", "");
KSYMTAB_FUNC(drm_property_create_enum, "", "");
KSYMTAB_FUNC(drm_property_create_bitmask, "", "");
KSYMTAB_FUNC(drm_property_create_range, "", "");
KSYMTAB_FUNC(drm_property_create_signed_range, "", "");
KSYMTAB_FUNC(drm_property_create_object, "", "");
KSYMTAB_FUNC(drm_property_create_bool, "", "");
KSYMTAB_FUNC(drm_property_add_enum, "", "");
KSYMTAB_FUNC(drm_property_destroy, "", "");
KSYMTAB_FUNC(drm_property_create_blob, "", "");
KSYMTAB_FUNC(drm_property_blob_put, "", "");
KSYMTAB_FUNC(drm_property_blob_get, "", "");
KSYMTAB_FUNC(drm_property_lookup_blob, "", "");
KSYMTAB_FUNC(drm_property_replace_global_blob, "", "");
KSYMTAB_FUNC(drm_property_replace_blob, "", "");
KSYMTAB_FUNC(drm_property_replace_blob_from_id, "", "");
KSYMTAB_FUNC(drm_syncobj_find, "", "");
KSYMTAB_FUNC(drm_syncobj_add_point, "", "");
KSYMTAB_FUNC(drm_syncobj_replace_fence, "", "");
KSYMTAB_FUNC(drm_syncobj_find_fence, "", "");
KSYMTAB_FUNC(drm_syncobj_free, "", "");
KSYMTAB_FUNC(drm_syncobj_create, "", "");
KSYMTAB_FUNC(drm_syncobj_get_handle, "", "");
KSYMTAB_FUNC(drm_syncobj_get_fd, "", "");
KSYMTAB_FUNC(drm_timeout_abs_to_jiffies, "", "");
KSYMTAB_FUNC(drm_sysfs_hotplug_event, "", "");
KSYMTAB_FUNC(drm_sysfs_connector_hotplug_event, "", "");
KSYMTAB_FUNC(drm_sysfs_connector_property_event, "", "");
KSYMTAB_FUNC(drm_class_device_register, "_gpl", "");
KSYMTAB_FUNC(drm_class_device_unregister, "_gpl", "");
KSYMTAB_FUNC(drm_crtc_vblank_crtc, "", "");
KSYMTAB_FUNC(drm_crtc_accurate_vblank_count, "", "");
KSYMTAB_FUNC(drm_vblank_init, "", "");
KSYMTAB_FUNC(drm_dev_has_vblank, "", "");
KSYMTAB_FUNC(drm_crtc_vblank_waitqueue, "", "");
KSYMTAB_FUNC(drm_calc_timestamping_constants, "", "");
KSYMTAB_FUNC(drm_crtc_vblank_helper_get_vblank_timestamp_internal, "", "");
KSYMTAB_FUNC(drm_crtc_vblank_helper_get_vblank_timestamp, "", "");
KSYMTAB_FUNC(drm_crtc_vblank_count, "", "");
KSYMTAB_FUNC(drm_crtc_vblank_count_and_time, "", "");
KSYMTAB_FUNC(drm_crtc_next_vblank_start, "", "");
KSYMTAB_FUNC(drm_crtc_arm_vblank_event, "", "");
KSYMTAB_FUNC(drm_crtc_send_vblank_event, "", "");
KSYMTAB_FUNC(drm_crtc_vblank_get, "", "");
KSYMTAB_FUNC(drm_crtc_vblank_put, "", "");
KSYMTAB_FUNC(drm_wait_one_vblank, "", "");
KSYMTAB_FUNC(drm_crtc_wait_one_vblank, "", "");
KSYMTAB_FUNC(drm_crtc_vblank_off, "", "");
KSYMTAB_FUNC(drm_crtc_vblank_reset, "", "");
KSYMTAB_FUNC(drm_crtc_set_max_vblank_count, "", "");
KSYMTAB_FUNC(drm_crtc_vblank_on_config, "", "");
KSYMTAB_FUNC(drm_crtc_vblank_on, "", "");
KSYMTAB_FUNC(drm_crtc_vblank_restore, "", "");
KSYMTAB_FUNC(drm_handle_vblank, "", "");
KSYMTAB_FUNC(drm_crtc_handle_vblank, "", "");
KSYMTAB_FUNC(drm_vblank_work_schedule, "", "");
KSYMTAB_FUNC(drm_vblank_work_cancel_sync, "", "");
KSYMTAB_FUNC(drm_vblank_work_flush, "", "");
KSYMTAB_FUNC(drm_vblank_work_flush_all, "", "");
KSYMTAB_FUNC(drm_vblank_work_init, "", "");
KSYMTAB_FUNC(drm_vma_offset_manager_init, "", "");
KSYMTAB_FUNC(drm_vma_offset_manager_destroy, "", "");
KSYMTAB_FUNC(drm_vma_offset_lookup_locked, "", "");
KSYMTAB_FUNC(drm_vma_offset_add, "", "");
KSYMTAB_FUNC(drm_vma_offset_remove, "", "");
KSYMTAB_FUNC(drm_vma_node_allow, "", "");
KSYMTAB_FUNC(drm_vma_node_allow_once, "", "");
KSYMTAB_FUNC(drm_vma_node_revoke, "", "");
KSYMTAB_FUNC(drm_vma_node_is_allowed, "", "");
KSYMTAB_FUNC(drm_writeback_connector_init, "", "");
KSYMTAB_FUNC(drm_writeback_connector_init_with_encoder, "", "");
KSYMTAB_FUNC(drm_writeback_prepare_job, "", "");
KSYMTAB_FUNC(drm_writeback_queue_job, "", "");
KSYMTAB_FUNC(drm_writeback_cleanup_job, "", "");
KSYMTAB_FUNC(drm_writeback_signal_completion, "", "");
KSYMTAB_FUNC(drm_writeback_get_out_fence, "", "");
KSYMTAB_FUNC(drm_compat_ioctl, "", "");
KSYMTAB_FUNC(drm_panel_init, "", "");
KSYMTAB_FUNC(drm_panel_add, "", "");
KSYMTAB_FUNC(drm_panel_remove, "", "");
KSYMTAB_FUNC(drm_panel_prepare, "", "");
KSYMTAB_FUNC(drm_panel_unprepare, "", "");
KSYMTAB_FUNC(drm_panel_enable, "", "");
KSYMTAB_FUNC(drm_panel_disable, "", "");
KSYMTAB_FUNC(drm_panel_get_modes, "", "");
KSYMTAB_FUNC(of_drm_find_panel, "", "");
KSYMTAB_FUNC(of_drm_get_panel_orientation, "", "");
KSYMTAB_FUNC(drm_is_panel_follower, "", "");
KSYMTAB_FUNC(drm_panel_add_follower, "", "");
KSYMTAB_FUNC(drm_panel_remove_follower, "", "");
KSYMTAB_FUNC(devm_drm_panel_add_follower, "", "");
KSYMTAB_FUNC(drm_panel_of_backlight, "", "");
KSYMTAB_FUNC(drm_of_crtc_port_mask, "", "");
KSYMTAB_FUNC(drm_of_find_possible_crtcs, "", "");
KSYMTAB_FUNC(drm_of_component_match_add, "_gpl", "");
KSYMTAB_FUNC(drm_of_component_probe, "", "");
KSYMTAB_FUNC(drm_of_encoder_active_endpoint, "_gpl", "");
KSYMTAB_FUNC(drm_of_find_panel_or_bridge, "_gpl", "");
KSYMTAB_FUNC(drm_of_lvds_get_dual_link_pixel_order, "_gpl", "");
KSYMTAB_FUNC(drm_of_lvds_get_data_mapping, "_gpl", "");
KSYMTAB_FUNC(drm_of_get_data_lanes_count, "_gpl", "");
KSYMTAB_FUNC(drm_of_get_data_lanes_count_ep, "_gpl", "");
KSYMTAB_FUNC(drm_of_get_dsi_bus, "_gpl", "");
KSYMTAB_FUNC(drm_debugfs_gpuva_info, "", "");
KSYMTAB_FUNC(drm_debugfs_create_files, "", "");
KSYMTAB_FUNC(drm_debugfs_remove_files, "", "");
KSYMTAB_FUNC(drm_debugfs_add_file, "", "");
KSYMTAB_FUNC(drm_debugfs_add_files, "", "");
KSYMTAB_FUNC(drm_crtc_add_crc_entry, "_gpl", "");

SYMBOL_CRC(devm_aperture_acquire_from_firmware, 0xbf15a88c, "");
SYMBOL_CRC(drm_aperture_remove_conflicting_framebuffers, 0x0668e20e, "");
SYMBOL_CRC(drm_aperture_remove_conflicting_pci_framebuffers, 0x75043804, "");
SYMBOL_CRC(__drm_crtc_commit_free, 0xae277372, "");
SYMBOL_CRC(drm_crtc_commit_wait, 0xa893c9ee, "");
SYMBOL_CRC(drm_atomic_state_default_release, 0x1b835c40, "");
SYMBOL_CRC(drm_atomic_state_init, 0x8933aca7, "");
SYMBOL_CRC(drm_atomic_state_alloc, 0xe34cce37, "");
SYMBOL_CRC(drm_atomic_state_default_clear, 0x5cc3f20f, "");
SYMBOL_CRC(drm_atomic_state_clear, 0x9e667a01, "");
SYMBOL_CRC(__drm_atomic_state_free, 0xb9cad492, "");
SYMBOL_CRC(drm_atomic_get_crtc_state, 0xc249304b, "");
SYMBOL_CRC(drm_atomic_get_plane_state, 0x6564fcf7, "");
SYMBOL_CRC(drm_atomic_private_obj_init, 0xc32fc2a2, "");
SYMBOL_CRC(drm_atomic_private_obj_fini, 0xe84466e0, "");
SYMBOL_CRC(drm_atomic_get_private_obj_state, 0x729fbe07, "");
SYMBOL_CRC(drm_atomic_get_old_private_obj_state, 0xd053f9a3, "");
SYMBOL_CRC(drm_atomic_get_new_private_obj_state, 0x5122bbb4, "");
SYMBOL_CRC(drm_atomic_get_old_connector_for_encoder, 0x2febcb7f, "");
SYMBOL_CRC(drm_atomic_get_new_connector_for_encoder, 0xae9a8968, "");
SYMBOL_CRC(drm_atomic_get_old_crtc_for_encoder, 0x32bf1f65, "");
SYMBOL_CRC(drm_atomic_get_new_crtc_for_encoder, 0x38edb777, "");
SYMBOL_CRC(drm_atomic_get_connector_state, 0x55a4ffb1, "");
SYMBOL_CRC(drm_atomic_get_bridge_state, 0x3cf709fb, "");
SYMBOL_CRC(drm_atomic_get_old_bridge_state, 0x430e2391, "");
SYMBOL_CRC(drm_atomic_get_new_bridge_state, 0xb0bd0071, "");
SYMBOL_CRC(drm_atomic_add_encoder_bridges, 0xf1330293, "");
SYMBOL_CRC(drm_atomic_add_affected_connectors, 0xf5816bdf, "");
SYMBOL_CRC(drm_atomic_add_affected_planes, 0x4fdd05f6, "");
SYMBOL_CRC(drm_atomic_check_only, 0x33fdecdf, "");
SYMBOL_CRC(drm_atomic_commit, 0xc8749d2c, "");
SYMBOL_CRC(drm_atomic_nonblocking_commit, 0x6ee2e645, "");
SYMBOL_CRC(__drm_atomic_helper_disable_plane, 0x880046f7, "");
SYMBOL_CRC(__drm_atomic_helper_set_config, 0x1cb81680, "");
SYMBOL_CRC(drm_atomic_print_new_state, 0x3019c230, "");
SYMBOL_CRC(drm_state_dump, 0x99988d32, "");
SYMBOL_CRC(drm_atomic_set_mode_for_crtc, 0x0feba6af, "");
SYMBOL_CRC(drm_atomic_set_mode_prop_for_crtc, 0x55b39a6d, "");
SYMBOL_CRC(drm_atomic_set_crtc_for_plane, 0x0a59e88d, "");
SYMBOL_CRC(drm_atomic_set_fb_for_plane, 0xfaae72a7, "");
SYMBOL_CRC(drm_atomic_set_crtc_for_connector, 0xe4cb11d3, "");
SYMBOL_CRC(drm_is_current_master, 0x5f7fe38f, "");
SYMBOL_CRC(drm_master_get, 0x44a560f0, "");
SYMBOL_CRC(drm_file_get_master, 0x246b3b77, "");
SYMBOL_CRC(drm_master_put, 0xb9cb3931, "");
SYMBOL_CRC(drm_master_internal_acquire, 0x57b8e2f8, "");
SYMBOL_CRC(drm_master_internal_release, 0x11d750a0, "");
SYMBOL_CRC(drm_plane_create_alpha_property, 0xb68d01f8, "");
SYMBOL_CRC(drm_plane_create_rotation_property, 0xebbd2bfe, "");
SYMBOL_CRC(drm_connector_create_rotation_property, 0xe64eb1bc, "");
SYMBOL_CRC(drm_rotation_simplify, 0xdf666902, "");
SYMBOL_CRC(drm_plane_create_zpos_property, 0x259d699e, "");
SYMBOL_CRC(drm_plane_create_zpos_immutable_property, 0xfddc23c8, "");
SYMBOL_CRC(drm_atomic_normalize_zpos, 0xdb7582e3, "");
SYMBOL_CRC(drm_plane_create_blend_mode_property, 0xf9c0e65b, "");
SYMBOL_CRC(drm_bridge_add, 0xb96f2e38, "");
SYMBOL_CRC(devm_drm_bridge_add, 0x581a702d, "");
SYMBOL_CRC(drm_bridge_remove, 0x41a8eb1d, "");
SYMBOL_CRC(drm_bridge_attach, 0x67b3f5eb, "");
SYMBOL_CRC(drm_bridge_chain_mode_valid, 0xc95a9782, "");
SYMBOL_CRC(drm_bridge_chain_mode_set, 0x41b746d3, "");
SYMBOL_CRC(drm_atomic_bridge_chain_disable, 0x669926a6, "");
SYMBOL_CRC(drm_atomic_bridge_chain_post_disable, 0x06b6f6e4, "");
SYMBOL_CRC(drm_atomic_bridge_chain_pre_enable, 0x92c12440, "");
SYMBOL_CRC(drm_atomic_bridge_chain_enable, 0x62df097a, "");
SYMBOL_CRC(drm_atomic_bridge_chain_check, 0x14945706, "");
SYMBOL_CRC(drm_bridge_detect, 0x6f071d9f, "_gpl");
SYMBOL_CRC(drm_bridge_get_modes, 0x6fd6ed07, "_gpl");
SYMBOL_CRC(drm_bridge_edid_read, 0x53ac44d8, "_gpl");
SYMBOL_CRC(drm_bridge_hpd_enable, 0x146f2a12, "_gpl");
SYMBOL_CRC(drm_bridge_hpd_disable, 0x44ac2c3b, "_gpl");
SYMBOL_CRC(drm_bridge_hpd_notify, 0xa4015b15, "_gpl");
SYMBOL_CRC(of_drm_find_bridge, 0xb2a10cc3, "");
SYMBOL_CRC(drm_clflush_pages, 0x5dd34f7b, "");
SYMBOL_CRC(drm_clflush_sg, 0x69e1bf40, "");
SYMBOL_CRC(drm_clflush_virt_range, 0x0a72f765, "");
SYMBOL_CRC(drm_need_swiotlb, 0xb6127243, "");
SYMBOL_CRC(drm_memcpy_from_wc, 0xa38c4c94, "");
SYMBOL_CRC(drm_client_init, 0x4b70fd73, "");
SYMBOL_CRC(drm_client_register, 0x0e7840f0, "");
SYMBOL_CRC(drm_client_release, 0xdbc0a41a, "");
SYMBOL_CRC(drm_client_dev_unregister, 0x46e247cf, "");
SYMBOL_CRC(drm_client_dev_hotplug, 0x11a4f26f, "");
SYMBOL_CRC(drm_client_buffer_vmap_local, 0x5c5ffa7e, "");
SYMBOL_CRC(drm_client_buffer_vunmap_local, 0x29f99752, "");
SYMBOL_CRC(drm_client_buffer_vmap, 0xce496ae9, "");
SYMBOL_CRC(drm_client_buffer_vunmap, 0xe067803e, "");
SYMBOL_CRC(drm_client_framebuffer_create, 0x80cbf03c, "");
SYMBOL_CRC(drm_client_framebuffer_delete, 0x93f33c2c, "");
SYMBOL_CRC(drm_client_framebuffer_flush, 0x97440496, "");
SYMBOL_CRC(drm_client_modeset_probe, 0xd3d7f574, "");
SYMBOL_CRC(drm_client_rotation, 0x82294eb4, "");
SYMBOL_CRC(drm_client_modeset_check, 0x86c3a05a, "");
SYMBOL_CRC(drm_client_modeset_commit_locked, 0x7936ad9e, "");
SYMBOL_CRC(drm_client_modeset_commit, 0x9af61c58, "");
SYMBOL_CRC(drm_client_modeset_dpms, 0xa1f4a5ea, "");
SYMBOL_CRC(drm_color_ctm_s31_32_to_qm_n, 0xad4e902b, "");
SYMBOL_CRC(drm_crtc_enable_color_mgmt, 0x09403bc5, "");
SYMBOL_CRC(drm_mode_crtc_set_gamma_size, 0x19912657, "");
SYMBOL_CRC(drm_plane_create_color_properties, 0x8320da60, "");
SYMBOL_CRC(drm_plane_create_chroma_siting_properties, 0xabb18167, "");
SYMBOL_CRC(drm_color_lut_check, 0x814e83dd, "");
SYMBOL_CRC(drm_get_connector_type_name, 0xf406e46a, "");
SYMBOL_CRC(drm_connector_init, 0x72262e40, "");
SYMBOL_CRC(drm_connector_init_with_ddc, 0x59eb762c, "");
SYMBOL_CRC(drmm_connector_init, 0xde39282d, "");
SYMBOL_CRC(drmm_connector_hdmi_init, 0x7d2986b7, "");
SYMBOL_CRC(drm_connector_attach_edid_property, 0xf1342597, "");
SYMBOL_CRC(drm_connector_attach_encoder, 0x33b1ad47, "");
SYMBOL_CRC(drm_connector_has_possible_encoder, 0xe8896a88, "");
SYMBOL_CRC(drm_connector_cleanup, 0x1c1ef61e, "");
SYMBOL_CRC(drm_connector_register, 0x13595065, "");
SYMBOL_CRC(drm_connector_unregister, 0xc022b350, "");
SYMBOL_CRC(drm_get_connector_status_name, 0x0fd60df2, "");
SYMBOL_CRC(drm_connector_list_iter_begin, 0x020c78d0, "");
SYMBOL_CRC(drm_connector_list_iter_next, 0xd2d5b51b, "");
SYMBOL_CRC(drm_connector_list_iter_end, 0x80d157b7, "");
SYMBOL_CRC(drm_get_subpixel_order_name, 0x107742a9, "");
SYMBOL_CRC(drm_display_info_set_bus_formats, 0xd4099a0b, "");
SYMBOL_CRC(drm_get_tv_mode_from_name, 0xf095dc96, "");
SYMBOL_CRC(drm_hdmi_connector_get_broadcast_rgb_name, 0x4e966c75, "");
SYMBOL_CRC(drm_hdmi_connector_get_output_format_name, 0x273dc9d6, "");
SYMBOL_CRC(drm_mode_create_dvi_i_properties, 0x49d3f055, "");
SYMBOL_CRC(drm_connector_attach_dp_subconnector_property, 0x694446c3, "");
SYMBOL_CRC(drm_connector_attach_content_type_property, 0x38e34651, "");
SYMBOL_CRC(drm_connector_attach_tv_margin_properties, 0xdcb53bd5, "");
SYMBOL_CRC(drm_mode_create_tv_margin_properties, 0xce1a8ccf, "");
SYMBOL_CRC(drm_mode_create_tv_properties_legacy, 0xec35e584, "");
SYMBOL_CRC(drm_mode_create_tv_properties, 0x50405fae, "");
SYMBOL_CRC(drm_mode_create_scaling_mode_property, 0x35c0be5d, "");
SYMBOL_CRC(drm_connector_attach_vrr_capable_property, 0x4e73568b, "");
SYMBOL_CRC(drm_connector_attach_scaling_mode_property, 0xd7e8ef69, "");
SYMBOL_CRC(drm_mode_create_aspect_ratio_property, 0xff64ddc8, "");
SYMBOL_CRC(drm_mode_create_hdmi_colorspace_property, 0xbc7026ef, "");
SYMBOL_CRC(drm_mode_create_dp_colorspace_property, 0xeec878bf, "");
SYMBOL_CRC(drm_mode_create_content_type_property, 0x738b4785, "");
SYMBOL_CRC(drm_mode_create_suggested_offset_properties, 0x718573fd, "");
SYMBOL_CRC(drm_connector_set_path_property, 0x40d20b8a, "");
SYMBOL_CRC(drm_connector_set_tile_property, 0xdd139768, "");
SYMBOL_CRC(drm_connector_set_link_status_property, 0xd522280a, "");
SYMBOL_CRC(drm_connector_attach_max_bpc_property, 0xbb4796a3, "");
SYMBOL_CRC(drm_connector_attach_hdr_output_metadata_property, 0x6e4f4090, "");
SYMBOL_CRC(drm_connector_attach_broadcast_rgb_property, 0xaac222e6, "");
SYMBOL_CRC(drm_connector_attach_colorspace_property, 0x1a2f679d, "");
SYMBOL_CRC(drm_connector_atomic_hdr_metadata_equal, 0x0ccd9e8a, "");
SYMBOL_CRC(drm_connector_set_vrr_capable_property, 0x56094314, "");
SYMBOL_CRC(drm_connector_set_panel_orientation, 0x3bdb815f, "");
SYMBOL_CRC(drm_connector_set_panel_orientation_with_quirk, 0x4d49bff8, "");
SYMBOL_CRC(drm_connector_set_orientation_from_panel, 0x4fbb7bf5, "");
SYMBOL_CRC(drm_connector_create_privacy_screen_properties, 0x347ad966, "");
SYMBOL_CRC(drm_connector_attach_privacy_screen_properties, 0xe9728933, "");
SYMBOL_CRC(drm_connector_attach_privacy_screen_provider, 0xf2bd80da, "");
SYMBOL_CRC(drm_connector_update_privacy_screen, 0x808d02bc, "");
SYMBOL_CRC(drm_connector_oob_hotplug_event, 0xb52ede5a, "");
SYMBOL_CRC(drm_mode_put_tile_group, 0x9219e811, "");
SYMBOL_CRC(drm_mode_get_tile_group, 0x33c19012, "");
SYMBOL_CRC(drm_mode_create_tile_group, 0xeb5e629e, "");
SYMBOL_CRC(drm_crtc_from_index, 0x761bc31f, "");
SYMBOL_CRC(drm_crtc_init_with_planes, 0x3bfca48b, "");
SYMBOL_CRC(drmm_crtc_init_with_planes, 0x31f4f384, "");
SYMBOL_CRC(__drmm_crtc_alloc_with_planes, 0xcbcc331b, "");
SYMBOL_CRC(drm_crtc_cleanup, 0x6cc02582, "");
SYMBOL_CRC(drm_mode_set_config_internal, 0xc4796efa, "");
SYMBOL_CRC(drm_crtc_check_viewport, 0xa5e9e74b, "");
SYMBOL_CRC(drm_crtc_create_scaling_filter_property, 0x1e7a6127, "");
SYMBOL_CRC(drm_put_dev, 0xc85f90de, "");
SYMBOL_CRC(drm_dev_enter, 0xd64810fa, "");
SYMBOL_CRC(drm_dev_exit, 0xe8a034df, "");
SYMBOL_CRC(drm_dev_unplug, 0x1469dd5f, "");
SYMBOL_CRC(__devm_drm_dev_alloc, 0x2f588f7f, "");
SYMBOL_CRC(drm_dev_alloc, 0x6489e8e1, "");
SYMBOL_CRC(drm_dev_get, 0x696b6055, "");
SYMBOL_CRC(drm_dev_put, 0x23f1bf0f, "");
SYMBOL_CRC(drm_dev_register, 0x1a5edd0c, "");
SYMBOL_CRC(drm_dev_unregister, 0x25ddbd6a, "");
SYMBOL_CRC(drm_edid_header_is_valid, 0x9b9de1c1, "");
SYMBOL_CRC(drm_edid_is_valid, 0xc4200dab, "");
SYMBOL_CRC(drm_edid_valid, 0xb3750192, "");
SYMBOL_CRC(drm_edid_override_connector_update, 0x56e8e625, "");
SYMBOL_CRC(drm_edid_raw, 0x98fed39f, "");
SYMBOL_CRC(drm_edid_alloc, 0x79c00fa2, "");
SYMBOL_CRC(drm_edid_dup, 0xb212dc3e, "");
SYMBOL_CRC(drm_edid_free, 0x397c3d27, "");
SYMBOL_CRC(drm_probe_ddc, 0x2306aa71, "");
SYMBOL_CRC(drm_get_edid, 0x5bfcee0e, "");
SYMBOL_CRC(drm_edid_read_custom, 0xeb049fee, "");
SYMBOL_CRC(drm_edid_read_ddc, 0x2ee70f4e, "");
SYMBOL_CRC(drm_edid_read, 0xa2cc25cc, "");
SYMBOL_CRC(drm_edid_get_product_id, 0x38d55d21, "");
SYMBOL_CRC(drm_edid_print_product_id, 0xb2f44400, "");
SYMBOL_CRC(drm_edid_get_panel_id, 0xe75a9a81, "");
SYMBOL_CRC(drm_edid_read_base_block, 0x4f1c3a83, "");
SYMBOL_CRC(drm_get_edid_switcheroo, 0xa249f0a1, "");
SYMBOL_CRC(drm_edid_read_switcheroo, 0x1fd7ecd9, "");
SYMBOL_CRC(drm_edid_duplicate, 0x5f7137ba, "");
SYMBOL_CRC(drm_mode_find_dmt, 0x1ea19ec1, "");
SYMBOL_CRC(drm_match_cea_mode, 0x9b285573, "");
SYMBOL_CRC(drm_display_mode_from_cea_vic, 0xfa6daaf4, "");
SYMBOL_CRC(drm_edid_match, 0x05eb4392, "");
SYMBOL_CRC(drm_edid_get_monitor_name, 0x5e5128bf, "");
SYMBOL_CRC(drm_edid_to_sad, 0x4124e206, "");
SYMBOL_CRC(drm_edid_to_speaker_allocation, 0x47e22e1f, "");
SYMBOL_CRC(drm_av_sync_delay, 0x3657f265, "");
SYMBOL_CRC(drm_detect_hdmi_monitor, 0xa44eb44e, "");
SYMBOL_CRC(drm_detect_monitor_audio, 0xe4116245, "");
SYMBOL_CRC(drm_default_rgb_quant_range, 0x65702bd6, "");
SYMBOL_CRC(drm_edid_connector_update, 0x56ced639, "");
SYMBOL_CRC(drm_edid_connector_add_modes, 0xc6ae8403, "");
SYMBOL_CRC(drm_connector_update_edid_property, 0x836e0a71, "");
SYMBOL_CRC(drm_add_edid_modes, 0x097a7aa9, "");
SYMBOL_CRC(drm_add_modes_noedid, 0x3afa3628, "");
SYMBOL_CRC(drm_hdmi_avi_infoframe_from_display_mode, 0x39edec18, "");
SYMBOL_CRC(drm_hdmi_avi_infoframe_quant_range, 0xca2a112f, "");
SYMBOL_CRC(drm_hdmi_vendor_infoframe_from_display_mode, 0x5141f6b7, "");
SYMBOL_CRC(drm_edid_is_digital, 0xc518d486, "");
SYMBOL_CRC(drm_eld_sad_get, 0xe8fa400a, "");
SYMBOL_CRC(drm_eld_sad_set, 0xc53a8214, "");
SYMBOL_CRC(drm_encoder_init, 0xc85dc5c6, "");
SYMBOL_CRC(drm_encoder_cleanup, 0xc6acd46e, "");
SYMBOL_CRC(__drmm_encoder_alloc, 0x67db48ab, "");
SYMBOL_CRC(drmm_encoder_init, 0x0195c407, "");
SYMBOL_CRC(drm_open, 0xf3695ed3, "");
SYMBOL_CRC(drm_release, 0xbe0bc941, "");
SYMBOL_CRC(drm_release_noglobal, 0x6f59f976, "");
SYMBOL_CRC(drm_read, 0x86c1af4e, "");
SYMBOL_CRC(drm_poll, 0x4fbf9f6f, "");
SYMBOL_CRC(drm_event_reserve_init_locked, 0x38a7ab46, "");
SYMBOL_CRC(drm_event_reserve_init, 0xd3853da7, "");
SYMBOL_CRC(drm_event_cancel_free, 0x89e35e5d, "");
SYMBOL_CRC(drm_send_event_timestamp_locked, 0x052b219d, "");
SYMBOL_CRC(drm_send_event_locked, 0x76b6fa6b, "");
SYMBOL_CRC(drm_send_event, 0x48bfe508, "");
SYMBOL_CRC(drm_print_memory_stats, 0x9bfc9dc7, "");
SYMBOL_CRC(drm_show_memory_stats, 0x1b96500d, "");
SYMBOL_CRC(drm_show_fdinfo, 0x2b64a2e4, "");
SYMBOL_CRC(drm_mode_legacy_fb_format, 0x29f078d1, "");
SYMBOL_CRC(drm_driver_legacy_fb_format, 0x711c02a8, "");
SYMBOL_CRC(drm_driver_color_mode_format, 0xc93a6fac, "");
SYMBOL_CRC(drm_format_info, 0x55eb38da, "");
SYMBOL_CRC(drm_get_format_info, 0x2f29c8ad, "");
SYMBOL_CRC(drm_format_info_block_width, 0x74fc6fbd, "");
SYMBOL_CRC(drm_format_info_block_height, 0x982d09b3, "");
SYMBOL_CRC(drm_format_info_bpp, 0xe633a4cd, "");
SYMBOL_CRC(drm_format_info_min_pitch, 0x6910e4cd, "");
SYMBOL_CRC(drm_framebuffer_init, 0x65ec4e9f, "");
SYMBOL_CRC(drm_framebuffer_lookup, 0x9ac626c2, "");
SYMBOL_CRC(drm_framebuffer_unregister_private, 0xb2ed95be, "");
SYMBOL_CRC(drm_framebuffer_cleanup, 0x8223d997, "");
SYMBOL_CRC(drm_framebuffer_remove, 0x8c4bc49d, "");
SYMBOL_CRC(drm_gem_object_init_with_mnt, 0x71786abc, "");
SYMBOL_CRC(drm_gem_object_init, 0x19e685ab, "");
SYMBOL_CRC(drm_gem_private_object_init, 0xdd1c0e8f, "");
SYMBOL_CRC(drm_gem_private_object_fini, 0xa850e0f7, "");
SYMBOL_CRC(drm_gem_handle_delete, 0xef947f40, "");
SYMBOL_CRC(drm_gem_dumb_map_offset, 0xf9cfdafc, "_gpl");
SYMBOL_CRC(drm_gem_handle_create, 0xd9a86d77, "");
SYMBOL_CRC(drm_gem_free_mmap_offset, 0x100c8f43, "");
SYMBOL_CRC(drm_gem_create_mmap_offset_size, 0x31af80c6, "");
SYMBOL_CRC(drm_gem_create_mmap_offset, 0xc02bd205, "");
SYMBOL_CRC(drm_gem_get_pages, 0xee65e5d8, "");
SYMBOL_CRC(drm_gem_put_pages, 0x08f4b53a, "");
SYMBOL_CRC(drm_gem_objects_lookup, 0xeaf5ef6c, "");
SYMBOL_CRC(drm_gem_object_lookup, 0x63ec7918, "");
SYMBOL_CRC(drm_gem_dma_resv_wait, 0xde84f588, "");
SYMBOL_CRC(drm_gem_object_release, 0x313720fa, "");
SYMBOL_CRC(drm_gem_object_free, 0xd680a377, "");
SYMBOL_CRC(drm_gem_vm_open, 0x94784239, "");
SYMBOL_CRC(drm_gem_vm_close, 0x4b391e16, "");
SYMBOL_CRC(drm_gem_mmap_obj, 0x21a6bc82, "");
SYMBOL_CRC(drm_gem_mmap, 0x1b856312, "");
SYMBOL_CRC(drm_gem_vmap, 0x11433b41, "");
SYMBOL_CRC(drm_gem_vunmap, 0x166c2dd9, "");
SYMBOL_CRC(drm_gem_lock, 0x885111d7, "");
SYMBOL_CRC(drm_gem_unlock, 0x12fafb70, "");
SYMBOL_CRC(drm_gem_vmap_unlocked, 0x62677e0f, "");
SYMBOL_CRC(drm_gem_vunmap_unlocked, 0x8d0edf48, "");
SYMBOL_CRC(drm_gem_lock_reservations, 0xd4394724, "");
SYMBOL_CRC(drm_gem_unlock_reservations, 0x1fc8ab7e, "");
SYMBOL_CRC(drm_gem_lru_init, 0xa956955b, "");
SYMBOL_CRC(drm_gem_lru_remove, 0x91c16a04, "");
SYMBOL_CRC(drm_gem_lru_move_tail_locked, 0x2e55f244, "");
SYMBOL_CRC(drm_gem_lru_move_tail, 0x0e2469af, "");
SYMBOL_CRC(drm_gem_lru_scan, 0x7a5559a5, "");
SYMBOL_CRC(drm_gem_evict, 0xf57abf24, "");
SYMBOL_CRC(drm_noop, 0x6524c1ce, "");
SYMBOL_CRC(drm_invalid_op, 0x21062c64, "");
SYMBOL_CRC(drm_ioctl_kernel, 0xefef9b52, "");
SYMBOL_CRC(drm_ioctl, 0xff10c4b3, "");
SYMBOL_CRC(drm_ioctl_flags, 0x57b6efe3, "");
SYMBOL_CRC(__drmm_add_action, 0xd00f6e48, "");
SYMBOL_CRC(__drmm_add_action_or_reset, 0xcf01bd2a, "");
SYMBOL_CRC(drmm_release_action, 0xa580a87e, "");
SYMBOL_CRC(drmm_kmalloc, 0xa73b5450, "");
SYMBOL_CRC(drmm_kstrdup, 0xf849ef55, "_gpl");
SYMBOL_CRC(drmm_kfree, 0xea97a3b5, "");
SYMBOL_CRC(__drmm_mutex_release, 0x999c6f95, "");
SYMBOL_CRC(__drm_mm_interval_first, 0x25daad93, "");
SYMBOL_CRC(drm_mm_reserve_node, 0x2754dad8, "");
SYMBOL_CRC(drm_mm_insert_node_in_range, 0xb4032484, "");
SYMBOL_CRC(drm_mm_remove_node, 0x4b7ebf95, "");
SYMBOL_CRC(drm_mm_scan_init_with_range, 0x2a962499, "");
SYMBOL_CRC(drm_mm_scan_add_block, 0x2183c08c, "");
SYMBOL_CRC(drm_mm_scan_remove_block, 0x5f7985a5, "");
SYMBOL_CRC(drm_mm_scan_color_evict, 0xdf3f760d, "");
SYMBOL_CRC(drm_mm_init, 0xf0517d7a, "");
SYMBOL_CRC(drm_mm_takedown, 0x57698a50, "");
SYMBOL_CRC(drm_mm_print, 0x384b280d, "");
SYMBOL_CRC(drm_mode_config_reset, 0xbbec3e41, "");
SYMBOL_CRC(drmm_mode_config_init, 0x4b3f8125, "");
SYMBOL_CRC(drm_mode_config_cleanup, 0x4b376971, "");
SYMBOL_CRC(drm_mode_object_find, 0xacb3a5e1, "");
SYMBOL_CRC(drm_mode_object_put, 0xcc9e6d37, "");
SYMBOL_CRC(drm_mode_object_get, 0xedbbf41e, "");
SYMBOL_CRC(drm_object_attach_property, 0x9ee3e45a, "");
SYMBOL_CRC(drm_object_property_set_value, 0xa78c7a46, "");
SYMBOL_CRC(drm_object_property_get_value, 0x50af3819, "");
SYMBOL_CRC(drm_object_property_get_default_value, 0x022ac1a6, "");
SYMBOL_CRC(drm_mode_debug_printmodeline, 0x2ed3c600, "");
SYMBOL_CRC(drm_mode_create, 0x33c0a193, "");
SYMBOL_CRC(drm_mode_destroy, 0xfc58f7a6, "");
SYMBOL_CRC(drm_mode_probed_add, 0x595ea9b6, "");
SYMBOL_CRC(drm_analog_tv_mode, 0xe3406e6c, "");
SYMBOL_CRC(drm_cvt_mode, 0x3999ecfb, "");
SYMBOL_CRC(drm_gtf_mode_complex, 0xa8855440, "");
SYMBOL_CRC(drm_gtf_mode, 0x475d63fe, "");
SYMBOL_CRC(drm_display_mode_from_videomode, 0x66cf2f64, "_gpl");
SYMBOL_CRC(drm_display_mode_to_videomode, 0xfe9f72f3, "_gpl");
SYMBOL_CRC(drm_bus_flags_from_videomode, 0xad885165, "_gpl");
SYMBOL_CRC(of_get_drm_display_mode, 0x886de11b, "_gpl");
SYMBOL_CRC(of_get_drm_panel_display_mode, 0x9237c7ed, "_gpl");
SYMBOL_CRC(drm_mode_set_name, 0x4a35d30d, "");
SYMBOL_CRC(drm_mode_vrefresh, 0xf1b5340a, "");
SYMBOL_CRC(drm_mode_get_hv_timing, 0x4403a9c3, "");
SYMBOL_CRC(drm_mode_set_crtcinfo, 0x4575a0ca, "");
SYMBOL_CRC(drm_mode_copy, 0x9ce050be, "");
SYMBOL_CRC(drm_mode_init, 0xcdb99cc9, "");
SYMBOL_CRC(drm_mode_duplicate, 0x39439cdf, "");
SYMBOL_CRC(drm_mode_match, 0x9b95c885, "");
SYMBOL_CRC(drm_mode_equal, 0x0d9b4753, "");
SYMBOL_CRC(drm_mode_equal_no_clocks, 0x3ab87110, "");
SYMBOL_CRC(drm_mode_equal_no_clocks_no_stereo, 0x24d124ac, "");
SYMBOL_CRC(drm_mode_validate_driver, 0x3448ac26, "");
SYMBOL_CRC(drm_mode_validate_size, 0xd7a9cf42, "");
SYMBOL_CRC(drm_mode_validate_ycbcr420, 0x0100d8f3, "");
SYMBOL_CRC(drm_mode_prune_invalid, 0x4e27ac98, "");
SYMBOL_CRC(drm_mode_sort, 0xf1421d13, "");
SYMBOL_CRC(drm_connector_list_update, 0x15b36373, "");
SYMBOL_CRC(drm_mode_parse_command_line_for_connector, 0x017785ff, "");
SYMBOL_CRC(drm_mode_create_from_cmdline_mode, 0xc0073dca, "");
SYMBOL_CRC(drm_mode_is_420_only, 0xe7a9ecea, "");
SYMBOL_CRC(drm_mode_is_420_also, 0xace169b3, "");
SYMBOL_CRC(drm_mode_is_420, 0x784d6883, "");
SYMBOL_CRC(drm_set_preferred_mode, 0xca313957, "");
SYMBOL_CRC(drm_modeset_lock_all, 0x77874cab, "");
SYMBOL_CRC(drm_modeset_unlock_all, 0xb40d49b1, "");
SYMBOL_CRC(drm_warn_on_modeset_not_all_locked, 0x5504837a, "");
SYMBOL_CRC(drm_modeset_acquire_init, 0x03e321b4, "");
SYMBOL_CRC(drm_modeset_acquire_fini, 0x0b406b22, "");
SYMBOL_CRC(drm_modeset_drop_locks, 0xd6d0ba9a, "");
SYMBOL_CRC(drm_modeset_backoff, 0xa2338a4c, "");
SYMBOL_CRC(drm_modeset_lock_init, 0x6124efb0, "");
SYMBOL_CRC(drm_modeset_lock, 0x37bce600, "");
SYMBOL_CRC(drm_modeset_lock_single_interruptible, 0x335a4394, "");
SYMBOL_CRC(drm_modeset_unlock, 0xe1865c09, "");
SYMBOL_CRC(drm_modeset_lock_all_ctx, 0x44d00814, "");
SYMBOL_CRC(drm_universal_plane_init, 0xafae9b14, "");
SYMBOL_CRC(__drmm_universal_plane_alloc, 0x8844626d, "");
SYMBOL_CRC(__drm_universal_plane_alloc, 0x8ec9b41c, "");
SYMBOL_CRC(drm_plane_cleanup, 0x19c3261a, "");
SYMBOL_CRC(drm_plane_from_index, 0x05439be1, "");
SYMBOL_CRC(drm_plane_force_disable, 0xaed1baf2, "");
SYMBOL_CRC(drm_mode_plane_set_obj_prop, 0x2125de89, "");
SYMBOL_CRC(drm_plane_has_format, 0x5aa664a2, "");
SYMBOL_CRC(drm_any_plane_has_format, 0x89a76477, "");
SYMBOL_CRC(drm_plane_enable_fb_damage_clips, 0x85b256c9, "");
SYMBOL_CRC(drm_plane_get_damage_clips_count, 0xdf5f80a2, "");
SYMBOL_CRC(drm_plane_get_damage_clips, 0xc251db6d, "");
SYMBOL_CRC(drm_plane_create_scaling_filter_property, 0xf8ddaf62, "");
SYMBOL_CRC(drm_plane_add_size_hints_property, 0x9d2780b9, "");
SYMBOL_CRC(drm_gem_dmabuf_export, 0x1530f213, "");
SYMBOL_CRC(drm_gem_dmabuf_release, 0x897ccb29, "");
SYMBOL_CRC(drm_gem_prime_fd_to_handle, 0xdfd88211, "");
SYMBOL_CRC(drm_gem_prime_handle_to_dmabuf, 0xa5b73ebc, "");
SYMBOL_CRC(drm_gem_prime_handle_to_fd, 0x122c44d3, "");
SYMBOL_CRC(drm_gem_map_attach, 0xcdd294c5, "");
SYMBOL_CRC(drm_gem_map_detach, 0xfc5ed559, "");
SYMBOL_CRC(drm_gem_map_dma_buf, 0x99fa3995, "");
SYMBOL_CRC(drm_gem_unmap_dma_buf, 0xf9da0f8b, "");
SYMBOL_CRC(drm_gem_dmabuf_vmap, 0x0cf890d1, "");
SYMBOL_CRC(drm_gem_dmabuf_vunmap, 0x856e4704, "");
SYMBOL_CRC(drm_gem_prime_mmap, 0x98a99a38, "");
SYMBOL_CRC(drm_gem_dmabuf_mmap, 0x027bf53f, "");
SYMBOL_CRC(drm_prime_pages_to_sg, 0x85d1430b, "");
SYMBOL_CRC(drm_prime_get_contiguous_size, 0xdad9c8b1, "");
SYMBOL_CRC(drm_gem_prime_export, 0x1c4fa376, "");
SYMBOL_CRC(drm_gem_prime_import_dev, 0xe68c3161, "");
SYMBOL_CRC(drm_gem_prime_import, 0xac15c5c1, "");
SYMBOL_CRC(drm_prime_sg_to_page_array, 0x00c45447, "");
SYMBOL_CRC(drm_prime_sg_to_dma_addr_array, 0x4e2a621e, "");
SYMBOL_CRC(drm_prime_gem_destroy, 0x19d9731f, "");
SYMBOL_CRC(__drm_debug, 0x69353664, "");
SYMBOL_CRC(__drm_puts_coredump, 0xc9f4f448, "");
SYMBOL_CRC(__drm_printfn_coredump, 0x95bf149b, "");
SYMBOL_CRC(__drm_puts_seq_file, 0x25b1a326, "");
SYMBOL_CRC(__drm_printfn_seq_file, 0x2140e8a1, "");
SYMBOL_CRC(__drm_printfn_info, 0x4488028a, "");
SYMBOL_CRC(__drm_printfn_dbg, 0x5fafb06f, "");
SYMBOL_CRC(__drm_printfn_err, 0x51a893c2, "");
SYMBOL_CRC(drm_puts, 0x4925085d, "");
SYMBOL_CRC(drm_printf, 0xbc0d826d, "");
SYMBOL_CRC(drm_print_bits, 0x1a01342e, "");
SYMBOL_CRC(drm_dev_printk, 0xa422f13e, "");
SYMBOL_CRC(__drm_dev_dbg, 0x1d6d457d, "");
SYMBOL_CRC(__drm_err, 0xb11ac7a7, "");
SYMBOL_CRC(drm_print_regset32, 0xeba08977, "");
SYMBOL_CRC(drm_property_create, 0xfc9ba928, "");
SYMBOL_CRC(drm_property_create_enum, 0xf59e579e, "");
SYMBOL_CRC(drm_property_create_bitmask, 0x2af3dd9c, "");
SYMBOL_CRC(drm_property_create_range, 0xec82362c, "");
SYMBOL_CRC(drm_property_create_signed_range, 0xb494325e, "");
SYMBOL_CRC(drm_property_create_object, 0x399a645c, "");
SYMBOL_CRC(drm_property_create_bool, 0xe147a6a5, "");
SYMBOL_CRC(drm_property_add_enum, 0x0932a10f, "");
SYMBOL_CRC(drm_property_destroy, 0x47e93edc, "");
SYMBOL_CRC(drm_property_create_blob, 0x419c2ab9, "");
SYMBOL_CRC(drm_property_blob_put, 0xd40855b5, "");
SYMBOL_CRC(drm_property_blob_get, 0x017e59a0, "");
SYMBOL_CRC(drm_property_lookup_blob, 0x20c225a9, "");
SYMBOL_CRC(drm_property_replace_global_blob, 0x0cb4f511, "");
SYMBOL_CRC(drm_property_replace_blob, 0x6bcf157b, "");
SYMBOL_CRC(drm_property_replace_blob_from_id, 0x5f6bf85b, "");
SYMBOL_CRC(drm_syncobj_find, 0x82875c76, "");
SYMBOL_CRC(drm_syncobj_add_point, 0x4c9a4766, "");
SYMBOL_CRC(drm_syncobj_replace_fence, 0x4519d95c, "");
SYMBOL_CRC(drm_syncobj_find_fence, 0x44d29063, "");
SYMBOL_CRC(drm_syncobj_free, 0x1a411479, "");
SYMBOL_CRC(drm_syncobj_create, 0x3a07b6f8, "");
SYMBOL_CRC(drm_syncobj_get_handle, 0xcf7119b4, "");
SYMBOL_CRC(drm_syncobj_get_fd, 0xbeb96505, "");
SYMBOL_CRC(drm_timeout_abs_to_jiffies, 0x50674de7, "");
SYMBOL_CRC(drm_sysfs_hotplug_event, 0xa3bd3018, "");
SYMBOL_CRC(drm_sysfs_connector_hotplug_event, 0xd3a7bbca, "");
SYMBOL_CRC(drm_sysfs_connector_property_event, 0x517737e2, "");
SYMBOL_CRC(drm_class_device_register, 0x0d93ef43, "_gpl");
SYMBOL_CRC(drm_class_device_unregister, 0x34a98ea0, "_gpl");
SYMBOL_CRC(drm_crtc_vblank_crtc, 0x9808e5e8, "");
SYMBOL_CRC(drm_crtc_accurate_vblank_count, 0x1d5e022f, "");
SYMBOL_CRC(drm_vblank_init, 0x86824528, "");
SYMBOL_CRC(drm_dev_has_vblank, 0x4d894f61, "");
SYMBOL_CRC(drm_crtc_vblank_waitqueue, 0x307df343, "");
SYMBOL_CRC(drm_calc_timestamping_constants, 0x69f810a5, "");
SYMBOL_CRC(drm_crtc_vblank_helper_get_vblank_timestamp_internal, 0x2d531cb6, "");
SYMBOL_CRC(drm_crtc_vblank_helper_get_vblank_timestamp, 0x6238fd16, "");
SYMBOL_CRC(drm_crtc_vblank_count, 0x41fb2ab5, "");
SYMBOL_CRC(drm_crtc_vblank_count_and_time, 0x07ffcd67, "");
SYMBOL_CRC(drm_crtc_next_vblank_start, 0x2cff64de, "");
SYMBOL_CRC(drm_crtc_arm_vblank_event, 0xd16c58bb, "");
SYMBOL_CRC(drm_crtc_send_vblank_event, 0x8811271b, "");
SYMBOL_CRC(drm_crtc_vblank_get, 0xb17ab57c, "");
SYMBOL_CRC(drm_crtc_vblank_put, 0xbed82481, "");
SYMBOL_CRC(drm_wait_one_vblank, 0xa033578f, "");
SYMBOL_CRC(drm_crtc_wait_one_vblank, 0xec8a8665, "");
SYMBOL_CRC(drm_crtc_vblank_off, 0x8b938f98, "");
SYMBOL_CRC(drm_crtc_vblank_reset, 0x65cb4ce6, "");
SYMBOL_CRC(drm_crtc_set_max_vblank_count, 0xdb24fd2b, "");
SYMBOL_CRC(drm_crtc_vblank_on_config, 0x874ea225, "");
SYMBOL_CRC(drm_crtc_vblank_on, 0x0a2a3ad6, "");
SYMBOL_CRC(drm_crtc_vblank_restore, 0x24a93645, "");
SYMBOL_CRC(drm_handle_vblank, 0xc280f1d0, "");
SYMBOL_CRC(drm_crtc_handle_vblank, 0x807491f7, "");
SYMBOL_CRC(drm_vblank_work_schedule, 0x6b397306, "");
SYMBOL_CRC(drm_vblank_work_cancel_sync, 0x4a90da8f, "");
SYMBOL_CRC(drm_vblank_work_flush, 0xc560d873, "");
SYMBOL_CRC(drm_vblank_work_flush_all, 0xc8cd69b3, "");
SYMBOL_CRC(drm_vblank_work_init, 0x625775b4, "");
SYMBOL_CRC(drm_vma_offset_manager_init, 0x3c22a4d8, "");
SYMBOL_CRC(drm_vma_offset_manager_destroy, 0x07fb449a, "");
SYMBOL_CRC(drm_vma_offset_lookup_locked, 0xc7910e38, "");
SYMBOL_CRC(drm_vma_offset_add, 0xe8a0e334, "");
SYMBOL_CRC(drm_vma_offset_remove, 0x4831da6e, "");
SYMBOL_CRC(drm_vma_node_allow, 0xc7d04fc5, "");
SYMBOL_CRC(drm_vma_node_allow_once, 0x820ac5c0, "");
SYMBOL_CRC(drm_vma_node_revoke, 0x7b2e2166, "");
SYMBOL_CRC(drm_vma_node_is_allowed, 0x24cf437a, "");
SYMBOL_CRC(drm_writeback_connector_init, 0x5d33ea55, "");
SYMBOL_CRC(drm_writeback_connector_init_with_encoder, 0x4c6df2dc, "");
SYMBOL_CRC(drm_writeback_prepare_job, 0x9b4640b2, "");
SYMBOL_CRC(drm_writeback_queue_job, 0xa42c03f3, "");
SYMBOL_CRC(drm_writeback_cleanup_job, 0xdea65c6d, "");
SYMBOL_CRC(drm_writeback_signal_completion, 0x35f64358, "");
SYMBOL_CRC(drm_writeback_get_out_fence, 0x9f227f72, "");
SYMBOL_CRC(drm_compat_ioctl, 0xe560574b, "");
SYMBOL_CRC(drm_panel_init, 0xe9057ca6, "");
SYMBOL_CRC(drm_panel_add, 0x4e797082, "");
SYMBOL_CRC(drm_panel_remove, 0x10a3bca5, "");
SYMBOL_CRC(drm_panel_prepare, 0xf8db04bb, "");
SYMBOL_CRC(drm_panel_unprepare, 0x2e9cd830, "");
SYMBOL_CRC(drm_panel_enable, 0xac52bed6, "");
SYMBOL_CRC(drm_panel_disable, 0x3dd3a80c, "");
SYMBOL_CRC(drm_panel_get_modes, 0x97356a9e, "");
SYMBOL_CRC(of_drm_find_panel, 0xb6ca627e, "");
SYMBOL_CRC(of_drm_get_panel_orientation, 0x7e7b9899, "");
SYMBOL_CRC(drm_is_panel_follower, 0x6d30b69c, "");
SYMBOL_CRC(drm_panel_add_follower, 0x7346d030, "");
SYMBOL_CRC(drm_panel_remove_follower, 0xfee89c86, "");
SYMBOL_CRC(devm_drm_panel_add_follower, 0xe7f9ba3a, "");
SYMBOL_CRC(drm_panel_of_backlight, 0x0a4e17f1, "");
SYMBOL_CRC(drm_of_crtc_port_mask, 0x41bf517c, "");
SYMBOL_CRC(drm_of_find_possible_crtcs, 0xc6c35f55, "");
SYMBOL_CRC(drm_of_component_match_add, 0xffc55ab6, "_gpl");
SYMBOL_CRC(drm_of_component_probe, 0x17378208, "");
SYMBOL_CRC(drm_of_encoder_active_endpoint, 0x64a581f8, "_gpl");
SYMBOL_CRC(drm_of_find_panel_or_bridge, 0x40601870, "_gpl");
SYMBOL_CRC(drm_of_lvds_get_dual_link_pixel_order, 0x0cbdec50, "_gpl");
SYMBOL_CRC(drm_of_lvds_get_data_mapping, 0xb228c1bd, "_gpl");
SYMBOL_CRC(drm_of_get_data_lanes_count, 0xa4d926a3, "_gpl");
SYMBOL_CRC(drm_of_get_data_lanes_count_ep, 0xf796b4c5, "_gpl");
SYMBOL_CRC(drm_of_get_dsi_bus, 0xba05ec4b, "_gpl");
SYMBOL_CRC(drm_debugfs_gpuva_info, 0xd8289f1a, "");
SYMBOL_CRC(drm_debugfs_create_files, 0x07c82809, "");
SYMBOL_CRC(drm_debugfs_remove_files, 0x192a01f3, "");
SYMBOL_CRC(drm_debugfs_add_file, 0x09a9581e, "");
SYMBOL_CRC(drm_debugfs_add_files, 0xe9ac2838, "");
SYMBOL_CRC(drm_crtc_add_crc_entry, 0xbd3b7352, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x18501080, "anon_inode_getfile" },
	{ 0xef9472a8, "ww_mutex_lock_interruptible" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x92de0f1a, "alloc_anon_inode" },
	{ 0x33448a01, "show_class_attr_string" },
	{ 0x614848f, "kthread_cancel_work_sync" },
	{ 0x28069e4d, "kthread_create_worker" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0xb46bdd83, "kthread_flush_work" },
	{ 0x438717fb, "bpf_trace_run4" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x20978fb9, "idr_find" },
	{ 0x49a2e97f, "param_ops_ulong" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x469438cc, "of_node_put" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x115298b, "shmem_read_folio_gfp" },
	{ 0xa515bee9, "__folio_batch_release" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6ab491b0, "component_master_add_with_match" },
	{ 0x8abd045a, "seq_buf_printf" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x180cd0ba, "trace_raw_output_prep" },
	{ 0xd70e6362, "dma_resv_init" },
	{ 0x2c91e17c, "vm_get_page_prot" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xc8c85086, "sg_free_table" },
	{ 0x8da70093, "dma_resv_wait_timeout" },
	{ 0x22acd2e2, "device_unregister" },
	{ 0x292df2ba, "debugfs_create_symlink" },
	{ 0xca9360b5, "rb_next" },
	{ 0x8b618d08, "overflowuid" },
	{ 0xa50bb103, "__trace_trigger_soft_disabled" },
	{ 0xd3368eb6, "kthread_flush_worker" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6749d53f, "hdmi_vendor_infoframe_init" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x6775d5d3, "class_destroy" },
	{ 0xfbfd5863, "trace_event_printf" },
	{ 0xd0c698d, "of_graph_is_present" },
	{ 0x96848186, "scnprintf" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x3b6df30a, "ww_mutex_unlock" },
	{ 0x16965a52, "device_initialize" },
	{ 0x81539a53, "__kmalloc_node_track_caller_noprof" },
	{ 0x75d0deb9, "nsecs_to_jiffies64" },
	{ 0x3eddda75, "fd_install" },
	{ 0x689067dd, "dma_fence_chain_ops" },
	{ 0x4241833, "of_graph_parse_endpoint" },
	{ 0xe1bafd45, "trace_event_raw_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf39b0a4c, "component_del" },
	{ 0xd4140122, "unmap_mapping_range" },
	{ 0x37a0cba, "kfree" },
	{ 0x4710d394, "iput" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0x697cbeec, "of_node_get" },
	{ 0x3cd4b93b, "of_graph_get_remote_port_parent" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x292837a4, "of_graph_get_remote_port" },
	{ 0xdf84965a, "dma_buf_unmap_attachment_unlocked" },
	{ 0x697ed5f0, "memcpy_and_pad" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x628c0f8f, "dma_fence_add_callback" },
	{ 0x34749417, "synchronize_srcu" },
	{ 0xccaf994e, "dma_fence_set_deadline" },
	{ 0x99ed6ef6, "get_device" },
	{ 0xb3dd23d5, "dma_buf_attach" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0xc26daccf, "class_create_file_ns" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x8b5f7abc, "of_graph_get_endpoint_by_regs" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0xfadfa6c1, "dma_buf_map_attachment_unlocked" },
	{ 0xea427052, "trace_event_buffer_commit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1b9bea23, "ww_mutex_trylock" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xa0f34315, "devm_of_find_backlight" },
	{ 0x50a58b43, "of_get_next_child" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x24d9b335, "dma_max_mapping_size" },
	{ 0x36dc6ece, "put_device" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x68716331, "dma_buf_export" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xa916b694, "strnlen" },
	{ 0xee0118df, "aperture_remove_conflicting_devices" },
	{ 0x13335124, "kthread_queue_work" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x70daa11e, "dma_fence_remove_callback" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xd2a98f1, "folio_mark_dirty" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0xc6cbbc89, "capable" },
	{ 0xcfc9deaf, "atomic_dec_and_mutex_lock" },
	{ 0x9d9e8944, "module_put" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xcb647be8, "sysfs_create_link" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x6fff261f, "__arch_clear_user" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x98555a05, "dma_fence_chain_walk" },
	{ 0xa842f861, "debugfs_lookup" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xbf1e58b, "__task_pid_nr_ns" },
	{ 0x9f37e570, "kobject_uevent_env" },
	{ 0x4ea5d10, "ksize" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0x7472071e, "shmem_file_setup" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3da092b8, "dma_fence_get_stub" },
	{ 0x2e439142, "drm_get_panel_orientation_quirk" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x91ac9254, "perf_trace_run_bpf_submit" },
	{ 0xacceb7d8, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0x669c413b, "_dev_err" },
	{ 0xce807a25, "up_write" },
	{ 0xb7c0f443, "sort" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x5d809a68, "simple_open" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0x7b1a51f0, "device_add" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0x685bb4f9, "sysfs_remove_link" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x5160e785, "pid_task" },
	{ 0xfed6b708, "__srcu_read_lock" },
	{ 0x587b0954, "kvasprintf" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa1d8004a, "videomode_from_timing" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x295427ca, "noop_llseek" },
	{ 0xaacf03c1, "dma_fence_signal" },
	{ 0xf52422, "folio_mark_accessed" },
	{ 0x6bd2fff6, "dma_resv_fini" },
	{ 0x59c02473, "class_create" },
	{ 0x954f099c, "idr_preload" },
	{ 0x7ef4bddc, "__sg_page_iter_next" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x120b336a, "__rb_insert_augmented" },
	{ 0x941da81d, "dma_buf_get" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x239cbd47, "aperture_remove_conflicting_pci_devices" },
	{ 0x3dfbc684, "seq_putc" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x772f9ff8, "ww_mutex_lock" },
	{ 0xfe479535, "trace_event_reg" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x5a86c6d4, "of_property_count_elems_of_size" },
	{ 0x70123581, "dma_buf_put" },
	{ 0xffb7c514, "ida_free" },
	{ 0x3a1aed17, "of_property_read_string" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0x38b95834, "of_graph_get_next_endpoint" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf77555cd, "__memcpy_toio" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x775294d7, "of_device_is_available" },
	{ 0xdeb99119, "dma_fence_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xd3b16307, "of_graph_get_remote_node" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x321cdbf, "of_alias_get_highest_id" },
	{ 0x11089ac7, "_ctype" },
	{ 0x28b118b6, "device_register" },
	{ 0x73f49957, "device_del" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x1ed1c3a3, "sg_alloc_table_from_pages_segment" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x10843d0a, "param_ops_string" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0x4841bdee, "strnchr" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xafcbf702, "component_release_of" },
	{ 0x80d1f8c0, "devm_aperture_acquire_for_platform_device" },
	{ 0xc866ef3f, "init_pseudo" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x745a981, "xa_erase" },
	{ 0x87dbe99f, "check_move_unevictable_folios" },
	{ 0xf2da001e, "bpf_trace_run3" },
	{ 0x661256ad, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4eb2b066, "hdmi_avi_infoframe_init" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x7230beea, "fdget" },
	{ 0x2f828d33, "trace_event_buffer_reserve" },
	{ 0x6485236e, "of_find_mipi_dsi_host_by_node" },
	{ 0x9e2608e, "dma_map_sgtable" },
	{ 0xdc24041b, "kthread_destroy_worker" },
	{ 0x709d9414, "component_match_add_release" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe436e90c, "__dma_fence_unwrap_merge" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0xa6457c89, "hdmi_infoframe_pack" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x1e7e015c, "dentry_open" },
	{ 0xe091c977, "list_sort" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x8f024136, "of_get_videomode" },
	{ 0x418c10ec, "__register_chrdev" },
	{ 0x562dc30, "__sg_page_iter_start" },
	{ 0xb53675e6, "seq_write" },
	{ 0x5d52216e, "platform_bus_type" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x5b3e282f, "xa_store" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc42978eb, "__srcu_read_unlock" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xe36c448e, "of_alias_get_id" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0xba00daa2, "dma_fence_allocate_private_stub" },
	{ 0xd5ea64d7, "dma_buf_detach" },
	{ 0x3daae96c, "dma_fence_signal_timestamp" },
	{ 0xf8e7ec7f, "dma_fence_chain_init" },
	{ 0x10139ad8, "single_release" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x9c97681, "pid_vnr" },
	{ 0xee1f98a6, "sched_set_fifo" },
	{ 0x4f1f923, "of_node_name_eq" },
	{ 0xe7195708, "simple_release_fs" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xe2522eee, "dma_unmap_sg_attrs" },
	{ 0xdec5c540, "__seq_puts" },
	{ 0xa0cf97a, "kill_anon_super" },
	{ 0x10d63cce, "from_kuid_munged" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0xea877266, "component_add" },
	{ 0x764ea5bf, "dma_resv_test_signaled" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0x1e30c885, "shmem_file_setup_with_mnt" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0xcc328a5c, "reservation_ww_class" },
	{ 0x98cf60b3, "strlen" },
	{ 0x77358855, "iomem_resource" },
	{ 0xbb5dd4a, "dma_fence_chain_find_seqno" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x374647f3, "_dev_printk" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x71c90ddc, "single_open" },
	{ 0x349cba85, "strchr" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc10e997, "eventfd_signal_mask" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x46bd5d6e, "video_get_options" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x7155bcf8, "sync_file_get_fence" },
	{ 0xac3274c9, "put_pid" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0xee7eec94, "pci_bus_type" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xd826ad4d, "of_get_display_timing" },
	{ 0x33ff38a4, "class_remove_file_ns" },
	{ 0x847188e8, "krealloc_noprof" },
	{ 0xa579b08a, "simple_pin_fs" },
	{ 0x6b59bc1d, "sync_file_create" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xe3ad3046, "__sg_page_iter_dma_next" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "backlight,drm_panel_orientation_quirks");


MODULE_INFO(srcversion, "8FD4D441202329226A7FF4D");
