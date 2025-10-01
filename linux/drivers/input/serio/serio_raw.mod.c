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
	{ 0x3d2deda3, "__serio_register_driver" },
	{ 0x8d9bb4d2, "kill_fasync" },
	{ 0xe2964344, "__wake_up" },
	{ 0xb06eee1f, "fasync_helper" },
	{ 0x429ac205, "serio_unregister_driver" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x99ed6ef6, "get_device" },
	{ 0x36bb6003, "serio_open" },
	{ 0x6d16c104, "mutex_lock_killable" },
	{ 0x2002cbd1, "misc_register" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0x1f2d1566, "serio_close" },
	{ 0x36dc6ece, "put_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x94090688, "misc_deregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x295427ca, "noop_llseek" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "serio");

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty06pr*id*ex*");

MODULE_INFO(srcversion, "63EE29A8D2BAAFFE3FC0D6A");
