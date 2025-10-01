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
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x9de91704, "usbnet_cdc_unbind" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3f1aaaf9, "usbnet_cdc_bind" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8502868b, "netdev_err" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x7c830159, "usbnet_skb_return" },
	{ 0x8f6de776, "usbnet_cdc_status" },
	{ 0xc7d5ee41, "usbnet_probe" },
	{ 0x40e8651c, "usbnet_disconnect" },
	{ 0xc863a612, "usbnet_suspend" },
	{ 0x11ab0a22, "usbnet_resume" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "cdc_ether");

MODULE_ALIAS("usb:v1004p61AAd*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "65838F3ED38F36951C1D174");
