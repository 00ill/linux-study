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
	{ 0x99c44b73, "input_allocate_device" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x98434f46, "usb_alloc_coherent" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x32a0c53, "input_unregister_device" },
	{ 0x9c54cf55, "usb_stor_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0xca7a567d, "usb_stor_probe1" },
	{ 0xb727b479, "input_free_device" },
	{ 0x70206ba5, "usb_stor_suspend" },
	{ 0x6624226e, "usb_stor_reset_resume" },
	{ 0xc626659b, "usb_stor_pre_reset" },
	{ 0xcab72f31, "input_register_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc54f1d3, "usb_stor_host_template_init" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x669c413b, "_dev_err" },
	{ 0xd8f2fce2, "usb_free_coherent" },
	{ 0x6c922760, "usb_stor_probe2" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x41cc93f6, "input_event" },
	{ 0xa3a1d05c, "usb_stor_disconnect" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xcb707138, "usb_stor_post_reset" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0D49p7000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D49p7010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A061C01B351A43FF212BF60");
