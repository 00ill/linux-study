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
	{ 0xead77811, "crypto_register_alg" },
	{ 0xe61fc5d8, "crypto_register_scomp" },
	{ 0xfd6e81ec, "crypto_unregister_alg" },
	{ 0xbb0540aa, "zlib_inflateReset" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6aeefac4, "zlib_deflateReset" },
	{ 0xf2c43f3f, "zlib_deflate" },
	{ 0xe9f7149c, "zlib_deflate_workspacesize" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x5a0b73d0, "zlib_deflateInit2" },
	{ 0x999e8297, "vfree" },
	{ 0x27f17744, "crypto_unregister_scomp" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x37a0cba, "kfree" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0xc890c008, "zlib_deflateEnd" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BCD99A28D8F0BAD0048AD03");
