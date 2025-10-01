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
	{ 0x4258fad8, "usbip_pack_pdu" },
	{ 0x3b455f4, "usbip_start_eh" },
	{ 0x3f2f9d6e, "usb_hcd_resume_root_hub" },
	{ 0x2337f455, "usb_hcd_unlink_urb_from_ep" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0xd2ecdcb9, "usbip_recv_xbuff" },
	{ 0x37a0cba, "kfree" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7ef885d0, "platform_bus" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x1d0af1d5, "usbip_recv" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x6dc233e6, "usbip_dump_urb" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x9bdd841f, "usb_hcd_check_unlink_urb" },
	{ 0x6751c2d0, "usbip_pad_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xae8b5a29, "kthread_stop_put" },
	{ 0xfc3471ef, "usbip_recv_iso" },
	{ 0xacceb7d8, "fput" },
	{ 0x669c413b, "_dev_err" },
	{ 0x685bb4f9, "sysfs_remove_link" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x23e91bcc, "platform_device_unregister" },
	{ 0xb1ec03d, "dev_attr_usbip_debug" },
	{ 0xf6ae260e, "usbip_stop_eh" },
	{ 0xa3e70c7e, "kernel_sock_shutdown" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xed85cddf, "sysfs_create_group" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x348d26e6, "usb_hcd_link_urb_to_ep" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xdcb764ad, "memset" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0x31817c1, "usb_hcd_is_primary_hcd" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf34acbf4, "usbip_event_add" },
	{ 0x7a26739c, "usb_put_hcd" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0x374b3c83, "sysfs_remove_group" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdcbfa77, "platform_device_register_full" },
	{ 0x4eb28c03, "usb_hcd_giveback_urb" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x23943b9d, "usbip_alloc_iso_desc_pdu" },
	{ 0x83846a7a, "usb_hcd_poll_rh_status" },
	{ 0xb9f848a2, "usb_create_hcd" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x601678ef, "usb_remove_hcd" },
	{ 0x349cba85, "strchr" },
	{ 0xd444d9da, "usb_add_hcd" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x33e54082, "sockfd_lookup" },
	{ 0x68a638e7, "kernel_sendmsg" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0x742cb52, "usb_create_shared_hcd" },
	{ 0xa05a6e64, "usbip_event_happened" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "usbip-core");


MODULE_INFO(srcversion, "0407BF91A691435C2FE8C2F");
