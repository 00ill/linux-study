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
	{ 0xca1648d4, "zstd_decompress_dctx" },
	{ 0xafc6c68e, "zstd_is_error" },
	{ 0x6315c42c, "zstd_get_params" },
	{ 0xf2628676, "zstd_compress_cctx" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x999e8297, "vfree" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xbe6a8c96, "zstd_cctx_workspace_bound" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0xa84b15d, "zstd_init_cctx" },
	{ 0x27f17744, "crypto_unregister_scomp" },
	{ 0x8c30bf67, "zstd_dctx_workspace_bound" },
	{ 0x3ae34aeb, "zstd_init_dctx" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x37a0cba, "kfree" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6DB6A1478F8CA91A62A1076");
