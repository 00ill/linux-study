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
	{ 0x8d73278e, "hex_asc_upper" },
	{ 0x73507016, "skb_tstamp_tx" },
	{ 0x5905b725, "tty_register_ldisc" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x60e714f9, "tty_mode_ioctl" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x96848186, "scnprintf" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x87e7c8e4, "netdev_warn" },
	{ 0xe2964344, "__wake_up" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xac13b56d, "open_candev" },
	{ 0x8502868b, "netdev_err" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xab815fa5, "alloc_can_skb" },
	{ 0xa00da1db, "unregister_candev" },
	{ 0xad8e2b22, "can_change_state" },
	{ 0xc6cbbc89, "capable" },
	{ 0x93428159, "can_change_mtu" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x26e4dad9, "can_dropped_invalid_skb" },
	{ 0x573ed21e, "free_candev" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xb99649c9, "alloc_candev_mqs" },
	{ 0xc3665eed, "netdev_printk" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0xa99e73f3, "close_candev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x50d00458, "netif_rx" },
	{ 0x17ada51d, "can_bus_off" },
	{ 0x83fc2de9, "tty_unregister_ldisc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf4450a48, "alloc_can_err_skb" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xabd0dc8b, "skb_clone_tx_timestamp" },
	{ 0x47d99c63, "register_candev" },
	{ 0xd14e8222, "ethtool_op_get_ts_info" },
	{ 0x67bbcda, "netdev_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "7C22D76E18302AA50947214");
