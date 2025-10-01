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
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x7c830159, "usbnet_skb_return" },
	{ 0xc1df7b2e, "usbnet_get_drvinfo" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x16120267, "usbnet_defer_kevent" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x87e7c8e4, "netdev_warn" },
	{ 0x545517e4, "usbnet_write_cmd_async" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x33b58322, "skb_push" },
	{ 0xbd395e28, "skb_copy_expand" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0xd4f784c4, "eth_mac_addr" },
	{ 0x47fa5eea, "usb_autopm_get_interface" },
	{ 0x6a336a2e, "usb_autopm_put_interface" },
	{ 0xb51db013, "usbnet_read_cmd" },
	{ 0x828a01bc, "netif_carrier_off" },
	{ 0x70d51acf, "usbnet_read_cmd_nopm" },
	{ 0x11ab0a22, "usbnet_resume" },
	{ 0x6595b544, "usb_reset_configuration" },
	{ 0x25d1b2d1, "usbnet_get_endpoints" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xaa88432a, "netif_set_tso_max_size" },
	{ 0xf3e8e5c9, "usb_driver_set_configuration" },
	{ 0xc863a612, "usbnet_suspend" },
	{ 0x67bbcda, "netdev_info" },
	{ 0xffc50605, "netif_carrier_on" },
	{ 0xabdb2d55, "usbnet_open" },
	{ 0x96c6e0c9, "usbnet_stop" },
	{ 0x5363ec4, "usbnet_start_xmit" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0xb98eb27f, "usbnet_tx_timeout" },
	{ 0xa89a25ba, "dev_get_tstats64" },
	{ 0x4b94dcdc, "usbnet_get_msglevel" },
	{ 0xab02ae4f, "usbnet_set_msglevel" },
	{ 0x4295cec9, "ethtool_op_get_link" },
	{ 0xc7d5ee41, "usbnet_probe" },
	{ 0x40e8651c, "usbnet_disconnect" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v2ECApC101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2ECApC101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2790d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0B95p2790d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2791d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0B95p2791d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v20F4pE05Ad*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v20F4pE05Ad*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1C04p0015d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v1C04p0015d*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "C92A349038139900FEB79FB");
