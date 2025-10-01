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
	{ 0xa728742c, "usb_register_driver" },
	{ 0x9e80f108, "__usb_serial_register_drivers" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x441636cf, "usb_control_msg_send" },
	{ 0x669c413b, "_dev_err" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x2c2e828e, "usb_serial_generic_resume" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x90521f65, "usb_serial_deregister_drivers" },
	{ 0x9cbf2887, "usb_serial_generic_close" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5262ac7b, "__tty_insert_flip_string_flags" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x554f4d66, "usb_control_msg_recv" },
	{ 0xe2964344, "__wake_up" },
	{ 0x39e01600, "tty_port_tty_get" },
	{ 0x43356bdc, "usb_serial_handle_dcd_change" },
	{ 0xbd907522, "tty_kref_put" },
	{ 0xcd9c13a3, "tty_termios_hw_change" },
	{ 0xbd394d8, "tty_termios_baud_rate" },
	{ 0xf72a65ea, "tty_get_char_size" },
	{ 0xe3d1a8a7, "tty_encode_baud_rate" },
	{ 0xd2b5de5e, "usb_serial_generic_open" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xaf0efecf, "tty_flip_buffer_push" },
	{ 0x849dbc34, "usb_serial_generic_tiocmiwait" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v1934p0706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1604d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1606d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1608d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1634d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1635d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1636d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p16F8d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7D856FF53A4ECE1CA056E22");
