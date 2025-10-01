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
	{ 0xea3dad36, "file_bdev" },
	{ 0x1226b0f1, "sync_blockdev" },
	{ 0xdcb764ad, "memset" },
	{ 0xa916b694, "strnlen" },
	{ 0xe914e41e, "strcpy" },
	{ 0x9f984513, "strrchr" },
	{ 0x85df9b6c, "strsep" },
	{ 0x98cf60b3, "strlen" },
	{ 0x122c3a7e, "_printk" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xd39ab6a7, "bdev_file_open_by_path" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x85c150e8, "mtd_device_parse_register" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x37a0cba, "kfree" },
	{ 0x590b336, "invalidate_mapping_pages" },
	{ 0x78269153, "bdev_fput" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc02433fb, "read_cache_page" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xd9aab56f, "__folio_put" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4b52a423, "set_page_dirty" },
	{ 0x3322d007, "unlock_page" },
	{ 0xb177dac2, "balance_dirty_pages_ratelimited" },
	{ 0xf563f1e6, "__folio_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa1171806, "mtd_device_unregister" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "5D3CBBDF4482B3ED14AA325");
