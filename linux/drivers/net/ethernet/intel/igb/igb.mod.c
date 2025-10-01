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
	{ 0x92cb609e, "__tracepoint_xdp_exception" },
	{ 0x78073a9e, "napi_alloc_skb" },
	{ 0x204346f0, "alloc_etherdev_mqs" },
	{ 0x93f27255, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x4897a742, "pcie_capability_read_word" },
	{ 0x42e2b350, "__skb_pad" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd90c8988, "pcie_capability_write_word" },
	{ 0x291f878c, "bpf_prog_put" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0x495231ea, "mul_u64_u64_div_u64" },
	{ 0x714a9098, "pci_request_selected_regions" },
	{ 0xc9ed7963, "pci_release_selected_regions" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xf9b1f79b, "pci_wake_from_d3" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x73507016, "skb_tstamp_tx" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xfa23148e, "pci_enable_device_mem" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x3fd7c8cf, "pci_iomap" },
	{ 0xbb7195a5, "xdp_warn" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xe2835923, "netif_napi_add_weight" },
	{ 0x31435ec4, "ethtool_puts" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd728697c, "i2c_bit_add_bus" },
	{ 0x2345b7bb, "bpf_warn_invalid_xdp_action" },
	{ 0x385fa099, "unregister_netdev" },
	{ 0x832960f, "xdp_convert_zc_to_xdp_frame" },
	{ 0xd5308133, "xdp_features_set_redirect_target" },
	{ 0xbd232569, "dma_unmap_page_attrs" },
	{ 0xf7370f56, "system_state" },
	{ 0xb0acfe7a, "__pci_register_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0x3326404a, "flow_rule_match_eth_addrs" },
	{ 0x9bf8881e, "dev_trans_start" },
	{ 0x33ab0021, "pci_disable_msi" },
	{ 0xd355e36, "ptp_clock_index" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x94ccb41c, "xdp_do_redirect" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x87e7c8e4, "netdev_warn" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xd955aac9, "pci_set_power_state" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xf6f4fc1f, "xdp_rxq_info_unreg_mem_model" },
	{ 0x4c88a838, "__netif_napi_del" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x56a6b0c7, "pci_unregister_driver" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x8502868b, "netdev_err" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xcce93fc1, "xdp_rxq_info_reg_mem_model" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xda732dcf, "ptp_find_pin" },
	{ 0xc4f8efb6, "eth_type_trans" },
	{ 0x9df57208, "dma_map_page_attrs" },
	{ 0x36184085, "napi_complete_done" },
	{ 0x352833ed, "__alloc_pages_noprof" },
	{ 0x122c3a7e, "_printk" },
	{ 0x7348f9e9, "pm_schedule_suspend" },
	{ 0x771dfef6, "ndo_dflt_fdb_add" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xf390f6f1, "__bitmap_andnot" },
	{ 0x1301cc57, "skb_checksum_help" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x3adfad74, "__napi_schedule" },
	{ 0x3d7a0cc8, "pci_enable_msix_range" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xbb8ce2ef, "netif_device_detach" },
	{ 0x618911fc, "numa_node" },
	{ 0x6c736d6, "__free_pages" },
	{ 0x1df3087c, "__hw_addr_unsync_dev" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xdd5d727c, "napi_gro_receive" },
	{ 0x64707a9c, "netif_device_attach" },
	{ 0x199a1120, "xdp_features_clear_redirect_target" },
	{ 0xbc3f2cb0, "timecounter_cyc2time" },
	{ 0xaded60ca, "i2c_del_adapter" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x13beef9f, "pci_select_bars" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x91415af3, "eth_get_headlen" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xf7200217, "xdp_rxq_info_is_reg" },
	{ 0xf0db1ad3, "flow_block_cb_setup_simple" },
	{ 0x47f61f94, "flow_rule_match_basic" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x4ea5d10, "ksize" },
	{ 0xd99c6ae, "__dma_sync_single_for_cpu" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0xd0bf3c29, "pci_enable_msi" },
	{ 0x669c413b, "_dev_err" },
	{ 0x85f3ffea, "softnet_data" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x43569555, "xdp_return_frame" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe55d0ed0, "ptp_clock_register" },
	{ 0x520d3a81, "__traceiter_xdp_exception" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb8651960, "netif_set_real_num_tx_queues" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xffecfcd6, "netif_set_real_num_rx_queues" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x32b5003a, "pci_device_is_present" },
	{ 0x576d600d, "dma_alloc_attrs" },
	{ 0x2e4ddee0, "pci_read_config_word" },
	{ 0x31bd7946, "napi_enable" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x219f96ce, "register_netdev" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x1f7155cb, "dql_completed" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x738c6d87, "eth_platform_get_mac_address" },
	{ 0x5390eff6, "i2c_new_client_device" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x70796a17, "pci_iounmap" },
	{ 0x649550d5, "netif_tx_stop_all_queues" },
	{ 0xf5cd854d, "pci_restore_state" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xef160adf, "devm_hwmon_device_register_with_groups" },
	{ 0x5338184f, "ethtool_sprintf" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xd4044605, "ptp_clock_event" },
	{ 0xc1037af4, "netif_schedule_queue" },
	{ 0x7cf55e07, "pci_set_master" },
	{ 0x8402e7c6, "ptp_clock_unregister" },
	{ 0x50d00458, "netif_rx" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x76e09157, "dma_set_coherent_mask" },
	{ 0x6f677b05, "__page_frag_cache_drain" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x146cc88f, "bpf_master_redirect_enabled_key" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x681fdc29, "dma_free_attrs" },
	{ 0x999e8297, "vfree" },
	{ 0x2a838177, "pci_enable_wake" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe792d1b4, "__dma_sync_single_for_device" },
	{ 0xb453071c, "flow_rule_match_vlan" },
	{ 0x16529856, "xdp_rxq_info_unreg" },
	{ 0x60c15559, "napi_build_skb" },
	{ 0xc1a07f40, "__xdp_rxq_info_reg" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x828a01bc, "netif_carrier_off" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x54c75e4, "__hw_addr_sync_dev" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xffc50605, "netif_carrier_on" },
	{ 0x373b0d5, "dql_reset" },
	{ 0x3b814ca, "bpf_dispatcher_xdp_func" },
	{ 0xc1529e3a, "pci_disable_msix" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x555dcc70, "i2c_smbus_write_byte_data" },
	{ 0xc43d6f7b, "pci_disable_device" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x7cb3eec3, "dma_set_mask" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xc86c3f91, "skb_add_rx_frag_netmem" },
	{ 0x15adbbf8, "xdp_master_redirect" },
	{ 0xf7bbf8be, "napi_schedule_prep" },
	{ 0x90807f59, "napi_consume_skb" },
	{ 0x6dc88bac, "napi_disable" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xefa7f375, "i2c_smbus_read_byte_data" },
	{ 0xb71a512f, "pci_write_config_word" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xcc392eea, "kmalloc_size_roundup" },
	{ 0x95781ed2, "flow_rule_match_control" },
	{ 0xabd0dc8b, "skb_clone_tx_timestamp" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0x862258db, "timecounter_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x67bbcda, "netdev_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb9681621, "xdp_do_flush" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "i2c-algo-bit");

MODULE_ALIAS("pci:v00008086d00001F40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001539sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001533sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001536sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001537sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001538sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000157Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000157Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001521sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001522sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001523sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001524sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001527sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001510sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001511sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001516sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000438sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000043Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000043Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000440sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001518sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001526sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F724E2219CC01DA249E831C");
