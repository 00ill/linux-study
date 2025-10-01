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
	{ 0xa728742c, "usb_register_driver" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4367c3a1, "skb_put" },
	{ 0xc4f8efb6, "eth_type_trans" },
	{ 0x50d00458, "netif_rx" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xbb8ce2ef, "netif_device_detach" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x3cf8929c, "usb_unlink_urb" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xad25b856, "dev_kfree_skb_irq_reason" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x385fa099, "unregister_netdev" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x828a01bc, "netif_carrier_off" },
	{ 0x669c413b, "_dev_err" },
	{ 0xffc50605, "netif_carrier_on" },
	{ 0x64707a9c, "netif_device_attach" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0x441636cf, "usb_control_msg_send" },
	{ 0x554f4d66, "usb_control_msg_recv" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x204346f0, "alloc_etherdev_mqs" },
	{ 0x20b512e9, "usb_check_bulk_endpoints" },
	{ 0x55c62378, "usb_check_int_endpoints" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xd3468e06, "netdev_notice" },
	{ 0x219f96ce, "register_netdev" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0x4295cec9, "ethtool_op_get_link" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3980p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p401Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p401Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "145F3F2F31E1D12D9FA99D3");
