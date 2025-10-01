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
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x545016b, "usb_stor_Bulk_reset" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9c54cf55, "usb_stor_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0xca7a567d, "usb_stor_probe1" },
	{ 0x70206ba5, "usb_stor_suspend" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8af08705, "usb_stor_ctrl_transfer" },
	{ 0x6624226e, "usb_stor_reset_resume" },
	{ 0xc626659b, "usb_stor_pre_reset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc54f1d3, "usb_stor_host_template_init" },
	{ 0x9a21ab0a, "fill_inquiry_response" },
	{ 0x6c922760, "usb_stor_probe2" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xdcb764ad, "memset" },
	{ 0xa3a1d05c, "usb_stor_disconnect" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcb707138, "usb_stor_post_reset" },
	{ 0xdf3f448f, "usb_stor_access_xfer_buf" },
	{ 0x35a6d6da, "usb_stor_bulk_transfer_buf" },
	{ 0xe6678207, "usb_stor_set_xfer_buf" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0584p0008d0102dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B4p010Ad0102dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "194B5496703A6B535714BA1");
