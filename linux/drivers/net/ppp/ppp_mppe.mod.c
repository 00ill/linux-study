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
	{ 0x122c3a7e, "_printk" },
	{ 0x34407691, "crypto_has_ahash" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xdcb764ad, "memset" },
	{ 0x2eb04ee3, "ppp_register_compressor" },
	{ 0x37a0cba, "kfree" },
	{ 0xefdad58e, "ppp_unregister_compressor" },
	{ 0xc35aaa13, "crypto_destroy_tfm" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xf39a6dab, "crypto_alloc_shash" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x828b8f68, "crypto_shash_update" },
	{ 0xb19aaf1e, "crypto_shash_final" },
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0x4829a47e, "memcpy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ppp_generic,libarc4");


MODULE_INFO(srcversion, "7927B17129784DF7307AE23");
