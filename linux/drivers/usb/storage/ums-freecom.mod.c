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
	{ 0x5824f970, "usb_stor_bulk_srb" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x9c54cf55, "usb_stor_resume" },
	{ 0xca7a567d, "usb_stor_probe1" },
	{ 0x70206ba5, "usb_stor_suspend" },
	{ 0x122c3a7e, "_printk" },
	{ 0x6624226e, "usb_stor_reset_resume" },
	{ 0xc626659b, "usb_stor_pre_reset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc54f1d3, "usb_stor_host_template_init" },
	{ 0x6c922760, "usb_stor_probe2" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xdcb764ad, "memset" },
	{ 0xa3a1d05c, "usb_stor_disconnect" },
	{ 0x5e462d7a, "usb_stor_control_msg" },
	{ 0xcb707138, "usb_stor_post_reset" },
	{ 0x35a6d6da, "usb_stor_bulk_transfer_buf" },
	{ 0xf9a482f9, "msleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v07ABpFC01d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "21243CE10E84F625C35330E");
