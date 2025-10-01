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

KSYMTAB_FUNC(rndis_status, "_gpl", "");
KSYMTAB_FUNC(rndis_command, "_gpl", "");
KSYMTAB_FUNC(generic_rndis_bind, "_gpl", "");
KSYMTAB_FUNC(rndis_unbind, "_gpl", "");
KSYMTAB_FUNC(rndis_rx_fixup, "_gpl", "");
KSYMTAB_FUNC(rndis_tx_fixup, "_gpl", "");

SYMBOL_CRC(rndis_status, 0x8ee2c878, "_gpl");
SYMBOL_CRC(rndis_command, 0x96896a39, "_gpl");
SYMBOL_CRC(generic_rndis_bind, 0x3e417c08, "_gpl");
SYMBOL_CRC(rndis_unbind, 0xf204f607, "_gpl");
SYMBOL_CRC(rndis_rx_fixup, 0xf99dad79, "_gpl");
SYMBOL_CRC(rndis_tx_fixup, 0x774cd043, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x414ea878, "usb_control_msg" },
	{ 0xdcb764ad, "memset" },
	{ 0x70f7da02, "usb_interrupt_msg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb96d82c6, "usbnet_generic_cdc_bind" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x72b34551, "usb_driver_release_interface" },
	{ 0x37a0cba, "kfree" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x25fb21b9, "usbnet_cdc_zte_rx_fixup" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0x7c830159, "usbnet_skb_return" },
	{ 0xbd395e28, "skb_copy_expand" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x9de91704, "usbnet_cdc_unbind" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xabdb2d55, "usbnet_open" },
	{ 0x96c6e0c9, "usbnet_stop" },
	{ 0x5363ec4, "usbnet_start_xmit" },
	{ 0xd4f784c4, "eth_mac_addr" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0xb98eb27f, "usbnet_tx_timeout" },
	{ 0xa89a25ba, "dev_get_tstats64" },
	{ 0xc7d5ee41, "usbnet_probe" },
	{ 0x40e8651c, "usbnet_disconnect" },
	{ 0xc863a612, "usbnet_suspend" },
	{ 0x11ab0a22, "usbnet_resume" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "cdc_ether");

MODULE_ALIAS("usb:v1630p0042d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v238Bp*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v19D2p*d*dc*dsc*dp*icE0isc01ip03in*");
MODULE_ALIAS("usb:v19D2p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip03in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc04ip01in*");

MODULE_INFO(srcversion, "3B05777579B45683A4B889E");
