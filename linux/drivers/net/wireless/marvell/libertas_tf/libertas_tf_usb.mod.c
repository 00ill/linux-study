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
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0xc2451aee, "lbtf_bcn_sent" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xad25b856, "dev_kfree_skb_irq_reason" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x7fcac341, "usb_reset_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xafbccbbe, "lbtf_rx" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0xafda2b0e, "kernel_param_lock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xac23bfbb, "kernel_param_unlock" },
	{ 0x99cd0788, "param_ops_charp" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0xdd0330f9, "lbtf_remove_card" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xd246912, "lbtf_add_card" },
	{ 0x5efb028d, "lbtf_send_tx_feedback" },
	{ 0x651451fb, "lbtf_cmd_response_rx" },
	{ 0x302ccfa1, "lbtf_cmd_copyback" },
	{ 0xf9d83729, "__lbtf_cmd" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "libertas_tf");

MODULE_ALIAS("usb:v1286p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A3p8388d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "18AAF8F527DB7BFDA80105D");
