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
	{ 0x13a8cdc, "crypto_register_templates" },
	{ 0xc35aaa13, "crypto_destroy_tfm" },
	{ 0xced1d723, "crypto_spawn_tfm2" },
	{ 0x82beb0e5, "crypto_skcipher_encrypt" },
	{ 0xeadbccbc, "crypto_skcipher_setkey" },
	{ 0xd56f6291, "crypto_drop_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0xedb7e845, "skcipher_alloc_instance_simple" },
	{ 0xe276643a, "skcipher_register_instance" },
	{ 0x7cca0477, "crypto_unregister_templates" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x1435a63c, "crypto_grab_skcipher" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xa04e484b, "skcipher_walk_virt" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x3ef051c8, "crypto_inc" },
	{ 0x4fa63a2f, "skcipher_walk_done" },
	{ 0x49623227, "crypto_cipher_encrypt_one" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6C66A134D831BF392D057FD");
