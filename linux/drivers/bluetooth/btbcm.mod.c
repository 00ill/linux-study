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

KSYMTAB_FUNC(btbcm_check_bdaddr, "_gpl", "");
KSYMTAB_FUNC(btbcm_set_bdaddr, "_gpl", "");
KSYMTAB_FUNC(btbcm_read_pcm_int_params, "_gpl", "");
KSYMTAB_FUNC(btbcm_write_pcm_int_params, "_gpl", "");
KSYMTAB_FUNC(btbcm_patchram, "", "");
KSYMTAB_FUNC(btbcm_initialize, "_gpl", "");
KSYMTAB_FUNC(btbcm_finalize, "_gpl", "");
KSYMTAB_FUNC(btbcm_setup_patchram, "_gpl", "");
KSYMTAB_FUNC(btbcm_setup_apple, "_gpl", "");

SYMBOL_CRC(btbcm_check_bdaddr, 0x7a444f31, "_gpl");
SYMBOL_CRC(btbcm_set_bdaddr, 0x436fed84, "_gpl");
SYMBOL_CRC(btbcm_read_pcm_int_params, 0x559335d7, "_gpl");
SYMBOL_CRC(btbcm_write_pcm_int_params, 0x4b930556, "_gpl");
SYMBOL_CRC(btbcm_patchram, 0x53538b32, "");
SYMBOL_CRC(btbcm_initialize, 0xe1357870, "_gpl");
SYMBOL_CRC(btbcm_finalize, 0x0738f15e, "_gpl");
SYMBOL_CRC(btbcm_setup_patchram, 0x49e15767, "_gpl");
SYMBOL_CRC(btbcm_setup_apple, 0x56925ebc, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb5947eb5, "__hci_cmd_sync" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x7e4c3df5, "efi" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0x718b8b7, "bt_info" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf9a482f9, "msleep" },
	{ 0x739fd4e2, "of_find_node_opts_by_path" },
	{ 0xebe20c1, "of_property_read_string_helper" },
	{ 0x84c818c7, "devm_kstrdup" },
	{ 0x7410aba2, "strreplace" },
	{ 0x469438cc, "of_node_put" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6c37e5, "firmware_request_nowarn" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "F6D6C1AFAA7080C7584ECC5");
