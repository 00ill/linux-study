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
	{ 0x2002cbd1, "misc_register" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xe2964344, "__wake_up" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3dfcc0fd, "input_ff_flush" },
	{ 0x94090688, "misc_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xb727b479, "input_free_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xa6257a2f, "complete" },
	{ 0x32a0c53, "input_unregister_device" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe0ff878f, "stream_open" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xdcb764ad, "memset" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x72731ed4, "input_alloc_absinfo" },
	{ 0x122c3a7e, "_printk" },
	{ 0x99c44b73, "input_allocate_device" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xacb7f06d, "input_set_timestamp" },
	{ 0x41cc93f6, "input_event" },
	{ 0xe233762a, "input_event_from_user" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xf7455c16, "input_event_to_user" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x41482d8b, "strndup_user" },
	{ 0x4ac7587f, "input_ff_create" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x9fc2f428, "input_ff_destroy" },
	{ 0x5a02514b, "input_mt_init_slots" },
	{ 0x98cf60b3, "strlen" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E5246FAA20734BCE95DF0BA");
