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
	{ 0x78073a9e, "napi_alloc_skb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x68f950a2, "phy_set_max_speed" },
	{ 0x42e2b350, "__skb_pad" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xd4f784c4, "eth_mac_addr" },
	{ 0x9f448cef, "pcim_set_mwi" },
	{ 0xf9b1f79b, "pci_wake_from_d3" },
	{ 0x73507016, "skb_tstamp_tx" },
	{ 0x2c5e1578, "netdev_sw_irq_coalesce_default_on" },
	{ 0x170425fb, "netdev_update_features" },
	{ 0x9af41181, "pci_alloc_irq_vectors" },
	{ 0xe2835923, "netif_napi_add_weight" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x15fe7e9b, "dmam_alloc_attrs" },
	{ 0x385fa099, "unregister_netdev" },
	{ 0xbd232569, "dma_unmap_page_attrs" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xf7370f56, "system_state" },
	{ 0xb0acfe7a, "__pci_register_driver" },
	{ 0x87495825, "phy_ethtool_set_eee" },
	{ 0x3da72e2b, "pci_dev_run_wake" },
	{ 0x3171ab23, "phy_attached_info" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x82f1876e, "phy_ethtool_set_link_ksettings" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0xe3dcebe7, "led_classdev_unregister" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x87e7c8e4, "netdev_warn" },
	{ 0xd955aac9, "pci_set_power_state" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xd56fa8f1, "pci_irq_vector" },
	{ 0xcd7b51, "phy_write_mmd" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0x56a6b0c7, "pci_unregister_driver" },
	{ 0x8502868b, "netdev_err" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0x63b78629, "phy_read_paged" },
	{ 0x4a153076, "phy_restore_page" },
	{ 0x8fa5a6ee, "dev_fetch_sw_netstats" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xc4f8efb6, "eth_type_trans" },
	{ 0x9df57208, "dma_map_page_attrs" },
	{ 0x7ee3556d, "genphy_soft_reset" },
	{ 0x36184085, "napi_complete_done" },
	{ 0xad508551, "__mdiobus_write" },
	{ 0x352833ed, "__alloc_pages_noprof" },
	{ 0x7348f9e9, "pm_schedule_suspend" },
	{ 0xe62942b0, "devm_clk_get_optional_enabled" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf1aca8a2, "pci_status_get_and_clear_errors" },
	{ 0x414b553b, "phy_speed_up" },
	{ 0xe03d7eb1, "phy_connect_direct" },
	{ 0x3adfad74, "__napi_schedule" },
	{ 0xbb8ce2ef, "netif_device_detach" },
	{ 0x618911fc, "numa_node" },
	{ 0xc9fddddf, "pci_disable_link_state" },
	{ 0x6c736d6, "__free_pages" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xdd5d727c, "napi_gro_receive" },
	{ 0x64707a9c, "netif_device_attach" },
	{ 0x13beef9f, "pci_select_bars" },
	{ 0xded7bd5d, "phy_ethtool_get_link_ksettings" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x808ca8c5, "devm_alloc_etherdev_mqs" },
	{ 0x55dc16b9, "pcim_iomap_regions" },
	{ 0x70b38102, "pci_clear_master" },
	{ 0xd99c6ae, "__dma_sync_single_for_cpu" },
	{ 0xf99c528, "__phy_modify" },
	{ 0x669c413b, "_dev_err" },
	{ 0x85f3ffea, "softnet_data" },
	{ 0x74eea4e0, "phy_suspend" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc3665eed, "netdev_printk" },
	{ 0x9525b620, "phy_modify_paged" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x91bed876, "pcie_capability_clear_and_set_word_locked" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x576d600d, "dma_alloc_attrs" },
	{ 0xdde6474a, "phy_speed_down" },
	{ 0x2e4ddee0, "pci_read_config_word" },
	{ 0x31bd7946, "napi_enable" },
	{ 0x219f96ce, "register_netdev" },
	{ 0xe47e4c8d, "mdiobus_read" },
	{ 0x1f7155cb, "dql_completed" },
	{ 0xb1518e15, "cancel_work" },
	{ 0x37c9d5fc, "led_classdev_register_ext" },
	{ 0x4295cec9, "ethtool_op_get_link" },
	{ 0x738c6d87, "eth_platform_get_mac_address" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0xbc556d6c, "phy_start" },
	{ 0x81729368, "phy_modify" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x74eb465a, "phy_mac_interrupt" },
	{ 0xc1037af4, "netif_schedule_queue" },
	{ 0x7cf55e07, "pci_set_master" },
	{ 0xb80965c0, "phy_print_status" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x8fab2b0e, "phy_start_aneg" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0xbd812f63, "phy_set_asym_pause" },
	{ 0xa0f1c94f, "phy_ethtool_get_eee" },
	{ 0xf20181b4, "devm_mdiobus_alloc_size" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x76e09157, "dma_set_coherent_mask" },
	{ 0x681fdc29, "dma_free_attrs" },
	{ 0xecec7631, "pci_reset_bus" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe792d1b4, "__dma_sync_single_for_device" },
	{ 0x7da62fba, "phy_support_asym_pause" },
	{ 0x3e5ce625, "pci_write_config_byte" },
	{ 0x144b3b03, "phy_get_pause" },
	{ 0x9e255c51, "mdiobus_write" },
	{ 0x7ad5b349, "phy_select_page" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x34401e53, "phy_write_paged" },
	{ 0xeba72416, "mdiobus_get_phy" },
	{ 0x41f3dd41, "phy_ethtool_nway_reset" },
	{ 0x373b0d5, "dql_reset" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x2e72f2a0, "phy_support_eee" },
	{ 0x73c4d30f, "phy_init_hw" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xa9ed4df4, "pcie_set_readrq" },
	{ 0xef9e05c4, "__devm_mdiobus_register" },
	{ 0x7cb3eec3, "dma_set_mask" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xaa88432a, "netif_set_tso_max_size" },
	{ 0xf1b3ed6c, "phy_resume" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xd9835348, "pcim_iomap_table" },
	{ 0xf7bbf8be, "napi_schedule_prep" },
	{ 0x90807f59, "napi_consume_skb" },
	{ 0x42f7540f, "pci_read_config_byte" },
	{ 0x6dc88bac, "napi_disable" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0xd3468e06, "netdev_notice" },
	{ 0x78a97e3d, "phy_stop" },
	{ 0xacb19f11, "phy_do_ioctl_running" },
	{ 0xa6d671b1, "netif_set_tso_max_segs" },
	{ 0xcf3b69b3, "netdev_stats_to_stats64" },
	{ 0xb36396f8, "pcim_enable_device" },
	{ 0xabd0dc8b, "skb_clone_tx_timestamp" },
	{ 0x576f4941, "phy_disconnect" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd14e8222, "ethtool_op_get_ts_info" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x67bbcda, "netdev_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010ECd00002502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00002600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008129sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008136sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008162sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008167sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010FFd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008169sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv00001186sd00004B10bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001259d0000C107sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ECd00000116sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d00001032sv*sd00000024bc*sc*i*");
MODULE_ALIAS("pci:v00000001d00008168sv*sd00002410bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008125sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008126sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00003000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1EAF7663F9DC54869435D8B");
