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
	{ 0x2caa7639, "usbnet_write_cmd_nopm" },
	{ 0x49319e76, "usbnet_write_cmd" },
	{ 0x87e7c8e4, "netdev_warn" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x70d51acf, "usbnet_read_cmd_nopm" },
	{ 0xb51db013, "usbnet_read_cmd" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf6b94616, "mii_check_media" },
	{ 0x9c93311c, "mii_ethtool_gset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa465644c, "usbnet_change_mtu" },
	{ 0x481e140a, "generic_mii_ioctl" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x67bbcda, "netdev_info" },
	{ 0x11ab0a22, "usbnet_resume" },
	{ 0xbd6841d4, "crc16" },
	{ 0xc863a612, "usbnet_suspend" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x16120267, "usbnet_defer_kevent" },
	{ 0x33b58322, "skb_push" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0xdcb764ad, "memset" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe153e001, "mii_nway_restart" },
	{ 0x122c3a7e, "_printk" },
	{ 0x25d1b2d1, "usbnet_get_endpoints" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe0afbc0c, "platform_get_ethdev_address" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7c830159, "usbnet_skb_return" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xabdb2d55, "usbnet_open" },
	{ 0x96c6e0c9, "usbnet_stop" },
	{ 0x5363ec4, "usbnet_start_xmit" },
	{ 0xd4f784c4, "eth_mac_addr" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0xb98eb27f, "usbnet_tx_timeout" },
	{ 0xa89a25ba, "dev_get_tstats64" },
	{ 0xc1df7b2e, "usbnet_get_drvinfo" },
	{ 0x4b94dcdc, "usbnet_get_msglevel" },
	{ 0xab02ae4f, "usbnet_set_msglevel" },
	{ 0x1fa87300, "usbnet_nway_reset" },
	{ 0xa83d1f5d, "usbnet_get_link" },
	{ 0x2a22e13a, "usbnet_get_link_ksettings_mii" },
	{ 0x92fba40a, "usbnet_set_link_ksettings_mii" },
	{ 0xc7d5ee41, "usbnet_probe" },
	{ 0x40e8651c, "usbnet_disconnect" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0424p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p7505d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "68C8C6BEE099BCF8629E751");
