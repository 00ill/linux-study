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
	{ 0x9e80f108, "__usb_serial_register_drivers" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf72a65ea, "tty_get_char_size" },
	{ 0xbd394d8, "tty_termios_baud_rate" },
	{ 0xe3d1a8a7, "tty_encode_baud_rate" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x87b55f30, "usb_clear_halt" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x669c413b, "_dev_err" },
	{ 0xe2964344, "__wake_up" },
	{ 0xd0bc7bf, "ezusb_fx1_ihex_firmware_download" },
	{ 0x90521f65, "usb_serial_deregister_drivers" },
	{ 0x9cbf2887, "usb_serial_generic_close" },
	{ 0xd2b5de5e, "usb_serial_generic_open" },
	{ 0x87aed1dd, "usb_serial_generic_throttle" },
	{ 0xc34ad7a6, "usb_serial_generic_unthrottle" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "usbserial,ezusb");

MODULE_ALIAS("usb:v0710p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0710p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4B654BC7DF0A08FE7FD5A01");
