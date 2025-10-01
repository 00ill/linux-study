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
	{ 0xc7c1107a, "LZ4_decompress_safe" },
	{ 0x4f4d78c5, "LZ4_compress_default" },
	{ 0x999e8297, "vfree" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x27f17744, "crypto_unregister_scomp" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "lz4_compress");


MODULE_INFO(srcversion, "15EE1685E10E89E1C5DAB47");
