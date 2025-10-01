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
	{ 0xfe313fa9, "dvb_ca_en50221_init" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x46b92066, "dvb_usb_generic_rw" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xb3b75fb9, "rc_keyup" },
	{ 0x64d03d, "dvb_ca_en50221_release" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9128f4c2, "rc_keydown" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x1ea8b724, "param_ops_short" },
	{ 0xdcb764ad, "memset" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x693e74ba, "ttpci_eeprom_decode_mac" },
	{ 0x6dd942e0, "dvb_usb_device_init" },
	{ 0x579e5ff4, "dvb_usb_device_exit" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dvb-core,dvb-usb,ttpci-eeprom");

MODULE_ALIAS("usb:v2304p021Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p300Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B70446DE604A85A0C22F540");
