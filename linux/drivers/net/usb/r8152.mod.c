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

KSYMTAB_FUNC(rtl8152_get_version, "_gpl", "");

SYMBOL_CRC(rtl8152_get_version, 0x4696580b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x8ec529a0, "usb_register_device_driver" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x669c413b, "_dev_err" },
	{ 0x8af69228, "usb_queue_reset_device" },
	{ 0x87e7c8e4, "netdev_warn" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6dc88bac, "napi_disable" },
	{ 0x31bd7946, "napi_enable" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8502868b, "netdev_err" },
	{ 0x47fa5eea, "usb_autopm_get_interface" },
	{ 0x6a336a2e, "usb_autopm_put_interface" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0xd9aab56f, "__folio_put" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x22bc1b5c, "__kmalloc_cache_node_noprof" },
	{ 0xa26dbdbf, "alloc_pages_noprof" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x6c736d6, "__free_pages" },
	{ 0xe153e001, "mii_nway_restart" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xe7de0a80, "usb_deregister_device_driver" },
	{ 0x4829a47e, "memcpy" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x385fa099, "unregister_netdev" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0xf7bbf8be, "napi_schedule_prep" },
	{ 0x3adfad74, "__napi_schedule" },
	{ 0xbb8ce2ef, "netif_device_detach" },
	{ 0xdd5d727c, "napi_gro_receive" },
	{ 0x78073a9e, "napi_alloc_skb" },
	{ 0xc86c3f91, "skb_add_rx_frag_netmem" },
	{ 0x827d01a, "napi_gro_frags" },
	{ 0x4367c3a1, "skb_put" },
	{ 0xc4f8efb6, "eth_type_trans" },
	{ 0xfc43fbb5, "napi_get_frags" },
	{ 0x36184085, "napi_complete_done" },
	{ 0x15f01c27, "usb_autopm_put_interface_async" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x214a2a48, "netif_tx_lock" },
	{ 0x44e53d74, "netif_tx_unlock" },
	{ 0xf0f82afc, "usb_autopm_get_interface_async" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x46589386, "__skb_gso_segment" },
	{ 0x1301cc57, "skb_checksum_help" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x67bbcda, "netdev_info" },
	{ 0xabd0dc8b, "skb_clone_tx_timestamp" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x73507016, "skb_tstamp_tx" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xdcb764ad, "memset" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xd3468e06, "netdev_notice" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeca957d1, "__bitmap_and" },
	{ 0xf44f852a, "phy_check_valid" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xf39a6dab, "crypto_alloc_shash" },
	{ 0x6c311a85, "crypto_shash_digest" },
	{ 0xc35aaa13, "crypto_destroy_tfm" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xc2c5802, "work_busy" },
	{ 0x828a01bc, "netif_carrier_off" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xffc50605, "netif_carrier_on" },
	{ 0xce4f4863, "mii_ethtool_get_link_ksettings" },
	{ 0xa5cb12e1, "usb_enable_lpm" },
	{ 0x64707a9c, "netif_device_attach" },
	{ 0x7fcac341, "usb_reset_device" },
	{ 0x738c6d87, "eth_platform_get_mac_address" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x9e0d80d8, "dev_set_mac_address" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x204346f0, "alloc_etherdev_mqs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xaa88432a, "netif_set_tso_max_size" },
	{ 0xe2835923, "netif_napi_add_weight" },
	{ 0x219f96ce, "register_netdev" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0x4295cec9, "ethtool_op_get_link" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8155d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8156d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep0927d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep0C5Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp3054d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp3082d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp3098d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp721Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFpA359d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001pB301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413CpB097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1976d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BE02414A01D63A2E672C22F");
