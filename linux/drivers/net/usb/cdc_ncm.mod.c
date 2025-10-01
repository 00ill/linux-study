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

KSYMTAB_FUNC(cdc_ncm_change_mtu, "_gpl", "");
KSYMTAB_FUNC(cdc_ncm_bind_common, "_gpl", "");
KSYMTAB_FUNC(cdc_ncm_unbind, "_gpl", "");
KSYMTAB_FUNC(cdc_ncm_select_altsetting, "_gpl", "");
KSYMTAB_FUNC(cdc_ncm_fill_tx_frame, "_gpl", "");
KSYMTAB_FUNC(cdc_ncm_tx_fixup, "_gpl", "");
KSYMTAB_FUNC(cdc_ncm_rx_verify_nth16, "_gpl", "");
KSYMTAB_FUNC(cdc_ncm_rx_verify_nth32, "_gpl", "");
KSYMTAB_FUNC(cdc_ncm_rx_verify_ndp16, "_gpl", "");
KSYMTAB_FUNC(cdc_ncm_rx_verify_ndp32, "_gpl", "");
KSYMTAB_FUNC(cdc_ncm_rx_fixup, "_gpl", "");

SYMBOL_CRC(cdc_ncm_change_mtu, 0xb98dcb34, "_gpl");
SYMBOL_CRC(cdc_ncm_bind_common, 0xdd501652, "_gpl");
SYMBOL_CRC(cdc_ncm_unbind, 0x8a3a377b, "_gpl");
SYMBOL_CRC(cdc_ncm_select_altsetting, 0x8f603486, "_gpl");
SYMBOL_CRC(cdc_ncm_fill_tx_frame, 0x63feae1b, "_gpl");
SYMBOL_CRC(cdc_ncm_tx_fixup, 0x4e1cf371, "_gpl");
SYMBOL_CRC(cdc_ncm_rx_verify_nth16, 0x404ada1c, "_gpl");
SYMBOL_CRC(cdc_ncm_rx_verify_nth32, 0x8d8a0289, "_gpl");
SYMBOL_CRC(cdc_ncm_rx_verify_ndp16, 0x77975c84, "_gpl");
SYMBOL_CRC(cdc_ncm_rx_verify_ndp32, 0xa1ff7c35, "_gpl");
SYMBOL_CRC(cdc_ncm_rx_fixup, 0xb3a9f887, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x37a0cba, "kfree" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x72b34551, "usb_driver_release_interface" },
	{ 0xc485eb96, "usb_altnum_to_altsetting" },
	{ 0xf6e8684d, "usbnet_cdc_update_filter" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x449726c2, "usbnet_link_change" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x2c1c3abd, "usbnet_update_max_qlen" },
	{ 0xd1669bc8, "usbnet_unlink_rx_urbs" },
	{ 0x49319e76, "usbnet_write_cmd" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x214a2a48, "netif_tx_lock" },
	{ 0x5363ec4, "usbnet_start_xmit" },
	{ 0x44e53d74, "netif_tx_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb51db013, "usbnet_read_cmd" },
	{ 0x4367c3a1, "skb_put" },
	{ 0xdcb764ad, "memset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xcb2e80c6, "hrtimer_active" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7c830159, "usbnet_skb_return" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x8d71d89, "cdc_parse_cdc_header" },
	{ 0xe228da49, "usb_ifnum_to_if" },
	{ 0xf6491f8c, "usb_driver_claim_interface" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe045141e, "usbnet_get_ethernet_addr" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x669c413b, "_dev_err" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xc1df7b2e, "usbnet_get_drvinfo" },
	{ 0x4b94dcdc, "usbnet_get_msglevel" },
	{ 0xab02ae4f, "usbnet_set_msglevel" },
	{ 0x1fa87300, "usbnet_nway_reset" },
	{ 0xa83d1f5d, "usbnet_get_link" },
	{ 0xd14e8222, "ethtool_op_get_ts_info" },
	{ 0xe4697ed0, "usbnet_get_link_ksettings_internal" },
	{ 0xabdb2d55, "usbnet_open" },
	{ 0x96c6e0c9, "usbnet_stop" },
	{ 0xa9ca51f2, "usbnet_set_rx_mode" },
	{ 0xd4f784c4, "eth_mac_addr" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0xb98eb27f, "usbnet_tx_timeout" },
	{ 0xa89a25ba, "dev_get_tstats64" },
	{ 0x8a5c28d9, "usbnet_manage_power" },
	{ 0xc7d5ee41, "usbnet_probe" },
	{ 0x40e8651c, "usbnet_disconnect" },
	{ 0xc863a612, "usbnet_suspend" },
	{ 0x11ab0a22, "usbnet_resume" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "cdc_ether");

MODULE_ALIAS("usb:v05ACp12A8d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05ACp12A8d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05ACp12ABd*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05ACp12ABd*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1BC7p0036d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1546p1010d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v8087p095Ad*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v17E9p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");

MODULE_INFO(srcversion, "09170F24048EE1E0FBAC973");
