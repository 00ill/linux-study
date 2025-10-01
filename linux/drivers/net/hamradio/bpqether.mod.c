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
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1a6ab775, "init_net" },
	{ 0x9b06f762, "proc_create_seq_private" },
	{ 0x1db41cf8, "dev_add_pack" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x122c3a7e, "_printk" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0x42154287, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xb53675e6, "seq_write" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x33b58322, "skb_push" },
	{ 0x50d00458, "netif_rx" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x341d7aad, "__dev_queue_xmit" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0xf0b8a1e8, "ax25_ip_xmit" },
	{ 0x8bff47bb, "dev_remove_pack" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa0e24b52, "remove_proc_entry" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x35decc18, "unregister_netdevice_queue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xb67fb8b4, "alloc_netdev_mqs" },
	{ 0xdcb764ad, "memset" },
	{ 0xcf015fa5, "register_netdevice" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x5a921311, "strncmp" },
	{ 0x3958a712, "dev_close" },
	{ 0xc6cbbc89, "capable" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "CAD7C0E8E749540C57DFD07");
