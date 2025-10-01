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
	{ 0xb3238f5a, "generic_block_bmap" },
	{ 0x39819c60, "flush_dcache_page" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc445f9da, "fs_param_is_string" },
	{ 0x655430c0, "init_special_inode" },
	{ 0x3d426ee8, "unregister_filesystem" },
	{ 0x2e237b28, "d_make_root" },
	{ 0xcdc1a535, "sb_set_blocksize" },
	{ 0x6114f25f, "sync_filesystem" },
	{ 0x6426e1f, "d_splice_alias" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4710d394, "iput" },
	{ 0x42617734, "fs_param_is_enum" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x969edd2c, "register_filesystem" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0x5fad26bc, "fs_param_is_u32" },
	{ 0xfafd49dd, "kill_block_super" },
	{ 0x72828e95, "unlock_new_inode" },
	{ 0x122c3a7e, "_printk" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x81ffbcd3, "load_nls" },
	{ 0x8d732959, "make_kuid" },
	{ 0x6c736d6, "__free_pages" },
	{ 0xc7cc703, "bdev_getblk" },
	{ 0x2877e81c, "fs_param_is_gid" },
	{ 0x7556061c, "inode_init_once" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x597b28b0, "cdrom_read_tocentry" },
	{ 0x6e6cc78f, "__brelse" },
	{ 0xd7f22968, "inode_nohighmem" },
	{ 0x3322d007, "unlock_page" },
	{ 0x2397329, "generic_ro_fops" },
	{ 0xa07a37f0, "memchr" },
	{ 0xe2222eec, "__bh_read_batch" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0xcd4f84b9, "__wait_on_buffer" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb0b0b893, "set_nlink" },
	{ 0xbbc3a8e2, "kmem_cache_alloc_lru_noprof" },
	{ 0x4a3c8253, "kmem_cache_free" },
	{ 0x5a921311, "strncmp" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x142afcf3, "cdrom_multisession" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x1a859056, "d_obtain_alias" },
	{ 0xf59f6ee3, "__bread_gfp" },
	{ 0xa5972220, "folio_end_read" },
	{ 0x11089ac7, "_ctype" },
	{ 0x509ba5e3, "mpage_read_folio" },
	{ 0xdcb764ad, "memset" },
	{ 0x796c3d7, "make_kgid" },
	{ 0x8450a53a, "__kmem_cache_create_args" },
	{ 0xe4151e2c, "from_kgid_munged" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x999e8297, "vfree" },
	{ 0x3aac12c2, "generic_read_dir" },
	{ 0x1a4c46af, "page_symlink_inode_operations" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3728321d, "mpage_readahead" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0x771f0565, "init_user_ns" },
	{ 0xb53675e6, "seq_write" },
	{ 0xd9aab56f, "__folio_put" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x9f5561e2, "get_tree_bdev" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0xa26dbdbf, "alloc_pages_noprof" },
	{ 0x35d26903, "pagecache_get_page" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x74956b81, "__fs_parse" },
	{ 0x10d63cce, "from_kuid_munged" },
	{ 0xa28beffc, "d_parent_ino" },
	{ 0x641aeade, "iget5_locked" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xe9af6d33, "generic_file_llseek" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x2aaac682, "unload_nls" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x761e73bf, "sb_min_blocksize" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x3ba14837, "iget_failed" },
	{ 0xd2677708, "fs_param_is_uid" },
	{ 0x656f612b, "kmem_cache_destroy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "65BC4696B0750D34BBE5D46");
