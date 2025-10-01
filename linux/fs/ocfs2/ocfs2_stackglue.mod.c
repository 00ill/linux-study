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

KSYMTAB_FUNC(ocfs2_stack_glue_register, "_gpl", "");
KSYMTAB_FUNC(ocfs2_stack_glue_unregister, "_gpl", "");
KSYMTAB_FUNC(ocfs2_stack_glue_set_max_proto_version, "_gpl", "");
KSYMTAB_FUNC(ocfs2_dlm_lock, "_gpl", "");
KSYMTAB_FUNC(ocfs2_dlm_unlock, "_gpl", "");
KSYMTAB_FUNC(ocfs2_dlm_lock_status, "_gpl", "");
KSYMTAB_FUNC(ocfs2_dlm_lvb_valid, "_gpl", "");
KSYMTAB_FUNC(ocfs2_dlm_lvb, "_gpl", "");
KSYMTAB_FUNC(ocfs2_dlm_dump_lksb, "_gpl", "");
KSYMTAB_FUNC(ocfs2_stack_supports_plocks, "_gpl", "");
KSYMTAB_FUNC(ocfs2_plock, "_gpl", "");
KSYMTAB_FUNC(ocfs2_cluster_connect, "_gpl", "");
KSYMTAB_FUNC(ocfs2_cluster_connect_agnostic, "_gpl", "");
KSYMTAB_FUNC(ocfs2_cluster_disconnect, "_gpl", "");
KSYMTAB_FUNC(ocfs2_cluster_hangup, "_gpl", "");
KSYMTAB_FUNC(ocfs2_cluster_this_node, "_gpl", "");
KSYMTAB_DATA(ocfs2_kset, "_gpl", "");

SYMBOL_CRC(ocfs2_stack_glue_register, 0x080a6a30, "_gpl");
SYMBOL_CRC(ocfs2_stack_glue_unregister, 0x0e2c6e20, "_gpl");
SYMBOL_CRC(ocfs2_stack_glue_set_max_proto_version, 0xd344e4ee, "_gpl");
SYMBOL_CRC(ocfs2_dlm_lock, 0xaf969565, "_gpl");
SYMBOL_CRC(ocfs2_dlm_unlock, 0xc5196999, "_gpl");
SYMBOL_CRC(ocfs2_dlm_lock_status, 0xcafdd707, "_gpl");
SYMBOL_CRC(ocfs2_dlm_lvb_valid, 0x1475f64b, "_gpl");
SYMBOL_CRC(ocfs2_dlm_lvb, 0x76f40744, "_gpl");
SYMBOL_CRC(ocfs2_dlm_dump_lksb, 0xd806a273, "_gpl");
SYMBOL_CRC(ocfs2_stack_supports_plocks, 0xbbc4ef97, "_gpl");
SYMBOL_CRC(ocfs2_plock, 0xf4e5e322, "_gpl");
SYMBOL_CRC(ocfs2_cluster_connect, 0xc9fae756, "_gpl");
SYMBOL_CRC(ocfs2_cluster_connect_agnostic, 0x0cfd3fc5, "_gpl");
SYMBOL_CRC(ocfs2_cluster_disconnect, 0x9507547f, "_gpl");
SYMBOL_CRC(ocfs2_cluster_hangup, 0x4d3af7fa, "_gpl");
SYMBOL_CRC(ocfs2_cluster_this_node, 0x0a726931, "_gpl");
SYMBOL_CRC(ocfs2_kset, 0xbfcd3924, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3aaa0000, "try_module_get" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xb6841069, "kset_unregister" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1693c4c3, "unregister_sysctl_table" },
	{ 0x42e52326, "fs_kobj" },
	{ 0xa916b694, "strnlen" },
	{ 0x9d9e8944, "module_put" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x1ed10558, "proc_dostring" },
	{ 0xa7eedcc4, "call_usermodehelper" },
	{ 0x5a921311, "strncmp" },
	{ 0xed85cddf, "sysfs_create_group" },
	{ 0x3bd45f5c, "register_sysctl_sz" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x67b68af, "kset_create_and_add" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DFC1A0C0CA5811AE3C8143A");
