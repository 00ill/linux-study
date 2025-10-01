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
	{ 0x2c190ec6, "skb_trim" },
	{ 0x669c413b, "_dev_err" },
	{ 0x449726c2, "usbnet_link_change" },
	{ 0x481e140a, "generic_mii_ioctl" },
	{ 0xc1df7b2e, "usbnet_get_drvinfo" },
	{ 0x49319e76, "usbnet_write_cmd" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x545517e4, "usbnet_write_cmd_async" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb51db013, "usbnet_read_cmd" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x25d1b2d1, "usbnet_get_endpoints" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x11ab0a22, "usbnet_resume" },
	{ 0x4b94dcdc, "usbnet_get_msglevel" },
	{ 0xab02ae4f, "usbnet_set_msglevel" },
	{ 0x1fa87300, "usbnet_nway_reset" },
	{ 0xa83d1f5d, "usbnet_get_link" },
	{ 0x2a22e13a, "usbnet_get_link_ksettings_mii" },
	{ 0x92fba40a, "usbnet_set_link_ksettings_mii" },
	{ 0xabdb2d55, "usbnet_open" },
	{ 0x96c6e0c9, "usbnet_stop" },
	{ 0x5363ec4, "usbnet_start_xmit" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0xa465644c, "usbnet_change_mtu" },
	{ 0xb98eb27f, "usbnet_tx_timeout" },
	{ 0xa89a25ba, "dev_get_tstats64" },
	{ 0xc7d5ee41, "usbnet_probe" },
	{ 0x40e8651c, "usbnet_disconnect" },
	{ 0xc863a612, "usbnet_suspend" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v9710p7832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7730d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0021d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5D02D0AA299BC91E75D6C18");
