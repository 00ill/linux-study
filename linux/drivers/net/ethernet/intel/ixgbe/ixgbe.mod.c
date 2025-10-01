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

KSYMTAB_DATA(ixgbe_xdp_locking_key, "", "");

SYMBOL_CRC(ixgbe_xdp_locking_key, 0xbaa35511, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd591e6f1, "netdev_crit" },
	{ 0x92cb609e, "__tracepoint_xdp_exception" },
	{ 0x78073a9e, "napi_alloc_skb" },
	{ 0x204346f0, "alloc_etherdev_mqs" },
	{ 0x38791313, "secpath_set" },
	{ 0xe8000928, "mdiobus_c45_read" },
	{ 0x93f27255, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xb98d1737, "dev_get_stats" },
	{ 0x4897a742, "pcie_capability_read_word" },
	{ 0x42e2b350, "__skb_pad" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x291f878c, "bpf_prog_put" },
	{ 0x49cd25ed, "alloc_workqueue" },
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
	{ 0xbb7195a5, "xdp_warn" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xe2835923, "netif_napi_add_weight" },
	{ 0x31435ec4, "ethtool_puts" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x148b3a5a, "pci_dev_put" },
	{ 0x2345b7bb, "bpf_warn_invalid_xdp_action" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x8e82b78b, "ndo_dflt_bridge_getlink" },
	{ 0x385fa099, "unregister_netdev" },
	{ 0x832960f, "xdp_convert_zc_to_xdp_frame" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0xd5308133, "xdp_features_set_redirect_target" },
	{ 0x5779f3fd, "__kmalloc_node_noprof" },
	{ 0xbd232569, "dma_unmap_page_attrs" },
	{ 0x838eb641, "vmalloc_node_noprof" },
	{ 0xf7370f56, "system_state" },
	{ 0xb0acfe7a, "__pci_register_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x9bf8881e, "dev_trans_start" },
	{ 0x33ab0021, "pci_disable_msi" },
	{ 0xd355e36, "ptp_clock_index" },
	{ 0xe19fdf44, "___pskb_trim" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x94ccb41c, "xdp_do_redirect" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0xeca957d1, "__bitmap_and" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x87e7c8e4, "netdev_warn" },
	{ 0x88d34e43, "udp_tunnel_nic_ops" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xd955aac9, "pci_set_power_state" },
	{ 0xf6f4fc1f, "xdp_rxq_info_unreg_mem_model" },
	{ 0x4c88a838, "__netif_napi_del" },
	{ 0x49ca83, "xfrm_aead_get_byname" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x56a6b0c7, "pci_unregister_driver" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x8502868b, "netdev_err" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0xdb76a6c8, "mdiobus_c45_write" },
	{ 0x389b64a2, "static_key_count" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0x6d11488, "__bitmap_equal" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xcce93fc1, "xdp_rxq_info_reg_mem_model" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xc4f8efb6, "eth_type_trans" },
	{ 0x9df57208, "dma_map_page_attrs" },
	{ 0x36184085, "napi_complete_done" },
	{ 0x352833ed, "__alloc_pages_noprof" },
	{ 0x122c3a7e, "_printk" },
	{ 0x771dfef6, "ndo_dflt_fdb_add" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x1301cc57, "skb_checksum_help" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x3d7a0cc8, "pci_enable_msix_range" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xbb8ce2ef, "netif_device_detach" },
	{ 0x618911fc, "numa_node" },
	{ 0x6c736d6, "__free_pages" },
	{ 0x22546392, "dev_addr_add" },
	{ 0x1df3087c, "__hw_addr_unsync_dev" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xdd5d727c, "napi_gro_receive" },
	{ 0x64707a9c, "netif_device_attach" },
	{ 0xbc3f2cb0, "timecounter_cyc2time" },
	{ 0x199a1120, "xdp_features_clear_redirect_target" },
	{ 0x13beef9f, "pci_select_bars" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x91415af3, "eth_get_headlen" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xf0db1ad3, "flow_block_cb_setup_simple" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xd99c6ae, "__dma_sync_single_for_cpu" },
	{ 0xc8a91f5b, "cpumask_local_spread" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0xd0bf3c29, "pci_enable_msi" },
	{ 0xa5ad14d0, "__irq_apply_affinity_hint" },
	{ 0x669c413b, "_dev_err" },
	{ 0x85f3ffea, "softnet_data" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x5d809a68, "simple_open" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x6091797f, "synchronize_rcu" },
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
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x89aedba9, "pci_get_domain_bus_and_slot" },
	{ 0x576d600d, "dma_alloc_attrs" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x2e4ddee0, "pci_read_config_word" },
	{ 0x31bd7946, "napi_enable" },
	{ 0x219f96ce, "register_netdev" },
	{ 0xe47e4c8d, "mdiobus_read" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x3221df67, "__bitmap_subset" },
	{ 0xcd279169, "nla_find" },
	{ 0x1f7155cb, "dql_completed" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x4295cec9, "ethtool_op_get_link" },
	{ 0x738c6d87, "eth_platform_get_mac_address" },
	{ 0xb33a08d0, "netif_set_xps_queue" },
	{ 0xf0001462, "dev_addr_del" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x649550d5, "netif_tx_stop_all_queues" },
	{ 0xf5cd854d, "pci_restore_state" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0xf03977ed, "netdev_set_sb_channel" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xef160adf, "devm_hwmon_device_register_with_groups" },
	{ 0x5338184f, "ethtool_sprintf" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xd4044605, "ptp_clock_event" },
	{ 0xc1037af4, "netif_schedule_queue" },
	{ 0x7cf55e07, "pci_set_master" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x7cc6c399, "netdev_set_tc_queue" },
	{ 0x8402e7c6, "ptp_clock_unregister" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xf20181b4, "devm_mdiobus_alloc_size" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d13f2be, "netdev_unbind_sb_channel" },
	{ 0x76e09157, "dma_set_coherent_mask" },
	{ 0xd1fdefb2, "netdev_walk_all_upper_dev_rcu" },
	{ 0x6f677b05, "__page_frag_cache_drain" },
	{ 0xe1e82627, "mdiobus_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x146cc88f, "bpf_master_redirect_enabled_key" },
	{ 0xe2ece698, "ipv6_find_hdr" },
	{ 0xb27259ea, "netdev_bind_sb_channel_queue" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x52316c12, "netdev_reset_tc" },
	{ 0x681fdc29, "dma_free_attrs" },
	{ 0x999e8297, "vfree" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0xe792d1b4, "__dma_sync_single_for_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4be8e146, "pcie_print_link_status" },
	{ 0x16529856, "xdp_rxq_info_unreg" },
	{ 0xdaceb7a6, "mdio_mii_ioctl" },
	{ 0x9e255c51, "mdiobus_write" },
	{ 0x60c15559, "napi_build_skb" },
	{ 0xc1a07f40, "__xdp_rxq_info_reg" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x828a01bc, "netif_carrier_off" },
	{ 0x54c75e4, "__hw_addr_sync_dev" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xffc50605, "netif_carrier_on" },
	{ 0x8c006640, "netdev_set_num_tc" },
	{ 0x373b0d5, "dql_reset" },
	{ 0x3b814ca, "bpf_dispatcher_xdp_func" },
	{ 0xf54d2460, "__mdiobus_register" },
	{ 0xc1529e3a, "pci_disable_msix" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc43d6f7b, "pci_disable_device" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xcd98ec55, "dev_uc_add" },
	{ 0x7cb3eec3, "dma_set_mask" },
	{ 0xc86c3f91, "skb_add_rx_frag_netmem" },
	{ 0x15adbbf8, "xdp_master_redirect" },
	{ 0x9982da8d, "__napi_schedule_irqoff" },
	{ 0xf7bbf8be, "napi_schedule_prep" },
	{ 0x90807f59, "napi_consume_skb" },
	{ 0x98cf60b3, "strlen" },
	{ 0x6dc88bac, "napi_disable" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0xb71a512f, "pci_write_config_word" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xabd0dc8b, "skb_clone_tx_timestamp" },
	{ 0x862258db, "timecounter_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xd14e8222, "ethtool_op_get_ts_info" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x67bbcda, "netdev_info" },
	{ 0x60443957, "mdio45_probe" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb9681621, "xdp_do_flush" },
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "xfrm_algo,mdio");

MODULE_ALIAS("pci:v00008086d000010B6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010ECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001508sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010FCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001517sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001507sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001514sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000152Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001529sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000151Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001528sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000154Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000154Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001558sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001557sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000154Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001560sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001563sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E5sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EEBE45A6CA9833822C5EDCB");
