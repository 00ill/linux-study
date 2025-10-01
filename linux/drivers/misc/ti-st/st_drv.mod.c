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

KSYMTAB_FUNC(st_register, "_gpl", "");
KSYMTAB_FUNC(st_unregister, "_gpl", "");

SYMBOL_CRC(st_register, 0xd31fa531, "_gpl");
SYMBOL_CRC(st_unregister, 0x6a33a85e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x5905b725, "tty_register_ldisc" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x74e0bd7f, "gpiod_set_raw_value_cansleep" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0xfe990052, "gpio_free" },
	{ 0xad25b856, "dev_kfree_skb_irq_reason" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc87f15e8, "tty_write_room" },
	{ 0x72a69b73, "stop_tty" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x304e7bbf, "sysfs_notify" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9d5d1f02, "tty_driver_flush_buffer" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x3a264d4a, "gpiod_direction_output_raw" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0xdd2738be, "tty_ldisc_flush" },
	{ 0xed85cddf, "sysfs_create_group" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x83fc2de9, "tty_unregister_ldisc" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x374b3c83, "sysfs_remove_group" },
	{ 0x661256ad, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x44056010, "gpio_to_desc" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x10139ad8, "single_release" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x71c90ddc, "single_open" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1163BB003222AF04891600B");
