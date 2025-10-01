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
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x70b0605f, "usb_anchor_urb" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x669c413b, "_dev_err" },
	{ 0x29c998f4, "usb_unanchor_urb" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe228da49, "usb_ifnum_to_if" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x554f4d66, "usb_control_msg_recv" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xfd29cfd5, "input_device_enabled" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x41cc93f6, "input_event" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0xd8f2fce2, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0xe3dcebe7, "led_classdev_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x32a0c53, "input_unregister_device" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x99c44b73, "input_allocate_device" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0x6a35ed2, "input_ff_create_memless" },
	{ 0xb727b479, "input_free_device" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x37c9d5fc, "led_classdev_register_ext" },
	{ 0x7ec8fd19, "led_set_brightness" },
	{ 0x9fc2f428, "input_ff_destroy" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x98434f46, "usb_alloc_coherent" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic58isc42ip00in*");
MODULE_ALIAS("usb:v0079p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0079p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v03EBp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v03EBp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v03F0p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v03F0p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v03F0p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v044Fp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v044Fp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v044Fp*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v045Ep*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v045Ep*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v045Ep*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v046Dp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v046Dp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0502p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0502p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v056Ep*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v056Ep*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v06A3p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v06A3p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0738p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0738p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0738p4540d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0738p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v07FFp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v07FFp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v0C12p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0C12p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0DB0p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0DB0p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0E6Fp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0E6Fp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0E6Fp*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v0F0Dp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0F0Dp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0F0Dp*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v1038p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1038p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v10F5p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v11C9p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v11C9p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v11FFp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v11FFp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1209p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1209p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v12ABp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v12ABp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1430p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1430p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v146Bp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v146Bp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1532p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1532p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1532p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v15E4p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v15E4p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v162Ep*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v162Ep*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1689p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1689p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v17EFp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v17EFp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1949p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1949p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1A86p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1A86p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1BADp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1BADp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1EE9p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1EE9p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v20D6p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v20D6p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v20D6p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v2345p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v2345p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v24C6p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v24C6p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v24C6p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v2563p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v2563p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v260Dp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v260Dp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v294Bp*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v2993p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v2993p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v2C22p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v2C22p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v2DC8p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v2DC8p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v2DC8p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v2E24p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v2F24p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v2F24p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v2E95p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v31E3p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v31E3p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v3285p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v3285p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v3285p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v3537p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v3537p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v3537p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v413Dp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v413Dp*d*dc*dsc*dp*icFFisc5Dip81in*");

MODULE_INFO(srcversion, "A40E3A72A4D94628B0CD7D9");
