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
	{ 0x9b71c21b, "register_quota_format" },
	{ 0x668b19a1, "down_read" },
	{ 0x8359a555, "qtree_get_next_id" },
	{ 0x53b954a2, "up_read" },
	{ 0x57bc19d2, "down_write" },
	{ 0xd34fc51d, "qtree_release_dquot" },
	{ 0xce807a25, "up_write" },
	{ 0x40e829e7, "qtree_write_dquot" },
	{ 0x7d2d949e, "qtree_read_dquot" },
	{ 0x37a0cba, "kfree" },
	{ 0x2bb6099e, "dq_data_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb349246, "__quota_error" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x771f0565, "init_user_ns" },
	{ 0x7ce18c9f, "from_kqid" },
	{ 0x1946fd23, "qtree_entry_unused" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb6cedaed, "unregister_quota_format" },
	{ 0x8966d145, "make_kprojid" },
	{ 0x8d55bb8a, "qid_eq" },
	{ 0x796c3d7, "make_kgid" },
	{ 0x8d732959, "make_kuid" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "quota_tree");


MODULE_INFO(srcversion, "9EB1A393F3266719DC983C8");
