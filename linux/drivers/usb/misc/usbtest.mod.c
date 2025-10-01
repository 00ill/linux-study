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
	{ 0x669c413b, "_dev_err" },
	{ 0x28683614, "usb_sg_cancel" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2f5c7a33, "usb_sg_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x25a6b5b4, "usb_sg_wait" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0xdcb764ad, "memset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0xa6257a2f, "complete" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3cf8929c, "usb_unlink_urb" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x98434f46, "usb_alloc_coherent" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0xd8f2fce2, "usb_free_coherent" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xf9a482f9, "msleep" },
	{ 0xddf6ad7a, "completion_done" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x55db554b, "usb_get_status" },
	{ 0x87b55f30, "usb_clear_halt" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xd06c797e, "usb_get_descriptor" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x15b9f3f1, "param_ops_ushort" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0547p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p0080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p8613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vFFF0pFFF0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9D2EA72FC7ADFD3EDF5B36A");
