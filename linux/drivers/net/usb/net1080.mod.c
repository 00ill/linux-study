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
	{ 0xbd395e28, "skb_copy_expand" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x33b58322, "skb_push" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x25d1b2d1, "usbnet_get_endpoints" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xb51db013, "usbnet_read_cmd" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x49319e76, "usbnet_write_cmd" },
	{ 0x67bbcda, "netdev_info" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x545517e4, "usbnet_write_cmd_async" },
	{ 0xc7d5ee41, "usbnet_probe" },
	{ 0x40e8651c, "usbnet_disconnect" },
	{ 0xc863a612, "usbnet_suspend" },
	{ 0x11ab0a22, "usbnet_resume" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0525p1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D0p0622d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0AB812F3C0089143DE36D56");
