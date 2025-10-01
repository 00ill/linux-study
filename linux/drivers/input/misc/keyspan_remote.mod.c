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
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x32a0c53, "input_unregister_device" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0xd8f2fce2, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x99c44b73, "input_allocate_device" },
	{ 0xb727b479, "input_free_device" },
	{ 0x98434f46, "usb_alloc_coherent" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x669c413b, "_dev_err" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x41cc93f6, "input_event" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v06CDp0202d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E426F97EE1BBF2A7E7A4FFD");
