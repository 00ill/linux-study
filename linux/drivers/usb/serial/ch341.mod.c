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
	{ 0x9e80f108, "__usb_serial_register_drivers" },
	{ 0x9cbf2887, "usb_serial_generic_close" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x90521f65, "usb_serial_deregister_drivers" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x669c413b, "_dev_err" },
	{ 0xe2964344, "__wake_up" },
	{ 0x39e01600, "tty_port_tty_get" },
	{ 0x43356bdc, "usb_serial_handle_dcd_change" },
	{ 0xbd907522, "tty_kref_put" },
	{ 0x554f4d66, "usb_control_msg_recv" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x3737a80a, "tty_put_char" },
	{ 0x2c2e828e, "usb_serial_generic_resume" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xcd9c13a3, "tty_termios_hw_change" },
	{ 0xbd394d8, "tty_termios_baud_rate" },
	{ 0xe816048f, "tty_termios_copy_hw" },
	{ 0xd2b5de5e, "usb_serial_generic_open" },
	{ 0x849dbc34, "usb_serial_generic_tiocmiwait" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v1A86p5523d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A86p7522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A86p7523d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2184p0057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4348p5523d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9986p7523d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "67F422472A61E8361D84B1A");
