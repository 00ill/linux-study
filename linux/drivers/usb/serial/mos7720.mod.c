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
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x669c413b, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x90521f65, "usb_serial_deregister_drivers" },
	{ 0x462fbbdc, "tty_port_tty_wakeup" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf72a65ea, "tty_get_char_size" },
	{ 0xbd394d8, "tty_termios_baud_rate" },
	{ 0xe3d1a8a7, "tty_encode_baud_rate" },
	{ 0x87b55f30, "usb_clear_halt" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x5262ac7b, "__tty_insert_flip_string_flags" },
	{ 0xaf0efecf, "tty_flip_buffer_push" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v9710p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7715d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7227CF45C00D2EA777BAD65");
