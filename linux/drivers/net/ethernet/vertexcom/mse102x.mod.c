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
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x385fa099, "unregister_netdev" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xce12c86b, "spi_sync" },
	{ 0x8502868b, "netdev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x71c90ddc, "single_open" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x92893115, "driver_unregister" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0xc4f8efb6, "eth_type_trans" },
	{ 0x50d00458, "netif_rx" },
	{ 0x122c3a7e, "_printk" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xffc50605, "netif_carrier_on" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbde79ba4, "spi_setup" },
	{ 0x808ca8c5, "devm_alloc_etherdev_mqs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdcb764ad, "memset" },
	{ 0x828a01bc, "netif_carrier_off" },
	{ 0x85ccf09c, "of_get_ethdev_address" },
	{ 0x219f96ce, "register_netdev" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x669c413b, "_dev_err" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0xf9a482f9, "msleep" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0x33b58322, "skb_push" },
	{ 0xbd395e28, "skb_copy_expand" },
	{ 0xc3665eed, "netdev_printk" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x67bbcda, "netdev_info" },
	{ 0xd4f784c4, "eth_mac_addr" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0x4295cec9, "ethtool_op_get_link" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0x661256ad, "seq_read" },
	{ 0x10139ad8, "single_release" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:mse1021");
MODULE_ALIAS("spi:mse1022");
MODULE_ALIAS("of:N*T*Cvertexcom,mse1021");
MODULE_ALIAS("of:N*T*Cvertexcom,mse1021C*");
MODULE_ALIAS("of:N*T*Cvertexcom,mse1022");
MODULE_ALIAS("of:N*T*Cvertexcom,mse1022C*");

MODULE_INFO(srcversion, "8E9C322E92E88B2281AD2E9");
