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
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x554f4d66, "usb_control_msg_recv" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x9cbf2887, "usb_serial_generic_close" },
	{ 0x90521f65, "usb_serial_deregister_drivers" },
	{ 0x441636cf, "usb_control_msg_send" },
	{ 0xd2b5de5e, "usb_serial_generic_open" },
	{ 0xbd394d8, "tty_termios_baud_rate" },
	{ 0xe3d1a8a7, "tty_encode_baud_rate" },
	{ 0x5262ac7b, "__tty_insert_flip_string_flags" },
	{ 0xaf0efecf, "tty_flip_buffer_push" },
	{ 0x87aed1dd, "usb_serial_generic_throttle" },
	{ 0xc34ad7a6, "usb_serial_generic_unthrottle" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v0830p0080d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CB6201B93859EFDC398686D");
