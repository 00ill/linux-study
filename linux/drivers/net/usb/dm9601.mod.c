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
	{ 0xd75a168c, "skb_pull" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf6b94616, "mii_check_media" },
	{ 0x9c93311c, "mii_ethtool_gset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbeacb70c, "mii_link_ok" },
	{ 0xc1df7b2e, "usbnet_get_drvinfo" },
	{ 0x481e140a, "generic_mii_ioctl" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x449726c2, "usbnet_link_change" },
	{ 0x545517e4, "usbnet_write_cmd_async" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xbd395e28, "skb_copy_expand" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0xdcb764ad, "memset" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x49319e76, "usbnet_write_cmd" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb51db013, "usbnet_read_cmd" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8502868b, "netdev_err" },
	{ 0x25d1b2d1, "usbnet_get_endpoints" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe153e001, "mii_nway_restart" },
	{ 0xabdb2d55, "usbnet_open" },
	{ 0x96c6e0c9, "usbnet_stop" },
	{ 0x5363ec4, "usbnet_start_xmit" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0xa465644c, "usbnet_change_mtu" },
	{ 0xb98eb27f, "usbnet_tx_timeout" },
	{ 0xa89a25ba, "dev_get_tstats64" },
	{ 0x4b94dcdc, "usbnet_get_msglevel" },
	{ 0xab02ae4f, "usbnet_set_msglevel" },
	{ 0x1fa87300, "usbnet_nway_reset" },
	{ 0x2a22e13a, "usbnet_get_link_ksettings_mii" },
	{ 0x92fba40a, "usbnet_set_link_ksettings_mii" },
	{ 0xc7d5ee41, "usbnet_probe" },
	{ 0x40e8651c, "usbnet_disconnect" },
	{ 0xc863a612, "usbnet_suspend" },
	{ 0x11ab0a22, "usbnet_resume" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v07AAp9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p6688d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0268d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p8515d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A47p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p8101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p9700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9621d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0269d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p1269d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3427d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "81EDAE61E825248A1C1D81B");
