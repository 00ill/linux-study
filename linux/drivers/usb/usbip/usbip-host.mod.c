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
	{ 0x4258fad8, "usbip_pack_pdu" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x3b455f4, "usbip_start_eh" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xcca065c, "driver_remove_file" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x1aa40cff, "usb_hub_release_port" },
	{ 0xd2ecdcb9, "usbip_recv_xbuff" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe7de0a80, "usb_deregister_device_driver" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x87b55f30, "usb_clear_halt" },
	{ 0x1000e51, "schedule" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x7fcac341, "usb_reset_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x1d0af1d5, "usbip_recv" },
	{ 0xa916b694, "strnlen" },
	{ 0xa27b83c0, "driver_create_file" },
	{ 0x5e934fc7, "sgl_alloc" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x6dc233e6, "usbip_dump_urb" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xae8b5a29, "kthread_stop_put" },
	{ 0xfc3471ef, "usbip_recv_iso" },
	{ 0xacceb7d8, "fput" },
	{ 0x669c413b, "_dev_err" },
	{ 0xb1ec03d, "dev_attr_usbip_debug" },
	{ 0xf6ae260e, "usbip_stop_eh" },
	{ 0x7cf0ae3e, "device_attach" },
	{ 0xa3e70c7e, "kernel_sock_shutdown" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4a3c8253, "kmem_cache_free" },
	{ 0x8ec529a0, "usb_register_device_driver" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd87d7b3, "usb_lock_device_for_reset" },
	{ 0x4bfd454d, "usbip_in_eh" },
	{ 0xdcb764ad, "memset" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0x6f61551b, "kmem_cache_alloc_noprof" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8450a53a, "__kmem_cache_create_args" },
	{ 0xf34acbf4, "usbip_event_add" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0x3cf8929c, "usb_unlink_urb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x994bb18e, "usb_hub_claim_port" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x23943b9d, "usbip_alloc_iso_desc_pdu" },
	{ 0x1b0238e7, "usb_set_configuration" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x33e54082, "sockfd_lookup" },
	{ 0x68a638e7, "kernel_sendmsg" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0x7f62eaa4, "sgl_free" },
	{ 0xa05a6e64, "usbip_event_happened" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x656f612b, "kmem_cache_destroy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "usbip-core");


MODULE_INFO(srcversion, "79E98CC6C68183D7B84A7FF");
