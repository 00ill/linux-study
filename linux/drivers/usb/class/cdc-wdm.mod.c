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

KSYMTAB_FUNC(usb_cdc_wdm_register, "", "");

SYMBOL_CRC(usb_cdc_wdm_register, 0xb1246140, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x47fa5eea, "usb_autopm_get_interface" },
	{ 0x6a336a2e, "usb_autopm_put_interface" },
	{ 0x37a0cba, "kfree" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xe2964344, "__wake_up" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf74654c, "usb_poison_urb" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xd4d6b2da, "usb_unpoison_urb" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x2cb2056d, "usb_register_dev" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xdcb764ad, "memset" },
	{ 0x8d71d89, "cdc_parse_cdc_header" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3d38f36, "usb_deregister_dev" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x1000e51, "schedule" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x295427ca, "noop_llseek" },
	{ 0xf8ce1c00, "compat_ptr_ioctl" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc09ip*in*");

MODULE_INFO(srcversion, "A51F92FDCAF02EAC79F848D");
