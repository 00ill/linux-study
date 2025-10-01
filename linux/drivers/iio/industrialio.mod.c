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

KSYMTAB_DATA(iio_bus_type, "", "");
KSYMTAB_FUNC(iio_device_id, "_gpl", "");
KSYMTAB_FUNC(iio_buffer_enabled, "_gpl", "");
KSYMTAB_FUNC(iio_get_debugfs_dentry, "_gpl", "");
KSYMTAB_FUNC(iio_read_const_attr, "", "");
KSYMTAB_FUNC(iio_device_set_clock, "", "");
KSYMTAB_FUNC(iio_device_get_clock, "", "");
KSYMTAB_FUNC(iio_get_time_ns, "", "");
KSYMTAB_FUNC(iio_enum_available_read, "_gpl", "");
KSYMTAB_FUNC(iio_enum_read, "_gpl", "");
KSYMTAB_FUNC(iio_enum_write, "_gpl", "");
KSYMTAB_FUNC(iio_show_mount_matrix, "_gpl", "");
KSYMTAB_FUNC(iio_read_mount_matrix, "", "");
KSYMTAB_FUNC(iio_format_value, "_gpl", "");
KSYMTAB_FUNC(iio_str_to_fixpoint, "_gpl", "");
KSYMTAB_FUNC(iio_device_alloc, "", "");
KSYMTAB_FUNC(iio_device_free, "", "");
KSYMTAB_FUNC(devm_iio_device_alloc, "_gpl", "");
KSYMTAB_FUNC(iio_active_scan_mask_index, "_gpl", "");
KSYMTAB_FUNC(__iio_device_register, "", "");
KSYMTAB_FUNC(iio_device_unregister, "", "");
KSYMTAB_FUNC(__devm_iio_device_register, "_gpl", "");
KSYMTAB_FUNC(iio_device_claim_direct_mode, "_gpl", "");
KSYMTAB_FUNC(iio_device_release_direct_mode, "_gpl", "");
KSYMTAB_FUNC(iio_device_claim_buffer_mode, "_gpl", "");
KSYMTAB_FUNC(iio_device_release_buffer_mode, "_gpl", "");
KSYMTAB_FUNC(iio_device_get_current_mode, "_gpl", "");
KSYMTAB_FUNC(iio_push_event, "", "");
KSYMTAB_FUNC(iio_map_array_register, "_gpl", "");
KSYMTAB_FUNC(iio_map_array_unregister, "_gpl", "");
KSYMTAB_FUNC(devm_iio_map_array_register, "_gpl", "");
KSYMTAB_FUNC(fwnode_iio_channel_get_by_name, "_gpl", "");
KSYMTAB_FUNC(iio_channel_get, "_gpl", "");
KSYMTAB_FUNC(iio_channel_release, "_gpl", "");
KSYMTAB_FUNC(devm_iio_channel_get, "_gpl", "");
KSYMTAB_FUNC(devm_fwnode_iio_channel_get_by_name, "_gpl", "");
KSYMTAB_FUNC(iio_channel_get_all, "_gpl", "");
KSYMTAB_FUNC(iio_channel_release_all, "_gpl", "");
KSYMTAB_FUNC(devm_iio_channel_get_all, "_gpl", "");
KSYMTAB_FUNC(iio_read_channel_raw, "_gpl", "");
KSYMTAB_FUNC(iio_read_channel_average_raw, "_gpl", "");
KSYMTAB_FUNC(iio_convert_raw_to_processed, "_gpl", "");
KSYMTAB_FUNC(iio_read_channel_attribute, "_gpl", "");
KSYMTAB_FUNC(iio_read_channel_offset, "_gpl", "");
KSYMTAB_FUNC(iio_read_channel_processed_scale, "_gpl", "");
KSYMTAB_FUNC(iio_read_channel_processed, "_gpl", "");
KSYMTAB_FUNC(iio_read_channel_scale, "_gpl", "");
KSYMTAB_FUNC(iio_read_avail_channel_attribute, "_gpl", "");
KSYMTAB_FUNC(iio_read_avail_channel_raw, "_gpl", "");
KSYMTAB_FUNC(iio_read_max_channel_raw, "_gpl", "");
KSYMTAB_FUNC(iio_read_min_channel_raw, "_gpl", "");
KSYMTAB_FUNC(iio_get_channel_type, "_gpl", "");
KSYMTAB_FUNC(iio_write_channel_attribute, "_gpl", "");
KSYMTAB_FUNC(iio_write_channel_raw, "_gpl", "");
KSYMTAB_FUNC(iio_get_channel_ext_info_count, "_gpl", "");
KSYMTAB_FUNC(iio_read_channel_ext_info, "_gpl", "");
KSYMTAB_FUNC(iio_write_channel_ext_info, "_gpl", "");
KSYMTAB_FUNC(iio_read_channel_label, "_gpl", "");
KSYMTAB_FUNC(iio_pop_from_buffer, "_gpl", "");
KSYMTAB_FUNC(iio_buffer_init, "", "");
KSYMTAB_FUNC(iio_update_buffers, "_gpl", "");
KSYMTAB_FUNC(iio_buffer_signal_dmabuf_done, "_gpl", "");
KSYMTAB_FUNC(iio_validate_scan_mask_onehot, "_gpl", "");
KSYMTAB_FUNC(iio_push_to_buffers, "_gpl", "");
KSYMTAB_FUNC(iio_push_to_buffers_with_ts_unaligned, "_gpl", "");
KSYMTAB_FUNC(iio_buffer_get, "_gpl", "");
KSYMTAB_FUNC(iio_buffer_put, "_gpl", "");
KSYMTAB_FUNC(iio_device_attach_buffer, "_gpl", "");
KSYMTAB_FUNC(iio_trigger_register, "", "");
KSYMTAB_FUNC(iio_trigger_unregister, "", "");
KSYMTAB_FUNC(iio_trigger_set_immutable, "", "");
KSYMTAB_FUNC(iio_trigger_poll, "", "");
KSYMTAB_FUNC(iio_trigger_generic_data_rdy_poll, "", "");
KSYMTAB_FUNC(iio_trigger_poll_nested, "", "");
KSYMTAB_FUNC(iio_trigger_notify_done, "", "");
KSYMTAB_FUNC(iio_pollfunc_store_time, "", "");
KSYMTAB_FUNC(iio_alloc_pollfunc, "_gpl", "");
KSYMTAB_FUNC(iio_dealloc_pollfunc, "_gpl", "");
KSYMTAB_FUNC(__iio_trigger_alloc, "", "");
KSYMTAB_FUNC(iio_trigger_free, "", "");
KSYMTAB_FUNC(__devm_iio_trigger_alloc, "_gpl", "");
KSYMTAB_FUNC(devm_iio_trigger_register, "_gpl", "");
KSYMTAB_FUNC(iio_trigger_using_own, "", "");
KSYMTAB_FUNC(iio_validate_own_trigger, "_gpl", "");
KSYMTAB_FUNC(iio_trigger_validate_own_device, "", "");
KSYMTAB_FUNC(iio_device_suspend_triggering, "", "");
KSYMTAB_FUNC(iio_device_resume_triggering, "", "");

SYMBOL_CRC(iio_bus_type, 0xb52f31ba, "");
SYMBOL_CRC(iio_device_id, 0x21b473b6, "_gpl");
SYMBOL_CRC(iio_buffer_enabled, 0x86fab7fe, "_gpl");
SYMBOL_CRC(iio_get_debugfs_dentry, 0xf431c0a6, "_gpl");
SYMBOL_CRC(iio_read_const_attr, 0x037086b9, "");
SYMBOL_CRC(iio_device_set_clock, 0x6ea34f94, "");
SYMBOL_CRC(iio_device_get_clock, 0x8818a47b, "");
SYMBOL_CRC(iio_get_time_ns, 0xadd14be9, "");
SYMBOL_CRC(iio_enum_available_read, 0x43ebec1b, "_gpl");
SYMBOL_CRC(iio_enum_read, 0x1516cb02, "_gpl");
SYMBOL_CRC(iio_enum_write, 0xc47c4731, "_gpl");
SYMBOL_CRC(iio_show_mount_matrix, 0x35034ce9, "_gpl");
SYMBOL_CRC(iio_read_mount_matrix, 0x2a37410b, "");
SYMBOL_CRC(iio_format_value, 0x4dce7dd4, "_gpl");
SYMBOL_CRC(iio_str_to_fixpoint, 0x26f6b499, "_gpl");
SYMBOL_CRC(iio_device_alloc, 0xe9c1995a, "");
SYMBOL_CRC(iio_device_free, 0x98e361e3, "");
SYMBOL_CRC(devm_iio_device_alloc, 0x705c065b, "_gpl");
SYMBOL_CRC(iio_active_scan_mask_index, 0xbd7bc507, "_gpl");
SYMBOL_CRC(__iio_device_register, 0x9dd92e13, "");
SYMBOL_CRC(iio_device_unregister, 0x2f4d7036, "");
SYMBOL_CRC(__devm_iio_device_register, 0xd02eafcc, "_gpl");
SYMBOL_CRC(iio_device_claim_direct_mode, 0xb50a8eea, "_gpl");
SYMBOL_CRC(iio_device_release_direct_mode, 0x1b0e139d, "_gpl");
SYMBOL_CRC(iio_device_claim_buffer_mode, 0x538351b9, "_gpl");
SYMBOL_CRC(iio_device_release_buffer_mode, 0xfd87ccce, "_gpl");
SYMBOL_CRC(iio_device_get_current_mode, 0x69881315, "_gpl");
SYMBOL_CRC(iio_push_event, 0xebf2304b, "");
SYMBOL_CRC(iio_map_array_register, 0x5ecd1427, "_gpl");
SYMBOL_CRC(iio_map_array_unregister, 0xa233908d, "_gpl");
SYMBOL_CRC(devm_iio_map_array_register, 0xa1e97940, "_gpl");
SYMBOL_CRC(fwnode_iio_channel_get_by_name, 0x58859b47, "_gpl");
SYMBOL_CRC(iio_channel_get, 0x9a4fb978, "_gpl");
SYMBOL_CRC(iio_channel_release, 0x95f35cf0, "_gpl");
SYMBOL_CRC(devm_iio_channel_get, 0x024c2f0a, "_gpl");
SYMBOL_CRC(devm_fwnode_iio_channel_get_by_name, 0x89cb2612, "_gpl");
SYMBOL_CRC(iio_channel_get_all, 0x82bbb77e, "_gpl");
SYMBOL_CRC(iio_channel_release_all, 0x34dfd43f, "_gpl");
SYMBOL_CRC(devm_iio_channel_get_all, 0xbc17f49c, "_gpl");
SYMBOL_CRC(iio_read_channel_raw, 0xa8266a2e, "_gpl");
SYMBOL_CRC(iio_read_channel_average_raw, 0x35d40311, "_gpl");
SYMBOL_CRC(iio_convert_raw_to_processed, 0x97788004, "_gpl");
SYMBOL_CRC(iio_read_channel_attribute, 0xeabad9dd, "_gpl");
SYMBOL_CRC(iio_read_channel_offset, 0xb8af652e, "_gpl");
SYMBOL_CRC(iio_read_channel_processed_scale, 0xd1c43848, "_gpl");
SYMBOL_CRC(iio_read_channel_processed, 0xacaf03bf, "_gpl");
SYMBOL_CRC(iio_read_channel_scale, 0xff2c66a3, "_gpl");
SYMBOL_CRC(iio_read_avail_channel_attribute, 0x873c0469, "_gpl");
SYMBOL_CRC(iio_read_avail_channel_raw, 0xa0d11656, "_gpl");
SYMBOL_CRC(iio_read_max_channel_raw, 0x8b5ad1a8, "_gpl");
SYMBOL_CRC(iio_read_min_channel_raw, 0xe705aa4c, "_gpl");
SYMBOL_CRC(iio_get_channel_type, 0xcd13d6d7, "_gpl");
SYMBOL_CRC(iio_write_channel_attribute, 0x76f9acc2, "_gpl");
SYMBOL_CRC(iio_write_channel_raw, 0xe2e43e6a, "_gpl");
SYMBOL_CRC(iio_get_channel_ext_info_count, 0xb80d2955, "_gpl");
SYMBOL_CRC(iio_read_channel_ext_info, 0x249d2b5a, "_gpl");
SYMBOL_CRC(iio_write_channel_ext_info, 0x18a7135a, "_gpl");
SYMBOL_CRC(iio_read_channel_label, 0x88069bac, "_gpl");
SYMBOL_CRC(iio_pop_from_buffer, 0x6960cc83, "_gpl");
SYMBOL_CRC(iio_buffer_init, 0x1cac64bd, "");
SYMBOL_CRC(iio_update_buffers, 0x2f97afba, "_gpl");
SYMBOL_CRC(iio_buffer_signal_dmabuf_done, 0xd085b108, "_gpl");
SYMBOL_CRC(iio_validate_scan_mask_onehot, 0x43ead8a3, "_gpl");
SYMBOL_CRC(iio_push_to_buffers, 0xf7a1c51e, "_gpl");
SYMBOL_CRC(iio_push_to_buffers_with_ts_unaligned, 0x7f6ae5d8, "_gpl");
SYMBOL_CRC(iio_buffer_get, 0xf431ad65, "_gpl");
SYMBOL_CRC(iio_buffer_put, 0x48041a47, "_gpl");
SYMBOL_CRC(iio_device_attach_buffer, 0x1072f0db, "_gpl");
SYMBOL_CRC(iio_trigger_register, 0xbff97efa, "");
SYMBOL_CRC(iio_trigger_unregister, 0x5403b271, "");
SYMBOL_CRC(iio_trigger_set_immutable, 0xd54b52ba, "");
SYMBOL_CRC(iio_trigger_poll, 0x8ab34ed9, "");
SYMBOL_CRC(iio_trigger_generic_data_rdy_poll, 0x2d6bcdcb, "");
SYMBOL_CRC(iio_trigger_poll_nested, 0xe8e6293f, "");
SYMBOL_CRC(iio_trigger_notify_done, 0x5b1448b3, "");
SYMBOL_CRC(iio_pollfunc_store_time, 0xdf76bbeb, "");
SYMBOL_CRC(iio_alloc_pollfunc, 0x3d6eb20d, "_gpl");
SYMBOL_CRC(iio_dealloc_pollfunc, 0x1c287816, "_gpl");
SYMBOL_CRC(__iio_trigger_alloc, 0x59a9f358, "");
SYMBOL_CRC(iio_trigger_free, 0x205e3bd7, "");
SYMBOL_CRC(__devm_iio_trigger_alloc, 0x4428253c, "_gpl");
SYMBOL_CRC(devm_iio_trigger_register, 0xab7d0273, "_gpl");
SYMBOL_CRC(iio_trigger_using_own, 0xad07a18b, "");
SYMBOL_CRC(iio_validate_own_trigger, 0x335edf0d, "_gpl");
SYMBOL_CRC(iio_trigger_validate_own_device, 0x4de68208, "");
SYMBOL_CRC(iio_device_suspend_triggering, 0x60832988, "");
SYMBOL_CRC(iio_device_resume_triggering, 0x35ea9516, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc1514a3b, "free_irq" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xef9472a8, "ww_mutex_lock_interruptible" },
	{ 0x489785d7, "dma_resv_reserve_fences" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xbcc15e75, "ktime_get_coarse_with_offset" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x8da70093, "dma_resv_wait_timeout" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x70c69a78, "cdev_device_del" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3b6df30a, "ww_mutex_unlock" },
	{ 0x16965a52, "device_initialize" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8626bd01, "dma_resv_add_fence" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37ec39b5, "fwnode_property_get_reference_args" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0xd8940511, "__module_get" },
	{ 0x99ed6ef6, "get_device" },
	{ 0xb3dd23d5, "dma_buf_attach" },
	{ 0x6b83cd46, "fwnode_property_match_string" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x1f5d4fcc, "fwnode_get_parent" },
	{ 0xde5315ca, "devres_add" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x6d11488, "__bitmap_equal" },
	{ 0x6db8d769, "device_match_fwnode" },
	{ 0x8939688b, "device_set_node" },
	{ 0x122c3a7e, "_printk" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xcb9c0934, "cdev_device_add" },
	{ 0x1b9bea23, "ww_mutex_trylock" },
	{ 0x1000e51, "schedule" },
	{ 0x61993a4a, "anon_inode_getfd" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x36dc6ece, "put_device" },
	{ 0x20dbf27, "bitmap_alloc" },
	{ 0xbe3f4ffa, "dma_buf_map_attachment" },
	{ 0x1c5b1f28, "irq_free_descs" },
	{ 0x603da9ea, "handle_simple_irq" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x9d9e8944, "module_put" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0xf8ce1c00, "compat_ptr_ioctl" },
	{ 0xf5e7ea40, "ktime_get_coarse_ts64" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xbf8790c5, "bus_unregister" },
	{ 0x669c413b, "_dev_err" },
	{ 0x5d809a68, "simple_open" },
	{ 0x6955fd4e, "dma_buf_unmap_attachment" },
	{ 0xc4ec99cd, "bus_find_device" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0x7b1a51f0, "device_add" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x587b0954, "kvasprintf" },
	{ 0x295427ca, "noop_llseek" },
	{ 0xaacf03c1, "dma_fence_signal" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x941da81d, "dma_buf_get" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x125ac9da, "device_property_read_string_array" },
	{ 0x8ae2c330, "__devres_alloc_node" },
	{ 0x772f9ff8, "ww_mutex_lock" },
	{ 0x70123581, "dma_buf_put" },
	{ 0xffb7c514, "ida_free" },
	{ 0x3221df67, "__bitmap_subset" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdeb99119, "dma_fence_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0x73f49957, "device_del" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xc752c6f, "__irq_alloc_descs" },
	{ 0xe87fcff1, "fwnode_property_read_string" },
	{ 0x8a5711b1, "fwnode_property_present" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x93641bf5, "fwnode_get_next_parent" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xd5ea64d7, "dma_buf_detach" },
	{ 0x9c998aa5, "devm_krealloc" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x577a7f5, "__irq_set_handler" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0x7d1a007, "irq_set_chip" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xa01f13a6, "cdev_init" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x847188e8, "krealloc_noprof" },
	{ 0x1b367b9c, "bus_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7E3195094E60FB9B5EB0AF4");
