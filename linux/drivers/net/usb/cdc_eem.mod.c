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
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x33b58322, "skb_push" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x7c830159, "usbnet_skb_return" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x87e7c8e4, "netdev_warn" },
	{ 0xce2c5ec8, "usbnet_device_suggests_idle" },
	{ 0x25d1b2d1, "usbnet_get_endpoints" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xc7d5ee41, "usbnet_probe" },
	{ 0x40e8651c, "usbnet_disconnect" },
	{ 0xc863a612, "usbnet_suspend" },
	{ 0x11ab0a22, "usbnet_resume" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Cip07in*");

MODULE_INFO(srcversion, "0C56F28F3F857885309A651");
