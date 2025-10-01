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

KSYMTAB_FUNC(tpm_chip_start, "_gpl", "");
KSYMTAB_FUNC(tpm_chip_stop, "_gpl", "");
KSYMTAB_FUNC(tpm_try_get_ops, "_gpl", "");
KSYMTAB_FUNC(tpm_put_ops, "_gpl", "");
KSYMTAB_FUNC(tpm_default_chip, "_gpl", "");
KSYMTAB_FUNC(tpm_chip_alloc, "_gpl", "");
KSYMTAB_FUNC(tpmm_chip_alloc, "_gpl", "");
KSYMTAB_FUNC(tpm_chip_bootstrap, "_gpl", "");
KSYMTAB_FUNC(tpm_chip_register, "_gpl", "");
KSYMTAB_FUNC(tpm_chip_unregister, "_gpl", "");
KSYMTAB_FUNC(tpm_calc_ordinal_duration, "_gpl", "");
KSYMTAB_FUNC(tpm_transmit_cmd, "_gpl", "");
KSYMTAB_FUNC(tpm_get_timeouts, "_gpl", "");
KSYMTAB_FUNC(tpm_is_tpm2, "_gpl", "");
KSYMTAB_FUNC(tpm_pcr_read, "_gpl", "");
KSYMTAB_FUNC(tpm_pcr_extend, "_gpl", "");
KSYMTAB_FUNC(tpm_pm_suspend, "_gpl", "");
KSYMTAB_FUNC(tpm_pm_resume, "_gpl", "");
KSYMTAB_FUNC(tpm_get_random, "_gpl", "");
KSYMTAB_FUNC(tpm1_getcap, "_gpl", "");
KSYMTAB_FUNC(tpm1_do_selftest, "_gpl", "");
KSYMTAB_FUNC(tpm2_flush_context, "_gpl", "");
KSYMTAB_FUNC(tpm2_get_tpm_pt, "_gpl", "");
KSYMTAB_FUNC(tpm2_probe, "_gpl", "");
KSYMTAB_FUNC(tpm2_get_cc_attrs_tbl, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_init, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_reset, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_init_sized, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_reset_sized, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_destroy, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_length, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_append, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_append_u8, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_append_u16, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_append_u32, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_read_u8, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_read_u16, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_read_u32, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_append_name, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_append_hmac_session, "_gpl", "");

SYMBOL_CRC(tpm_chip_start, 0xda518ca5, "_gpl");
SYMBOL_CRC(tpm_chip_stop, 0x8eff6693, "_gpl");
SYMBOL_CRC(tpm_try_get_ops, 0xb295d2d5, "_gpl");
SYMBOL_CRC(tpm_put_ops, 0x2895cac6, "_gpl");
SYMBOL_CRC(tpm_default_chip, 0x3052cc13, "_gpl");
SYMBOL_CRC(tpm_chip_alloc, 0xb7fb9b93, "_gpl");
SYMBOL_CRC(tpmm_chip_alloc, 0x6b4fe010, "_gpl");
SYMBOL_CRC(tpm_chip_bootstrap, 0x4de17ca0, "_gpl");
SYMBOL_CRC(tpm_chip_register, 0x498b8b49, "_gpl");
SYMBOL_CRC(tpm_chip_unregister, 0xdd830e0c, "_gpl");
SYMBOL_CRC(tpm_calc_ordinal_duration, 0xac6da50c, "_gpl");
SYMBOL_CRC(tpm_transmit_cmd, 0x45b0d262, "_gpl");
SYMBOL_CRC(tpm_get_timeouts, 0xa0e6ef26, "_gpl");
SYMBOL_CRC(tpm_is_tpm2, 0xd61006fe, "_gpl");
SYMBOL_CRC(tpm_pcr_read, 0x9b8bd4b7, "_gpl");
SYMBOL_CRC(tpm_pcr_extend, 0x6eb79ded, "_gpl");
SYMBOL_CRC(tpm_pm_suspend, 0x3966c965, "_gpl");
SYMBOL_CRC(tpm_pm_resume, 0x72ebb2d8, "_gpl");
SYMBOL_CRC(tpm_get_random, 0x369ad185, "_gpl");
SYMBOL_CRC(tpm1_getcap, 0x7b8227b9, "_gpl");
SYMBOL_CRC(tpm1_do_selftest, 0xf40276d2, "_gpl");
SYMBOL_CRC(tpm2_flush_context, 0x6d371c00, "_gpl");
SYMBOL_CRC(tpm2_get_tpm_pt, 0xc1434922, "_gpl");
SYMBOL_CRC(tpm2_probe, 0x25719377, "_gpl");
SYMBOL_CRC(tpm2_get_cc_attrs_tbl, 0x99742922, "_gpl");
SYMBOL_CRC(tpm_buf_init, 0xe8654fd8, "_gpl");
SYMBOL_CRC(tpm_buf_reset, 0xd4bc1eb7, "_gpl");
SYMBOL_CRC(tpm_buf_init_sized, 0x178620bf, "_gpl");
SYMBOL_CRC(tpm_buf_reset_sized, 0x5ae32fa2, "_gpl");
SYMBOL_CRC(tpm_buf_destroy, 0x87456965, "_gpl");
SYMBOL_CRC(tpm_buf_length, 0x697d4548, "_gpl");
SYMBOL_CRC(tpm_buf_append, 0x110924e4, "_gpl");
SYMBOL_CRC(tpm_buf_append_u8, 0x77d59315, "_gpl");
SYMBOL_CRC(tpm_buf_append_u16, 0x033fad6c, "_gpl");
SYMBOL_CRC(tpm_buf_append_u32, 0x0e3cc3b0, "_gpl");
SYMBOL_CRC(tpm_buf_read_u8, 0x1e16a71e, "_gpl");
SYMBOL_CRC(tpm_buf_read_u16, 0x63a2e7d2, "_gpl");
SYMBOL_CRC(tpm_buf_read_u32, 0x35de3c53, "_gpl");
SYMBOL_CRC(tpm_buf_append_name, 0xd8c819ba, "_gpl");
SYMBOL_CRC(tpm_buf_append_hmac_session, 0x04631f8f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x469438cc, "of_node_put" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xd0fd7085, "hwrng_unregister" },
	{ 0xb6c683cf, "devm_memremap" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x74f48dda, "seq_release" },
	{ 0x24da821d, "of_property_match_string" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2c238875, "of_address_to_resource" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xccf7d085, "compat_only_sysfs_link_entry_to_kobj" },
	{ 0x70c69a78, "cdev_device_del" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0xca80638c, "securityfs_create_dir" },
	{ 0x16965a52, "device_initialize" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x99ed6ef6, "get_device" },
	{ 0x4d924f20, "memremap" },
	{ 0x7a1c2aba, "of_get_property" },
	{ 0xe0c4e14d, "hwrng_register" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x122c3a7e, "_printk" },
	{ 0xcb9c0934, "cdev_device_add" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x36dc6ece, "put_device" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x4679d10c, "devm_kmemdup" },
	{ 0x7e4c3df5, "efi" },
	{ 0x57bc19d2, "down_write" },
	{ 0x2a10607e, "devm_kfree" },
	{ 0x669c413b, "_dev_err" },
	{ 0xce807a25, "up_write" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0x685bb4f9, "sysfs_remove_link" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0x3dfbc684, "seq_putc" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0xdf914ea8, "hash_digest_size" },
	{ 0x7143a676, "class_unregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x668b19a1, "down_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb95020f7, "securityfs_remove" },
	{ 0x661256ad, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe9e8faeb, "efi_tpm_final_log_size" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0xb53675e6, "seq_write" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x9c998aa5, "devm_krealloc" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x3a65858e, "seq_open" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0x98cf60b3, "strlen" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x53b954a2, "up_read" },
	{ 0xa42d469b, "class_register" },
	{ 0xa01f13a6, "cdev_init" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xb240d318, "securityfs_create_file" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EBCFE5CFA96261B441B1F40");
