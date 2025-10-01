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
	{ 0xdcb764ad, "memset" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x7c830159, "usbnet_skb_return" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0x8502868b, "netdev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc1df7b2e, "usbnet_get_drvinfo" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x49319e76, "usbnet_write_cmd" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x476e9016, "usbnet_status_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x33b58322, "skb_push" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x25d1b2d1, "usbnet_get_endpoints" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0x828a01bc, "netif_carrier_off" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb51db013, "usbnet_read_cmd" },
	{ 0x669c413b, "_dev_err" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc7d5ee41, "usbnet_probe" },
	{ 0xf2b25fa4, "usbnet_status_start" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x449726c2, "usbnet_link_change" },
	{ 0xabdb2d55, "usbnet_open" },
	{ 0x96c6e0c9, "usbnet_stop" },
	{ 0x5363ec4, "usbnet_start_xmit" },
	{ 0xd4f784c4, "eth_mac_addr" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0xa465644c, "usbnet_change_mtu" },
	{ 0xb98eb27f, "usbnet_tx_timeout" },
	{ 0xa89a25ba, "dev_get_tstats64" },
	{ 0x4b94dcdc, "usbnet_get_msglevel" },
	{ 0xab02ae4f, "usbnet_set_msglevel" },
	{ 0x1fa87300, "usbnet_nway_reset" },
	{ 0x2a22e13a, "usbnet_get_link_ksettings_mii" },
	{ 0x92fba40a, "usbnet_set_link_ksettings_mii" },
	{ 0x40e8651c, "usbnet_disconnect" },
	{ 0xc863a612, "usbnet_suspend" },
	{ 0x11ab0a22, "usbnet_resume" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0B*");

MODULE_INFO(srcversion, "C850F8E83935E7F44A5737D");
