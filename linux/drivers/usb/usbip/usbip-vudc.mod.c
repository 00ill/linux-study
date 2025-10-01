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
	{ 0x56e83a64, "platform_device_put" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x4258fad8, "usbip_pack_pdu" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x3b455f4, "usbip_start_eh" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd2ecdcb9, "usbip_recv_xbuff" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x89bf9dba, "usb_ep_set_maxpacket_limit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6b7fa5ce, "usb_add_gadget_udc" },
	{ 0x1d0af1d5, "usbip_recv" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xae8b5a29, "kthread_stop_put" },
	{ 0xfc3471ef, "usbip_recv_iso" },
	{ 0xacceb7d8, "fput" },
	{ 0x669c413b, "_dev_err" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf6ae260e, "usbip_stop_eh" },
	{ 0xa3e70c7e, "kernel_sock_shutdown" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xcc3bfc6c, "platform_device_add" },
	{ 0x25dfac11, "platform_device_alloc" },
	{ 0x45f1a944, "platform_device_del" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd757491c, "usb_gadget_udc_reset" },
	{ 0xdcb764ad, "memset" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf34acbf4, "usbip_event_add" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x2bbc8df2, "usb_gadget_giveback_request" },
	{ 0xe467d197, "usb_del_gadget_udc" },
	{ 0x23943b9d, "usbip_alloc_iso_desc_pdu" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x33e54082, "sockfd_lookup" },
	{ 0x68a638e7, "kernel_sendmsg" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0xa05a6e64, "usbip_event_happened" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "usbip-core");


MODULE_INFO(srcversion, "C928288A2B0D81A70C21961");
