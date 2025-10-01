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

KSYMTAB_FUNC(video_device_alloc, "", "");
KSYMTAB_FUNC(video_device_release, "", "");
KSYMTAB_FUNC(video_device_release_empty, "", "");
KSYMTAB_FUNC(video_devdata, "", "");
KSYMTAB_FUNC(v4l2_prio_init, "", "");
KSYMTAB_FUNC(v4l2_prio_change, "", "");
KSYMTAB_FUNC(v4l2_prio_open, "", "");
KSYMTAB_FUNC(v4l2_prio_close, "", "");
KSYMTAB_FUNC(v4l2_prio_max, "", "");
KSYMTAB_FUNC(v4l2_prio_check, "", "");
KSYMTAB_FUNC(__video_register_device, "", "");
KSYMTAB_FUNC(video_unregister_device, "", "");
KSYMTAB_FUNC(video_device_pipeline_start, "_gpl", "");
KSYMTAB_FUNC(__video_device_pipeline_start, "_gpl", "");
KSYMTAB_FUNC(video_device_pipeline_stop, "_gpl", "");
KSYMTAB_FUNC(__video_device_pipeline_stop, "_gpl", "");
KSYMTAB_FUNC(video_device_pipeline_alloc_start, "_gpl", "");
KSYMTAB_FUNC(video_device_pipeline, "_gpl", "");
KSYMTAB_FUNC(v4l2_norm_to_name, "", "");
KSYMTAB_FUNC(v4l2_video_std_frame_period, "", "");
KSYMTAB_FUNC(v4l2_video_std_construct, "", "");
KSYMTAB_DATA(v4l2_field_names, "", "");
KSYMTAB_DATA(v4l2_type_names, "", "");
KSYMTAB_FUNC(v4l_printk_ioctl, "", "");
KSYMTAB_FUNC(video_ioctl2, "", "");
KSYMTAB_FUNC(v4l2_device_register, "_gpl", "");
KSYMTAB_FUNC(v4l2_device_put, "_gpl", "");
KSYMTAB_FUNC(v4l2_device_set_name, "_gpl", "");
KSYMTAB_FUNC(v4l2_device_disconnect, "_gpl", "");
KSYMTAB_FUNC(v4l2_device_unregister, "_gpl", "");
KSYMTAB_FUNC(__v4l2_device_register_subdev, "_gpl", "");
KSYMTAB_FUNC(__v4l2_device_register_subdev_nodes, "_gpl", "");
KSYMTAB_FUNC(v4l2_device_unregister_subdev, "_gpl", "");
KSYMTAB_FUNC(v4l2_fh_init, "_gpl", "");
KSYMTAB_FUNC(v4l2_fh_add, "_gpl", "");
KSYMTAB_FUNC(v4l2_fh_open, "_gpl", "");
KSYMTAB_FUNC(v4l2_fh_del, "_gpl", "");
KSYMTAB_FUNC(v4l2_fh_exit, "_gpl", "");
KSYMTAB_FUNC(v4l2_fh_release, "_gpl", "");
KSYMTAB_FUNC(v4l2_fh_is_singular, "_gpl", "");
KSYMTAB_FUNC(v4l2_event_dequeue, "_gpl", "");
KSYMTAB_FUNC(v4l2_event_queue, "_gpl", "");
KSYMTAB_FUNC(v4l2_event_queue_fh, "_gpl", "");
KSYMTAB_FUNC(v4l2_event_pending, "_gpl", "");
KSYMTAB_FUNC(v4l2_event_wake_all, "_gpl", "");
KSYMTAB_FUNC(v4l2_event_subscribe, "_gpl", "");
KSYMTAB_FUNC(v4l2_event_unsubscribe_all, "_gpl", "");
KSYMTAB_FUNC(v4l2_event_unsubscribe, "_gpl", "");
KSYMTAB_FUNC(v4l2_event_subdev_unsubscribe, "_gpl", "");
KSYMTAB_FUNC(v4l2_src_change_event_subscribe, "_gpl", "");
KSYMTAB_FUNC(v4l2_src_change_event_subdev_subscribe, "_gpl", "");
KSYMTAB_DATA(v4l2_subdev_call_wrappers, "", "");
KSYMTAB_FUNC(v4l2_subdev_get_fwnode_pad_1_to_1, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_link_validate_default, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_link_validate, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_has_pad_interdep, "_gpl", "");
KSYMTAB_FUNC(__v4l2_subdev_state_alloc, "_gpl", "");
KSYMTAB_FUNC(__v4l2_subdev_state_free, "_gpl", "");
KSYMTAB_FUNC(__v4l2_subdev_init_finalize, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_cleanup, "_gpl", "");
KSYMTAB_FUNC(__v4l2_subdev_state_get_format, "_gpl", "");
KSYMTAB_FUNC(__v4l2_subdev_state_get_crop, "_gpl", "");
KSYMTAB_FUNC(__v4l2_subdev_state_get_compose, "_gpl", "");
KSYMTAB_FUNC(__v4l2_subdev_state_get_interval, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_get_fmt, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_get_frame_interval, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_set_routing, "_gpl", "");
KSYMTAB_FUNC(__v4l2_subdev_next_active_route, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_set_routing_with_fmt, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_routing_find_opposite_end, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_state_get_opposite_stream_format, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_state_xlate_streams, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_routing_validate, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_enable_streams, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_disable_streams, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_s_stream_helper, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_init, "", "");
KSYMTAB_FUNC(v4l2_subdev_notify_event, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_is_streaming, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_get_privacy_led, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_put_privacy_led, "_gpl", "");
KSYMTAB_FUNC(v4l2_ctrl_query_fill, "", "");
KSYMTAB_FUNC(v4l_bound_align_image, "_gpl", "");
KSYMTAB_FUNC(__v4l2_find_nearest_size, "_gpl", "");
KSYMTAB_FUNC(v4l2_g_parm_cap, "_gpl", "");
KSYMTAB_FUNC(v4l2_s_parm_cap, "_gpl", "");
KSYMTAB_FUNC(v4l2_format_info, "", "");
KSYMTAB_FUNC(v4l2_apply_frmsize_constraints, "_gpl", "");
KSYMTAB_FUNC(v4l2_fill_pixfmt_mp, "_gpl", "");
KSYMTAB_FUNC(v4l2_fill_pixfmt, "_gpl", "");
KSYMTAB_FUNC(v4l2_get_link_freq, "_gpl", "");
KSYMTAB_FUNC(v4l2_simplify_fraction, "_gpl", "");
KSYMTAB_FUNC(v4l2_fraction_to_interval, "_gpl", "");
KSYMTAB_FUNC(v4l2_link_freq_to_bitmap, "_gpl", "");
KSYMTAB_FUNC(v4l2_ctrl_type_op_equal, "", "");
KSYMTAB_FUNC(v4l2_ctrl_type_op_init, "", "");
KSYMTAB_FUNC(v4l2_ctrl_type_op_log, "", "");
KSYMTAB_FUNC(v4l2_ctrl_type_op_validate, "", "");
KSYMTAB_FUNC(v4l2_ctrl_notify, "", "");
KSYMTAB_FUNC(v4l2_ctrl_handler_init_class, "", "");
KSYMTAB_FUNC(v4l2_ctrl_handler_free, "", "");
KSYMTAB_FUNC(v4l2_ctrl_find, "", "");
KSYMTAB_FUNC(v4l2_ctrl_new_custom, "", "");
KSYMTAB_FUNC(v4l2_ctrl_new_std, "", "");
KSYMTAB_FUNC(v4l2_ctrl_new_std_menu, "", "");
KSYMTAB_FUNC(v4l2_ctrl_new_std_menu_items, "", "");
KSYMTAB_FUNC(v4l2_ctrl_new_std_compound, "", "");
KSYMTAB_FUNC(v4l2_ctrl_new_int_menu, "", "");
KSYMTAB_FUNC(v4l2_ctrl_add_handler, "", "");
KSYMTAB_FUNC(v4l2_ctrl_radio_filter, "", "");
KSYMTAB_FUNC(v4l2_ctrl_cluster, "", "");
KSYMTAB_FUNC(v4l2_ctrl_auto_cluster, "", "");
KSYMTAB_FUNC(v4l2_ctrl_activate, "", "");
KSYMTAB_FUNC(__v4l2_ctrl_grab, "", "");
KSYMTAB_FUNC(__v4l2_ctrl_handler_setup, "_gpl", "");
KSYMTAB_FUNC(v4l2_ctrl_handler_setup, "", "");
KSYMTAB_FUNC(v4l2_ctrl_handler_log_status, "", "");
KSYMTAB_FUNC(v4l2_ctrl_new_fwnode_properties, "", "");
KSYMTAB_FUNC(v4l2_g_ext_ctrls, "", "");
KSYMTAB_FUNC(v4l2_try_ext_ctrls, "", "");
KSYMTAB_FUNC(v4l2_s_ext_ctrls, "", "");
KSYMTAB_FUNC(v4l2_g_ctrl, "", "");
KSYMTAB_FUNC(v4l2_s_ctrl, "", "");
KSYMTAB_FUNC(v4l2_ctrl_g_ctrl, "", "");
KSYMTAB_FUNC(v4l2_ctrl_g_ctrl_int64, "", "");
KSYMTAB_FUNC(__v4l2_ctrl_s_ctrl, "", "");
KSYMTAB_FUNC(__v4l2_ctrl_s_ctrl_int64, "", "");
KSYMTAB_FUNC(__v4l2_ctrl_s_ctrl_string, "", "");
KSYMTAB_FUNC(__v4l2_ctrl_s_ctrl_compound, "", "");
KSYMTAB_FUNC(__v4l2_ctrl_modify_range, "", "");
KSYMTAB_FUNC(__v4l2_ctrl_modify_dimensions, "", "");
KSYMTAB_FUNC(v4l2_query_ext_ctrl, "", "");
KSYMTAB_FUNC(v4l2_queryctrl, "", "");
KSYMTAB_FUNC(v4l2_querymenu, "", "");
KSYMTAB_FUNC(v4l2_ctrl_log_status, "", "");
KSYMTAB_FUNC(v4l2_ctrl_subdev_log_status, "", "");
KSYMTAB_FUNC(v4l2_ctrl_replace, "", "");
KSYMTAB_FUNC(v4l2_ctrl_merge, "", "");
KSYMTAB_DATA(v4l2_ctrl_sub_ev_ops, "", "");
KSYMTAB_FUNC(v4l2_ctrl_subscribe_event, "", "");
KSYMTAB_FUNC(v4l2_ctrl_subdev_subscribe_event, "", "");
KSYMTAB_FUNC(v4l2_ctrl_poll, "", "");
KSYMTAB_FUNC(v4l2_ctrl_request_hdl_find, "_gpl", "");
KSYMTAB_FUNC(v4l2_ctrl_request_hdl_ctrl_find, "_gpl", "");
KSYMTAB_FUNC(v4l2_ctrl_request_complete, "", "");
KSYMTAB_FUNC(v4l2_ctrl_request_setup, "", "");
KSYMTAB_FUNC(v4l2_ctrl_get_menu, "", "");
KSYMTAB_FUNC(v4l2_ctrl_get_int_menu, "", "");
KSYMTAB_FUNC(v4l2_ctrl_get_name, "", "");
KSYMTAB_FUNC(v4l2_ctrl_fill, "", "");
KSYMTAB_FUNC(v4l2_compat_ioctl32, "_gpl", "");
KSYMTAB_FUNC(v4l2_mc_create_media_graph, "_gpl", "");
KSYMTAB_FUNC(v4l_enable_media_source, "_gpl", "");
KSYMTAB_FUNC(v4l_disable_media_source, "_gpl", "");
KSYMTAB_FUNC(v4l_vb2q_enable_media_source, "_gpl", "");
KSYMTAB_FUNC(v4l2_create_fwnode_links_to_pad, "_gpl", "");
KSYMTAB_FUNC(v4l2_create_fwnode_links, "_gpl", "");
KSYMTAB_FUNC(v4l2_pipeline_pm_get, "_gpl", "");
KSYMTAB_FUNC(v4l2_pipeline_pm_put, "_gpl", "");
KSYMTAB_FUNC(v4l2_pipeline_link_notify, "_gpl", "");
KSYMTAB_FUNC(v4l2_spi_subdev_init, "_gpl", "");
KSYMTAB_FUNC(v4l2_spi_new_subdev, "_gpl", "");
KSYMTAB_DATA(__tracepoint_vb2_v4l2_buf_done, "_gpl", "");
KSYMTAB_FUNC(__traceiter_vb2_v4l2_buf_done, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_vb2_v4l2_buf_done, "_gpl", "");
KSYMTAB_DATA(__tracepoint_vb2_v4l2_buf_queue, "_gpl", "");
KSYMTAB_FUNC(__traceiter_vb2_v4l2_buf_queue, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_vb2_v4l2_buf_queue, "_gpl", "");
KSYMTAB_DATA(__tracepoint_vb2_v4l2_dqbuf, "_gpl", "");
KSYMTAB_FUNC(__traceiter_vb2_v4l2_dqbuf, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_vb2_v4l2_dqbuf, "_gpl", "");
KSYMTAB_DATA(__tracepoint_vb2_v4l2_qbuf, "_gpl", "");
KSYMTAB_FUNC(__traceiter_vb2_v4l2_qbuf, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_vb2_v4l2_qbuf, "_gpl", "");
KSYMTAB_FUNC(v4l2_i2c_subdev_set_name, "_gpl", "");
KSYMTAB_FUNC(v4l2_i2c_subdev_init, "_gpl", "");
KSYMTAB_FUNC(v4l2_i2c_new_subdev_board, "_gpl", "");
KSYMTAB_FUNC(v4l2_i2c_new_subdev, "_gpl", "");
KSYMTAB_FUNC(v4l2_i2c_subdev_addr, "_gpl", "");
KSYMTAB_FUNC(v4l2_i2c_tuner_addrs, "_gpl", "");

SYMBOL_CRC(video_device_alloc, 0x7cb35c9c, "");
SYMBOL_CRC(video_device_release, 0x13caa4d6, "");
SYMBOL_CRC(video_device_release_empty, 0x3dda0032, "");
SYMBOL_CRC(video_devdata, 0x9ba53144, "");
SYMBOL_CRC(v4l2_prio_init, 0xb77b0159, "");
SYMBOL_CRC(v4l2_prio_change, 0x3bdd0f94, "");
SYMBOL_CRC(v4l2_prio_open, 0x2342f1ae, "");
SYMBOL_CRC(v4l2_prio_close, 0xcda04a5b, "");
SYMBOL_CRC(v4l2_prio_max, 0x8106095a, "");
SYMBOL_CRC(v4l2_prio_check, 0x16244fe5, "");
SYMBOL_CRC(__video_register_device, 0x0b68f376, "");
SYMBOL_CRC(video_unregister_device, 0x5555588e, "");
SYMBOL_CRC(video_device_pipeline_start, 0xfab12894, "_gpl");
SYMBOL_CRC(__video_device_pipeline_start, 0x1ff1fcd8, "_gpl");
SYMBOL_CRC(video_device_pipeline_stop, 0x84cc8b08, "_gpl");
SYMBOL_CRC(__video_device_pipeline_stop, 0x93619379, "_gpl");
SYMBOL_CRC(video_device_pipeline_alloc_start, 0x58244874, "_gpl");
SYMBOL_CRC(video_device_pipeline, 0x9267c1a0, "_gpl");
SYMBOL_CRC(v4l2_norm_to_name, 0xf3251e7b, "");
SYMBOL_CRC(v4l2_video_std_frame_period, 0x0614dd5a, "");
SYMBOL_CRC(v4l2_video_std_construct, 0xe2b92059, "");
SYMBOL_CRC(v4l2_field_names, 0x3adbd595, "");
SYMBOL_CRC(v4l2_type_names, 0x123959a1, "");
SYMBOL_CRC(v4l_printk_ioctl, 0xbc5671dc, "");
SYMBOL_CRC(video_ioctl2, 0x77731343, "");
SYMBOL_CRC(v4l2_device_register, 0x42db93b6, "_gpl");
SYMBOL_CRC(v4l2_device_put, 0xade31a66, "_gpl");
SYMBOL_CRC(v4l2_device_set_name, 0x23522c33, "_gpl");
SYMBOL_CRC(v4l2_device_disconnect, 0xe0d8f4f7, "_gpl");
SYMBOL_CRC(v4l2_device_unregister, 0xf64c3bb1, "_gpl");
SYMBOL_CRC(__v4l2_device_register_subdev, 0x25e1210d, "_gpl");
SYMBOL_CRC(__v4l2_device_register_subdev_nodes, 0x4f9f9bb5, "_gpl");
SYMBOL_CRC(v4l2_device_unregister_subdev, 0x419fd8ed, "_gpl");
SYMBOL_CRC(v4l2_fh_init, 0x6d77ce8a, "_gpl");
SYMBOL_CRC(v4l2_fh_add, 0x70f392ea, "_gpl");
SYMBOL_CRC(v4l2_fh_open, 0x1708872e, "_gpl");
SYMBOL_CRC(v4l2_fh_del, 0x73a242d7, "_gpl");
SYMBOL_CRC(v4l2_fh_exit, 0x1d753a7d, "_gpl");
SYMBOL_CRC(v4l2_fh_release, 0x669eb6bd, "_gpl");
SYMBOL_CRC(v4l2_fh_is_singular, 0x45359f52, "_gpl");
SYMBOL_CRC(v4l2_event_dequeue, 0xcb6836b7, "_gpl");
SYMBOL_CRC(v4l2_event_queue, 0xd2434a7e, "_gpl");
SYMBOL_CRC(v4l2_event_queue_fh, 0xef1a1238, "_gpl");
SYMBOL_CRC(v4l2_event_pending, 0x3bc8f354, "_gpl");
SYMBOL_CRC(v4l2_event_wake_all, 0xb3653027, "_gpl");
SYMBOL_CRC(v4l2_event_subscribe, 0x79926f0a, "_gpl");
SYMBOL_CRC(v4l2_event_unsubscribe_all, 0xbc2a8c05, "_gpl");
SYMBOL_CRC(v4l2_event_unsubscribe, 0xfdcd2ee2, "_gpl");
SYMBOL_CRC(v4l2_event_subdev_unsubscribe, 0xfe616670, "_gpl");
SYMBOL_CRC(v4l2_src_change_event_subscribe, 0x10262a22, "_gpl");
SYMBOL_CRC(v4l2_src_change_event_subdev_subscribe, 0x9725ccf0, "_gpl");
SYMBOL_CRC(v4l2_subdev_call_wrappers, 0x5b6a59bc, "");
SYMBOL_CRC(v4l2_subdev_get_fwnode_pad_1_to_1, 0x4900d010, "_gpl");
SYMBOL_CRC(v4l2_subdev_link_validate_default, 0x49355b79, "_gpl");
SYMBOL_CRC(v4l2_subdev_link_validate, 0x580fd1bb, "_gpl");
SYMBOL_CRC(v4l2_subdev_has_pad_interdep, 0x7241e938, "_gpl");
SYMBOL_CRC(__v4l2_subdev_state_alloc, 0x3370bd5b, "_gpl");
SYMBOL_CRC(__v4l2_subdev_state_free, 0x40d25356, "_gpl");
SYMBOL_CRC(__v4l2_subdev_init_finalize, 0x247cff22, "_gpl");
SYMBOL_CRC(v4l2_subdev_cleanup, 0x15be55ad, "_gpl");
SYMBOL_CRC(__v4l2_subdev_state_get_format, 0x89fe0b01, "_gpl");
SYMBOL_CRC(__v4l2_subdev_state_get_crop, 0xfd9ee7fe, "_gpl");
SYMBOL_CRC(__v4l2_subdev_state_get_compose, 0x973b6f05, "_gpl");
SYMBOL_CRC(__v4l2_subdev_state_get_interval, 0x453bc670, "_gpl");
SYMBOL_CRC(v4l2_subdev_get_fmt, 0x0d523ea7, "_gpl");
SYMBOL_CRC(v4l2_subdev_get_frame_interval, 0xd568e7df, "_gpl");
SYMBOL_CRC(v4l2_subdev_set_routing, 0xb08f56b4, "_gpl");
SYMBOL_CRC(__v4l2_subdev_next_active_route, 0x180f326c, "_gpl");
SYMBOL_CRC(v4l2_subdev_set_routing_with_fmt, 0x4e13140b, "_gpl");
SYMBOL_CRC(v4l2_subdev_routing_find_opposite_end, 0x2776e4eb, "_gpl");
SYMBOL_CRC(v4l2_subdev_state_get_opposite_stream_format, 0xb76b6698, "_gpl");
SYMBOL_CRC(v4l2_subdev_state_xlate_streams, 0x30d862a3, "_gpl");
SYMBOL_CRC(v4l2_subdev_routing_validate, 0xcdd4dd7b, "_gpl");
SYMBOL_CRC(v4l2_subdev_enable_streams, 0x984e812b, "_gpl");
SYMBOL_CRC(v4l2_subdev_disable_streams, 0x5b6e5638, "_gpl");
SYMBOL_CRC(v4l2_subdev_s_stream_helper, 0xf04bd051, "_gpl");
SYMBOL_CRC(v4l2_subdev_init, 0xd852811d, "");
SYMBOL_CRC(v4l2_subdev_notify_event, 0xfecf197a, "_gpl");
SYMBOL_CRC(v4l2_subdev_is_streaming, 0xc0d84b75, "_gpl");
SYMBOL_CRC(v4l2_subdev_get_privacy_led, 0xb4415c2b, "_gpl");
SYMBOL_CRC(v4l2_subdev_put_privacy_led, 0x2113e675, "_gpl");
SYMBOL_CRC(v4l2_ctrl_query_fill, 0x89e3897d, "");
SYMBOL_CRC(v4l_bound_align_image, 0xf5ef842e, "_gpl");
SYMBOL_CRC(__v4l2_find_nearest_size, 0xe2822320, "_gpl");
SYMBOL_CRC(v4l2_g_parm_cap, 0x4bd9f606, "_gpl");
SYMBOL_CRC(v4l2_s_parm_cap, 0xcb6beb61, "_gpl");
SYMBOL_CRC(v4l2_format_info, 0x35ff98bf, "");
SYMBOL_CRC(v4l2_apply_frmsize_constraints, 0x9fef35ac, "_gpl");
SYMBOL_CRC(v4l2_fill_pixfmt_mp, 0x6e9acc41, "_gpl");
SYMBOL_CRC(v4l2_fill_pixfmt, 0xcc501597, "_gpl");
SYMBOL_CRC(v4l2_get_link_freq, 0x44231c02, "_gpl");
SYMBOL_CRC(v4l2_simplify_fraction, 0xad5c3c93, "_gpl");
SYMBOL_CRC(v4l2_fraction_to_interval, 0x5074e573, "_gpl");
SYMBOL_CRC(v4l2_link_freq_to_bitmap, 0x7aa47906, "_gpl");
SYMBOL_CRC(v4l2_ctrl_type_op_equal, 0xaa3e90f8, "");
SYMBOL_CRC(v4l2_ctrl_type_op_init, 0xb832755c, "");
SYMBOL_CRC(v4l2_ctrl_type_op_log, 0x82f19936, "");
SYMBOL_CRC(v4l2_ctrl_type_op_validate, 0x4daa1fb3, "");
SYMBOL_CRC(v4l2_ctrl_notify, 0x49d7d8f1, "");
SYMBOL_CRC(v4l2_ctrl_handler_init_class, 0x9aaf43cd, "");
SYMBOL_CRC(v4l2_ctrl_handler_free, 0x263f3602, "");
SYMBOL_CRC(v4l2_ctrl_find, 0x5904a6cd, "");
SYMBOL_CRC(v4l2_ctrl_new_custom, 0xac8e4c37, "");
SYMBOL_CRC(v4l2_ctrl_new_std, 0x75c4b665, "");
SYMBOL_CRC(v4l2_ctrl_new_std_menu, 0x1ae48415, "");
SYMBOL_CRC(v4l2_ctrl_new_std_menu_items, 0x133d5f87, "");
SYMBOL_CRC(v4l2_ctrl_new_std_compound, 0x43258df8, "");
SYMBOL_CRC(v4l2_ctrl_new_int_menu, 0x9e781eac, "");
SYMBOL_CRC(v4l2_ctrl_add_handler, 0xfc8645a5, "");
SYMBOL_CRC(v4l2_ctrl_radio_filter, 0x25919b3a, "");
SYMBOL_CRC(v4l2_ctrl_cluster, 0xf27b4bb9, "");
SYMBOL_CRC(v4l2_ctrl_auto_cluster, 0x0960d0a9, "");
SYMBOL_CRC(v4l2_ctrl_activate, 0xd24101e7, "");
SYMBOL_CRC(__v4l2_ctrl_grab, 0xc90aa5df, "");
SYMBOL_CRC(__v4l2_ctrl_handler_setup, 0x6d58ceba, "_gpl");
SYMBOL_CRC(v4l2_ctrl_handler_setup, 0xc38b7ac0, "");
SYMBOL_CRC(v4l2_ctrl_handler_log_status, 0x94838529, "");
SYMBOL_CRC(v4l2_ctrl_new_fwnode_properties, 0x4f66b8c7, "");
SYMBOL_CRC(v4l2_g_ext_ctrls, 0x4fd87957, "");
SYMBOL_CRC(v4l2_try_ext_ctrls, 0xe3100653, "");
SYMBOL_CRC(v4l2_s_ext_ctrls, 0xe19f4a7b, "");
SYMBOL_CRC(v4l2_g_ctrl, 0x5f22f3d4, "");
SYMBOL_CRC(v4l2_s_ctrl, 0xc376c55a, "");
SYMBOL_CRC(v4l2_ctrl_g_ctrl, 0xa3f622a6, "");
SYMBOL_CRC(v4l2_ctrl_g_ctrl_int64, 0x08ea5bf6, "");
SYMBOL_CRC(__v4l2_ctrl_s_ctrl, 0x3ac81b38, "");
SYMBOL_CRC(__v4l2_ctrl_s_ctrl_int64, 0x316650e2, "");
SYMBOL_CRC(__v4l2_ctrl_s_ctrl_string, 0xb8624f92, "");
SYMBOL_CRC(__v4l2_ctrl_s_ctrl_compound, 0x5286b33d, "");
SYMBOL_CRC(__v4l2_ctrl_modify_range, 0xa2eb131b, "");
SYMBOL_CRC(__v4l2_ctrl_modify_dimensions, 0x02725867, "");
SYMBOL_CRC(v4l2_query_ext_ctrl, 0xeb01d638, "");
SYMBOL_CRC(v4l2_queryctrl, 0x341af5be, "");
SYMBOL_CRC(v4l2_querymenu, 0x5b01c098, "");
SYMBOL_CRC(v4l2_ctrl_log_status, 0x41f63b90, "");
SYMBOL_CRC(v4l2_ctrl_subdev_log_status, 0x56026f88, "");
SYMBOL_CRC(v4l2_ctrl_replace, 0xf50fecbc, "");
SYMBOL_CRC(v4l2_ctrl_merge, 0x082737e8, "");
SYMBOL_CRC(v4l2_ctrl_sub_ev_ops, 0x41a23d87, "");
SYMBOL_CRC(v4l2_ctrl_subscribe_event, 0xaafe5e32, "");
SYMBOL_CRC(v4l2_ctrl_subdev_subscribe_event, 0x626c1dc6, "");
SYMBOL_CRC(v4l2_ctrl_poll, 0x7f71a789, "");
SYMBOL_CRC(v4l2_ctrl_request_hdl_find, 0xa3196ae9, "_gpl");
SYMBOL_CRC(v4l2_ctrl_request_hdl_ctrl_find, 0xf19649e3, "_gpl");
SYMBOL_CRC(v4l2_ctrl_request_complete, 0x74a1dae7, "");
SYMBOL_CRC(v4l2_ctrl_request_setup, 0x8666098b, "");
SYMBOL_CRC(v4l2_ctrl_get_menu, 0x315de2cf, "");
SYMBOL_CRC(v4l2_ctrl_get_int_menu, 0xd16d9c01, "");
SYMBOL_CRC(v4l2_ctrl_get_name, 0x32d43420, "");
SYMBOL_CRC(v4l2_ctrl_fill, 0x3b86cd9a, "");
SYMBOL_CRC(v4l2_compat_ioctl32, 0x1a94c5bf, "_gpl");
SYMBOL_CRC(v4l2_mc_create_media_graph, 0x46a9550a, "_gpl");
SYMBOL_CRC(v4l_enable_media_source, 0x7e4072c6, "_gpl");
SYMBOL_CRC(v4l_disable_media_source, 0x3d1ffcad, "_gpl");
SYMBOL_CRC(v4l_vb2q_enable_media_source, 0x279da421, "_gpl");
SYMBOL_CRC(v4l2_create_fwnode_links_to_pad, 0x21564b75, "_gpl");
SYMBOL_CRC(v4l2_create_fwnode_links, 0x23eca69e, "_gpl");
SYMBOL_CRC(v4l2_pipeline_pm_get, 0x2c8371c2, "_gpl");
SYMBOL_CRC(v4l2_pipeline_pm_put, 0x967b917a, "_gpl");
SYMBOL_CRC(v4l2_pipeline_link_notify, 0x61b22566, "_gpl");
SYMBOL_CRC(v4l2_spi_subdev_init, 0xba4b3ef0, "_gpl");
SYMBOL_CRC(v4l2_spi_new_subdev, 0x41395d70, "_gpl");
SYMBOL_CRC(__tracepoint_vb2_v4l2_buf_done, 0xb48cf8aa, "_gpl");
SYMBOL_CRC(__traceiter_vb2_v4l2_buf_done, 0xbd382257, "_gpl");
SYMBOL_CRC(__SCK__tp_func_vb2_v4l2_buf_done, 0x2ae0877b, "_gpl");
SYMBOL_CRC(__tracepoint_vb2_v4l2_buf_queue, 0xe0b98a71, "_gpl");
SYMBOL_CRC(__traceiter_vb2_v4l2_buf_queue, 0x2864d958, "_gpl");
SYMBOL_CRC(__SCK__tp_func_vb2_v4l2_buf_queue, 0x11f3044c, "_gpl");
SYMBOL_CRC(__tracepoint_vb2_v4l2_dqbuf, 0x2b6856cd, "_gpl");
SYMBOL_CRC(__traceiter_vb2_v4l2_dqbuf, 0xe332c312, "_gpl");
SYMBOL_CRC(__SCK__tp_func_vb2_v4l2_dqbuf, 0x6ce1c95c, "_gpl");
SYMBOL_CRC(__tracepoint_vb2_v4l2_qbuf, 0xdef3dffd, "_gpl");
SYMBOL_CRC(__traceiter_vb2_v4l2_qbuf, 0x36235a24, "_gpl");
SYMBOL_CRC(__SCK__tp_func_vb2_v4l2_qbuf, 0xe5a33113, "_gpl");
SYMBOL_CRC(v4l2_i2c_subdev_set_name, 0x7f18c891, "_gpl");
SYMBOL_CRC(v4l2_i2c_subdev_init, 0xa8eb0c77, "_gpl");
SYMBOL_CRC(v4l2_i2c_new_subdev_board, 0x38dd9530, "_gpl");
SYMBOL_CRC(v4l2_i2c_new_subdev, 0xd5cf2660, "_gpl");
SYMBOL_CRC(v4l2_i2c_subdev_addr, 0xbc66cdac, "_gpl");
SYMBOL_CRC(v4l2_i2c_tuner_addrs, 0xf2a353ac, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x36b4d6c1, "media_devnode_remove" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x4efe003c, "media_request_object_find" },
	{ 0xad7dcd48, "media_request_object_init" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1dfd0aa7, "led_sysfs_enable" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2c7cc941, "fwnode_graph_get_remote_endpoint" },
	{ 0x180cd0ba, "trace_raw_output_prep" },
	{ 0x653a713a, "spi_unregister_device" },
	{ 0x22acd2e2, "device_unregister" },
	{ 0xa50bb103, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xfbfd5863, "trace_event_printf" },
	{ 0xfa56e842, "media_request_object_unbind" },
	{ 0x8b3d76a5, "led_put" },
	{ 0x2b612215, "led_trigger_remove" },
	{ 0x3383ea7b, "fwnode_graph_get_next_endpoint" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xe1bafd45, "trace_event_raw_init" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0xc561c34b, "media_request_object_complete" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x89b1cb63, "fwnode_graph_get_port_parent" },
	{ 0x9a38130e, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x99ed6ef6, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x81e7ebee, "media_create_intf_link" },
	{ 0x37a84f24, "media_create_pad_link" },
	{ 0xea427052, "trace_event_buffer_commit" },
	{ 0x6db8d769, "device_match_fwnode" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xdfe729df, "__media_pipeline_stop" },
	{ 0xf390f6f1, "__bitmap_andnot" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x36dc6ece, "put_device" },
	{ 0xe00e0d39, "i2c_new_scanned_device" },
	{ 0xe0129bcc, "media_pad_pipeline" },
	{ 0x8c8417be, "media_request_object_put" },
	{ 0x9d9e8944, "module_put" },
	{ 0x117da065, "media_pipeline_alloc_start" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xb1c4027b, "media_device_register_entity" },
	{ 0x73f79db2, "media_request_get_by_fd" },
	{ 0x3a6d85d3, "cdev_add" },
	{ 0x1ae2e116, "led_get" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x91ac9254, "perf_trace_run_bpf_submit" },
	{ 0x669c413b, "_dev_err" },
	{ 0x5c362e8, "i2c_unregister_device" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xae62c17, "media_request_put" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x887af764, "spi_new_device" },
	{ 0xfe479535, "trace_event_reg" },
	{ 0x7e90cb4e, "media_request_object_bind" },
	{ 0x7143a676, "class_unregister" },
	{ 0x714cfb8b, "media_graph_walk_next" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5390eff6, "i2c_new_client_device" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x28b118b6, "device_register" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x3eb29864, "media_pipeline_start" },
	{ 0xcad072de, "media_pipeline_stop" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x94c62eb0, "trace_print_flags_seq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa04e7900, "media_get_pad_index" },
	{ 0xdf521442, "_find_next_zero_bit" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x2f828d33, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5d52216e, "platform_bus_type" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x7ec8fd19, "led_set_brightness" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xfc700e24, "media_graph_walk_start" },
	{ 0x7670b43, "media_devnode_create" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xbcbcc036, "media_entity_get_fwnode_pad" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x41576788, "media_device_unregister_entity" },
	{ 0x98cf60b3, "strlen" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0xc5b543a1, "__media_pipeline_start" },
	{ 0xa42d469b, "class_register" },
	{ 0x887c2589, "led_sysfs_disable" },
	{ 0x4632ba45, "media_entity_find_link" },
	{ 0xee7eec94, "pci_bus_type" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x27271c6b, "cdev_del" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xc3c94008, "cdev_alloc" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mc");


MODULE_INFO(srcversion, "5734E0C103372A6278383C0");
