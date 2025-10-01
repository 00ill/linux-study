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

KSYMTAB_FUNC(usbatm_usb_probe, "_gpl", "");
KSYMTAB_FUNC(usbatm_usb_disconnect, "_gpl", "");

SYMBOL_CRC(usbatm_usb_probe, 0xa18fc3d2, "_gpl");
SYMBOL_CRC(usbatm_usb_disconnect, 0x04cb4bf6, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x122c3a7e, "_printk" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd1dc9ca3, "atm_dev_register" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x59f57bed, "atm_dev_deregister" },
	{ 0x669c413b, "_dev_err" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xa6257a2f, "complete" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6008689f, "kthread_complete_and_exit" },
	{ 0x4df02057, "crc32_be" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x9da67049, "atm_charge" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0xdcb764ad, "memset" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x90548a4e, "usb_string" },
	{ 0x96848186, "scnprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x1bd3a117, "send_sig" },
	{ 0xbfdccc75, "vcc_release_async" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "7ED9A2974B192E08C649ACB");
