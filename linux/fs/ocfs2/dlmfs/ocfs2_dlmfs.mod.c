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
	{ 0x831d4819, "inode_init_owner" },
	{ 0x532df94a, "setattr_prepare" },
	{ 0x7fa143dc, "simple_rmdir" },
	{ 0x36f038d8, "d_instantiate" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xf1b92e1c, "clear_inode" },
	{ 0xc232a2b6, "new_inode" },
	{ 0xcfd3fc5, "ocfs2_cluster_connect_agnostic" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3d426ee8, "unregister_filesystem" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3fea8e91, "simple_statfs" },
	{ 0x2e237b28, "d_make_root" },
	{ 0xcafdd707, "ocfs2_dlm_lock_status" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4710d394, "iput" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x969edd2c, "register_filesystem" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x1e4b2fa6, "simple_inode_init_ts" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x99fab7dc, "simple_dir_operations" },
	{ 0xdfa7fecd, "simple_unlink" },
	{ 0xd344e4ee, "ocfs2_stack_glue_set_max_proto_version" },
	{ 0x6a0c3847, "__mlog_printk" },
	{ 0x126ab7cc, "simple_getattr" },
	{ 0x7556061c, "inode_init_once" },
	{ 0xaf969565, "ocfs2_dlm_lock" },
	{ 0x1475f64b, "ocfs2_dlm_lvb_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc5196999, "ocfs2_dlm_unlock" },
	{ 0xf6094d47, "setattr_copy" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xbbc3a8e2, "kmem_cache_alloc_lru_noprof" },
	{ 0x4a3c8253, "kmem_cache_free" },
	{ 0x40d6ec8a, "default_llseek" },
	{ 0x4d036e93, "kill_litter_super" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8450a53a, "__kmem_cache_create_args" },
	{ 0x2f5c0a3c, "mount_nodev" },
	{ 0x910c8d15, "igrab" },
	{ 0x76f40744, "ocfs2_dlm_lvb" },
	{ 0x44255a01, "inc_nlink" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x1b52d189, "generic_delete_inode" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x45c99623, "simple_lookup" },
	{ 0x9507547f, "ocfs2_cluster_disconnect" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x89d2ebad, "__mark_inode_dirty" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x656f612b, "kmem_cache_destroy" },
	{ 0xbc314156, "nop_mnt_idmap" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ocfs2_stackglue,ocfs2_nodemanager");


MODULE_INFO(srcversion, "12CB87263ECE83CF01B6B66");
