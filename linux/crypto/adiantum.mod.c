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
	{ 0x685cfb74, "crypto_register_template" },
	{ 0xc35aaa13, "crypto_destroy_tfm" },
	{ 0xced1d723, "crypto_spawn_tfm2" },
	{ 0xfc56a50d, "crypto_spawn_tfm" },
	{ 0xdcb764ad, "memset" },
	{ 0x474aca38, "sg_miter_start" },
	{ 0xe2c00f91, "sg_miter_next" },
	{ 0x828b8f68, "crypto_shash_update" },
	{ 0x2af3f40d, "sg_miter_stop" },
	{ 0xb19aaf1e, "crypto_shash_final" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdf9734a7, "sg_nents" },
	{ 0xc62611e1, "scatterwalk_map_and_copy" },
	{ 0x4d12007f, "crypto_cipher_decrypt_one" },
	{ 0x6c311a85, "crypto_shash_digest" },
	{ 0x39819c60, "flush_dcache_page" },
	{ 0x21f3700, "poly1305_core_blocks" },
	{ 0xbcb90cb3, "poly1305_core_emit" },
	{ 0x82beb0e5, "crypto_skcipher_encrypt" },
	{ 0x49623227, "crypto_cipher_encrypt_one" },
	{ 0xd56f6291, "crypto_drop_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0x72f87ec, "crypto_unregister_template" },
	{ 0xeadbccbc, "crypto_skcipher_setkey" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa8e458b, "crypto_req_done" },
	{ 0x8ba9df05, "crypto_cipher_setkey" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xd45b9cf4, "poly1305_core_setkey" },
	{ 0x54805a08, "crypto_shash_setkey" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x1435a63c, "crypto_grab_skcipher" },
	{ 0xabe628d9, "crypto_grab_spawn" },
	{ 0x334c9ade, "crypto_grab_shash" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x122c3a7e, "_printk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe276643a, "skcipher_register_instance" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "libpoly1305");


MODULE_INFO(srcversion, "E8D1B2FBDA0A8410A8A81EF");
