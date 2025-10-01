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
	{ 0x385fa099, "unregister_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x87e7c8e4, "netdev_warn" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x92893115, "driver_unregister" },
	{ 0xbe28820f, "spi_write_then_read" },
	{ 0x374647f3, "_dev_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xce12c86b, "spi_sync" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x67bbcda, "netdev_info" },
	{ 0x8502868b, "netdev_err" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0x828a01bc, "netif_carrier_off" },
	{ 0xffc50605, "netif_carrier_on" },
	{ 0xc3665eed, "netdev_printk" },
	{ 0x122c3a7e, "_printk" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x3958a712, "dev_close" },
	{ 0x204346f0, "alloc_etherdev_mqs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb66ac50e, "device_get_ethdev_address" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x219f96ce, "register_netdev" },
	{ 0x669c413b, "_dev_err" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0xc4f8efb6, "eth_type_trans" },
	{ 0x50d00458, "netif_rx" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrochip,enc28j60");
MODULE_ALIAS("of:N*T*Cmicrochip,enc28j60C*");

MODULE_INFO(srcversion, "2601FA8F44F1DCED36DACAB");
