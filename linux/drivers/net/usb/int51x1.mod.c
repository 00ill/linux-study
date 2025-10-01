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
	{ 0x545517e4, "usbnet_write_cmd_async" },
	{ 0x67bbcda, "netdev_info" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xe045141e, "usbnet_get_ethernet_addr" },
	{ 0x25d1b2d1, "usbnet_get_endpoints" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x8502868b, "netdev_err" },
	{ 0xbd395e28, "skb_copy_expand" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xdcb764ad, "memset" },
	{ 0xabdb2d55, "usbnet_open" },
	{ 0x96c6e0c9, "usbnet_stop" },
	{ 0x5363ec4, "usbnet_start_xmit" },
	{ 0xd4f784c4, "eth_mac_addr" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0xa465644c, "usbnet_change_mtu" },
	{ 0xb98eb27f, "usbnet_tx_timeout" },
	{ 0xa89a25ba, "dev_get_tstats64" },
	{ 0xc7d5ee41, "usbnet_probe" },
	{ 0x40e8651c, "usbnet_disconnect" },
	{ 0xc863a612, "usbnet_suspend" },
	{ 0x11ab0a22, "usbnet_resume" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v09E1p5121d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "656077890AD6CF48C0516F7");
