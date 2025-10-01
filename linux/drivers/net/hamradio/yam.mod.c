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
	{ 0x122c3a7e, "_printk" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb67fb8b4, "alloc_netdev_mqs" },
	{ 0x219f96ce, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x24d273d1, "add_timer" },
	{ 0x1a6ab775, "init_net" },
	{ 0x9b06f762, "proc_create_seq_private" },
	{ 0x385fa099, "unregister_netdev" },
	{ 0x24b49baa, "free_netdev" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0xf0b8a1e8, "ax25_ip_xmit" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0x42154287, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0xa0e24b52, "remove_proc_entry" },
	{ 0xdcb764ad, "memset" },
	{ 0xdcbfa77, "platform_device_register_full" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x23e91bcc, "platform_device_unregister" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x9858f364, "get_random_u8" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x50d00458, "netif_rx" },
	{ 0x85bd1608, "__request_region" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "EECD42A9D36A257F9E88560");
