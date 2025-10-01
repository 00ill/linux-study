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

KSYMTAB_FUNC(brcmf_set_wsec, "_gpl", "BRCMFMAC");
KSYMTAB_FUNC(brcmf_fil_cmd_data_set, "_gpl", "BRCMFMAC");
KSYMTAB_FUNC(brcmf_fil_cmd_data_get, "_gpl", "BRCMFMAC");
KSYMTAB_FUNC(brcmf_fil_iovar_data_set, "_gpl", "BRCMFMAC");
KSYMTAB_FUNC(brcmf_fil_iovar_data_get, "_gpl", "BRCMFMAC");
KSYMTAB_FUNC(brcmf_fil_bsscfg_data_set, "_gpl", "BRCMFMAC");
KSYMTAB_FUNC(brcmf_fil_bsscfg_data_get, "_gpl", "BRCMFMAC");
KSYMTAB_FUNC(brcmf_fil_xtlv_data_set, "_gpl", "BRCMFMAC");
KSYMTAB_FUNC(brcmf_fil_xtlv_data_get, "_gpl", "BRCMFMAC");
KSYMTAB_FUNC(brcmf_fwvid_register_vendor, "_gpl", "BRCMFMAC");
KSYMTAB_FUNC(brcmf_fwvid_unregister_vendor, "_gpl", "BRCMFMAC");

SYMBOL_CRC(brcmf_set_wsec, 0x038cc15d, "_gpl");
SYMBOL_CRC(brcmf_fil_cmd_data_set, 0x5b9079d9, "_gpl");
SYMBOL_CRC(brcmf_fil_cmd_data_get, 0x8d3464af, "_gpl");
SYMBOL_CRC(brcmf_fil_iovar_data_set, 0x5b73a3dc, "_gpl");
SYMBOL_CRC(brcmf_fil_iovar_data_get, 0xc09c6ecc, "_gpl");
SYMBOL_CRC(brcmf_fil_bsscfg_data_set, 0x8e00cfc3, "_gpl");
SYMBOL_CRC(brcmf_fil_bsscfg_data_get, 0x9d845929, "_gpl");
SYMBOL_CRC(brcmf_fil_xtlv_data_set, 0x59c4bf68, "_gpl");
SYMBOL_CRC(brcmf_fil_xtlv_data_get, 0xcc066979, "_gpl");
SYMBOL_CRC(brcmf_fwvid_register_vendor, 0x86d4e4b2, "_gpl");
SYMBOL_CRC(brcmf_fwvid_unregister_vendor, 0x2d384527, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0xe7238d3a, "brcmu_pktq_mlen" },
	{ 0x13d6c7f, "cfg80211_sched_scan_results" },
	{ 0x23cd8daa, "sdio_retune_hold_now" },
	{ 0x7aab30c1, "sdio_release_host" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0xc3f157e1, "sdio_disable_func" },
	{ 0xae954c28, "cfg80211_mgmt_tx_status_ext" },
	{ 0x6a336a2e, "usb_autopm_put_interface" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xce7afeb6, "sdio_set_block_size" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x469438cc, "of_node_put" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x916553ba, "brcmu_pkt_buf_free_skb" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x7397f3a4, "sdio_retune_crc_disable" },
	{ 0x3700ec41, "cfg80211_scan_done" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x6c37e5, "firmware_request_nowarn" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xf13cccf8, "sdio_claim_host" },
	{ 0x2ff86150, "cfg80211_sched_scan_stopped" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x1ffcab17, "sdio_memcpy_fromio" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc8c85086, "sg_free_table" },
	{ 0x385fa099, "unregister_netdev" },
	{ 0xab09b090, "cfg80211_remain_on_channel_expired" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x20482e2d, "cfg80211_register_netdevice" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x2d6a4ccb, "cfg80211_port_authorized" },
	{ 0xa7aab0fc, "brcmu_pktq_init" },
	{ 0x298ab2a6, "brcmu_pktq_penq_head" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2252dae3, "cfg80211_external_auth_request" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xaad437ca, "sdio_memcpy_toio" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x5cfe3a6a, "cfg80211_new_sta" },
	{ 0x58679f9d, "of_irq_parse_one" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa17c0ccf, "brcmu_dotrev_str" },
	{ 0x749cc8b8, "cfg80211_disconnected" },
	{ 0xdd3b7072, "ether_setup" },
	{ 0x7a1c2aba, "of_get_property" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0x17018f5e, "sdio_f0_readb" },
	{ 0xdf256037, "kstrtou8_from_user" },
	{ 0xc4f8efb6, "eth_type_trans" },
	{ 0xb67fb8b4, "alloc_netdev_mqs" },
	{ 0xb5c8842d, "wiphy_new_nm" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8aae78a0, "cfg80211_ready_on_channel" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x84c818c7, "devm_kstrdup" },
	{ 0x1c9b39cc, "cfg80211_classify8021d" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd0074bcb, "sdio_release_irq" },
	{ 0xfc28cd6b, "debugfs_create_devm_seqfile" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xce8a1918, "cfg80211_crit_proto_stopped" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x4c4130b, "wiphy_register" },
	{ 0xe2d68ff4, "__cfg80211_alloc_reply_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xfeed4c75, "cfg80211_put_bss" },
	{ 0x9fb81438, "cfg80211_roamed" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x9f984513, "strrchr" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x87ed7397, "of_get_mac_address" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x5ed3bbcd, "ieee80211_get_channel_khz" },
	{ 0xbe68609c, "cfg80211_check_combinations" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x2b81ec31, "sdio_f0_writeb" },
	{ 0xb3f985a8, "sg_alloc_table" },
	{ 0xf80034f8, "sdio_unregister_driver" },
	{ 0x76f08028, "sdio_readsb" },
	{ 0x9dbcd801, "brcmu_dbg_hex_dump" },
	{ 0xd762357, "usb_match_id" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7e4c3df5, "efi" },
	{ 0x669c413b, "_dev_err" },
	{ 0xe92d9e17, "cfg80211_ibss_joined" },
	{ 0x8bbcc68f, "request_firmware_nowait" },
	{ 0x5d809a68, "simple_open" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x24d273d1, "add_timer" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5256f7f0, "irq_get_irq_data" },
	{ 0x96bd2420, "wiphy_apply_custom_regulatory" },
	{ 0x62345ccc, "cfg80211_michael_mic_failure" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x164b428b, "sdio_retune_crc_enable" },
	{ 0xf54dcfde, "brcmu_pktq_flush" },
	{ 0x43cf485d, "brcmu_pktq_peek_tail" },
	{ 0x5a921311, "strncmp" },
	{ 0xa9b2a19a, "cfg80211_del_sta_sinfo" },
	{ 0x2e1fabf4, "sdio_readl" },
	{ 0x67594672, "mmc_set_data_timeout" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x219f96ce, "register_netdev" },
	{ 0x2ce1c952, "wiphy_unregister" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x3a1aed17, "of_property_read_string" },
	{ 0x6172aff7, "wiphy_read_of_freq_limits" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x738c6d87, "eth_platform_get_mac_address" },
	{ 0xf4da4505, "dev_coredumpv" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x11089ac7, "_ctype" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xb6c36b0a, "brcmu_pktq_pdeq_match" },
	{ 0x3a027638, "cfg80211_vendor_cmd_reply" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x17965ef5, "__sdio_register_driver" },
	{ 0xa2e9f843, "sdio_writel" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x3f302749, "debugfs_create_u32" },
	{ 0x143ccea8, "mmc_wait_for_req" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x50d00458, "netif_rx" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x10843d0a, "param_ops_string" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x43f25734, "skb_unlink" },
	{ 0x27cb1bec, "sdio_get_host_pm_caps" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x47ab63cc, "pm_runtime_forbid" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0xac9e01fa, "brcmu_pktq_mdeq" },
	{ 0xad539dc, "cfg80211_unregister_wdev" },
	{ 0x5d170613, "brcmu_pktq_penq" },
	{ 0x66576651, "pm_runtime_allow" },
	{ 0x999e8297, "vfree" },
	{ 0xb3932093, "__platform_driver_probe" },
	{ 0x8f09f576, "of_device_is_compatible" },
	{ 0xc5b357a6, "cfg80211_rx_mgmt_ext" },
	{ 0x85df9b6c, "strsep" },
	{ 0x47fa5eea, "usb_autopm_get_interface" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x659f6a62, "brcmu_pktq_pdeq_tail" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5fd2cd02, "driver_for_each_device" },
	{ 0xc310b981, "strnstr" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xb53675e6, "seq_write" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x828a01bc, "netif_carrier_off" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xffc50605, "netif_carrier_on" },
	{ 0x695c5d9, "brcmu_pkt_buf_get_skb" },
	{ 0x49be81a9, "mmc_hw_reset" },
	{ 0x6b23d1ba, "sdio_retune_release" },
	{ 0x730682a9, "sdio_claim_irq" },
	{ 0xe0e3dcf5, "cfg80211_report_wowlan_wakeup" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8c732084, "sdio_enable_func" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf5596d89, "cfg80211_get_p2p_attr" },
	{ 0x1bd3a117, "send_sig" },
	{ 0x1906648e, "brcmu_boardrev_str" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x357d9e3, "cfg80211_inform_bss_data" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xea124bd1, "gcd" },
	{ 0x4324a0b2, "irq_create_of_mapping" },
	{ 0x4074d816, "device_release_driver" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x739fd4e2, "of_find_node_opts_by_path" },
	{ 0x349cba85, "strchr" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd3922678, "cfg80211_connect_done" },
	{ 0x7410aba2, "strreplace" },
	{ 0x3b842f0a, "wiphy_free" },
	{ 0xebe20c1, "of_property_read_string_helper" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xd1e7f416, "cfg80211_cqm_rssi_notify" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xd6217d91, "brcmu_d11_attach" },
	{ 0x9858f364, "get_random_u8" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe34ae40a, "sdio_readb" },
	{ 0xb480aac2, "sdio_writeb" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "brcmutil,cfg80211");

MODULE_ALIAS("sdio:c*v02D0dA887*");
MODULE_ALIAS("sdio:c*v02D0d4324*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4330*");
MODULE_ALIAS("sdio:c*v02D0d4334*");
MODULE_ALIAS("sdio:c*v02D0dA94C*");
MODULE_ALIAS("sdio:c*v02D0dA94D*");
MODULE_ALIAS("sdio:c*v02D0dA962*");
MODULE_ALIAS("sdio:c*v02D0dA9A4*");
MODULE_ALIAS("sdio:c*v02D0d4335*");
MODULE_ALIAS("sdio:c*v02D0d4339*");
MODULE_ALIAS("sdio:c*v02D0dA9A6*");
MODULE_ALIAS("sdio:c*v02D0dA9AF*");
MODULE_ALIAS("sdio:c*v02D0d4345*");
MODULE_ALIAS("sdio:c*v02D0dA9BF*");
MODULE_ALIAS("sdio:c*v02D0d4354*");
MODULE_ALIAS("sdio:c*v02D0d4356*");
MODULE_ALIAS("sdio:c*v02D0d4359*");
MODULE_ALIAS("sdio:c*v02D0d4373*");
MODULE_ALIAS("sdio:c*v02D0dA804*");
MODULE_ALIAS("sdio:c*v02D0dAAE8*");
MODULE_ALIAS("sdio:c*v02D0d4355*");
MODULE_ALIAS("sdio:c*v04B4dBD3D*");
MODULE_ALIAS("usb:v0A5CpBD1Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD1Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD27d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4pBD29d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep3101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp0BDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p0BDCd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FBBF7D1EF3ACBA683834518");
