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
	{ 0xc1514a3b, "free_irq" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x6aac3bef, "ieee80211_get_response_rate" },
	{ 0x1cf75d45, "ieee80211_get_tkip_p1k_iv" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x2f269ff7, "bcma_core_disable" },
	{ 0xe84d86d8, "ssb_device_is_enabled" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xd0fd7085, "hwrng_unregister" },
	{ 0x5623d3f6, "ssb_pmu_set_ldo_paref" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x7f7dbbee, "ssb_pcicore_dev_irqvecs_enable" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa3c03e61, "ssb_bus_may_powerdown" },
	{ 0x61420e14, "ieee80211_free_hw" },
	{ 0xbd232569, "dma_unmap_page_attrs" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xe3dcebe7, "led_classdev_unregister" },
	{ 0x4ff913b5, "ieee80211_register_hw" },
	{ 0xe83c2d4, "ieee80211_emulate_change_chanctx" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x32d7ef55, "__ieee80211_get_radio_led_name" },
	{ 0xf9c28a98, "ieee80211_generic_frame_duration" },
	{ 0x71b6ad08, "ieee80211_wake_queue" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xd2534826, "ssb_set_devtypedata" },
	{ 0x94293e46, "__ieee80211_get_tx_led_name" },
	{ 0xe0c4e14d, "hwrng_register" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0x650d4708, "ieee80211_tx_status_skb" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x9df57208, "dma_map_page_attrs" },
	{ 0x22fe87e5, "ieee80211_handle_wake_tx_queue" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xf254f57c, "bcma_core_pll_ctl" },
	{ 0xbeeeac7, "bcma_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8f7f6586, "bcma_core_enable" },
	{ 0xb6916fcd, "ssb_device_disable" },
	{ 0xc9e1a995, "ssb_pmu_set_ldo_voltage" },
	{ 0x9b470ee9, "bcma_core_is_enabled" },
	{ 0x993e9495, "__ieee80211_get_rx_led_name" },
	{ 0xe5ef03c3, "bcma_chipco_gpio_control" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x34f5d5e0, "bcma_host_pci_irq_ctl" },
	{ 0xee7a3241, "device_create_file" },
	{ 0xd99c6ae, "__dma_sync_single_for_cpu" },
	{ 0x6ca3449c, "ieee80211_queue_delayed_work" },
	{ 0x8bbcc68f, "request_firmware_nowait" },
	{ 0x859e5b45, "ieee80211_ctstoself_get" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xcf19bddd, "__bcma_driver_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2bcad275, "bcma_core_set_clockmode" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x576d600d, "dma_alloc_attrs" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xa649edf9, "ssb_device_enable" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xabb61447, "ieee80211_wake_queues" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb58c18e8, "ieee80211_free_txskb" },
	{ 0x37c9d5fc, "led_classdev_register_ext" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1001c0f8, "bcma_core_dma_translation" },
	{ 0xc87fd291, "ieee80211_alloc_hw_nm" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb8d55943, "ssb_driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x38590bd4, "ieee80211_emulate_add_chanctx" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xb77e1ef3, "ieee80211_emulate_switch_vif_chanctx" },
	{ 0x1e052696, "ieee80211_stop_queue" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x10843d0a, "param_ops_string" },
	{ 0xe6950cdd, "__ssb_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x76e09157, "dma_set_coherent_mask" },
	{ 0xda7db208, "wiphy_rfkill_set_hw_state_reason" },
	{ 0xadb38c78, "__ieee80211_get_assoc_led_name" },
	{ 0xfc4326dd, "wiphy_rfkill_start_polling" },
	{ 0x681fdc29, "dma_free_attrs" },
	{ 0x369168f2, "bcma_host_pci_up" },
	{ 0x98b019d7, "ssb_bus_powerup" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe792d1b4, "__dma_sync_single_for_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x24c4b1f8, "ieee80211_unregister_hw" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x20f09351, "ieee80211_beacon_get_tim" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0x7d330417, "ssb_commit_settings" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0xd1bf26d6, "ieee80211_rts_get" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x7cb3eec3, "dma_set_mask" },
	{ 0xc4f50e84, "bcma_host_pci_down" },
	{ 0x4559e78f, "ieee80211_queue_work" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe3bafe79, "ieee80211_emulate_remove_chanctx" },
	{ 0x7bb9fa9a, "bcma_pmu_spuravoid_pllupdate" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa92274c6, "device_remove_file" },
	{ 0x2829fa6c, "ssb_dma_translation" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x910b3446, "skb_queue_head" },
	{ 0x2eeceda9, "ieee80211_rx_napi" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "cfg80211,mac80211,bcma,ssb");

MODULE_ALIAS("bcma:m04BFid0812rev11cl*");
MODULE_ALIAS("bcma:m04BFid0812rev15cl*");
MODULE_ALIAS("bcma:m04BFid0812rev17cl*");
MODULE_ALIAS("bcma:m04BFid0812rev18cl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ccl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Dcl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ecl*");
MODULE_ALIAS("bcma:m04BFid0812rev28cl*");
MODULE_ALIAS("bcma:m04BFid0812rev2Acl*");
MODULE_ALIAS("ssb:v4243id0812rev05*");
MODULE_ALIAS("ssb:v4243id0812rev06*");
MODULE_ALIAS("ssb:v4243id0812rev07*");
MODULE_ALIAS("ssb:v4243id0812rev09*");
MODULE_ALIAS("ssb:v4243id0812rev0A*");
MODULE_ALIAS("ssb:v4243id0812rev0B*");
MODULE_ALIAS("ssb:v4243id0812rev0C*");
MODULE_ALIAS("ssb:v4243id0812rev0D*");
MODULE_ALIAS("ssb:v4243id0812rev0F*");
MODULE_ALIAS("ssb:v4243id0812rev10*");

MODULE_INFO(srcversion, "9E51819FE2C3C8BEB163F86");
