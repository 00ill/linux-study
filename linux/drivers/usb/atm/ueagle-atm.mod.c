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
	{ 0xa728742c, "usb_register_driver" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4cb4bf6, "usbatm_usb_disconnect" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x669c413b, "_dev_err" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe228da49, "usb_ifnum_to_if" },
	{ 0xf6491f8c, "usb_driver_claim_interface" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0x4df02057, "crc32_be" },
	{ 0xafda2b0e, "kernel_param_lock" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xac23bfbb, "kernel_param_unlock" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x5a921311, "strncmp" },
	{ 0x7fcac341, "usb_reset_device" },
	{ 0xa18fc3d2, "usbatm_usb_probe" },
	{ 0xb9fe9192, "atm_dev_signal_change" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x8bbcc68f, "request_firmware_nowait" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x90548a4e, "usb_string" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xe2964344, "__wake_up" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x99cd0788, "param_ops_charp" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "usbatm,atm");

MODULE_ALIAS("usb:v1110p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p900Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3351d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3352d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3353d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3362d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3363d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00FAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F7d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F8129CE057C6C61D57F29ED");
