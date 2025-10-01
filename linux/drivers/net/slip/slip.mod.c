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
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x385fa099, "unregister_netdev" },
	{ 0x122c3a7e, "_printk" },
	{ 0xc83c3616, "tty_hangup" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0x9bf8881e, "dev_trans_start" },
	{ 0x18eadd76, "tty_chars_in_buffer" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xdcdc0040, "slhc_compress" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x83fc2de9, "tty_unregister_ldisc" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x5905b725, "tty_register_ldisc" },
	{ 0x43f9ebc8, "slhc_remember" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x4829a47e, "memcpy" },
	{ 0x50d00458, "netif_rx" },
	{ 0xf36f42a9, "slhc_uncompress" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2a928918, "slhc_free" },
	{ 0x98cf60b3, "strlen" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x60e714f9, "tty_mode_ioctl" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x3958a712, "dev_close" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb67fb8b4, "alloc_netdev_mqs" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x15f90688, "slhc_init" },
	{ 0xcf015fa5, "register_netdevice" },
	{ 0x24d273d1, "add_timer" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "slhc");


MODULE_INFO(srcversion, "44C7B9E1CE31DE3119EA88C");
