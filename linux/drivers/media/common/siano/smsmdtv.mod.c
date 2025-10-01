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

KSYMTAB_FUNC(smscore_translate_msg, "_gpl", "");
KSYMTAB_FUNC(smscore_set_board_id, "_gpl", "");
KSYMTAB_FUNC(smscore_get_board_id, "_gpl", "");
KSYMTAB_FUNC(smscore_registry_getmode, "_gpl", "");
KSYMTAB_FUNC(smscore_register_hotplug, "_gpl", "");
KSYMTAB_FUNC(smscore_unregister_hotplug, "_gpl", "");
KSYMTAB_FUNC(smscore_register_device, "_gpl", "");
KSYMTAB_FUNC(smscore_start_device, "_gpl", "");
KSYMTAB_FUNC(smscore_unregister_device, "_gpl", "");
KSYMTAB_FUNC(smscore_get_device_mode, "_gpl", "");
KSYMTAB_FUNC(smscore_onresponse, "_gpl", "");
KSYMTAB_FUNC(smscore_getbuffer, "_gpl", "");
KSYMTAB_FUNC(smscore_putbuffer, "_gpl", "");
KSYMTAB_FUNC(smscore_register_client, "_gpl", "");
KSYMTAB_FUNC(smscore_unregister_client, "_gpl", "");
KSYMTAB_FUNC(smsclient_sendrequest, "_gpl", "");
KSYMTAB_FUNC(sms_get_board, "_gpl", "");
KSYMTAB_FUNC(sms_board_event, "_gpl", "");
KSYMTAB_FUNC(sms_board_setup, "_gpl", "");
KSYMTAB_FUNC(sms_board_power, "_gpl", "");
KSYMTAB_FUNC(sms_board_led_feedback, "_gpl", "");
KSYMTAB_FUNC(sms_board_lna_control, "_gpl", "");
KSYMTAB_FUNC(sms_board_load_modules, "_gpl", "");
KSYMTAB_FUNC(smsendian_handle_tx_message, "_gpl", "");
KSYMTAB_FUNC(smsendian_handle_rx_message, "_gpl", "");
KSYMTAB_FUNC(smsendian_handle_message_header, "_gpl", "");

SYMBOL_CRC(smscore_translate_msg, 0x34bf0e61, "_gpl");
SYMBOL_CRC(smscore_set_board_id, 0x322f289c, "_gpl");
SYMBOL_CRC(smscore_get_board_id, 0xc1e44d7a, "_gpl");
SYMBOL_CRC(smscore_registry_getmode, 0x21e36bf2, "_gpl");
SYMBOL_CRC(smscore_register_hotplug, 0x56be7773, "_gpl");
SYMBOL_CRC(smscore_unregister_hotplug, 0x5b042abf, "_gpl");
SYMBOL_CRC(smscore_register_device, 0x229e9726, "_gpl");
SYMBOL_CRC(smscore_start_device, 0x2e981664, "_gpl");
SYMBOL_CRC(smscore_unregister_device, 0x18e109a1, "_gpl");
SYMBOL_CRC(smscore_get_device_mode, 0x54057840, "_gpl");
SYMBOL_CRC(smscore_onresponse, 0x1482698d, "_gpl");
SYMBOL_CRC(smscore_getbuffer, 0x2796d2fe, "_gpl");
SYMBOL_CRC(smscore_putbuffer, 0x63640160, "_gpl");
SYMBOL_CRC(smscore_register_client, 0x68a74e82, "_gpl");
SYMBOL_CRC(smscore_unregister_client, 0xbbdb5c42, "_gpl");
SYMBOL_CRC(smsclient_sendrequest, 0x99a81ab3, "_gpl");
SYMBOL_CRC(sms_get_board, 0x844539ae, "_gpl");
SYMBOL_CRC(sms_board_event, 0xbe027c7b, "_gpl");
SYMBOL_CRC(sms_board_setup, 0xcbbc2c56, "_gpl");
SYMBOL_CRC(sms_board_power, 0x3b4f12dd, "_gpl");
SYMBOL_CRC(sms_board_led_feedback, 0x05bb8aa3, "_gpl");
SYMBOL_CRC(sms_board_lna_control, 0xf4f199bf, "_gpl");
SYMBOL_CRC(sms_board_load_modules, 0x74ee9098, "_gpl");
SYMBOL_CRC(smsendian_handle_tx_message, 0x37d91069, "_gpl");
SYMBOL_CRC(smsendian_handle_rx_message, 0x45284ae9, "_gpl");
SYMBOL_CRC(smsendian_handle_message_header, 0x7c576277, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x4a569ebc, "ir_raw_event_handle" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x219c9b83, "ir_raw_event_store" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x661f928c, "rc_register_device" },
	{ 0x576d600d, "dma_alloc_attrs" },
	{ 0x5a921311, "strncmp" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5dc3d1bc, "rc_free_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x419a348c, "rc_allocate_device" },
	{ 0x681fdc29, "dma_free_attrs" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf399eccc, "rc_unregister_device" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ED2A3FFD830BE95D931BD4D");
