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
	{ 0xe00a776c, "lbs_notify_command_response" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xad25b856, "dev_kfree_skb_irq_reason" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x57177e62, "lbs_add_card" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0xf0966828, "lbs_host_to_card_done" },
	{ 0x7fcac341, "usb_reset_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0xb8825ddc, "lbs_process_rxed_packet" },
	{ 0xfdc7cc13, "lbs_remove_card" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x900967f0, "lbs_suspend" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xcf877b1b, "lbs_cmd_copyback" },
	{ 0x59eb97f9, "lbs_get_firmware_async" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x62bad9a1, "lbs_send_tx_feedback" },
	{ 0xf97f0d2f, "lbs_queue_event" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6d5cae35, "lbs_start_card" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa145cf, "__lbs_cmd" },
	{ 0x80a97487, "lbs_stop_card" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xe7cdc413, "lbs_resume" },
	{ 0xe15cdaa4, "lbs_host_sleep_cfg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x67bbcda, "netdev_info" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "libertas");

MODULE_ALIAS("usb:v1286p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A3p8388d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3E4ED3DA88A5DB6F5E48FDB");
