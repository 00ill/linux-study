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

KSYMTAB_FUNC(usbnet_cdc_update_filter, "_gpl", "");
KSYMTAB_FUNC(usbnet_generic_cdc_bind, "_gpl", "");
KSYMTAB_FUNC(usbnet_ether_cdc_bind, "_gpl", "");
KSYMTAB_FUNC(usbnet_cdc_unbind, "_gpl", "");
KSYMTAB_FUNC(usbnet_cdc_status, "_gpl", "");
KSYMTAB_FUNC(usbnet_cdc_bind, "_gpl", "");
KSYMTAB_FUNC(usbnet_cdc_zte_rx_fixup, "_gpl", "");

SYMBOL_CRC(usbnet_cdc_update_filter, 0xf6e8684d, "_gpl");
SYMBOL_CRC(usbnet_generic_cdc_bind, 0xb96d82c6, "_gpl");
SYMBOL_CRC(usbnet_ether_cdc_bind, 0xc54fc467, "_gpl");
SYMBOL_CRC(usbnet_cdc_unbind, 0x9de91704, "_gpl");
SYMBOL_CRC(usbnet_cdc_status, 0x8f6de776, "_gpl");
SYMBOL_CRC(usbnet_cdc_bind, 0x3f1aaaf9, "_gpl");
SYMBOL_CRC(usbnet_cdc_zte_rx_fixup, 0x25fb21b9, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x414ea878, "usb_control_msg" },
	{ 0x72b34551, "usb_driver_release_interface" },
	{ 0xdcb764ad, "memset" },
	{ 0x8d71d89, "cdc_parse_cdc_header" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xe228da49, "usb_ifnum_to_if" },
	{ 0xf6491f8c, "usb_driver_claim_interface" },
	{ 0x25d1b2d1, "usbnet_get_endpoints" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x8502868b, "netdev_err" },
	{ 0x449726c2, "usbnet_link_change" },
	{ 0x828a01bc, "netif_carrier_off" },
	{ 0xe045141e, "usbnet_get_ethernet_addr" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xc1df7b2e, "usbnet_get_drvinfo" },
	{ 0x4b94dcdc, "usbnet_get_msglevel" },
	{ 0xab02ae4f, "usbnet_set_msglevel" },
	{ 0x1fa87300, "usbnet_nway_reset" },
	{ 0xa83d1f5d, "usbnet_get_link" },
	{ 0xd14e8222, "ethtool_op_get_ts_info" },
	{ 0xe4697ed0, "usbnet_get_link_ksettings_internal" },
	{ 0x8a5c28d9, "usbnet_manage_power" },
	{ 0xc7d5ee41, "usbnet_probe" },
	{ 0x40e8651c, "usbnet_disconnect" },
	{ 0xc863a612, "usbnet_suspend" },
	{ 0x11ab0a22, "usbnet_resume" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v04DDp8004d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp8005d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp8005d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v04DDp8006d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp8006d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v04DDp8007d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp8007d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v04DDp9031d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp9032d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp9032d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v04DDp9050d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v07B4p0F02d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1004p61AAd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v046DpC11Fd*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v1410pB001d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1410p9010d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v413Cp8195d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v413Cp8196d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v413Cp819Bd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1410p9011d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v03F0p421Dd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v16D5p650Ad*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v12D1p14ACd*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp721Ed*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFpA359d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v2ECApC101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2790d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2791d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v20F4pE05Ad*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1C04p0015d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v19D2p1003d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v19D2p1015d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v19D2p1173d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v19D2p1177d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v19D2p1181d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1BC7p*d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v413Cp81BAd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v12D1p15C1d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v19D2p*d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1546p1143d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1546p1104d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1546p1313d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1546p1343d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1E2Dp0061d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1E2Dp0055d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1E2Dp005Bd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1E2Dp0069d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc06ipFFin*");

MODULE_INFO(srcversion, "22D0D7480E4D8DAB6846E55");
