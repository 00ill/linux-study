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

KSYMTAB_FUNC(ubi_do_get_device_info, "_gpl", "");
KSYMTAB_FUNC(ubi_get_device_info, "_gpl", "");
KSYMTAB_FUNC(ubi_get_volume_info, "_gpl", "");
KSYMTAB_FUNC(ubi_open_volume, "_gpl", "");
KSYMTAB_FUNC(ubi_open_volume_nm, "_gpl", "");
KSYMTAB_FUNC(ubi_open_volume_path, "_gpl", "");
KSYMTAB_FUNC(ubi_close_volume, "_gpl", "");
KSYMTAB_FUNC(ubi_leb_read, "_gpl", "");
KSYMTAB_FUNC(ubi_leb_read_sg, "_gpl", "");
KSYMTAB_FUNC(ubi_leb_write, "_gpl", "");
KSYMTAB_FUNC(ubi_leb_change, "_gpl", "");
KSYMTAB_FUNC(ubi_leb_erase, "_gpl", "");
KSYMTAB_FUNC(ubi_leb_unmap, "_gpl", "");
KSYMTAB_FUNC(ubi_leb_map, "_gpl", "");
KSYMTAB_FUNC(ubi_is_mapped, "_gpl", "");
KSYMTAB_FUNC(ubi_sync, "_gpl", "");
KSYMTAB_FUNC(ubi_flush, "_gpl", "");
KSYMTAB_FUNC(ubi_register_volume_notifier, "_gpl", "");
KSYMTAB_FUNC(ubi_unregister_volume_notifier, "_gpl", "");

SYMBOL_CRC(ubi_do_get_device_info, 0xfb77c806, "_gpl");
SYMBOL_CRC(ubi_get_device_info, 0x66011ab6, "_gpl");
SYMBOL_CRC(ubi_get_volume_info, 0xa28c32d8, "_gpl");
SYMBOL_CRC(ubi_open_volume, 0xa3055035, "_gpl");
SYMBOL_CRC(ubi_open_volume_nm, 0x56b13774, "_gpl");
SYMBOL_CRC(ubi_open_volume_path, 0x774909f8, "_gpl");
SYMBOL_CRC(ubi_close_volume, 0xde00d6c8, "_gpl");
SYMBOL_CRC(ubi_leb_read, 0x5004bf97, "_gpl");
SYMBOL_CRC(ubi_leb_read_sg, 0xa4ffcf33, "_gpl");
SYMBOL_CRC(ubi_leb_write, 0xc024373b, "_gpl");
SYMBOL_CRC(ubi_leb_change, 0xeaf1c7e6, "_gpl");
SYMBOL_CRC(ubi_leb_erase, 0xb33d5ed7, "_gpl");
SYMBOL_CRC(ubi_leb_unmap, 0x106a3220, "_gpl");
SYMBOL_CRC(ubi_leb_map, 0x78d09d92, "_gpl");
SYMBOL_CRC(ubi_is_mapped, 0xffc73230, "_gpl");
SYMBOL_CRC(ubi_sync, 0x42801d20, "_gpl");
SYMBOL_CRC(ubi_flush, 0x38e10c1d, "_gpl");
SYMBOL_CRC(ubi_register_volume_notifier, 0xf5ee9ba8, "_gpl");
SYMBOL_CRC(ubi_unregister_volume_notifier, 0x85a8ee76, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0x760a0f4f, "yield" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x94090688, "misc_deregister" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0xb08c5e0b, "vfs_getattr" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x74f48dda, "seq_release" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x70c69a78, "cdev_device_del" },
	{ 0x22acd2e2, "device_unregister" },
	{ 0xca9360b5, "rb_next" },
	{ 0x16965a52, "device_initialize" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0x44f0ad9, "get_random_u16" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0xb9800828, "fwnode_get_next_child_node" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x99ed6ef6, "get_device" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x6ece4080, "get_mtd_device_nm" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x485c4507, "path_put" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0xbb3e81f2, "get_mtd_device" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x8939688b, "device_set_node" },
	{ 0xd73653c4, "freezer_active" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x122c3a7e, "_printk" },
	{ 0xcb9c0934, "cdev_device_add" },
	{ 0x1000e51, "schedule" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x36dc6ece, "put_device" },
	{ 0xa916b694, "strnlen" },
	{ 0xf6d37b88, "fwnode_property_read_u32_array" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9d9e8944, "module_put" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xf8ce1c00, "compat_ptr_ioctl" },
	{ 0x3a6d85d3, "cdev_add" },
	{ 0x94a07a86, "mtd_block_markbad" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x5d809a68, "simple_open" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x9eae0115, "unregister_mtd_user" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4a3c8253, "kmem_cache_free" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0x416e186d, "fixed_size_llseek" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xe15b13f7, "put_mtd_device" },
	{ 0x5b60eb90, "register_mtd_user" },
	{ 0x7143a676, "class_unregister" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcdc6bf01, "mtd_read" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4958742, "freezing_slow_path" },
	{ 0x28b118b6, "device_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x7a02affa, "kern_path" },
	{ 0x2c4f2e35, "__vmalloc_noprof" },
	{ 0x2002cbd1, "misc_register" },
	{ 0x6f61551b, "kmem_cache_alloc_noprof" },
	{ 0xece784c2, "rb_first" },
	{ 0x8450a53a, "__kmem_cache_create_args" },
	{ 0xc210fe65, "mtd_erase" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0x661256ad, "seq_read" },
	{ 0x887793dd, "__get_mtd_device" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf1fdd10c, "mtd_write" },
	{ 0xe87fcff1, "fwnode_property_read_string" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x999e8297, "vfree" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x8f09f576, "of_device_is_compatible" },
	{ 0xbca27266, "__put_mtd_device" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xcbec36d6, "device_get_named_child_node" },
	{ 0xb53675e6, "seq_write" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x8c78e8c6, "mtd_get_device_size" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x3a65858e, "seq_open" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x33468763, "mtd_block_isbad" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x53b954a2, "up_read" },
	{ 0xa42d469b, "class_register" },
	{ 0xa01f13a6, "cdev_init" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x27271c6b, "cdev_del" },
	{ 0x9858f364, "get_random_u8" },
	{ 0x656f612b, "kmem_cache_destroy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "5470A517A24964CAE386EE5");
