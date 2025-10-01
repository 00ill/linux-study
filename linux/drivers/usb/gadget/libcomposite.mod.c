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

KSYMTAB_FUNC(usb_gadget_get_string, "_gpl", "");
KSYMTAB_FUNC(usb_validate_langid, "_gpl", "");
KSYMTAB_FUNC(usb_descriptor_fillbuf, "_gpl", "");
KSYMTAB_FUNC(usb_gadget_config_buf, "_gpl", "");
KSYMTAB_FUNC(usb_copy_descriptors, "_gpl", "");
KSYMTAB_FUNC(usb_assign_descriptors, "_gpl", "");
KSYMTAB_FUNC(usb_free_all_descriptors, "_gpl", "");
KSYMTAB_FUNC(usb_otg_descriptor_alloc, "_gpl", "");
KSYMTAB_FUNC(usb_otg_descriptor_init, "_gpl", "");
KSYMTAB_FUNC(usb_ep_autoconfig_ss, "_gpl", "");
KSYMTAB_FUNC(usb_ep_autoconfig, "_gpl", "");
KSYMTAB_FUNC(usb_ep_autoconfig_release, "_gpl", "");
KSYMTAB_FUNC(usb_ep_autoconfig_reset, "_gpl", "");
KSYMTAB_FUNC(config_ep_by_speed_and_alt, "_gpl", "");
KSYMTAB_FUNC(config_ep_by_speed, "_gpl", "");
KSYMTAB_FUNC(usb_add_function, "_gpl", "");
KSYMTAB_FUNC(usb_remove_function, "_gpl", "");
KSYMTAB_FUNC(usb_function_deactivate, "_gpl", "");
KSYMTAB_FUNC(usb_function_activate, "_gpl", "");
KSYMTAB_FUNC(usb_interface_id, "_gpl", "");
KSYMTAB_FUNC(usb_func_wakeup, "_gpl", "");
KSYMTAB_FUNC(usb_add_config_only, "_gpl", "");
KSYMTAB_FUNC(usb_add_config, "_gpl", "");
KSYMTAB_FUNC(usb_string_id, "_gpl", "");
KSYMTAB_FUNC(usb_string_ids_tab, "_gpl", "");
KSYMTAB_FUNC(usb_gstrings_attach, "_gpl", "");
KSYMTAB_FUNC(usb_string_ids_n, "_gpl", "");
KSYMTAB_FUNC(usb_composite_probe, "_gpl", "");
KSYMTAB_FUNC(usb_composite_unregister, "_gpl", "");
KSYMTAB_FUNC(usb_composite_setup_continue, "_gpl", "");
KSYMTAB_FUNC(usb_composite_overwrite_options, "_gpl", "");
KSYMTAB_FUNC(usb_get_function_instance, "_gpl", "");
KSYMTAB_FUNC(usb_get_function, "_gpl", "");
KSYMTAB_FUNC(usb_put_function_instance, "_gpl", "");
KSYMTAB_FUNC(usb_put_function, "_gpl", "");
KSYMTAB_FUNC(usb_function_register, "_gpl", "");
KSYMTAB_FUNC(usb_function_unregister, "_gpl", "");
KSYMTAB_FUNC(usb_os_desc_prepare_interf_dir, "", "");
KSYMTAB_FUNC(unregister_gadget_item, "_gpl", "");
KSYMTAB_FUNC(alloc_ep_req, "_gpl", "");

SYMBOL_CRC(usb_gadget_get_string, 0x4beb505d, "_gpl");
SYMBOL_CRC(usb_validate_langid, 0x0c589aba, "_gpl");
SYMBOL_CRC(usb_descriptor_fillbuf, 0xd2ea2134, "_gpl");
SYMBOL_CRC(usb_gadget_config_buf, 0xf474a207, "_gpl");
SYMBOL_CRC(usb_copy_descriptors, 0x2e09263f, "_gpl");
SYMBOL_CRC(usb_assign_descriptors, 0x72516513, "_gpl");
SYMBOL_CRC(usb_free_all_descriptors, 0x0d962ac6, "_gpl");
SYMBOL_CRC(usb_otg_descriptor_alloc, 0x95aa2d40, "_gpl");
SYMBOL_CRC(usb_otg_descriptor_init, 0xe8b84d4f, "_gpl");
SYMBOL_CRC(usb_ep_autoconfig_ss, 0x9a0d820c, "_gpl");
SYMBOL_CRC(usb_ep_autoconfig, 0x6f3f2011, "_gpl");
SYMBOL_CRC(usb_ep_autoconfig_release, 0x9a0f6881, "_gpl");
SYMBOL_CRC(usb_ep_autoconfig_reset, 0xbe368fdd, "_gpl");
SYMBOL_CRC(config_ep_by_speed_and_alt, 0xcf5210f2, "_gpl");
SYMBOL_CRC(config_ep_by_speed, 0x35e071f4, "_gpl");
SYMBOL_CRC(usb_add_function, 0xd85d013a, "_gpl");
SYMBOL_CRC(usb_remove_function, 0x5b558312, "_gpl");
SYMBOL_CRC(usb_function_deactivate, 0xd91bea25, "_gpl");
SYMBOL_CRC(usb_function_activate, 0x0367d4b8, "_gpl");
SYMBOL_CRC(usb_interface_id, 0x8bf701a4, "_gpl");
SYMBOL_CRC(usb_func_wakeup, 0xc1f00e75, "_gpl");
SYMBOL_CRC(usb_add_config_only, 0x7421dc3b, "_gpl");
SYMBOL_CRC(usb_add_config, 0x12de885e, "_gpl");
SYMBOL_CRC(usb_string_id, 0x5a851535, "_gpl");
SYMBOL_CRC(usb_string_ids_tab, 0x13ef8f99, "_gpl");
SYMBOL_CRC(usb_gstrings_attach, 0x03a7eeb5, "_gpl");
SYMBOL_CRC(usb_string_ids_n, 0xdb806ba5, "_gpl");
SYMBOL_CRC(usb_composite_probe, 0x7ba0f654, "_gpl");
SYMBOL_CRC(usb_composite_unregister, 0xe7d5be69, "_gpl");
SYMBOL_CRC(usb_composite_setup_continue, 0x86194557, "_gpl");
SYMBOL_CRC(usb_composite_overwrite_options, 0xb1bbb287, "_gpl");
SYMBOL_CRC(usb_get_function_instance, 0xb015117d, "_gpl");
SYMBOL_CRC(usb_get_function, 0x5ca53377, "_gpl");
SYMBOL_CRC(usb_put_function_instance, 0x3a7652c8, "_gpl");
SYMBOL_CRC(usb_put_function, 0x53112ce3, "_gpl");
SYMBOL_CRC(usb_function_register, 0xf9673004, "_gpl");
SYMBOL_CRC(usb_function_unregister, 0xf0105eee, "_gpl");
SYMBOL_CRC(usb_os_desc_prepare_interf_dir, 0xdaa5d4cc, "");
SYMBOL_CRC(unregister_gadget_item, 0x5795f5f6, "_gpl");
SYMBOL_CRC(alloc_ep_req, 0x640cc173, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x3b3bf1a0, "config_group_init" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xe8653a73, "usb_gadget_check_config" },
	{ 0x96848186, "scnprintf" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x697ed5f0, "memcpy_and_pad" },
	{ 0x10eea4b8, "usb_gadget_ep_match_desc" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x970607ff, "usb_ep_free_request" },
	{ 0xaa8d662b, "configfs_unregister_subsystem" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xd750b4b2, "usb_gadget_set_selfpowered" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x122c3a7e, "_printk" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xeb1e6cbc, "usb_gadget_set_remote_wakeup" },
	{ 0xa916b694, "strnlen" },
	{ 0x49d0c742, "usb_gadget_vbus_draw" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xb64bca84, "config_item_set_name" },
	{ 0x9d9e8944, "module_put" },
	{ 0x8c8eed8e, "usb_ep_dequeue" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xee7a3241, "device_create_file" },
	{ 0x669c413b, "_dev_err" },
	{ 0x2eb49b36, "configfs_register_subsystem" },
	{ 0xef29640e, "init_uts_ns" },
	{ 0x10b9f0fc, "config_group_init_type_name" },
	{ 0x76f5e613, "usb_gadget_activate" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5a921311, "strncmp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x25143ab2, "usb_gadget_clear_selfpowered" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2dc15614, "usb_gadget_set_state" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8ca7011c, "usb_ep_alloc_request" },
	{ 0xeea0d354, "usb_gadget_unregister_driver" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc135d7a1, "config_item_init_type_name" },
	{ 0x671e0dac, "config_item_put" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x4bf700b8, "usb_gadget_register_driver_owner" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x7673e7f6, "usb_ep_queue" },
	{ 0x98cf60b3, "strlen" },
	{ 0xd5aa8a74, "usb_gadget_deactivate" },
	{ 0x349cba85, "strchr" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa92274c6, "device_remove_file" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "657B9E8952D53179133C1AE");
