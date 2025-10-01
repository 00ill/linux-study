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
	{ 0xc62611e1, "scatterwalk_map_and_copy" },
	{ 0xefe669ed, "crypto_aead_setauthsize" },
	{ 0x44c4c527, "crypto_aead_setkey" },
	{ 0xc35aaa13, "crypto_destroy_tfm" },
	{ 0xced1d723, "crypto_spawn_tfm2" },
	{ 0xd56f6291, "crypto_drop_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0xdcb764ad, "memset" },
	{ 0xeadbccbc, "crypto_skcipher_setkey" },
	{ 0x375aa078, "crypto_ahash_setkey" },
	{ 0x8ba9df05, "crypto_cipher_setkey" },
	{ 0x4829a47e, "memcpy" },
	{ 0x49623227, "crypto_cipher_encrypt_one" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xfc56a50d, "crypto_spawn_tfm" },
	{ 0x7cca0477, "crypto_unregister_templates" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xabe628d9, "crypto_grab_spawn" },
	{ 0x4ab04e3f, "crypto_inst_setname" },
	{ 0xe5412adf, "shash_free_singlespawn_instance" },
	{ 0xaf2a2530, "shash_register_instance" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9de6ef5e, "crypto_grab_aead" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd298d82d, "aead_register_instance" },
	{ 0x7d6ae7d9, "crypto_grab_ahash" },
	{ 0x5a921311, "strncmp" },
	{ 0x1435a63c, "crypto_grab_skcipher" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x80a095d8, "scatterwalk_ffwd" },
	{ 0xbddb0e1d, "crypto_aead_decrypt" },
	{ 0x30cd443b, "crypto_aead_encrypt" },
	{ 0xe798fba6, "crypto_ahash_init" },
	{ 0x838aef8, "crypto_ahash_update" },
	{ 0xafdf5160, "crypto_ahash_finup" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x256958c5, "crypto_skcipher_decrypt" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x82beb0e5, "crypto_skcipher_encrypt" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3366828FC172592A7BF1B65");
