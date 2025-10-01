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

KSYMTAB_DATA(line6_midi_id, "_gpl", "");
KSYMTAB_FUNC(line6_send_raw_message, "_gpl", "");
KSYMTAB_FUNC(line6_send_raw_message_async, "_gpl", "");
KSYMTAB_FUNC(line6_version_request_async, "_gpl", "");
KSYMTAB_FUNC(line6_send_sysex_message, "_gpl", "");
KSYMTAB_FUNC(line6_alloc_sysex_buffer, "_gpl", "");
KSYMTAB_FUNC(line6_read_data, "_gpl", "");
KSYMTAB_FUNC(line6_write_data, "_gpl", "");
KSYMTAB_FUNC(line6_read_serial_number, "_gpl", "");
KSYMTAB_FUNC(line6_probe, "_gpl", "");
KSYMTAB_FUNC(line6_disconnect, "_gpl", "");
KSYMTAB_FUNC(line6_suspend, "_gpl", "");
KSYMTAB_FUNC(line6_resume, "_gpl", "");
KSYMTAB_FUNC(line6_init_midi, "_gpl", "");
KSYMTAB_FUNC(line6_pcm_acquire, "_gpl", "");
KSYMTAB_FUNC(line6_pcm_release, "_gpl", "");
KSYMTAB_FUNC(line6_init_pcm, "_gpl", "");

SYMBOL_CRC(line6_midi_id, 0x202a1b1b, "_gpl");
SYMBOL_CRC(line6_send_raw_message, 0x471532ba, "_gpl");
SYMBOL_CRC(line6_send_raw_message_async, 0x2c5621c0, "_gpl");
SYMBOL_CRC(line6_version_request_async, 0xe135a68a, "_gpl");
SYMBOL_CRC(line6_send_sysex_message, 0xd7809b0b, "_gpl");
SYMBOL_CRC(line6_alloc_sysex_buffer, 0xe10d5c5c, "_gpl");
SYMBOL_CRC(line6_read_data, 0xeca142e5, "_gpl");
SYMBOL_CRC(line6_write_data, 0x28ef6519, "_gpl");
SYMBOL_CRC(line6_read_serial_number, 0x8f0536fd, "_gpl");
SYMBOL_CRC(line6_probe, 0x61b40458, "_gpl");
SYMBOL_CRC(line6_disconnect, 0xfca298f8, "_gpl");
SYMBOL_CRC(line6_suspend, 0x8a4953e1, "_gpl");
SYMBOL_CRC(line6_resume, 0x1f066823, "_gpl");
SYMBOL_CRC(line6_init_midi, 0x81762770, "_gpl");
SYMBOL_CRC(line6_pcm_acquire, 0x28d52c9a, "_gpl");
SYMBOL_CRC(line6_pcm_release, 0xadaa2f73, "_gpl");
SYMBOL_CRC(line6_init_pcm, 0x2b0446da, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x92ee93f3, "snd_rawmidi_receive" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x441636cf, "usb_control_msg_send" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xcae9f99e, "snd_ctl_add" },
	{ 0xa7ab474b, "snd_pcm_new" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x554f4d66, "usb_control_msg_recv" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x70f7da02, "usb_interrupt_msg" },
	{ 0x3955fcf6, "__kfifo_in_r" },
	{ 0x1069d298, "snd_ctl_new1" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdf850618, "snd_rawmidi_transmit_ack" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xfb6cd37f, "snd_pcm_hw_constraint_ratdens" },
	{ 0x306f753, "snd_card_new" },
	{ 0x2cd667b2, "usb_urb_ep_type_check" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x669c413b, "_dev_err" },
	{ 0xa27a1e5, "snd_hwdep_new" },
	{ 0x7195ba4d, "snd_rawmidi_transmit_peek" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x624ab268, "snd_card_free_when_closed" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0x738a0e18, "snd_pcm_set_ops" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9a0af284, "snd_pcm_set_managed_buffer_all" },
	{ 0xdcb764ad, "memset" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6cb465a, "__kfifo_max_r" },
	{ 0x49b8b65a, "snd_rawmidi_new" },
	{ 0xda9ef1db, "snd_card_disconnect" },
	{ 0x3cf8929c, "usb_unlink_urb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x853bcf02, "snd_rawmidi_set_ops" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2484adc3, "__kfifo_to_user_r" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xc9098c3d, "snd_pcm_period_elapsed" },
	{ 0x7846af3e, "__kfifo_len_r" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-rawmidi,snd,snd-pcm,snd-hwdep");


MODULE_INFO(srcversion, "7DD4A530BEBC54D6137E74E");
