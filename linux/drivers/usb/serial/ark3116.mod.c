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
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x90521f65, "usb_serial_deregister_drivers" },
	{ 0x5262ac7b, "__tty_insert_flip_string_flags" },
	{ 0xaf0efecf, "tty_flip_buffer_push" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9cbf2887, "usb_serial_generic_close" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xbd394d8, "tty_termios_baud_rate" },
	{ 0xf72a65ea, "tty_get_char_size" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0xd2b5de5e, "usb_serial_generic_open" },
	{ 0x849dbc34, "usb_serial_generic_tiocmiwait" },
	{ 0xaadd8ec7, "usb_serial_generic_get_icount" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v6547p0232d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18ECp3118d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "406DD601F64C9671840A064");
