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
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xbf2a6b2b, "dm_register_target" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xccbcff9c, "md_wakeup_thread" },
	{ 0xa192fb4d, "md_frozen_sync_thread" },
	{ 0x548e781d, "mddev_unlock" },
	{ 0x9bcab664, "md_idle_sync_thread" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x122c3a7e, "_printk" },
	{ 0x137e5a59, "sync_page_io" },
	{ 0xd3738176, "md_error" },
	{ 0x7104a830, "md_update_sb" },
	{ 0xd822438d, "md_stop_writes" },
	{ 0xea543860, "mddev_suspend" },
	{ 0xfc4d295, "md_handle_request" },
	{ 0xc3d83324, "md_rdev_clear" },
	{ 0x929ffdc, "dm_put_device" },
	{ 0x500e4338, "mddev_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf06b90b2, "md_stop" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x184aa1ca, "dm_unregister_target" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa6c4af5e, "md_unfrozen_sync_thread" },
	{ 0xdd3dc474, "mddev_resume" },
	{ 0x9386f362, "dm_table_get_md" },
	{ 0xe7bc6725, "dm_disk" },
	{ 0xfb0d728d, "set_capacity_and_notify" },
	{ 0x168b1107, "dm_table_event" },
	{ 0x96848186, "scnprintf" },
	{ 0x7d27e504, "dm_shift_arg" },
	{ 0x39c74235, "dm_read_arg_group" },
	{ 0x669c191b, "dm_consume_args" },
	{ 0x56bcf7b, "dm_read_arg" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1a379608, "mddev_init" },
	{ 0x86b02a0c, "md_rdev_init" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xb17fa538, "dm_set_target_max_io_len" },
	{ 0x9eb216a8, "dm_table_get_mode" },
	{ 0x6c624142, "dm_get_device" },
	{ 0xa26dbdbf, "alloc_pages_noprof" },
	{ 0xacd26e22, "md_run" },
	{ 0x5997daed, "md_start" },
	{ 0xf829ce5a, "raid5_set_cache_size" },
	{ 0x3566cb69, "r5c_journal_mode_set" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dm-mod,md-mod,raid456");


MODULE_INFO(srcversion, "4B5220FED6FEF9C42068DA3");
