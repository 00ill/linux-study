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

KSYMTAB_FUNC(rtw89_pci_recognize_intrs, "", "");
KSYMTAB_FUNC(rtw89_pci_recognize_intrs_v1, "", "");
KSYMTAB_FUNC(rtw89_pci_recognize_intrs_v2, "", "");
KSYMTAB_FUNC(rtw89_pci_enable_intr, "", "");
KSYMTAB_FUNC(rtw89_pci_disable_intr, "", "");
KSYMTAB_FUNC(rtw89_pci_enable_intr_v1, "", "");
KSYMTAB_FUNC(rtw89_pci_disable_intr_v1, "", "");
KSYMTAB_FUNC(rtw89_pci_enable_intr_v2, "", "");
KSYMTAB_FUNC(rtw89_pci_disable_intr_v2, "", "");
KSYMTAB_DATA(rtw89_pci_ch_dma_addr_set, "", "");
KSYMTAB_DATA(rtw89_pci_ch_dma_addr_set_v1, "", "");
KSYMTAB_DATA(rtw89_pci_ch_dma_addr_set_be, "", "");
KSYMTAB_FUNC(rtw89_pci_fill_txaddr_info, "", "");
KSYMTAB_FUNC(rtw89_pci_fill_txaddr_info_v1, "", "");
KSYMTAB_DATA(rtw89_bd_ram_table_dual, "", "");
KSYMTAB_DATA(rtw89_bd_ram_table_single, "", "");
KSYMTAB_FUNC(rtw89_pci_ltr_set, "", "");
KSYMTAB_FUNC(rtw89_pci_ltr_set_v1, "", "");
KSYMTAB_FUNC(rtw89_pci_config_intr_mask, "", "");
KSYMTAB_FUNC(rtw89_pci_config_intr_mask_v1, "", "");
KSYMTAB_FUNC(rtw89_pci_config_intr_mask_v2, "", "");
KSYMTAB_DATA(rtw89_pm_ops, "", "");
KSYMTAB_DATA(rtw89_pci_gen_ax, "", "");
KSYMTAB_FUNC(rtw89_pci_probe, "", "");
KSYMTAB_FUNC(rtw89_pci_remove, "", "");
KSYMTAB_FUNC(rtw89_pci_ltr_set_v2, "", "");
KSYMTAB_DATA(rtw89_pm_ops_be, "", "");
KSYMTAB_DATA(rtw89_pci_gen_be, "", "");

SYMBOL_CRC(rtw89_pci_recognize_intrs, 0x71a3a79d, "");
SYMBOL_CRC(rtw89_pci_recognize_intrs_v1, 0x3238d2d0, "");
SYMBOL_CRC(rtw89_pci_recognize_intrs_v2, 0x957e3105, "");
SYMBOL_CRC(rtw89_pci_enable_intr, 0xcafe2107, "");
SYMBOL_CRC(rtw89_pci_disable_intr, 0x9e1961c7, "");
SYMBOL_CRC(rtw89_pci_enable_intr_v1, 0xabf950f3, "");
SYMBOL_CRC(rtw89_pci_disable_intr_v1, 0xf441fe39, "");
SYMBOL_CRC(rtw89_pci_enable_intr_v2, 0x3e054f53, "");
SYMBOL_CRC(rtw89_pci_disable_intr_v2, 0x61bde199, "");
SYMBOL_CRC(rtw89_pci_ch_dma_addr_set, 0x9ce0961b, "");
SYMBOL_CRC(rtw89_pci_ch_dma_addr_set_v1, 0xf630d9a9, "");
SYMBOL_CRC(rtw89_pci_ch_dma_addr_set_be, 0x33c84a55, "");
SYMBOL_CRC(rtw89_pci_fill_txaddr_info, 0x960150cb, "");
SYMBOL_CRC(rtw89_pci_fill_txaddr_info_v1, 0x6f9bb342, "");
SYMBOL_CRC(rtw89_bd_ram_table_dual, 0x6efd9f2c, "");
SYMBOL_CRC(rtw89_bd_ram_table_single, 0x71162055, "");
SYMBOL_CRC(rtw89_pci_ltr_set, 0x9c3b42e5, "");
SYMBOL_CRC(rtw89_pci_ltr_set_v1, 0xf0968dd8, "");
SYMBOL_CRC(rtw89_pci_config_intr_mask, 0x47d3e12e, "");
SYMBOL_CRC(rtw89_pci_config_intr_mask_v1, 0x4547338f, "");
SYMBOL_CRC(rtw89_pci_config_intr_mask_v2, 0xc1e630cf, "");
SYMBOL_CRC(rtw89_pm_ops, 0x7d32e974, "");
SYMBOL_CRC(rtw89_pci_gen_ax, 0xabdfdb6e, "");
SYMBOL_CRC(rtw89_pci_probe, 0xd3077a97, "");
SYMBOL_CRC(rtw89_pci_remove, 0x647d5655, "");
SYMBOL_CRC(rtw89_pci_ltr_set_v2, 0x1d751d45, "");
SYMBOL_CRC(rtw89_pm_ops_be, 0xb0391068, "");
SYMBOL_CRC(rtw89_pci_gen_be, 0x56f5092b, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x4897a742, "pcie_capability_read_word" },
	{ 0xf26aece2, "pci_find_ext_capability" },
	{ 0xa8cd99e6, "rtw89_alloc_ieee80211_hw" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x95b9dbf9, "pci_enable_device" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x3fd7c8cf, "pci_iomap" },
	{ 0x9af41181, "pci_alloc_irq_vectors" },
	{ 0xa6257a2f, "complete" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0xbd232569, "dma_unmap_page_attrs" },
	{ 0x4b6bbff7, "pci_request_regions" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x25eaf709, "rtw89_core_napi_init" },
	{ 0xc9880626, "rtw89_core_unregister" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0x650d4708, "ieee80211_tx_status_skb" },
	{ 0xf139d567, "pci_read_config_dword" },
	{ 0x9df57208, "dma_map_page_attrs" },
	{ 0x36184085, "napi_complete_done" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd71fb816, "devm_free_irq" },
	{ 0x3adfad74, "__napi_schedule" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x4bc02827, "rtw89_core_init" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xd99c6ae, "__dma_sync_single_for_cpu" },
	{ 0x669c413b, "_dev_err" },
	{ 0x14600e17, "rtw89_check_quirks" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x262acac4, "rtw89_core_napi_deinit" },
	{ 0x33b58322, "skb_push" },
	{ 0x576d600d, "dma_alloc_attrs" },
	{ 0xc9165291, "rtw89_free_ieee80211_hw" },
	{ 0xd5efb3e1, "rtw89_core_napi_start" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x70796a17, "pci_iounmap" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x7cf55e07, "pci_set_master" },
	{ 0x409670ae, "rtw89_ser_notify" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x43f25734, "skb_unlink" },
	{ 0x76e09157, "dma_set_coherent_mask" },
	{ 0x709dd278, "rtw89_core_register" },
	{ 0x681fdc29, "dma_free_attrs" },
	{ 0x382a47f9, "rtw89_core_rx" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0xe1bb96dd, "pci_release_regions" },
	{ 0xe792d1b4, "__dma_sync_single_for_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4df99e2c, "rtw89_core_deinit" },
	{ 0x3e5ce625, "pci_write_config_byte" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc43d6f7b, "pci_disable_device" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x7cb3eec3, "dma_set_mask" },
	{ 0xf7bbf8be, "napi_schedule_prep" },
	{ 0x42f7540f, "pci_read_config_byte" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x3b1b010f, "pci_free_irq_vectors" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe43e0508, "rtw89_core_napi_stop" },
	{ 0xa700eddb, "rtw89_chip_info_setup" },
	{ 0xaa34993e, "rtw89_mac_get_err_status" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rtw89_core,mac80211");


MODULE_INFO(srcversion, "989F0E753A6DAF1A259FC70");
