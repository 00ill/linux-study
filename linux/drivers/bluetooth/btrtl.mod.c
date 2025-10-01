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

KSYMTAB_FUNC(btrtl_set_driver_name, "_gpl", "");
KSYMTAB_FUNC(btrtl_free, "_gpl", "");
KSYMTAB_FUNC(btrtl_initialize, "_gpl", "");
KSYMTAB_FUNC(btrtl_download_firmware, "_gpl", "");
KSYMTAB_FUNC(btrtl_set_quirks, "_gpl", "");
KSYMTAB_FUNC(btrtl_setup_realtek, "_gpl", "");
KSYMTAB_FUNC(btrtl_shutdown_realtek, "_gpl", "");
KSYMTAB_FUNC(btrtl_get_uart_settings, "_gpl", "");

SYMBOL_CRC(btrtl_set_driver_name, 0x4d2220ac, "_gpl");
SYMBOL_CRC(btrtl_free, 0xaf78f260, "_gpl");
SYMBOL_CRC(btrtl_initialize, 0x0f6665e6, "_gpl");
SYMBOL_CRC(btrtl_download_firmware, 0xe1b1d50b, "_gpl");
SYMBOL_CRC(btrtl_set_quirks, 0xa0fa4ef3, "_gpl");
SYMBOL_CRC(btrtl_setup_realtek, 0x994adaa1, "_gpl");
SYMBOL_CRC(btrtl_shutdown_realtek, 0xec820610, "_gpl");
SYMBOL_CRC(btrtl_get_uart_settings, 0xd212e510, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x37a0cba, "kfree" },
	{ 0xb5947eb5, "__hci_cmd_sync" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xf88ecec4, "kvmemdup" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x4829a47e, "memcpy" },
	{ 0x748b3f7d, "__hci_cmd_send" },
	{ 0x214e4265, "bt_warn" },
	{ 0x1e8b81a, "hci_devcd_register" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3518924b, "skb_pull_data" },
	{ 0x553c19d, "hci_set_hw_info" },
	{ 0xdcb764ad, "memset" },
	{ 0x98cf60b3, "strlen" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "BC6784D473FDFBDBE11BACB");
