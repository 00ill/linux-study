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
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0x33b58322, "skb_push" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0xb51db013, "usbnet_read_cmd" },
	{ 0x70d51acf, "usbnet_read_cmd_nopm" },
	{ 0x87e7c8e4, "netdev_warn" },
	{ 0x49319e76, "usbnet_write_cmd" },
	{ 0x2caa7639, "usbnet_write_cmd_nopm" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0x124dadeb, "mii_ethtool_set_link_ksettings" },
	{ 0xce4f4863, "mii_ethtool_get_link_ksettings" },
	{ 0x481e140a, "generic_mii_ioctl" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x40e8651c, "usbnet_disconnect" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x545517e4, "usbnet_write_cmd_async" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x449726c2, "usbnet_link_change" },
	{ 0x67bbcda, "netdev_info" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7c830159, "usbnet_skb_return" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8502868b, "netdev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xc863a612, "usbnet_suspend" },
	{ 0x2c1c3abd, "usbnet_update_max_qlen" },
	{ 0x9c93311c, "mii_ethtool_gset" },
	{ 0xe153e001, "mii_nway_restart" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xffc50605, "netif_carrier_on" },
	{ 0xdcb764ad, "memset" },
	{ 0x738c6d87, "eth_platform_get_mac_address" },
	{ 0x11ab0a22, "usbnet_resume" },
	{ 0x25d1b2d1, "usbnet_get_endpoints" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xaa88432a, "netif_set_tso_max_size" },
	{ 0xabdb2d55, "usbnet_open" },
	{ 0x96c6e0c9, "usbnet_stop" },
	{ 0x5363ec4, "usbnet_start_xmit" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0xb98eb27f, "usbnet_tx_timeout" },
	{ 0xa89a25ba, "dev_get_tstats64" },
	{ 0x4b94dcdc, "usbnet_get_msglevel" },
	{ 0xab02ae4f, "usbnet_set_msglevel" },
	{ 0x1fa87300, "usbnet_nway_reset" },
	{ 0x4295cec9, "ethtool_op_get_link" },
	{ 0xd14e8222, "ethtool_op_get_ts_info" },
	{ 0xc7d5ee41, "usbnet_probe" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v04B4p3610d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v050Dp0128d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v0930p0A13d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v0711p0179d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v07C9p000Ed*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v07C9p000Fd*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v07C9p0010d*dc*dsc*dp*icFFiscFFip00in*");

MODULE_INFO(srcversion, "E4BEF6D15D44F81FF22E01D");
