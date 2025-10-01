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
	{ 0xcd47056b, "__spi_register_driver" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x51c821c5, "can_free_echo_skb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x92893115, "driver_unregister" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x26e4dad9, "can_dropped_invalid_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xc3665eed, "netdev_printk" },
	{ 0xdcb764ad, "memset" },
	{ 0xce12c86b, "spi_sync" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbe28820f, "spi_write_then_read" },
	{ 0xab815fa5, "alloc_can_skb" },
	{ 0x50d00458, "netif_rx" },
	{ 0x4829a47e, "memcpy" },
	{ 0x35ef1cd, "gpiochip_get_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa00da1db, "unregister_candev" },
	{ 0x7c913590, "regulator_disable" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x573ed21e, "free_candev" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0xf4450a48, "alloc_can_err_skb" },
	{ 0x17ada51d, "can_bus_off" },
	{ 0xfaaac432, "can_get_echo_skb" },
	{ 0x8502868b, "netdev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xef54673c, "devm_clk_get_optional" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb99649c9, "alloc_candev_mqs" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x5f35de40, "spi_get_device_match_data" },
	{ 0xbde79ba4, "spi_setup" },
	{ 0xddf1ec59, "devm_regulator_get_optional" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x47d99c63, "register_candev" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0x71d5ffb9, "devm_gpiochip_add_data_with_key" },
	{ 0x67bbcda, "netdev_info" },
	{ 0xa99e73f3, "close_candev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x64707a9c, "netif_device_attach" },
	{ 0xac13b56d, "open_candev" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf7bfac12, "can_put_echo_skb" },
	{ 0x93428159, "can_change_mtu" },
	{ 0xd14e8222, "ethtool_op_get_ts_info" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("spi:mcp2510");
MODULE_ALIAS("spi:mcp2515");
MODULE_ALIAS("spi:mcp25625");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp25625");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp25625C*");

MODULE_INFO(srcversion, "F41E96270BEA486C49E5B19");
