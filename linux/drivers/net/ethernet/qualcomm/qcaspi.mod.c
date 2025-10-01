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
	{ 0x204346f0, "alloc_etherdev_mqs" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xd4f784c4, "eth_mac_addr" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x385fa099, "unregister_netdev" },
	{ 0x9bf8881e, "dev_trans_start" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0xf95322f4, "kthread_parkme" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0x87e7c8e4, "netdev_warn" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xbbc442b1, "kthread_park" },
	{ 0x44e53d74, "netif_tx_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x79defbe1, "kthread_should_park" },
	{ 0x8502868b, "netdev_err" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xc4f8efb6, "eth_type_trans" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xbd395e28, "skb_copy_expand" },
	{ 0x41da0375, "qcafrm_create_header" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xc56c18c0, "kthread_unpark" },
	{ 0xce12c86b, "spi_sync" },
	{ 0x669c413b, "_dev_err" },
	{ 0x85ccf09c, "of_get_ethdev_address" },
	{ 0x33b58322, "skb_push" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x3dfbc684, "seq_putc" },
	{ 0x219f96ce, "register_netdev" },
	{ 0x92893115, "driver_unregister" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0x4295cec9, "ethtool_op_get_link" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0xb28a9ad, "qcafrm_create_footer" },
	{ 0xdcb764ad, "memset" },
	{ 0x214a2a48, "netif_tx_lock" },
	{ 0x50d00458, "netif_rx" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0x661256ad, "seq_read" },
	{ 0x4e3070d4, "qcafrm_fsm_decode" },
	{ 0xbde79ba4, "spi_setup" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0xcd47056b, "__spi_register_driver" },
	{ 0xb53675e6, "seq_write" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x828a01bc, "netif_carrier_off" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xffc50605, "netif_carrier_on" },
	{ 0x10139ad8, "single_release" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x71c90ddc, "single_open" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x67bbcda, "netdev_info" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "qca_7k_common");

MODULE_ALIAS("spi:qca7000");
MODULE_ALIAS("of:N*T*Cqca,qca7000");
MODULE_ALIAS("of:N*T*Cqca,qca7000C*");

MODULE_INFO(srcversion, "E521C71D882578D4ABA39BD");
