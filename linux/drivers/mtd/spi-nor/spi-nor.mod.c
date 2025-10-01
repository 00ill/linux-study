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

KSYMTAB_FUNC(spi_nor_scan, "_gpl", "");

SYMBOL_CRC(spi_nor_scan, 0x616ade38, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x58300b39, "spi_mem_driver_register_with_owner" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x11f1111a, "spi_mem_dirmap_read" },
	{ 0xa1171806, "mtd_device_unregister" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x64138a1, "spi_mem_exec_op" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xe2964344, "__wake_up" },
	{ 0x85c150e8, "mtd_device_parse_register" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9d9e8944, "module_put" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4679d10c, "devm_kmemdup" },
	{ 0x2a10607e, "devm_kfree" },
	{ 0x669c413b, "_dev_err" },
	{ 0xb7c0f443, "sort" },
	{ 0x24eef9d8, "string_get_size" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x3dfbc684, "seq_putc" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x3a1aed17, "of_property_read_string" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd6f98a39, "spi_mem_dirmap_write" },
	{ 0x422a11ed, "spi_mem_driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x661256ad, "seq_read" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x6da467cb, "pfn_is_map_memory" },
	{ 0xa2192b5c, "spi_mem_get_name" },
	{ 0xc2c70cee, "devm_spi_mem_dirmap_create" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb53675e6, "seq_write" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xfe053bba, "spi_mem_adjust_op_size" },
	{ 0x9c998aa5, "devm_krealloc" },
	{ 0x10139ad8, "single_release" },
	{ 0xf09e0a6f, "spi_mem_supports_op" },
	{ 0xdec5c540, "__seq_puts" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0x71c90ddc, "single_open" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mtd");

MODULE_ALIAS("spi:spi-nor");
MODULE_ALIAS("spi:s25sl064a");
MODULE_ALIAS("spi:w25x16");
MODULE_ALIAS("spi:m25p10");
MODULE_ALIAS("spi:m25px64");
MODULE_ALIAS("spi:at25df321a");
MODULE_ALIAS("spi:at25df641");
MODULE_ALIAS("spi:at26df081a");
MODULE_ALIAS("spi:mx25l4005a");
MODULE_ALIAS("spi:mx25l1606e");
MODULE_ALIAS("spi:mx25l6405d");
MODULE_ALIAS("spi:mx25l12805d");
MODULE_ALIAS("spi:mx25l25635e");
MODULE_ALIAS("spi:mx66l51235l");
MODULE_ALIAS("spi:n25q064");
MODULE_ALIAS("spi:n25q128a11");
MODULE_ALIAS("spi:n25q128a13");
MODULE_ALIAS("spi:n25q512a");
MODULE_ALIAS("spi:s25fl256s1");
MODULE_ALIAS("spi:s25fl512s");
MODULE_ALIAS("spi:s25sl12801");
MODULE_ALIAS("spi:s25fl008k");
MODULE_ALIAS("spi:s25fl064k");
MODULE_ALIAS("spi:sst25vf040b");
MODULE_ALIAS("spi:sst25vf016b");
MODULE_ALIAS("spi:sst25vf032b");
MODULE_ALIAS("spi:sst25wf040");
MODULE_ALIAS("spi:m25p40");
MODULE_ALIAS("spi:m25p80");
MODULE_ALIAS("spi:m25p16");
MODULE_ALIAS("spi:m25p32");
MODULE_ALIAS("spi:m25p64");
MODULE_ALIAS("spi:m25p128");
MODULE_ALIAS("spi:w25x80");
MODULE_ALIAS("spi:w25x32");
MODULE_ALIAS("spi:w25q32");
MODULE_ALIAS("spi:w25q32dw");
MODULE_ALIAS("spi:w25q80bl");
MODULE_ALIAS("spi:w25q128");
MODULE_ALIAS("spi:w25q256");
MODULE_ALIAS("spi:m25p05-nonjedec");
MODULE_ALIAS("spi:m25p10-nonjedec");
MODULE_ALIAS("spi:m25p20-nonjedec");
MODULE_ALIAS("spi:m25p40-nonjedec");
MODULE_ALIAS("spi:m25p80-nonjedec");
MODULE_ALIAS("spi:m25p16-nonjedec");
MODULE_ALIAS("spi:m25p32-nonjedec");
MODULE_ALIAS("spi:m25p64-nonjedec");
MODULE_ALIAS("spi:m25p128-nonjedec");
MODULE_ALIAS("spi:mr25h128");
MODULE_ALIAS("spi:mr25h256");
MODULE_ALIAS("spi:mr25h10");
MODULE_ALIAS("spi:mr25h40");
MODULE_ALIAS("of:N*T*Cjedec,spi-nor");
MODULE_ALIAS("of:N*T*Cjedec,spi-norC*");

MODULE_INFO(srcversion, "F8F246618A749E339C5231C");
