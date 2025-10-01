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
	{ 0x56e92ac8, "mdiobus_alloc_size" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xab02ae4f, "usbnet_set_msglevel" },
	{ 0x49319e76, "usbnet_write_cmd" },
	{ 0xd4f784c4, "eth_mac_addr" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xbeacb70c, "mii_link_ok" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x151093e, "phy_connect" },
	{ 0xa465644c, "usbnet_change_mtu" },
	{ 0x545517e4, "usbnet_write_cmd_async" },
	{ 0xc090c376, "net_selftest_get_strings" },
	{ 0x3171ab23, "phy_attached_info" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x82f1876e, "phy_ethtool_set_link_ksettings" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0xd1669bc8, "usbnet_unlink_rx_urbs" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x87e7c8e4, "netdev_warn" },
	{ 0x92fba40a, "usbnet_set_link_ksettings_mii" },
	{ 0x8502868b, "netdev_err" },
	{ 0xc591171e, "phylink_create" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0x4b94dcdc, "usbnet_get_msglevel" },
	{ 0xf6b94616, "mii_check_media" },
	{ 0xabdb2d55, "usbnet_open" },
	{ 0x7c830159, "usbnet_skb_return" },
	{ 0x8f2ed534, "genphy_resume" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb98eb27f, "usbnet_tx_timeout" },
	{ 0x16ca1a8a, "phylink_suspend" },
	{ 0x2a22e13a, "usbnet_get_link_ksettings_mii" },
	{ 0xb51db013, "usbnet_read_cmd" },
	{ 0xbd395e28, "skb_copy_expand" },
	{ 0xded7bd5d, "phy_ethtool_get_link_ksettings" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x2caa7639, "usbnet_write_cmd_nopm" },
	{ 0xa83d1f5d, "usbnet_get_link" },
	{ 0x74eea4e0, "phy_suspend" },
	{ 0xc863a612, "usbnet_suspend" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x5363ec4, "usbnet_start_xmit" },
	{ 0x983276da, "phylink_disconnect_phy" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x70d51acf, "usbnet_read_cmd_nopm" },
	{ 0xf8fe5642, "phylink_ethtool_get_pauseparam" },
	{ 0x33b58322, "skb_push" },
	{ 0xc1df7b2e, "usbnet_get_drvinfo" },
	{ 0x25d1b2d1, "usbnet_get_endpoints" },
	{ 0x911fcd6c, "phylink_start" },
	{ 0xe10409c1, "mdiobus_free" },
	{ 0xc0a8f4be, "phylink_resume" },
	{ 0x738c6d87, "eth_platform_get_mac_address" },
	{ 0x15c4e3e2, "phylink_ethtool_set_pauseparam" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xe153e001, "mii_nway_restart" },
	{ 0xbc556d6c, "phy_start" },
	{ 0x1fa87300, "usbnet_nway_reset" },
	{ 0xdcb0a2c0, "phylink_stop" },
	{ 0xb80965c0, "phy_print_status" },
	{ 0xa89a25ba, "dev_get_tstats64" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0xdb319b68, "net_selftest" },
	{ 0xe1e82627, "mdiobus_unregister" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2c1c3abd, "usbnet_update_max_qlen" },
	{ 0x96c6e0c9, "usbnet_stop" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x481e140a, "generic_mii_ioctl" },
	{ 0xeba72416, "mdiobus_get_phy" },
	{ 0x40e8651c, "usbnet_disconnect" },
	{ 0x41f3dd41, "phy_ethtool_nway_reset" },
	{ 0xf3083a1d, "phylink_destroy" },
	{ 0xf54d2460, "__mdiobus_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x449726c2, "usbnet_link_change" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc7d5ee41, "usbnet_probe" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x78a97e3d, "phy_stop" },
	{ 0x8e6b1a9e, "net_selftest_get_count" },
	{ 0xacb19f11, "phy_do_ioctl_running" },
	{ 0x11ab0a22, "usbnet_resume" },
	{ 0x576f4941, "phy_disconnect" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9c93311c, "mii_ethtool_gset" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x67bbcda, "netdev_info" },
	{ 0x8281ff34, "phylink_connect_phy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p061Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v33F7p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D2Ap0801d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1A1A4E83212B6FE48BAFF60");
