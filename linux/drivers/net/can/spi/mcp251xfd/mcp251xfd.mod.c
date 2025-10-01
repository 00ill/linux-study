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
	{ 0xf2cffaef, "gpiod_get_value_cansleep" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x51c821c5, "can_free_echo_skb" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x5d200af4, "can_rx_offload_del" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xf7bfac12, "can_put_echo_skb" },
	{ 0x3eff421, "regmap_get_val_bytes" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8b63df5a, "alloc_canfd_skb" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbe28820f, "spi_write_then_read" },
	{ 0x37a0cba, "kfree" },
	{ 0x85fff537, "can_skb_get_frame_len" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x87e7c8e4, "netdev_warn" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x4deea1c5, "can_rx_offload_threaded_irq_finish" },
	{ 0xac13b56d, "open_candev" },
	{ 0x89e8fd53, "devm_gpiod_put" },
	{ 0x8502868b, "netdev_err" },
	{ 0xddf1ec59, "devm_regulator_get_optional" },
	{ 0x437d0342, "__pm_runtime_set_status" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0xb6a286fd, "can_rx_offload_queue_timestamp" },
	{ 0xab815fa5, "alloc_can_skb" },
	{ 0xa00da1db, "unregister_candev" },
	{ 0xcbd42ffb, "can_ethtool_op_get_ts_info_hwts" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0xad8e2b22, "can_change_state" },
	{ 0xbc3f2cb0, "timecounter_cyc2time" },
	{ 0x93428159, "can_change_mtu" },
	{ 0xc2c5802, "work_busy" },
	{ 0xc133cdeb, "can_rx_offload_add_manual" },
	{ 0xce12c86b, "spi_sync" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0x26e4dad9, "can_dropped_invalid_skb" },
	{ 0x2a10607e, "devm_kfree" },
	{ 0x669c413b, "_dev_err" },
	{ 0x573ed21e, "free_candev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xb99649c9, "alloc_candev_mqs" },
	{ 0x6047ede6, "can_fd_len2dlc" },
	{ 0xc3665eed, "netdev_printk" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5f35de40, "spi_get_device_match_data" },
	{ 0x92893115, "driver_unregister" },
	{ 0xf12d9387, "can_fd_dlc2len" },
	{ 0x5187b7de, "can_eth_ioctl_hwts" },
	{ 0x1f7155cb, "dql_completed" },
	{ 0xf4da4505, "dev_coredumpv" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0xe8536fa7, "spi_async" },
	{ 0xa99e73f3, "close_candev" },
	{ 0xdcb764ad, "memset" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x2c4f2e35, "__vmalloc_noprof" },
	{ 0xc1037af4, "netif_schedule_queue" },
	{ 0x17ada51d, "can_bus_off" },
	{ 0x88385b5d, "can_rx_offload_get_echo_skb_queue_timestamp" },
	{ 0xf7ce00e9, "can_rx_offload_enable" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xef54673c, "devm_clk_get_optional" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xbde79ba4, "spi_setup" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcd47056b, "__spi_register_driver" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x373b0d5, "dql_reset" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x7c913590, "regulator_disable" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xf4450a48, "alloc_can_err_skb" },
	{ 0xee1be65c, "regmap_raw_write" },
	{ 0x6dc88bac, "napi_disable" },
	{ 0xd3468e06, "netdev_notice" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0x47d99c63, "register_candev" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0x862258db, "timecounter_init" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x67bbcda, "netdev_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa6fb68b9, "__devm_regmap_init" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("of:N*T*Cmicrochip,mcp2517fd");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2517fdC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2518fd");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2518fdC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp251863");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp251863C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp251xfd");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp251xfdC*");
MODULE_ALIAS("spi:mcp2517fd");
MODULE_ALIAS("spi:mcp2518fd");
MODULE_ALIAS("spi:mcp251863");
MODULE_ALIAS("spi:mcp251xfd");

MODULE_INFO(srcversion, "5E04F01E22C25908AB34EC9");
