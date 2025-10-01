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
	{ 0xd4f784c4, "eth_mac_addr" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0xbe2f7a74, "serdev_device_set_baudrate" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x385fa099, "unregister_netdev" },
	{ 0xb8b3d0cc, "serdev_device_set_flow_control" },
	{ 0x9bf8881e, "dev_trans_start" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd30c3a4c, "serdev_device_open" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0x87e7c8e4, "netdev_warn" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xc4f8efb6, "eth_type_trans" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x41da0375, "qcafrm_create_header" },
	{ 0x669c413b, "_dev_err" },
	{ 0x85ccf09c, "of_get_ethdev_address" },
	{ 0x219f96ce, "register_netdev" },
	{ 0x92893115, "driver_unregister" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x62543cd7, "__serdev_device_driver_register" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0xb28a9ad, "qcafrm_create_footer" },
	{ 0xdcb764ad, "memset" },
	{ 0x50d00458, "netif_rx" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0xf0d3c14b, "serdev_device_write_buf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4e3070d4, "qcafrm_fsm_decode" },
	{ 0x9db46ab2, "serdev_device_close" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xffc50605, "netif_carrier_on" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x67bbcda, "netdev_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "qca_7k_common");

MODULE_ALIAS("of:N*T*Cqca,qca7000");
MODULE_ALIAS("of:N*T*Cqca,qca7000C*");

MODULE_INFO(srcversion, "3D703DE7D16093129438B58");
