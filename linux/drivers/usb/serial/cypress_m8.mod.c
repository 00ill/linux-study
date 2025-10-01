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
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x9e80f108, "__usb_serial_register_drivers" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0xdcb764ad, "memset" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x61d6a5b, "usb_serial_port_softint" },
	{ 0x39e01600, "tty_port_tty_get" },
	{ 0xe2964344, "__wake_up" },
	{ 0xc83c3616, "tty_hangup" },
	{ 0xbd907522, "tty_kref_put" },
	{ 0x5262ac7b, "__tty_insert_flip_string_flags" },
	{ 0xaf0efecf, "tty_flip_buffer_push" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe3d1a8a7, "tty_encode_baud_rate" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x90521f65, "usb_serial_deregister_drivers" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x6595b544, "usb_reset_configuration" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0xf72a65ea, "tty_get_char_size" },
	{ 0xbd394d8, "tty_termios_baud_rate" },
	{ 0x87b55f30, "usb_clear_halt" },
	{ 0x849dbc34, "usb_serial_generic_tiocmiwait" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v1163p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1163p0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p5500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17DDp5500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D9Fp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6737p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p4101d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B33B57A6AE87EA91D1B6294");
