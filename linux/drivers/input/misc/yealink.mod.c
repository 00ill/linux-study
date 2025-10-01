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
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb727b479, "input_free_device" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xd8f2fce2, "usb_free_coherent" },
	{ 0x32a0c53, "input_unregister_device" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x41cc93f6, "input_event" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5a921311, "strncmp" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x99c44b73, "input_allocate_device" },
	{ 0x98434f46, "usb_alloc_coherent" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xcab72f31, "input_register_device" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v6993pB001d*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "979102F15B6CA689AF88293");
