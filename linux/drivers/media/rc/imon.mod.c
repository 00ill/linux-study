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
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x122c3a7e, "_printk" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xa6257a2f, "complete" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x98cf60b3, "strlen" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x41cc93f6, "input_event" },
	{ 0x28a823ab, "usb_find_interface" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xdcb764ad, "memset" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0xe228da49, "usb_ifnum_to_if" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x669c413b, "_dev_err" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x99c44b73, "input_allocate_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x419a348c, "rc_allocate_device" },
	{ 0x661f928c, "rc_register_device" },
	{ 0xed85cddf, "sysfs_create_group" },
	{ 0x2cb2056d, "usb_register_dev" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0xb727b479, "input_free_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x32a0c53, "input_unregister_device" },
	{ 0x5dc3d1bc, "rc_free_device" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc6e41c6e, "rc_g_keycode_from_table" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb3b75fb9, "rc_keyup" },
	{ 0x9128f4c2, "rc_keydown" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x374b3c83, "sysfs_remove_group" },
	{ 0xf399eccc, "rc_unregister_device" },
	{ 0x3d38f36, "usb_deregister_dev" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x295427ca, "noop_llseek" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v15C2pFFDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0038d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0046d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "78AB7B82A85E58F9B543776");
