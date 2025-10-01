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

KSYMTAB_FUNC(btmrvl_interrupt, "_gpl", "");
KSYMTAB_FUNC(btmrvl_check_evtpkt, "_gpl", "");
KSYMTAB_FUNC(btmrvl_process_event, "_gpl", "");
KSYMTAB_FUNC(btmrvl_send_module_cfg_cmd, "_gpl", "");
KSYMTAB_FUNC(btmrvl_pscan_window_reporting, "_gpl", "");
KSYMTAB_FUNC(btmrvl_send_hscfg_cmd, "_gpl", "");
KSYMTAB_FUNC(btmrvl_enable_ps, "_gpl", "");
KSYMTAB_FUNC(btmrvl_enable_hs, "_gpl", "");
KSYMTAB_FUNC(btmrvl_register_hdev, "_gpl", "");
KSYMTAB_FUNC(btmrvl_add_card, "_gpl", "");
KSYMTAB_FUNC(btmrvl_remove_card, "_gpl", "");

SYMBOL_CRC(btmrvl_interrupt, 0x5f9303e8, "_gpl");
SYMBOL_CRC(btmrvl_check_evtpkt, 0x03ed8250, "_gpl");
SYMBOL_CRC(btmrvl_process_event, 0x8560dccf, "_gpl");
SYMBOL_CRC(btmrvl_send_module_cfg_cmd, 0xe2818c82, "_gpl");
SYMBOL_CRC(btmrvl_pscan_window_reporting, 0x2fa02222, "_gpl");
SYMBOL_CRC(btmrvl_send_hscfg_cmd, 0x1d90228f, "_gpl");
SYMBOL_CRC(btmrvl_enable_ps, 0x8f2c87ba, "_gpl");
SYMBOL_CRC(btmrvl_enable_hs, 0x48986c25, "_gpl");
SYMBOL_CRC(btmrvl_register_hdev, 0xe4bfc31f, "_gpl");
SYMBOL_CRC(btmrvl_add_card, 0xa0ec8aad, "_gpl");
SYMBOL_CRC(btmrvl_remove_card, 0x2782b0f9, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4367c3a1, "skb_put" },
	{ 0xec2f6bf4, "hci_free_dev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4829a47e, "memcpy" },
	{ 0x84351f9d, "hci_alloc_dev_priv" },
	{ 0x37a0cba, "kfree" },
	{ 0xdce2f57c, "of_property_read_variable_u16_array" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5d809a68, "simple_open" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x33b58322, "skb_push" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x40d6ec8a, "default_llseek" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x2505bf18, "kstrtol_from_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x57624c0a, "of_property_read_variable_u8_array" },
	{ 0x8494a47, "debugfs_create_x16" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0xadc1603a, "hci_unregister_dev" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x9b80e029, "hci_register_dev" },
	{ 0xb5947eb5, "__hci_cmd_sync" },
	{ 0x571ab022, "debugfs_create_u8" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x910b3446, "skb_queue_head" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "4DAA8C2DB56C352B9807349");
