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

KSYMTAB_FUNC(fsg_common_set_sysfs, "_gpl", "");
KSYMTAB_FUNC(fsg_common_set_num_buffers, "_gpl", "");
KSYMTAB_FUNC(fsg_common_remove_lun, "_gpl", "");
KSYMTAB_FUNC(fsg_common_remove_luns, "_gpl", "");
KSYMTAB_FUNC(fsg_common_free_buffers, "_gpl", "");
KSYMTAB_FUNC(fsg_common_set_cdev, "_gpl", "");
KSYMTAB_FUNC(fsg_common_create_lun, "_gpl", "");
KSYMTAB_FUNC(fsg_common_create_luns, "_gpl", "");
KSYMTAB_FUNC(fsg_common_set_inquiry_string, "_gpl", "");
KSYMTAB_FUNC(fsg_config_from_params, "_gpl", "");
KSYMTAB_DATA(fsg_intf_desc, "_gpl", "");
KSYMTAB_DATA(fsg_fs_bulk_in_desc, "_gpl", "");
KSYMTAB_DATA(fsg_fs_bulk_out_desc, "_gpl", "");
KSYMTAB_DATA(fsg_fs_function, "_gpl", "");
KSYMTAB_DATA(fsg_hs_bulk_in_desc, "_gpl", "");
KSYMTAB_DATA(fsg_hs_bulk_out_desc, "_gpl", "");
KSYMTAB_DATA(fsg_hs_function, "_gpl", "");
KSYMTAB_DATA(fsg_ss_bulk_in_desc, "_gpl", "");
KSYMTAB_DATA(fsg_ss_bulk_in_comp_desc, "_gpl", "");
KSYMTAB_DATA(fsg_ss_bulk_out_desc, "_gpl", "");
KSYMTAB_DATA(fsg_ss_bulk_out_comp_desc, "_gpl", "");
KSYMTAB_DATA(fsg_ss_function, "_gpl", "");
KSYMTAB_FUNC(fsg_lun_close, "_gpl", "");
KSYMTAB_FUNC(fsg_lun_open, "_gpl", "");
KSYMTAB_FUNC(fsg_lun_fsync_sub, "_gpl", "");
KSYMTAB_FUNC(store_cdrom_address, "_gpl", "");
KSYMTAB_FUNC(fsg_show_ro, "_gpl", "");
KSYMTAB_FUNC(fsg_show_nofua, "_gpl", "");
KSYMTAB_FUNC(fsg_show_file, "_gpl", "");
KSYMTAB_FUNC(fsg_show_cdrom, "_gpl", "");
KSYMTAB_FUNC(fsg_show_removable, "_gpl", "");
KSYMTAB_FUNC(fsg_show_inquiry_string, "_gpl", "");
KSYMTAB_FUNC(fsg_store_ro, "_gpl", "");
KSYMTAB_FUNC(fsg_store_nofua, "_gpl", "");
KSYMTAB_FUNC(fsg_store_file, "_gpl", "");
KSYMTAB_FUNC(fsg_store_cdrom, "_gpl", "");
KSYMTAB_FUNC(fsg_store_removable, "_gpl", "");
KSYMTAB_FUNC(fsg_store_inquiry_string, "_gpl", "");
KSYMTAB_FUNC(fsg_store_forced_eject, "_gpl", "");

SYMBOL_CRC(fsg_common_set_sysfs, 0x7e26d4a5, "_gpl");
SYMBOL_CRC(fsg_common_set_num_buffers, 0x1ccb58f7, "_gpl");
SYMBOL_CRC(fsg_common_remove_lun, 0x58bd6e77, "_gpl");
SYMBOL_CRC(fsg_common_remove_luns, 0x141fce2a, "_gpl");
SYMBOL_CRC(fsg_common_free_buffers, 0x9a0221c7, "_gpl");
SYMBOL_CRC(fsg_common_set_cdev, 0x82b6c60b, "_gpl");
SYMBOL_CRC(fsg_common_create_lun, 0x3c6a07d0, "_gpl");
SYMBOL_CRC(fsg_common_create_luns, 0xd1a3e8e0, "_gpl");
SYMBOL_CRC(fsg_common_set_inquiry_string, 0x6acb4179, "_gpl");
SYMBOL_CRC(fsg_config_from_params, 0xab6c68ac, "_gpl");
SYMBOL_CRC(fsg_intf_desc, 0xb52ba28a, "_gpl");
SYMBOL_CRC(fsg_fs_bulk_in_desc, 0xb54d0d95, "_gpl");
SYMBOL_CRC(fsg_fs_bulk_out_desc, 0x1710b539, "_gpl");
SYMBOL_CRC(fsg_fs_function, 0xa5f99b69, "_gpl");
SYMBOL_CRC(fsg_hs_bulk_in_desc, 0x95cffb3e, "_gpl");
SYMBOL_CRC(fsg_hs_bulk_out_desc, 0x56344daf, "_gpl");
SYMBOL_CRC(fsg_hs_function, 0x857b6dc2, "_gpl");
SYMBOL_CRC(fsg_ss_bulk_in_desc, 0x2933ee1d, "_gpl");
SYMBOL_CRC(fsg_ss_bulk_in_comp_desc, 0x423845e4, "_gpl");
SYMBOL_CRC(fsg_ss_bulk_out_desc, 0xf4efc0c8, "_gpl");
SYMBOL_CRC(fsg_ss_bulk_out_comp_desc, 0xa5cae92f, "_gpl");
SYMBOL_CRC(fsg_ss_function, 0x398778e1, "_gpl");
SYMBOL_CRC(fsg_lun_close, 0xa94207a1, "_gpl");
SYMBOL_CRC(fsg_lun_open, 0xee3d03b0, "_gpl");
SYMBOL_CRC(fsg_lun_fsync_sub, 0x8bbec573, "_gpl");
SYMBOL_CRC(store_cdrom_address, 0xb3adf38d, "_gpl");
SYMBOL_CRC(fsg_show_ro, 0x0f02448b, "_gpl");
SYMBOL_CRC(fsg_show_nofua, 0x6444a02e, "_gpl");
SYMBOL_CRC(fsg_show_file, 0x8a78df42, "_gpl");
SYMBOL_CRC(fsg_show_cdrom, 0x691eb4b6, "_gpl");
SYMBOL_CRC(fsg_show_removable, 0x5d89e5ef, "_gpl");
SYMBOL_CRC(fsg_show_inquiry_string, 0xc34ad88e, "_gpl");
SYMBOL_CRC(fsg_store_ro, 0x625c5b27, "_gpl");
SYMBOL_CRC(fsg_store_nofua, 0x82775cb6, "_gpl");
SYMBOL_CRC(fsg_store_file, 0x99bd6b00, "_gpl");
SYMBOL_CRC(fsg_store_cdrom, 0xc21ddbf1, "_gpl");
SYMBOL_CRC(fsg_store_removable, 0xa6baadef, "_gpl");
SYMBOL_CRC(fsg_store_inquiry_string, 0x5f5a1239, "_gpl");
SYMBOL_CRC(fsg_store_forced_eject, 0x387a08fb, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xba53303a, "filp_open" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xb2211837, "usb_ep_fifo_flush" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x22acd2e2, "device_unregister" },
	{ 0x8bf701a4, "usb_interface_id" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x72516513, "usb_assign_descriptors" },
	{ 0x590b336, "invalidate_mapping_pages" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x47debb6f, "send_sig_info" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x6008689f, "kthread_complete_and_exit" },
	{ 0x143e7068, "I_BDEV" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x970607ff, "usb_ep_free_request" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x35e071f4, "config_ep_by_speed" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x36dc6ece, "put_device" },
	{ 0x8c8eed8e, "usb_ep_dequeue" },
	{ 0x86194557, "usb_composite_setup_continue" },
	{ 0xf9673004, "usb_function_register" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xacceb7d8, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0x669c413b, "_dev_err" },
	{ 0xce807a25, "up_write" },
	{ 0x861cbccd, "usb_ep_clear_halt" },
	{ 0x10b9f0fc, "config_group_init_type_name" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x6f3f2011, "usb_ep_autoconfig" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5795f5f6, "unregister_gadget_item" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x3a7652c8, "usb_put_function_instance" },
	{ 0x28b118b6, "device_register" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xbc273cf9, "kernel_read" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x668b19a1, "down_read" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0xf0105eee, "usb_function_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8ca7011c, "usb_ep_alloc_request" },
	{ 0x2d75696f, "usb_ep_set_halt" },
	{ 0x1c491cb3, "vfs_fsync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5b88ec08, "file_path" },
	{ 0x671e0dac, "config_item_put" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x419d8389, "usb_ep_set_wedge" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x7673e7f6, "usb_ep_queue" },
	{ 0x98cf60b3, "strlen" },
	{ 0xbcf61715, "usb_ep_enable" },
	{ 0xd152cd3f, "usb_ep_disable" },
	{ 0x349cba85, "strchr" },
	{ 0xc095479f, "dequeue_signal" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd962ac6, "usb_free_all_descriptors" },
	{ 0x53b954a2, "up_read" },
	{ 0x3a7eeb5, "usb_gstrings_attach" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x9f29ae48, "kernel_write" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "libcomposite");


MODULE_INFO(srcversion, "5B61B5645B5DB2CAB5D67A2");
