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

KSYMTAB_FUNC(snd_usbmidi_disconnect, "", "");
KSYMTAB_FUNC(snd_usbmidi_input_stop, "", "");
KSYMTAB_FUNC(snd_usbmidi_input_start, "", "");
KSYMTAB_FUNC(snd_usbmidi_suspend, "", "");
KSYMTAB_FUNC(snd_usbmidi_resume, "", "");
KSYMTAB_FUNC(__snd_usbmidi_create, "", "");

SYMBOL_CRC(snd_usbmidi_disconnect, 0xd9d2bb03, "");
SYMBOL_CRC(snd_usbmidi_input_stop, 0x63343b1d, "");
SYMBOL_CRC(snd_usbmidi_input_start, 0x16756dc0, "");
SYMBOL_CRC(snd_usbmidi_suspend, 0xbed43a41, "");
SYMBOL_CRC(snd_usbmidi_resume, 0xb2af19e1, "");
SYMBOL_CRC(__snd_usbmidi_create, 0x4e0850fd, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x92ee93f3, "snd_rawmidi_receive" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0xd86b7fad, "snd_rawmidi_transmit" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0xcae9f99e, "snd_ctl_add" },
	{ 0x98434f46, "usb_alloc_coherent" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x1f4b34e8, "usb_autopm_get_interface_no_resume" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1069d298, "snd_ctl_new1" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdf850618, "snd_rawmidi_transmit_ack" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0x2cd667b2, "usb_urb_ep_type_check" },
	{ 0x57bc19d2, "down_write" },
	{ 0x669c413b, "_dev_err" },
	{ 0xce807a25, "up_write" },
	{ 0xd8f2fce2, "usb_free_coherent" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7195ba4d, "snd_rawmidi_transmit_peek" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5a921311, "strncmp" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x93d1d1e4, "snd_ctl_notify" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x90548a4e, "usb_string" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x668b19a1, "down_read" },
	{ 0x49b8b65a, "snd_rawmidi_new" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x853bcf02, "snd_rawmidi_set_ops" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x53b954a2, "up_read" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x703dc616, "snd_rawmidi_proceed" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-rawmidi,snd");


MODULE_INFO(srcversion, "AA59DD6A9357B086610D8E7");
