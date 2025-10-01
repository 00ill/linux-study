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
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xa6257a2f, "complete" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc8aca20f, "devm_hwmon_device_register_with_info" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v5FC9p0061d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v5FC9p0063d*dc*dsc*dp*ic*isc*ip*in00*");

MODULE_INFO(srcversion, "3A0C76BA5FE67146CD3523B");
