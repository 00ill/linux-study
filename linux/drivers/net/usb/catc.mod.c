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
	{ 0x385fa099, "unregister_netdev" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x669c413b, "_dev_err" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xffc50605, "netif_carrier_on" },
	{ 0x828a01bc, "netif_carrier_off" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4367c3a1, "skb_put" },
	{ 0xc4f8efb6, "eth_type_trans" },
	{ 0x50d00458, "netif_rx" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x3cf8929c, "usb_unlink_urb" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0x204346f0, "alloc_etherdev_mqs" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0x122c3a7e, "_printk" },
	{ 0x219f96ce, "register_netdev" },
	{ 0xd4f784c4, "eth_mac_addr" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0x4295cec9, "ethtool_op_get_link" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0423p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0423p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08D1p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CF8732C2F4D6F09FDC84673");
