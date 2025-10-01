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

KSYMTAB_FUNC(crypto_authenc_extractkeys, "_gpl", "");

SYMBOL_CRC(crypto_authenc_extractkeys, 0x2479193e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x685cfb74, "crypto_register_template" },
	{ 0xb73b5874, "crypto_ahash_digest" },
	{ 0xc62611e1, "scatterwalk_map_and_copy" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x80a095d8, "scatterwalk_ffwd" },
	{ 0x256958c5, "crypto_skcipher_decrypt" },
	{ 0xdcb764ad, "memset" },
	{ 0x82beb0e5, "crypto_skcipher_encrypt" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x375aa078, "crypto_ahash_setkey" },
	{ 0xeadbccbc, "crypto_skcipher_setkey" },
	{ 0xc35aaa13, "crypto_destroy_tfm" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0xced1d723, "crypto_spawn_tfm2" },
	{ 0x65664ab5, "crypto_get_default_null_skcipher" },
	{ 0xd56f6291, "crypto_drop_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0x72f87ec, "crypto_unregister_template" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x7d6ae7d9, "crypto_grab_ahash" },
	{ 0x1435a63c, "crypto_grab_skcipher" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd298d82d, "aead_register_instance" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "crypto_null");


MODULE_INFO(srcversion, "9796939EF354A3156941586");
