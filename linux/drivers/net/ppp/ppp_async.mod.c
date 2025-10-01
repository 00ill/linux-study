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
	{ 0x7f03b6a9, "crc_ccitt_table" },
	{ 0x5905b725, "tty_register_ldisc" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeca35a76, "ppp_input" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x467885ff, "ppp_input_error" },
	{ 0xcf359a61, "ppp_output_wakeup" },
	{ 0x83fc2de9, "tty_unregister_ldisc" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xbd394d8, "tty_termios_baud_rate" },
	{ 0x95f89aaf, "ppp_register_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x13370417, "tty_unthrottle" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0xa6257a2f, "complete" },
	{ 0x6ad06fb5, "start_tty" },
	{ 0x72a69b73, "stop_tty" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xd8086e70, "ppp_unregister_channel" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0x8c866a5e, "ppp_unit_number" },
	{ 0x60e714f9, "tty_mode_ioctl" },
	{ 0x3fc14852, "ppp_channel_index" },
	{ 0x291ce00c, "n_tty_ioctl_helper" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "crc-ccitt,ppp_generic");


MODULE_INFO(srcversion, "B33A7F5C457911EEACF886C");
