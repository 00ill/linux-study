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
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x46b92066, "dvb_usb_generic_rw" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x1ea8b724, "param_ops_short" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6dd942e0, "dvb_usb_device_init" },
	{ 0x579e5ff4, "dvb_usb_device_exit" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x89f3455f, "dvb_usb_generic_write" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dvb-usb");

MODULE_ALIAS("usb:v0547p0201d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "17E1969409F321CADFF25F9");
