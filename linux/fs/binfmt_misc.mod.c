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
	{ 0x11089ac7, "_ctype" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x98cf60b3, "strlen" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xdfa7fecd, "simple_unlink" },
	{ 0xc7a7b94f, "d_delete" },
	{ 0xdbd3c921, "dput" },
	{ 0x969edd2c, "register_filesystem" },
	{ 0x2b21d1cd, "__register_binfmt" },
	{ 0x4fc7b40c, "unregister_binfmt" },
	{ 0x3d426ee8, "unregister_filesystem" },
	{ 0xb1bc52ac, "simple_fill_super" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x349cba85, "strchr" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x64bbc288, "string_unescape" },
	{ 0xe0d9b12c, "override_creds" },
	{ 0xb46315f6, "open_exec" },
	{ 0x73f7aef, "revert_creds" },
	{ 0x57bc19d2, "down_write" },
	{ 0xc4246312, "lookup_one_len" },
	{ 0xce807a25, "up_write" },
	{ 0x25997ee3, "filp_close" },
	{ 0xc232a2b6, "new_inode" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x1e4b2fa6, "simple_inode_init_ts" },
	{ 0x36f038d8, "d_instantiate" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x122c3a7e, "_printk" },
	{ 0xc61f657b, "init_binfmt_misc" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x9f984513, "strrchr" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x5591584f, "copy_string_kernel" },
	{ 0x1d3a2d00, "bprm_change_interp" },
	{ 0x1e7e015c, "dentry_open" },
	{ 0x3ad6f222, "remove_arg_zero" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x758c67eb, "__put_user_ns" },
	{ 0x3c602fc7, "get_tree_keyed" },
	{ 0xf1b92e1c, "clear_inode" },
	{ 0x3fea8e91, "simple_statfs" },
	{ 0x40d6ec8a, "default_llseek" },
	{ 0x295427ca, "noop_llseek" },
	{ 0x4d036e93, "kill_litter_super" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "02459106C8A5F98908EFAEB");
