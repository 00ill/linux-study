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
	{ 0x669c413b, "_dev_err" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x61d6a5b, "usb_serial_port_softint" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x90521f65, "usb_serial_deregister_drivers" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc1c22da0, "usb_serial_generic_submit_read_urbs" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5262ac7b, "__tty_insert_flip_string_flags" },
	{ 0xaf0efecf, "tty_flip_buffer_push" },
	{ 0xe2964344, "__wake_up" },
	{ 0x39e01600, "tty_port_tty_get" },
	{ 0x43356bdc, "usb_serial_handle_dcd_change" },
	{ 0xbd907522, "tty_kref_put" },
	{ 0xdcb764ad, "memset" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf72a65ea, "tty_get_char_size" },
	{ 0xbd394d8, "tty_termios_baud_rate" },
	{ 0xe3d1a8a7, "tty_encode_baud_rate" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v1934p1202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1202d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "356CDAC3562FE20BF3EDE3B");
