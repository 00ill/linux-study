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
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x47fa5eea, "usb_autopm_get_interface" },
	{ 0x6a336a2e, "usb_autopm_put_interface" },
	{ 0x8a3a377b, "cdc_ncm_unbind" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x11ab0a22, "usbnet_resume" },
	{ 0xc863a612, "usbnet_suspend" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x8f603486, "cdc_ncm_select_altsetting" },
	{ 0xdd501652, "cdc_ncm_bind_common" },
	{ 0xb1246140, "usb_cdc_wdm_register" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0xd762357, "usb_match_id" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x63feae1b, "cdc_ncm_fill_tx_frame" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8502868b, "netdev_err" },
	{ 0x404ada1c, "cdc_ncm_rx_verify_nth16" },
	{ 0x77975c84, "cdc_ncm_rx_verify_ndp16" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7c830159, "usbnet_skb_return" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2ce72391, "ipv6_stub" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xa1952ab0, "__vlan_find_dev_deep_rcu" },
	{ 0x2a98a910, "in6_dev_finish_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xabdb2d55, "usbnet_open" },
	{ 0x96c6e0c9, "usbnet_stop" },
	{ 0x5363ec4, "usbnet_start_xmit" },
	{ 0xd4f784c4, "eth_mac_addr" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0xb98dcb34, "cdc_ncm_change_mtu" },
	{ 0xb98eb27f, "usbnet_tx_timeout" },
	{ 0xa89a25ba, "dev_get_tstats64" },
	{ 0xc7d5ee41, "usbnet_probe" },
	{ 0x40e8651c, "usbnet_disconnect" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "cdc_ncm,cdc-wdm");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v03F0pA31Dd*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1041d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1061d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1071d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1081d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");

MODULE_INFO(srcversion, "D8D15E5373E73E02B6078F3");
