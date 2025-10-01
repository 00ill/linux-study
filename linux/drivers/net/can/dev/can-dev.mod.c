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

KSYMTAB_FUNC(can_put_echo_skb, "_gpl", "");
KSYMTAB_FUNC(can_get_echo_skb, "_gpl", "");
KSYMTAB_FUNC(can_free_echo_skb, "_gpl", "");
KSYMTAB_FUNC(alloc_can_skb, "_gpl", "");
KSYMTAB_FUNC(alloc_canfd_skb, "_gpl", "");
KSYMTAB_FUNC(alloc_canxl_skb, "_gpl", "");
KSYMTAB_FUNC(alloc_can_err_skb, "_gpl", "");
KSYMTAB_FUNC(can_dropped_invalid_skb, "_gpl", "");
KSYMTAB_FUNC(can_get_state_str, "_gpl", "");
KSYMTAB_FUNC(can_state_get_by_berr_counter, "_gpl", "");
KSYMTAB_FUNC(can_change_state, "_gpl", "");
KSYMTAB_FUNC(can_bus_off, "_gpl", "");
KSYMTAB_FUNC(alloc_candev_mqs, "_gpl", "");
KSYMTAB_FUNC(free_candev, "_gpl", "");
KSYMTAB_FUNC(can_change_mtu, "_gpl", "");
KSYMTAB_FUNC(can_eth_ioctl_hwts, "", "");
KSYMTAB_FUNC(can_ethtool_op_get_ts_info_hwts, "", "");
KSYMTAB_FUNC(open_candev, "_gpl", "");
KSYMTAB_FUNC(of_can_transceiver, "_gpl", "");
KSYMTAB_FUNC(close_candev, "_gpl", "");
KSYMTAB_FUNC(register_candev, "_gpl", "");
KSYMTAB_FUNC(unregister_candev, "_gpl", "");
KSYMTAB_FUNC(safe_candev_priv, "_gpl", "");
KSYMTAB_FUNC(can_fd_dlc2len, "_gpl", "");
KSYMTAB_FUNC(can_fd_len2dlc, "_gpl", "");
KSYMTAB_FUNC(can_skb_get_frame_len, "_gpl", "");
KSYMTAB_FUNC(can_rx_offload_irq_offload_timestamp, "_gpl", "");
KSYMTAB_FUNC(can_rx_offload_irq_offload_fifo, "_gpl", "");
KSYMTAB_FUNC(can_rx_offload_queue_timestamp, "_gpl", "");
KSYMTAB_FUNC(can_rx_offload_get_echo_skb_queue_timestamp, "_gpl", "");
KSYMTAB_FUNC(can_rx_offload_queue_tail, "_gpl", "");
KSYMTAB_FUNC(can_rx_offload_get_echo_skb_queue_tail, "_gpl", "");
KSYMTAB_FUNC(can_rx_offload_irq_finish, "_gpl", "");
KSYMTAB_FUNC(can_rx_offload_threaded_irq_finish, "_gpl", "");
KSYMTAB_FUNC(can_rx_offload_add_timestamp, "_gpl", "");
KSYMTAB_FUNC(can_rx_offload_add_fifo, "_gpl", "");
KSYMTAB_FUNC(can_rx_offload_add_manual, "_gpl", "");
KSYMTAB_FUNC(can_rx_offload_enable, "_gpl", "");
KSYMTAB_FUNC(can_rx_offload_del, "_gpl", "");

SYMBOL_CRC(can_put_echo_skb, 0xf7bfac12, "_gpl");
SYMBOL_CRC(can_get_echo_skb, 0xfaaac432, "_gpl");
SYMBOL_CRC(can_free_echo_skb, 0x51c821c5, "_gpl");
SYMBOL_CRC(alloc_can_skb, 0xab815fa5, "_gpl");
SYMBOL_CRC(alloc_canfd_skb, 0x8b63df5a, "_gpl");
SYMBOL_CRC(alloc_canxl_skb, 0xad1a4563, "_gpl");
SYMBOL_CRC(alloc_can_err_skb, 0xf4450a48, "_gpl");
SYMBOL_CRC(can_dropped_invalid_skb, 0x26e4dad9, "_gpl");
SYMBOL_CRC(can_get_state_str, 0x10d892eb, "_gpl");
SYMBOL_CRC(can_state_get_by_berr_counter, 0x1101e45d, "_gpl");
SYMBOL_CRC(can_change_state, 0xad8e2b22, "_gpl");
SYMBOL_CRC(can_bus_off, 0x17ada51d, "_gpl");
SYMBOL_CRC(alloc_candev_mqs, 0xb99649c9, "_gpl");
SYMBOL_CRC(free_candev, 0x573ed21e, "_gpl");
SYMBOL_CRC(can_change_mtu, 0x93428159, "_gpl");
SYMBOL_CRC(can_eth_ioctl_hwts, 0x5187b7de, "");
SYMBOL_CRC(can_ethtool_op_get_ts_info_hwts, 0xcbd42ffb, "");
SYMBOL_CRC(open_candev, 0xac13b56d, "_gpl");
SYMBOL_CRC(of_can_transceiver, 0xa54e7f55, "_gpl");
SYMBOL_CRC(close_candev, 0xa99e73f3, "_gpl");
SYMBOL_CRC(register_candev, 0x47d99c63, "_gpl");
SYMBOL_CRC(unregister_candev, 0xa00da1db, "_gpl");
SYMBOL_CRC(safe_candev_priv, 0xf04493ac, "_gpl");
SYMBOL_CRC(can_fd_dlc2len, 0xf12d9387, "_gpl");
SYMBOL_CRC(can_fd_len2dlc, 0x6047ede6, "_gpl");
SYMBOL_CRC(can_skb_get_frame_len, 0x85fff537, "_gpl");
SYMBOL_CRC(can_rx_offload_irq_offload_timestamp, 0x4f583526, "_gpl");
SYMBOL_CRC(can_rx_offload_irq_offload_fifo, 0x6fbb3a1d, "_gpl");
SYMBOL_CRC(can_rx_offload_queue_timestamp, 0xb6a286fd, "_gpl");
SYMBOL_CRC(can_rx_offload_get_echo_skb_queue_timestamp, 0x88385b5d, "_gpl");
SYMBOL_CRC(can_rx_offload_queue_tail, 0x1ab626d6, "_gpl");
SYMBOL_CRC(can_rx_offload_get_echo_skb_queue_tail, 0xb124ff36, "_gpl");
SYMBOL_CRC(can_rx_offload_irq_finish, 0x857d40d0, "_gpl");
SYMBOL_CRC(can_rx_offload_threaded_irq_finish, 0x4deea1c5, "_gpl");
SYMBOL_CRC(can_rx_offload_add_timestamp, 0x2a1e93c8, "_gpl");
SYMBOL_CRC(can_rx_offload_add_fifo, 0x84287abd, "_gpl");
SYMBOL_CRC(can_rx_offload_add_manual, 0xc133cdeb, "_gpl");
SYMBOL_CRC(can_rx_offload_enable, 0xf7ce00e9, "_gpl");
SYMBOL_CRC(can_rx_offload_del, 0x5d200af4, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x469438cc, "of_node_put" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x73507016, "skb_tstamp_tx" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xe2835923, "netif_napi_add_weight" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x385fa099, "unregister_netdev" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x9d12f712, "rtnl_link_register" },
	{ 0x87e7c8e4, "netdev_warn" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x4c88a838, "__netif_napi_del" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8502868b, "netdev_err" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0x36184085, "napi_complete_done" },
	{ 0xb67fb8b4, "alloc_netdev_mqs" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x3adfad74, "__napi_schedule" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0xec905c5d, "of_get_child_by_name" },
	{ 0x987c0c99, "rtnl_link_unregister" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x31bd7946, "napi_enable" },
	{ 0x2e7b0048, "netif_receive_skb" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x219f96ce, "register_netdev" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x7a5c410e, "sock_efree" },
	{ 0x50d00458, "netif_rx" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x56470118, "__warn_printk" },
	{ 0x828a01bc, "netif_carrier_off" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xffc50605, "netif_carrier_on" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xf7bbf8be, "napi_schedule_prep" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xabd0dc8b, "skb_clone_tx_timestamp" },
	{ 0x67bbcda, "netdev_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8BB29E13BC1826913315B41");
