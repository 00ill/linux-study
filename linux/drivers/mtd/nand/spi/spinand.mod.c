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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x58300b39, "spi_mem_driver_register_with_owner" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x11f1111a, "spi_mem_dirmap_read" },
	{ 0xa1171806, "mtd_device_unregister" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x64138a1, "spi_mem_exec_op" },
	{ 0xd44eb629, "nanddev_cleanup" },
	{ 0xe32800ad, "spi_mem_poll_status" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x7a594d9f, "nanddev_init" },
	{ 0x85c150e8, "mtd_device_parse_register" },
	{ 0xfd69766e, "nand_ecc_prepare_io_req" },
	{ 0x45b44fb0, "nanddev_ecc_engine_cleanup" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x21207573, "nanddev_mtd_erase" },
	{ 0x3a1aed17, "of_property_read_string" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd6f98a39, "spi_mem_dirmap_write" },
	{ 0x422a11ed, "spi_mem_driver_unregister" },
	{ 0x3ec4153f, "mtd_ooblayout_count_freebytes" },
	{ 0xdcb764ad, "memset" },
	{ 0x46e1fcb6, "nanddev_markbad" },
	{ 0xc7d77d79, "nanddev_ecc_engine_init" },
	{ 0x1a15ec7a, "mtd_ooblayout_set_databytes" },
	{ 0xd7b0ea06, "nanddev_isbad" },
	{ 0xc2c70cee, "devm_spi_mem_dirmap_create" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8ae2f95d, "nanddev_isreserved" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xfe053bba, "spi_mem_adjust_op_size" },
	{ 0xf09e0a6f, "spi_mem_supports_op" },
	{ 0xe94eb619, "mtd_ooblayout_get_databytes" },
	{ 0x66425dd2, "nand_ecc_finish_io_req" },
	{ 0xfa3b8137, "nanddev_mtd_max_bad_blocks" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mtd,nandcore");

MODULE_ALIAS("spi:spi-nand");
MODULE_ALIAS("of:N*T*Cspi-nand");
MODULE_ALIAS("of:N*T*Cspi-nandC*");

MODULE_INFO(srcversion, "44A075D7BFCA5EF17C92B8D");
