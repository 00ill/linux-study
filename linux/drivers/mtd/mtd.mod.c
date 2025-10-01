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

KSYMTAB_DATA(mtd_table_mutex, "_gpl", "");
KSYMTAB_FUNC(__mtd_next_device, "_gpl", "");
KSYMTAB_FUNC(mtd_check_expert_analysis_mode, "_gpl", "");
KSYMTAB_FUNC(mtd_wunit_to_pairing_info, "_gpl", "");
KSYMTAB_FUNC(mtd_pairing_info_to_wunit, "_gpl", "");
KSYMTAB_FUNC(mtd_pairing_groups, "_gpl", "");
KSYMTAB_FUNC(mtd_device_parse_register, "_gpl", "");
KSYMTAB_FUNC(mtd_device_unregister, "_gpl", "");
KSYMTAB_FUNC(register_mtd_user, "_gpl", "");
KSYMTAB_FUNC(unregister_mtd_user, "_gpl", "");
KSYMTAB_FUNC(get_mtd_device, "_gpl", "");
KSYMTAB_FUNC(__get_mtd_device, "_gpl", "");
KSYMTAB_FUNC(of_get_mtd_device_by_node, "_gpl", "");
KSYMTAB_FUNC(get_mtd_device_nm, "_gpl", "");
KSYMTAB_FUNC(put_mtd_device, "_gpl", "");
KSYMTAB_FUNC(__put_mtd_device, "_gpl", "");
KSYMTAB_FUNC(mtd_erase, "_gpl", "");
KSYMTAB_FUNC(mtd_point, "_gpl", "");
KSYMTAB_FUNC(mtd_unpoint, "_gpl", "");
KSYMTAB_FUNC(mtd_get_unmapped_area, "_gpl", "");
KSYMTAB_FUNC(mtd_read, "_gpl", "");
KSYMTAB_FUNC(mtd_write, "_gpl", "");
KSYMTAB_FUNC(mtd_panic_write, "_gpl", "");
KSYMTAB_FUNC(mtd_read_oob, "_gpl", "");
KSYMTAB_FUNC(mtd_write_oob, "_gpl", "");
KSYMTAB_FUNC(mtd_ooblayout_ecc, "_gpl", "");
KSYMTAB_FUNC(mtd_ooblayout_free, "_gpl", "");
KSYMTAB_FUNC(mtd_ooblayout_find_eccregion, "_gpl", "");
KSYMTAB_FUNC(mtd_ooblayout_get_eccbytes, "_gpl", "");
KSYMTAB_FUNC(mtd_ooblayout_set_eccbytes, "_gpl", "");
KSYMTAB_FUNC(mtd_ooblayout_get_databytes, "_gpl", "");
KSYMTAB_FUNC(mtd_ooblayout_set_databytes, "_gpl", "");
KSYMTAB_FUNC(mtd_ooblayout_count_freebytes, "_gpl", "");
KSYMTAB_FUNC(mtd_ooblayout_count_eccbytes, "_gpl", "");
KSYMTAB_FUNC(mtd_get_fact_prot_info, "_gpl", "");
KSYMTAB_FUNC(mtd_read_fact_prot_reg, "_gpl", "");
KSYMTAB_FUNC(mtd_get_user_prot_info, "_gpl", "");
KSYMTAB_FUNC(mtd_read_user_prot_reg, "_gpl", "");
KSYMTAB_FUNC(mtd_write_user_prot_reg, "_gpl", "");
KSYMTAB_FUNC(mtd_lock_user_prot_reg, "_gpl", "");
KSYMTAB_FUNC(mtd_erase_user_prot_reg, "_gpl", "");
KSYMTAB_FUNC(mtd_lock, "_gpl", "");
KSYMTAB_FUNC(mtd_unlock, "_gpl", "");
KSYMTAB_FUNC(mtd_is_locked, "_gpl", "");
KSYMTAB_FUNC(mtd_block_isreserved, "_gpl", "");
KSYMTAB_FUNC(mtd_block_isbad, "_gpl", "");
KSYMTAB_FUNC(mtd_block_markbad, "_gpl", "");
KSYMTAB_FUNC(mtd_writev, "_gpl", "");
KSYMTAB_FUNC(mtd_kmalloc_up_to, "_gpl", "");
KSYMTAB_FUNC(get_tree_mtd, "_gpl", "");
KSYMTAB_FUNC(kill_mtd_super, "_gpl", "");
KSYMTAB_FUNC(mtd_concat_create, "", "");
KSYMTAB_FUNC(mtd_concat_destroy, "", "");
KSYMTAB_FUNC(mtd_add_partition, "_gpl", "");
KSYMTAB_FUNC(mtd_del_partition, "_gpl", "");
KSYMTAB_FUNC(__register_mtd_parser, "_gpl", "");
KSYMTAB_FUNC(deregister_mtd_parser, "_gpl", "");
KSYMTAB_FUNC(mtd_get_device_size, "_gpl", "");

SYMBOL_CRC(mtd_table_mutex, 0x50dabc2f, "_gpl");
SYMBOL_CRC(__mtd_next_device, 0xb014a89f, "_gpl");
SYMBOL_CRC(mtd_check_expert_analysis_mode, 0xb7075882, "_gpl");
SYMBOL_CRC(mtd_wunit_to_pairing_info, 0xc19702a4, "_gpl");
SYMBOL_CRC(mtd_pairing_info_to_wunit, 0xc2ba71a7, "_gpl");
SYMBOL_CRC(mtd_pairing_groups, 0x7a72830d, "_gpl");
SYMBOL_CRC(mtd_device_parse_register, 0x85c150e8, "_gpl");
SYMBOL_CRC(mtd_device_unregister, 0xa1171806, "_gpl");
SYMBOL_CRC(register_mtd_user, 0x5b60eb90, "_gpl");
SYMBOL_CRC(unregister_mtd_user, 0x9eae0115, "_gpl");
SYMBOL_CRC(get_mtd_device, 0xbb3e81f2, "_gpl");
SYMBOL_CRC(__get_mtd_device, 0x887793dd, "_gpl");
SYMBOL_CRC(of_get_mtd_device_by_node, 0xf53bf083, "_gpl");
SYMBOL_CRC(get_mtd_device_nm, 0x6ece4080, "_gpl");
SYMBOL_CRC(put_mtd_device, 0xe15b13f7, "_gpl");
SYMBOL_CRC(__put_mtd_device, 0xbca27266, "_gpl");
SYMBOL_CRC(mtd_erase, 0xc210fe65, "_gpl");
SYMBOL_CRC(mtd_point, 0x5b34ba8e, "_gpl");
SYMBOL_CRC(mtd_unpoint, 0xb42f188b, "_gpl");
SYMBOL_CRC(mtd_get_unmapped_area, 0x097df253, "_gpl");
SYMBOL_CRC(mtd_read, 0xcdc6bf01, "_gpl");
SYMBOL_CRC(mtd_write, 0xf1fdd10c, "_gpl");
SYMBOL_CRC(mtd_panic_write, 0x09f860e8, "_gpl");
SYMBOL_CRC(mtd_read_oob, 0x0612c9ea, "_gpl");
SYMBOL_CRC(mtd_write_oob, 0xa7dc0228, "_gpl");
SYMBOL_CRC(mtd_ooblayout_ecc, 0xf54d8b43, "_gpl");
SYMBOL_CRC(mtd_ooblayout_free, 0x09bcef42, "_gpl");
SYMBOL_CRC(mtd_ooblayout_find_eccregion, 0x8c92adf8, "_gpl");
SYMBOL_CRC(mtd_ooblayout_get_eccbytes, 0xae2e7a3b, "_gpl");
SYMBOL_CRC(mtd_ooblayout_set_eccbytes, 0x0c5a7b19, "_gpl");
SYMBOL_CRC(mtd_ooblayout_get_databytes, 0xe94eb619, "_gpl");
SYMBOL_CRC(mtd_ooblayout_set_databytes, 0x1a15ec7a, "_gpl");
SYMBOL_CRC(mtd_ooblayout_count_freebytes, 0x3ec4153f, "_gpl");
SYMBOL_CRC(mtd_ooblayout_count_eccbytes, 0x0a765350, "_gpl");
SYMBOL_CRC(mtd_get_fact_prot_info, 0xdc6b3c7d, "_gpl");
SYMBOL_CRC(mtd_read_fact_prot_reg, 0x1d9bba58, "_gpl");
SYMBOL_CRC(mtd_get_user_prot_info, 0x097e2fd6, "_gpl");
SYMBOL_CRC(mtd_read_user_prot_reg, 0x68c9f57a, "_gpl");
SYMBOL_CRC(mtd_write_user_prot_reg, 0x734f9a1b, "_gpl");
SYMBOL_CRC(mtd_lock_user_prot_reg, 0x491b53ef, "_gpl");
SYMBOL_CRC(mtd_erase_user_prot_reg, 0x039a2546, "_gpl");
SYMBOL_CRC(mtd_lock, 0x48f24a2f, "_gpl");
SYMBOL_CRC(mtd_unlock, 0xb822f666, "_gpl");
SYMBOL_CRC(mtd_is_locked, 0xd287817c, "_gpl");
SYMBOL_CRC(mtd_block_isreserved, 0x03939f84, "_gpl");
SYMBOL_CRC(mtd_block_isbad, 0x33468763, "_gpl");
SYMBOL_CRC(mtd_block_markbad, 0x94a07a86, "_gpl");
SYMBOL_CRC(mtd_writev, 0x9e838016, "_gpl");
SYMBOL_CRC(mtd_kmalloc_up_to, 0xfd134971, "_gpl");
SYMBOL_CRC(get_tree_mtd, 0x4ddf26e4, "_gpl");
SYMBOL_CRC(kill_mtd_super, 0xdfb7d2fb, "_gpl");
SYMBOL_CRC(mtd_concat_create, 0x93fbb287, "");
SYMBOL_CRC(mtd_concat_destroy, 0x807960f9, "");
SYMBOL_CRC(mtd_add_partition, 0xeeee1607, "_gpl");
SYMBOL_CRC(mtd_del_partition, 0xca72e45f, "_gpl");
SYMBOL_CRC(__register_mtd_parser, 0x233c6727, "_gpl");
SYMBOL_CRC(deregister_mtd_parser, 0x66f331d0, "_gpl");
SYMBOL_CRC(mtd_get_device_size, 0x8c78e8c6, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x50c4febc, "generic_shutdown_super" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x20978fb9, "idr_find" },
	{ 0x469438cc, "of_node_put" },
	{ 0x25f2b2c8, "kmemdup_array" },
	{ 0x2b711cca, "sget_dev" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x28417297, "bdi_unregister" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x35d6970a, "of_get_compatible_child" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xcdbae4b4, "bdi_register" },
	{ 0x6f528c13, "of_node_name_prefix" },
	{ 0x22acd2e2, "device_unregister" },
	{ 0xb10daaf9, "nvmem_unregister" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0x697cbeec, "of_node_get" },
	{ 0x79bc40ef, "logfc" },
	{ 0xc2e19c2b, "sysfs_remove_files" },
	{ 0xd8940511, "__module_get" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xd66c8184, "add_device_randomness" },
	{ 0x122c3a7e, "_printk" },
	{ 0xaadcc062, "bdi_put" },
	{ 0x50a58b43, "of_get_next_child" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x36dc6ece, "put_device" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9d9e8944, "module_put" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xec905c5d, "of_get_child_by_name" },
	{ 0xe8d05413, "debugfs_create_bool" },
	{ 0x4fcebbd7, "of_prop_next_string" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x4ae7394, "device_create" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0x416e186d, "fixed_size_llseek" },
	{ 0x3a1aed17, "of_property_read_string" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0x7143a676, "class_unregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1ea6e378, "bdi_alloc" },
	{ 0x28b118b6, "device_register" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xdcb764ad, "memset" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x34c7cdbc, "lookup_bdev" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x8f09f576, "of_device_is_compatible" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x418c10ec, "__register_chrdev" },
	{ 0xb53675e6, "seq_write" },
	{ 0xa6dd9149, "device_destroy" },
	{ 0xa0e24b52, "remove_proc_entry" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x5217fb74, "sysfs_create_files" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x57dfe1cb, "deactivate_locked_super" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xe36c448e, "of_alias_get_id" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xf8a9c57e, "proc_create_single_data" },
	{ 0x19d0678a, "nvmem_register" },
	{ 0x98cf60b3, "strlen" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9afeaa80, "of_platform_populate" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0xa42d469b, "class_register" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5655080261274AEC2A5A86D");
