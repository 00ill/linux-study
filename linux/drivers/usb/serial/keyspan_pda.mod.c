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
	{ 0x625c7141, "ezusb_fx1_set_reset" },
	{ 0x669c413b, "_dev_err" },
	{ 0xd0bc7bf, "ezusb_fx1_ihex_firmware_download" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x90521f65, "usb_serial_deregister_drivers" },
	{ 0x554f4d66, "usb_control_msg_recv" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbd394d8, "tty_termios_baud_rate" },
	{ 0xe816048f, "tty_termios_copy_hw" },
	{ 0xe3d1a8a7, "tty_encode_baud_rate" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x61d6a5b, "usb_serial_port_softint" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5262ac7b, "__tty_insert_flip_string_flags" },
	{ 0xaf0efecf, "tty_flip_buffer_push" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "usbserial,ezusb");

MODULE_ALIAS("usb:v06CDp0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v085Ap8027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v085Ap8025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1645p8093d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0104d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "AB3AE4C891C4A4ED961FD2A");
