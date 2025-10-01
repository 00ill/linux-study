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

KSYMTAB_FUNC(btintel_check_bdaddr, "_gpl", "");
KSYMTAB_FUNC(btintel_enter_mfg, "_gpl", "");
KSYMTAB_FUNC(btintel_exit_mfg, "_gpl", "");
KSYMTAB_FUNC(btintel_set_bdaddr, "_gpl", "");
KSYMTAB_FUNC(btintel_set_diag, "_gpl", "");
KSYMTAB_FUNC(btintel_hw_error, "_gpl", "");
KSYMTAB_FUNC(btintel_version_info, "_gpl", "");
KSYMTAB_FUNC(btintel_load_ddc_config, "_gpl", "");
KSYMTAB_FUNC(btintel_set_event_mask_mfg, "_gpl", "");
KSYMTAB_FUNC(btintel_read_version, "_gpl", "");
KSYMTAB_FUNC(btintel_version_info_tlv, "_gpl", "");
KSYMTAB_FUNC(btintel_parse_version_tlv, "_gpl", "");
KSYMTAB_FUNC(btintel_regmap_init, "_gpl", "");
KSYMTAB_FUNC(btintel_send_intel_reset, "_gpl", "");
KSYMTAB_FUNC(btintel_read_boot_params, "_gpl", "");
KSYMTAB_FUNC(btintel_download_firmware, "_gpl", "");
KSYMTAB_FUNC(btintel_set_quality_report, "_gpl", "");
KSYMTAB_FUNC(btintel_bootloader_setup_tlv, "_gpl", "");
KSYMTAB_FUNC(btintel_set_msft_opcode, "_gpl", "");
KSYMTAB_FUNC(btintel_print_fseq_info, "_gpl", "");
KSYMTAB_FUNC(btintel_shutdown_combined, "_gpl", "");
KSYMTAB_FUNC(btintel_configure_setup, "_gpl", "");
KSYMTAB_FUNC(btintel_diagnostics, "_gpl", "");
KSYMTAB_FUNC(btintel_recv_event, "_gpl", "");
KSYMTAB_FUNC(btintel_bootup, "_gpl", "");
KSYMTAB_FUNC(btintel_secure_send_result, "_gpl", "");

SYMBOL_CRC(btintel_check_bdaddr, 0xcb28080c, "_gpl");
SYMBOL_CRC(btintel_enter_mfg, 0xb8149032, "_gpl");
SYMBOL_CRC(btintel_exit_mfg, 0xcb7c971b, "_gpl");
SYMBOL_CRC(btintel_set_bdaddr, 0xab795a7f, "_gpl");
SYMBOL_CRC(btintel_set_diag, 0x0a291b82, "_gpl");
SYMBOL_CRC(btintel_hw_error, 0x1f938808, "_gpl");
SYMBOL_CRC(btintel_version_info, 0x99c9d2be, "_gpl");
SYMBOL_CRC(btintel_load_ddc_config, 0xdf0c11ac, "_gpl");
SYMBOL_CRC(btintel_set_event_mask_mfg, 0xdd341856, "_gpl");
SYMBOL_CRC(btintel_read_version, 0xac97214b, "_gpl");
SYMBOL_CRC(btintel_version_info_tlv, 0xc514b5e4, "_gpl");
SYMBOL_CRC(btintel_parse_version_tlv, 0xe16ec42f, "_gpl");
SYMBOL_CRC(btintel_regmap_init, 0x0f108eb2, "_gpl");
SYMBOL_CRC(btintel_send_intel_reset, 0x05061305, "_gpl");
SYMBOL_CRC(btintel_read_boot_params, 0x436e91ec, "_gpl");
SYMBOL_CRC(btintel_download_firmware, 0x5ff7d834, "_gpl");
SYMBOL_CRC(btintel_set_quality_report, 0x83a427e0, "_gpl");
SYMBOL_CRC(btintel_bootloader_setup_tlv, 0x2b923779, "_gpl");
SYMBOL_CRC(btintel_set_msft_opcode, 0x2a57e610, "_gpl");
SYMBOL_CRC(btintel_print_fseq_info, 0x706f96c1, "_gpl");
SYMBOL_CRC(btintel_shutdown_combined, 0x0137c6b8, "_gpl");
SYMBOL_CRC(btintel_configure_setup, 0x70ac5894, "_gpl");
SYMBOL_CRC(btintel_diagnostics, 0x1f1f47bf, "_gpl");
SYMBOL_CRC(btintel_recv_event, 0x466e6201, "_gpl");
SYMBOL_CRC(btintel_bootup, 0x3a64c124, "_gpl");
SYMBOL_CRC(btintel_secure_send_result, 0x79b6978e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb5947eb5, "__hci_cmd_sync" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x718b8b7, "bt_info" },
	{ 0xeb5d3bf1, "request_firmware_direct" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0a39d83, "hci_cmd_sync" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7aad008b, "bt_to_errno" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3518924b, "skb_pull_data" },
	{ 0xb20da7cc, "hci_devcd_init" },
	{ 0xf7389894, "hci_recv_frame" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0x837bda45, "hci_devcd_append" },
	{ 0x25eac995, "hci_devcd_complete" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x6e3da156, "__regmap_init" },
	{ 0x1e8b81a, "hci_devcd_register" },
	{ 0x98cf60b3, "strlen" },
	{ 0x4367c3a1, "skb_put" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x6c37e5, "firmware_request_nowarn" },
	{ 0x7e4c3df5, "efi" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xded62bf7, "__hci_cmd_sync_ev" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x553c19d, "hci_set_hw_info" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "24492E3DABFCFF1A6F21D33");
