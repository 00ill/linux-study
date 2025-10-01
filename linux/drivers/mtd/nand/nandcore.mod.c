#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(nanddev_isbad, "_gpl", "");
KSYMTAB_FUNC(nanddev_markbad, "_gpl", "");
KSYMTAB_FUNC(nanddev_isreserved, "_gpl", "");
KSYMTAB_FUNC(nanddev_mtd_erase, "_gpl", "");
KSYMTAB_FUNC(nanddev_mtd_max_bad_blocks, "_gpl", "");
KSYMTAB_FUNC(nanddev_ecc_engine_init, "_gpl", "");
KSYMTAB_FUNC(nanddev_ecc_engine_cleanup, "_gpl", "");
KSYMTAB_FUNC(nanddev_init, "_gpl", "");
KSYMTAB_FUNC(nanddev_cleanup, "_gpl", "");
KSYMTAB_FUNC(nanddev_bbt_init, "_gpl", "");
KSYMTAB_FUNC(nanddev_bbt_cleanup, "_gpl", "");
KSYMTAB_FUNC(nanddev_bbt_update, "_gpl", "");
KSYMTAB_FUNC(nanddev_bbt_get_block_status, "_gpl", "");
KSYMTAB_FUNC(nanddev_bbt_set_block_status, "_gpl", "");
KSYMTAB_FUNC(nand_ecc_init_ctx, "", "");
KSYMTAB_FUNC(nand_ecc_cleanup_ctx, "", "");
KSYMTAB_FUNC(nand_ecc_prepare_io_req, "", "");
KSYMTAB_FUNC(nand_ecc_finish_io_req, "", "");
KSYMTAB_FUNC(nand_get_small_page_ooblayout, "_gpl", "");
KSYMTAB_FUNC(nand_get_large_page_ooblayout, "_gpl", "");
KSYMTAB_FUNC(nand_get_large_page_hamming_ooblayout, "_gpl", "");
KSYMTAB_FUNC(of_get_nand_ecc_user_config, "", "");
KSYMTAB_FUNC(nand_ecc_is_strong_enough, "", "");
KSYMTAB_FUNC(nand_ecc_init_req_tweaking, "_gpl", "");
KSYMTAB_FUNC(nand_ecc_cleanup_req_tweaking, "_gpl", "");
KSYMTAB_FUNC(nand_ecc_tweak_req, "_gpl", "");
KSYMTAB_FUNC(nand_ecc_restore_req, "_gpl", "");
KSYMTAB_FUNC(nand_ecc_get_sw_engine, "", "");
KSYMTAB_FUNC(nand_ecc_get_on_die_hw_engine, "", "");
KSYMTAB_FUNC(nand_ecc_register_on_host_hw_engine, "", "");
KSYMTAB_FUNC(nand_ecc_unregister_on_host_hw_engine, "", "");
KSYMTAB_FUNC(nand_ecc_get_on_host_hw_engine, "", "");
KSYMTAB_FUNC(nand_ecc_put_on_host_hw_engine, "", "");

SYMBOL_CRC(nanddev_isbad, 0xd7b0ea06, "_gpl");
SYMBOL_CRC(nanddev_markbad, 0x46e1fcb6, "_gpl");
SYMBOL_CRC(nanddev_isreserved, 0x8ae2f95d, "_gpl");
SYMBOL_CRC(nanddev_mtd_erase, 0x21207573, "_gpl");
SYMBOL_CRC(nanddev_mtd_max_bad_blocks, 0xfa3b8137, "_gpl");
SYMBOL_CRC(nanddev_ecc_engine_init, 0xc7d77d79, "_gpl");
SYMBOL_CRC(nanddev_ecc_engine_cleanup, 0x45b44fb0, "_gpl");
SYMBOL_CRC(nanddev_init, 0x7a594d9f, "_gpl");
SYMBOL_CRC(nanddev_cleanup, 0xd44eb629, "_gpl");
SYMBOL_CRC(nanddev_bbt_init, 0xc5f735b7, "_gpl");
SYMBOL_CRC(nanddev_bbt_cleanup, 0xb571b119, "_gpl");
SYMBOL_CRC(nanddev_bbt_update, 0xb038c130, "_gpl");
SYMBOL_CRC(nanddev_bbt_get_block_status, 0x39419e71, "_gpl");
SYMBOL_CRC(nanddev_bbt_set_block_status, 0xd881117c, "_gpl");
SYMBOL_CRC(nand_ecc_init_ctx, 0xfb9e8339, "");
SYMBOL_CRC(nand_ecc_cleanup_ctx, 0xce434170, "");
SYMBOL_CRC(nand_ecc_prepare_io_req, 0xfd69766e, "");
SYMBOL_CRC(nand_ecc_finish_io_req, 0x66425dd2, "");
SYMBOL_CRC(nand_get_small_page_ooblayout, 0x46174d46, "_gpl");
SYMBOL_CRC(nand_get_large_page_ooblayout, 0x98bec79b, "_gpl");
SYMBOL_CRC(nand_get_large_page_hamming_ooblayout, 0xa2eb59af, "_gpl");
SYMBOL_CRC(of_get_nand_ecc_user_config, 0xb64da4b9, "");
SYMBOL_CRC(nand_ecc_is_strong_enough, 0x6b317d93, "");
SYMBOL_CRC(nand_ecc_init_req_tweaking, 0x5cb8ba1f, "_gpl");
SYMBOL_CRC(nand_ecc_cleanup_req_tweaking, 0x77ce1ab4, "_gpl");
SYMBOL_CRC(nand_ecc_tweak_req, 0x65c97cce, "_gpl");
SYMBOL_CRC(nand_ecc_restore_req, 0x57ed21f4, "_gpl");
SYMBOL_CRC(nand_ecc_get_sw_engine, 0xd01e3499, "");
SYMBOL_CRC(nand_ecc_get_on_die_hw_engine, 0x92c932aa, "");
SYMBOL_CRC(nand_ecc_register_on_host_hw_engine, 0xc7820683, "");
SYMBOL_CRC(nand_ecc_unregister_on_host_hw_engine, 0x6f4156fb, "");
SYMBOL_CRC(nand_ecc_get_on_host_hw_engine, 0xff2ead78, "");
SYMBOL_CRC(nand_ecc_put_on_host_hw_engine, 0x64bbe944, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x56e83a64, "platform_device_put" },
	{ 0x469438cc, "of_node_put" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x35908cc9, "of_find_device_by_node" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x99ed6ef6, "get_device" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x36dc6ece, "put_device" },
	{ 0xb7075882, "mtd_check_expert_analysis_mode" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x3a1aed17, "of_property_read_string" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0xdcb764ad, "memset" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "7F7369313A38F9EB020A404");
