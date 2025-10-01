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
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0xdcb764ad, "memset" },
	{ 0x122c3a7e, "_printk" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x47fa5eea, "usb_autopm_get_interface" },
	{ 0x6a336a2e, "usb_autopm_put_interface" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x669c413b, "_dev_err" },
	{ 0x41cc93f6, "input_event" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x99c44b73, "input_allocate_device" },
	{ 0xb727b479, "input_free_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x98434f46, "usb_alloc_coherent" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x32a0c53, "input_unregister_device" },
	{ 0xd8f2fce2, "usb_free_coherent" },
	{ 0xf9a482f9, "msleep" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0EEFp0001d*dc*dsc*dp*ic03isc*ip*in*");
MODULE_ALIAS("usb:v0EEFp0002d*dc*dsc*dp*ic03isc*ip*in*");
MODULE_ALIAS("usb:v3823p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3823p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0123p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EEFp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EEFp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1234p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1234p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v134Cp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v134Cp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v134Cp0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v134Cp0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0596p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0403pF9E9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16E3pF9E9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1234p5678d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0637p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AFAp03E8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v255Ep0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v595Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6615p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6615p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1391p1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DFCp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08F2p007Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08F2p00CEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08F2p00F4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F92p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1AC7p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14C8p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0664p0309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0664p0306d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10F0p2002d*dc*dsc*dp*ic0Aisc00ip00in*");
MODULE_ALIAS("usb:v1870p0001d*dc*dsc*dp*ic0Aisc00ip00in*");
MODULE_ALIAS("usb:v04E7p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7374p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F2A0B73C8730DCCC013F13F");
