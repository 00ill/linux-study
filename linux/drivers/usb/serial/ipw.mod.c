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
	{ 0x414ea878, "usb_control_msg" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9742e7d6, "usb_wwan_close" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x87b55f30, "usb_clear_halt" },
	{ 0x5df269d7, "usb_wwan_open" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x90521f65, "usb_serial_deregister_drivers" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x858f5f54, "usb_wwan_port_probe" },
	{ 0xb7ce9e5c, "usb_wwan_port_remove" },
	{ 0x4ed6f6e1, "usb_wwan_write" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "usbserial,usb_wwan");

MODULE_ALIAS("usb:v0BC3p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D1FFA13A413CB38533A1335");
