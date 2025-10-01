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

KSYMTAB_DATA(snd_major, "", "");
KSYMTAB_DATA(snd_ecards_limit, "", "");
KSYMTAB_FUNC(snd_request_card, "", "");
KSYMTAB_FUNC(snd_lookup_minor_data, "", "");
KSYMTAB_FUNC(snd_register_device, "", "");
KSYMTAB_FUNC(snd_unregister_device, "", "");
KSYMTAB_FUNC(snd_device_alloc, "_gpl", "");
KSYMTAB_FUNC(snd_card_new, "", "");
KSYMTAB_FUNC(snd_devm_card_new, "_gpl", "");
KSYMTAB_FUNC(snd_card_free_on_error, "_gpl", "");
KSYMTAB_FUNC(snd_card_ref, "_gpl", "");
KSYMTAB_FUNC(snd_card_disconnect, "", "");
KSYMTAB_FUNC(snd_card_disconnect_sync, "_gpl", "");
KSYMTAB_FUNC(snd_card_free_when_closed, "", "");
KSYMTAB_FUNC(snd_card_free, "", "");
KSYMTAB_FUNC(snd_card_set_id, "", "");
KSYMTAB_FUNC(snd_card_add_dev_attr, "_gpl", "");
KSYMTAB_FUNC(snd_card_register, "", "");
KSYMTAB_FUNC(snd_component_add, "", "");
KSYMTAB_FUNC(snd_card_file_add, "", "");
KSYMTAB_FUNC(snd_card_file_remove, "", "");
KSYMTAB_FUNC(snd_power_ref_and_wait, "_gpl", "");
KSYMTAB_FUNC(snd_power_wait, "", "");
KSYMTAB_FUNC(copy_to_user_fromio, "", "");
KSYMTAB_FUNC(copy_to_iter_fromio, "", "");
KSYMTAB_FUNC(copy_from_user_toio, "", "");
KSYMTAB_FUNC(copy_from_iter_toio, "", "");
KSYMTAB_FUNC(snd_ctl_notify, "", "");
KSYMTAB_FUNC(snd_ctl_notify_one, "", "");
KSYMTAB_FUNC(snd_ctl_new1, "", "");
KSYMTAB_FUNC(snd_ctl_free_one, "", "");
KSYMTAB_FUNC(snd_ctl_add, "", "");
KSYMTAB_FUNC(snd_ctl_replace, "", "");
KSYMTAB_FUNC(snd_ctl_remove, "", "");
KSYMTAB_FUNC(snd_ctl_remove_id, "", "");
KSYMTAB_FUNC(snd_ctl_activate_id, "_gpl", "");
KSYMTAB_FUNC(snd_ctl_rename_id, "", "");
KSYMTAB_FUNC(snd_ctl_rename, "", "");
KSYMTAB_FUNC(snd_ctl_find_numid, "", "");
KSYMTAB_FUNC(snd_ctl_find_id, "", "");
KSYMTAB_FUNC(snd_ctl_register_ioctl, "", "");
KSYMTAB_FUNC(snd_ctl_register_ioctl_compat, "", "");
KSYMTAB_FUNC(snd_ctl_unregister_ioctl, "", "");
KSYMTAB_FUNC(snd_ctl_unregister_ioctl_compat, "", "");
KSYMTAB_FUNC(snd_ctl_get_preferred_subdevice, "_gpl", "");
KSYMTAB_FUNC(snd_ctl_request_layer, "_gpl", "");
KSYMTAB_FUNC(snd_ctl_register_layer, "_gpl", "");
KSYMTAB_FUNC(snd_ctl_disconnect_layer, "_gpl", "");
KSYMTAB_FUNC(snd_ctl_boolean_mono_info, "", "");
KSYMTAB_FUNC(snd_ctl_boolean_stereo_info, "", "");
KSYMTAB_FUNC(snd_ctl_enum_info, "", "");
KSYMTAB_FUNC(release_and_free_resource, "", "");
KSYMTAB_FUNC(snd_pci_quirk_lookup_id, "", "");
KSYMTAB_FUNC(snd_pci_quirk_lookup, "", "");
KSYMTAB_FUNC(snd_fasync_helper, "_gpl", "");
KSYMTAB_FUNC(snd_kill_fasync, "_gpl", "");
KSYMTAB_FUNC(snd_fasync_free, "_gpl", "");
KSYMTAB_FUNC(snd_device_new, "", "");
KSYMTAB_FUNC(snd_device_disconnect, "_gpl", "");
KSYMTAB_FUNC(snd_device_free, "", "");
KSYMTAB_FUNC(snd_device_register, "", "");
KSYMTAB_FUNC(snd_device_get_state, "_gpl", "");
KSYMTAB_DATA(snd_seq_root, "", "");
KSYMTAB_FUNC(snd_info_get_line, "", "");
KSYMTAB_FUNC(snd_info_get_str, "", "");
KSYMTAB_FUNC(snd_info_create_module_entry, "", "");
KSYMTAB_FUNC(snd_info_create_card_entry, "", "");
KSYMTAB_FUNC(snd_info_free_entry, "", "");
KSYMTAB_FUNC(snd_info_register, "", "");
KSYMTAB_FUNC(snd_card_rw_proc_new, "_gpl", "");
KSYMTAB_FUNC(snd_oss_info_register, "", "");
KSYMTAB_FUNC(snd_lookup_oss_minor_data, "", "");
KSYMTAB_FUNC(snd_register_oss_device, "", "");
KSYMTAB_FUNC(snd_unregister_oss_device, "", "");
KSYMTAB_FUNC(_snd_ctl_add_follower, "", "");
KSYMTAB_FUNC(snd_ctl_add_followers, "_gpl", "");
KSYMTAB_FUNC(snd_ctl_make_virtual_master, "", "");
KSYMTAB_FUNC(snd_ctl_add_vmaster_hook, "_gpl", "");
KSYMTAB_FUNC(snd_ctl_sync_vmaster, "_gpl", "");
KSYMTAB_FUNC(snd_ctl_apply_vmaster_followers, "_gpl", "");
KSYMTAB_FUNC(snd_jack_add_new_kctl, "", "");
KSYMTAB_FUNC(snd_jack_new, "", "");
KSYMTAB_FUNC(snd_jack_set_parent, "", "");
KSYMTAB_FUNC(snd_jack_set_key, "", "");
KSYMTAB_FUNC(snd_jack_report, "", "");

SYMBOL_CRC(snd_major, 0x8f595b11, "");
SYMBOL_CRC(snd_ecards_limit, 0x3971b4df, "");
SYMBOL_CRC(snd_request_card, 0x4a3ea5c0, "");
SYMBOL_CRC(snd_lookup_minor_data, 0xb2e5ae4a, "");
SYMBOL_CRC(snd_register_device, 0x30647f39, "");
SYMBOL_CRC(snd_unregister_device, 0x85194765, "");
SYMBOL_CRC(snd_device_alloc, 0xff106c56, "_gpl");
SYMBOL_CRC(snd_card_new, 0x0306f753, "");
SYMBOL_CRC(snd_devm_card_new, 0x2599f823, "_gpl");
SYMBOL_CRC(snd_card_free_on_error, 0x85e82e6c, "_gpl");
SYMBOL_CRC(snd_card_ref, 0x58136b4a, "_gpl");
SYMBOL_CRC(snd_card_disconnect, 0xda9ef1db, "");
SYMBOL_CRC(snd_card_disconnect_sync, 0xe59b5736, "_gpl");
SYMBOL_CRC(snd_card_free_when_closed, 0x624ab268, "");
SYMBOL_CRC(snd_card_free, 0x95f6a55f, "");
SYMBOL_CRC(snd_card_set_id, 0xf965886d, "");
SYMBOL_CRC(snd_card_add_dev_attr, 0xd8088162, "_gpl");
SYMBOL_CRC(snd_card_register, 0xc40f5484, "");
SYMBOL_CRC(snd_component_add, 0xa4435faa, "");
SYMBOL_CRC(snd_card_file_add, 0x5a63169a, "");
SYMBOL_CRC(snd_card_file_remove, 0xd60bda5c, "");
SYMBOL_CRC(snd_power_ref_and_wait, 0xa898b988, "_gpl");
SYMBOL_CRC(snd_power_wait, 0xafee0660, "");
SYMBOL_CRC(copy_to_user_fromio, 0x342a2354, "");
SYMBOL_CRC(copy_to_iter_fromio, 0x4e0ec084, "");
SYMBOL_CRC(copy_from_user_toio, 0xfffd89db, "");
SYMBOL_CRC(copy_from_iter_toio, 0xd7f5e1fb, "");
SYMBOL_CRC(snd_ctl_notify, 0x93d1d1e4, "");
SYMBOL_CRC(snd_ctl_notify_one, 0x7649da53, "");
SYMBOL_CRC(snd_ctl_new1, 0x1069d298, "");
SYMBOL_CRC(snd_ctl_free_one, 0x5a1edda3, "");
SYMBOL_CRC(snd_ctl_add, 0xcae9f99e, "");
SYMBOL_CRC(snd_ctl_replace, 0x6979233c, "");
SYMBOL_CRC(snd_ctl_remove, 0x654f9128, "");
SYMBOL_CRC(snd_ctl_remove_id, 0x9c4e0134, "");
SYMBOL_CRC(snd_ctl_activate_id, 0xa84eb862, "_gpl");
SYMBOL_CRC(snd_ctl_rename_id, 0x559fada9, "");
SYMBOL_CRC(snd_ctl_rename, 0x426b0a9d, "");
SYMBOL_CRC(snd_ctl_find_numid, 0xe54ee663, "");
SYMBOL_CRC(snd_ctl_find_id, 0xb62cadeb, "");
SYMBOL_CRC(snd_ctl_register_ioctl, 0x9d91cacf, "");
SYMBOL_CRC(snd_ctl_register_ioctl_compat, 0x128a8023, "");
SYMBOL_CRC(snd_ctl_unregister_ioctl, 0x8019959e, "");
SYMBOL_CRC(snd_ctl_unregister_ioctl_compat, 0x4915ac13, "");
SYMBOL_CRC(snd_ctl_get_preferred_subdevice, 0x8987dc82, "_gpl");
SYMBOL_CRC(snd_ctl_request_layer, 0xfaf598c6, "_gpl");
SYMBOL_CRC(snd_ctl_register_layer, 0x94d27bbb, "_gpl");
SYMBOL_CRC(snd_ctl_disconnect_layer, 0x78756335, "_gpl");
SYMBOL_CRC(snd_ctl_boolean_mono_info, 0xd203810d, "");
SYMBOL_CRC(snd_ctl_boolean_stereo_info, 0xd7577bf7, "");
SYMBOL_CRC(snd_ctl_enum_info, 0xcc6a729f, "");
SYMBOL_CRC(release_and_free_resource, 0xc5a6d10b, "");
SYMBOL_CRC(snd_pci_quirk_lookup_id, 0x73076315, "");
SYMBOL_CRC(snd_pci_quirk_lookup, 0x25d1ef26, "");
SYMBOL_CRC(snd_fasync_helper, 0x43c792dd, "_gpl");
SYMBOL_CRC(snd_kill_fasync, 0xf8f2a4eb, "_gpl");
SYMBOL_CRC(snd_fasync_free, 0x5af762f1, "_gpl");
SYMBOL_CRC(snd_device_new, 0xb6266700, "");
SYMBOL_CRC(snd_device_disconnect, 0x99357e24, "_gpl");
SYMBOL_CRC(snd_device_free, 0x03eb3df5, "");
SYMBOL_CRC(snd_device_register, 0xd095d123, "");
SYMBOL_CRC(snd_device_get_state, 0x9403f206, "_gpl");
SYMBOL_CRC(snd_seq_root, 0x9ccf5a3d, "");
SYMBOL_CRC(snd_info_get_line, 0x24a94b26, "");
SYMBOL_CRC(snd_info_get_str, 0x9e6d79f8, "");
SYMBOL_CRC(snd_info_create_module_entry, 0x9507edad, "");
SYMBOL_CRC(snd_info_create_card_entry, 0x35bfbfd7, "");
SYMBOL_CRC(snd_info_free_entry, 0x7c2b253b, "");
SYMBOL_CRC(snd_info_register, 0xc68b08a3, "");
SYMBOL_CRC(snd_card_rw_proc_new, 0xce1525a4, "_gpl");
SYMBOL_CRC(snd_oss_info_register, 0x8df3789f, "");
SYMBOL_CRC(snd_lookup_oss_minor_data, 0x198788b4, "");
SYMBOL_CRC(snd_register_oss_device, 0xe2bdf3c8, "");
SYMBOL_CRC(snd_unregister_oss_device, 0xfad9735a, "");
SYMBOL_CRC(_snd_ctl_add_follower, 0xf89bee15, "");
SYMBOL_CRC(snd_ctl_add_followers, 0xedee9a3d, "_gpl");
SYMBOL_CRC(snd_ctl_make_virtual_master, 0xac71d468, "");
SYMBOL_CRC(snd_ctl_add_vmaster_hook, 0x567c6987, "_gpl");
SYMBOL_CRC(snd_ctl_sync_vmaster, 0xf3ed4199, "_gpl");
SYMBOL_CRC(snd_ctl_apply_vmaster_followers, 0x5de4f196, "_gpl");
SYMBOL_CRC(snd_jack_add_new_kctl, 0xa2357a44, "");
SYMBOL_CRC(snd_jack_new, 0x72873ffc, "");
SYMBOL_CRC(snd_jack_set_parent, 0x55fa9ac9, "");
SYMBOL_CRC(snd_jack_set_key, 0x508f371f, "");
SYMBOL_CRC(snd_jack_report, 0xb9ece412, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x99c44b73, "input_allocate_device" },
	{ 0xe914e41e, "strcpy" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x66276d18, "_copy_to_iter" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8d9bb4d2, "kill_fasync" },
	{ 0x99c95fa5, "unregister_sound_special" },
	{ 0x14dafaf5, "proc_mkdir_mode" },
	{ 0x16965a52, "device_initialize" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x90576ec4, "vmemdup_user" },
	{ 0x32a0c53, "input_unregister_device" },
	{ 0xe7257ab8, "xa_store_range" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x906bb227, "proc_create_data" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0xe94fb6ef, "devm_remove_action" },
	{ 0x6f02a349, "import_ubuf" },
	{ 0x99ed6ef6, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0xde5315ca, "devres_add" },
	{ 0xcca88fba, "single_open_size" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0xdf2ebb87, "_raw_read_unlock_irqrestore" },
	{ 0xb727b479, "input_free_device" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xcab72f31, "input_register_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x36dc6ece, "put_device" },
	{ 0xa916b694, "strnlen" },
	{ 0xa21903f5, "register_sound_special_device" },
	{ 0xb1342cdb, "_raw_read_lock_irqsave" },
	{ 0x9d9e8944, "module_put" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x61651be, "strcat" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x57bc19d2, "down_write" },
	{ 0x669c413b, "_dev_err" },
	{ 0xce807a25, "up_write" },
	{ 0x7b1a51f0, "device_add" },
	{ 0xef29640e, "init_uts_ns" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x295427ca, "noop_llseek" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8ae2c330, "__devres_alloc_node" },
	{ 0xb06eee1f, "fasync_helper" },
	{ 0xf1e046cc, "panic" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf77555cd, "__memcpy_toio" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x11089ac7, "_ctype" },
	{ 0x73f49957, "device_del" },
	{ 0xb105c628, "proc_mkdir" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x99cd0788, "param_ops_charp" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x41cc93f6, "input_event" },
	{ 0x51aebcc9, "proc_remove" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x745a981, "xa_erase" },
	{ 0x661256ad, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x25532bfc, "proc_set_size" },
	{ 0x418c10ec, "__register_chrdev" },
	{ 0x6080511e, "kobject_set_name" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x9599b0d7, "_copy_from_iter" },
	{ 0x18888d00, "downgrade_write" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xe0ff878f, "stream_open" },
	{ 0x10139ad8, "single_release" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x9c97681, "pid_vnr" },
	{ 0xbb35b780, "devres_find" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0x59df781c, "sound_class" },
	{ 0xc5e74216, "release_resource" },
	{ 0x98cf60b3, "strlen" },
	{ 0x39e869f1, "proc_symlink" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x71c90ddc, "single_open" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x53b954a2, "up_read" },
	{ 0xac3274c9, "put_pid" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0FC17ACC2B954FD61E3DB99");
