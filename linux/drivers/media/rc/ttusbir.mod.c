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
	{ 0x66d81d36, "led_classdev_resume" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xeab29c41, "led_classdev_suspend" },
	{ 0xf399eccc, "rc_unregister_device" },
	{ 0xe3dcebe7, "led_classdev_unregister" },
	{ 0xd8f2fce2, "usb_free_coherent" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xc81c4ea7, "ir_raw_event_store_with_filter" },
	{ 0x4a569ebc, "ir_raw_event_handle" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x419a348c, "rc_allocate_device" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x98434f46, "usb_alloc_coherent" },
	{ 0x37c9d5fc, "led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x661f928c, "rc_register_device" },
	{ 0x5dc3d1bc, "rc_free_device" },
	{ 0x669c413b, "_dev_err" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0B48p2003d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B678A1C0B47B7D3BBBBE643");
