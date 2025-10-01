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

KSYMTAB_FUNC(btmtk_fw_get_filename, "_gpl", "");
KSYMTAB_FUNC(btmtk_setup_firmware_79xx, "_gpl", "");
KSYMTAB_FUNC(btmtk_setup_firmware, "_gpl", "");
KSYMTAB_FUNC(btmtk_set_bdaddr, "_gpl", "");
KSYMTAB_FUNC(btmtk_reset_sync, "_gpl", "");
KSYMTAB_FUNC(btmtk_register_coredump, "_gpl", "");
KSYMTAB_FUNC(btmtk_process_coredump, "_gpl", "");
KSYMTAB_FUNC(btmtk_usb_subsys_reset, "_gpl", "");
KSYMTAB_FUNC(btmtk_usb_recv_acl, "_gpl", "");
KSYMTAB_FUNC(alloc_mtk_intr_urb, "_gpl", "");
KSYMTAB_FUNC(btmtk_usb_resume, "_gpl", "");
KSYMTAB_FUNC(btmtk_usb_suspend, "_gpl", "");
KSYMTAB_FUNC(btmtk_usb_setup, "_gpl", "");
KSYMTAB_FUNC(btmtk_usb_shutdown, "_gpl", "");

SYMBOL_CRC(btmtk_fw_get_filename, 0xbc8bf0c0, "_gpl");
SYMBOL_CRC(btmtk_setup_firmware_79xx, 0x1ec51494, "_gpl");
SYMBOL_CRC(btmtk_setup_firmware, 0x5e2e1874, "_gpl");
SYMBOL_CRC(btmtk_set_bdaddr, 0x3e19bf61, "_gpl");
SYMBOL_CRC(btmtk_reset_sync, 0xe294c427, "_gpl");
SYMBOL_CRC(btmtk_register_coredump, 0x484f562a, "_gpl");
SYMBOL_CRC(btmtk_process_coredump, 0x9688c5df, "_gpl");
SYMBOL_CRC(btmtk_usb_subsys_reset, 0xf2c9a2dc, "_gpl");
SYMBOL_CRC(btmtk_usb_recv_acl, 0x31f7d576, "_gpl");
SYMBOL_CRC(alloc_mtk_intr_urb, 0xe58bd38a, "_gpl");
SYMBOL_CRC(btmtk_usb_resume, 0xbb1131b9, "_gpl");
SYMBOL_CRC(btmtk_usb_suspend, 0xeee30c0d, "_gpl");
SYMBOL_CRC(btmtk_usb_setup, 0xe587afaa, "_gpl");
SYMBOL_CRC(btmtk_usb_shutdown, 0x58a8779a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x656e4a6e, "snprintf" },
	{ 0xdcb764ad, "memset" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x718b8b7, "bt_info" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb5947eb5, "__hci_cmd_sync" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xca813202, "hci_cmd_sync_queue" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1e8b81a, "hci_devcd_register" },
	{ 0x748b3f7d, "__hci_cmd_send" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x70b0605f, "usb_anchor_urb" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x29c998f4, "usb_unanchor_urb" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x4829a47e, "memcpy" },
	{ 0x47fa5eea, "usb_autopm_get_interface" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x6a336a2e, "usb_autopm_put_interface" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x37a0cba, "kfree" },
	{ 0x837bda45, "hci_devcd_append" },
	{ 0x25eac995, "hci_devcd_complete" },
	{ 0xb20da7cc, "hci_devcd_init" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x6459382d, "usb_disable_autosuspend" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0xcf9ac34d, "hci_recv_diag" },
	{ 0xf7389894, "hci_recv_frame" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x42e2b350, "__skb_pad" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0x4a48d65c, "hci_cmd_sync_cancel" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x98cf60b3, "strlen" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "3FBB445873F92B59A0135EB");
