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
	{ 0xd8f2fce2, "usb_free_coherent" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x385fa099, "unregister_netdev" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x828a01bc, "netif_carrier_off" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xffc50605, "netif_carrier_on" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0x669c413b, "_dev_err" },
	{ 0x3cf8929c, "usb_unlink_urb" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x204346f0, "alloc_etherdev_mqs" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xc485eb96, "usb_altnum_to_altsetting" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x98434f46, "usb_alloc_coherent" },
	{ 0x219f96ce, "register_netdev" },
	{ 0x649550d5, "netif_tx_stop_all_queues" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc4f8efb6, "eth_type_trans" },
	{ 0x50d00458, "netif_rx" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x56470118, "__warn_printk" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFiscFDip01in*");

MODULE_INFO(srcversion, "BC06913CCC4335B633B6DEC");
