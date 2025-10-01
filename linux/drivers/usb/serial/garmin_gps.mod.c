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
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x9e80f108, "__usb_serial_register_drivers" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0x90521f65, "usb_serial_deregister_drivers" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x70b0605f, "usb_anchor_urb" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x669c413b, "_dev_err" },
	{ 0x29c998f4, "usb_unanchor_urb" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x61d6a5b, "usb_serial_port_softint" },
	{ 0x5262ac7b, "__tty_insert_flip_string_flags" },
	{ 0xaf0efecf, "tty_flip_buffer_push" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7fcac341, "usb_reset_device" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v091Ep0003d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "31C69EF9E7B5B1623461085");
