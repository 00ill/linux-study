#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_DATA(rtw_pm_ops, "", "");
KSYMTAB_FUNC(rtw_pci_probe, "", "");
KSYMTAB_FUNC(rtw_pci_remove, "", "");
KSYMTAB_FUNC(rtw_pci_shutdown, "", "");

SYMBOL_CRC(rtw_pm_ops, 0xd964d385, "");
SYMBOL_CRC(rtw_pci_probe, 0xf2597ddb, "");
SYMBOL_CRC(rtw_pci_remove, 0xf5bb690b, "");
SYMBOL_CRC(rtw_pci_shutdown, 0xc2ba5716, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x232d9b7f, "rtw_tx_report_enqueue" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x27f203b3, "rtw_tx_queue_mapping" },
	{ 0x4897a742, "pcie_capability_read_word" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x95b9dbf9, "pci_enable_device" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x3fd7c8cf, "pci_iomap" },
	{ 0x9af41181, "pci_alloc_irq_vectors" },
	{ 0xe2835923, "netif_napi_add_weight" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x61420e14, "ieee80211_free_hw" },
	{ 0xbd232569, "dma_unmap_page_attrs" },
	{ 0x4b6bbff7, "pci_request_regions" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1dc2d072, "rtw_tx_ac_to_hwq" },
	{ 0xad25b856, "dev_kfree_skb_irq_reason" },
	{ 0xd955aac9, "pci_set_power_state" },
	{ 0x4c88a838, "__netif_napi_del" },
	{ 0x71b6ad08, "ieee80211_wake_queue" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0x9df57208, "dma_map_page_attrs" },
	{ 0x36184085, "napi_complete_done" },
	{ 0x1499afed, "ieee80211_tx_status_irqsafe" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd71fb816, "devm_free_irq" },
	{ 0x3adfad74, "__napi_schedule" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0xee2afcb0, "rtw_chip_info_setup" },
	{ 0xb6a3874b, "rtw_fw_c2h_cmd_isr" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xd99c6ae, "__dma_sync_single_for_cpu" },
	{ 0x6d683dbc, "rtw_unregister_hw" },
	{ 0x669c413b, "_dev_err" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xcb1b156c, "rtw_tx_fill_tx_desc" },
	{ 0x33b58322, "skb_push" },
	{ 0x576d600d, "dma_alloc_attrs" },
	{ 0x31bd7946, "napi_enable" },
	{ 0x2929676c, "rtw_core_init" },
	{ 0x24b49baa, "free_netdev" },
	{ 0xc87fd291, "ieee80211_alloc_hw_nm" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x70796a17, "pci_iounmap" },
	{ 0x166d0d51, "rtw_update_rx_freq_from_ie" },
	{ 0x163aff43, "rtw_tx_write_data_rsvd_page_get" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x7cf55e07, "pci_set_master" },
	{ 0x1e052696, "ieee80211_stop_queue" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x7e1bc3ad, "rtw_rx_stats" },
	{ 0xa4f57eb3, "pcie_capability_clear_and_set_word_unlocked" },
	{ 0xb641717d, "rtw_register_hw" },
	{ 0xd5c95c69, "alloc_netdev_dummy" },
	{ 0x681fdc29, "dma_free_attrs" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0xe1bb96dd, "pci_release_regions" },
	{ 0xe792d1b4, "__dma_sync_single_for_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x24c4b1f8, "ieee80211_unregister_hw" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x5d6ba6e3, "rtw_core_deinit" },
	{ 0x5deb5694, "rtw_ops" },
	{ 0xc43d6f7b, "pci_disable_device" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf7bbf8be, "napi_schedule_prep" },
	{ 0x5e5ef8d3, "rtw_write_firmware_page" },
	{ 0x6dc88bac, "napi_disable" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x19b55010, "rtw_power_mode_change" },
	{ 0x535a81ca, "rtw_tx_write_data_h2c_get" },
	{ 0x3b1b010f, "pci_free_irq_vectors" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb8688652, "rtw_fw_c2h_cmd_rx_irqsafe" },
	{ 0x2eeceda9, "ieee80211_rx_napi" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rtw88_core,mac80211");


MODULE_INFO(srcversion, "F235F522B575430E717BD70");
