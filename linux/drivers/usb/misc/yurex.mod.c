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
	{ 0x37a0cba, "kfree" },
	{ 0xd8f2fce2, "usb_free_coherent" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0xc22550f5, "usb_put_intf" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0xb06eee1f, "fasync_helper" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8d9bb4d2, "kill_fasync" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x28a823ab, "usb_find_interface" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x122c3a7e, "_printk" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xdcb764ad, "memset" },
	{ 0x61b7b126, "simple_strtoull" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x2ad25d23, "usb_get_intf" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x98434f46, "usb_alloc_coherent" },
	{ 0x2cb2056d, "usb_register_dev" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x3d38f36, "usb_deregister_dev" },
	{ 0xf74654c, "usb_poison_urb" },
	{ 0x40d6ec8a, "default_llseek" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0C45p1010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E52B845A8D56D3E844E39E9");
