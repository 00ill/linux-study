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
	{ 0xefdad58e, "ppp_unregister_compressor" },
	{ 0x2eb04ee3, "ppp_register_compressor" },
	{ 0x122c3a7e, "_printk" },
	{ 0x424d3620, "zlib_inflateIncomp" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbb0540aa, "zlib_inflateReset" },
	{ 0xf2c43f3f, "zlib_deflate" },
	{ 0x6aeefac4, "zlib_deflateReset" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xe9f7149c, "zlib_deflate_workspacesize" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x5a0b73d0, "zlib_deflateInit2" },
	{ 0xc890c008, "zlib_deflateEnd" },
	{ 0x999e8297, "vfree" },
	{ 0x37a0cba, "kfree" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ppp_generic");


MODULE_INFO(srcversion, "C111F7D4727AD246DF5F530");
