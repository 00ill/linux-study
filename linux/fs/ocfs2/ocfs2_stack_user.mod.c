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
	{ 0x94090688, "misc_deregister" },
	{ 0xa6257a2f, "complete" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xcd224e1d, "dlm_new_lockspace" },
	{ 0x4b62826c, "dlm_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0xcf9f3328, "dlm_release_lockspace" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x41b9859d, "dlm_posix_unlock" },
	{ 0xd0c05159, "emergency_restart" },
	{ 0x80a6a30, "ocfs2_stack_glue_register" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c6e20, "ocfs2_stack_glue_unregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5a921311, "strncmp" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x40d6ec8a, "default_llseek" },
	{ 0xdcb764ad, "memset" },
	{ 0x2002cbd1, "misc_register" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe319c939, "dlm_posix_get" },
	{ 0x8a6c5f1b, "dlm_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9a6bd845, "dlm_posix_cancel" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb98121bd, "dlm_posix_lock" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x98cf60b3, "strlen" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dlm,ocfs2_stackglue");


MODULE_INFO(srcversion, "F33BE420FDA4400C52AEFD1");
