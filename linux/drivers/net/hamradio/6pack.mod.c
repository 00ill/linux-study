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
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5905b725, "tty_register_ldisc" },
	{ 0x122c3a7e, "_printk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0x42154287, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0x83fc2de9, "tty_unregister_ldisc" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x214a2a48, "netif_tx_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x44e53d74, "netif_tx_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x13370417, "tty_unthrottle" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xa6257a2f, "complete" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x50d00458, "netif_rx" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb67fb8b4, "alloc_netdev_mqs" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x219f96ce, "register_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x385fa099, "unregister_netdev" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xf0b8a1e8, "ax25_ip_xmit" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x98cf60b3, "strlen" },
	{ 0x60e714f9, "tty_mode_ioctl" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "3052113D178E391126FBBCC");
