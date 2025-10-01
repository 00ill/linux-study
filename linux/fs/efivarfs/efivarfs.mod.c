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
	{ 0x4336fcca, "ucs2_as_utf8" },
	{ 0x36f038d8, "d_instantiate" },
	{ 0x1fa48995, "efivar_supports_writes" },
	{ 0xf1b92e1c, "clear_inode" },
	{ 0xa336852c, "efivar_get_next_variable" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc232a2b6, "new_inode" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x3d426ee8, "unregister_filesystem" },
	{ 0x102392ff, "inode_set_flags" },
	{ 0x2e237b28, "d_make_root" },
	{ 0x16a99159, "always_delete_dentry" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4710d394, "iput" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0xee5240dc, "efivar_query_variable_info" },
	{ 0x9c86b9ab, "fileattr_fill_flags" },
	{ 0x5a3c9dbb, "efivar_get_variable" },
	{ 0x969edd2c, "register_filesystem" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0x1e4b2fa6, "simple_inode_init_ts" },
	{ 0x122c3a7e, "_printk" },
	{ 0x2303b915, "efivar_lock" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6bd88b5, "ucs2_strnlen" },
	{ 0x5407fc70, "d_alloc" },
	{ 0x99fab7dc, "simple_dir_operations" },
	{ 0x2877e81c, "fs_param_is_gid" },
	{ 0xb884caba, "efivar_ops_nh" },
	{ 0x7e4c3df5, "efi" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x5d809a68, "simple_open" },
	{ 0xc961bff7, "efivar_unlock" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x11089ac7, "_ctype" },
	{ 0x4d036e93, "kill_litter_super" },
	{ 0xc7a7b94f, "d_delete" },
	{ 0xe4151e2c, "from_kgid_munged" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x546f367f, "d_add" },
	{ 0x8caf9305, "uuid_is_valid" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x771f0565, "init_user_ns" },
	{ 0xecaf20b, "inode_set_ctime_current" },
	{ 0x44255a01, "inc_nlink" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xdbd3c921, "dput" },
	{ 0xb256be16, "efivar_is_available" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x1b52d189, "generic_delete_inode" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x45c99623, "simple_lookup" },
	{ 0x465e24ff, "ucs2_utf8size" },
	{ 0x74956b81, "__fs_parse" },
	{ 0x10d63cce, "from_kuid_munged" },
	{ 0xf933d9d0, "get_tree_single" },
	{ 0xdceb5362, "efi_status_to_err" },
	{ 0xefc77711, "efivar_set_variable_locked" },
	{ 0x98cf60b3, "strlen" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x7410aba2, "strreplace" },
	{ 0x80287426, "drop_nlink" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xd2677708, "fs_param_is_uid" },
	{ 0xd1363cc1, "ucs2_strsize" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "25B3CF3F144138790017CD5");
