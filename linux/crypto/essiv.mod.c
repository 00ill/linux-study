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
	{ 0x37a0cba, "kfree" },
	{ 0xc35aaa13, "crypto_destroy_tfm" },
	{ 0xced1d723, "crypto_spawn_tfm2" },
	{ 0xba3717aa, "crypto_alloc_base" },
	{ 0xf39a6dab, "crypto_alloc_shash" },
	{ 0xefe669ed, "crypto_aead_setauthsize" },
	{ 0xdcb764ad, "memset" },
	{ 0x44c4c527, "crypto_aead_setkey" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0x828b8f68, "crypto_shash_update" },
	{ 0xd95289aa, "crypto_shash_finup" },
	{ 0x8ba9df05, "crypto_cipher_setkey" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x49623227, "crypto_cipher_encrypt_one" },
	{ 0x256958c5, "crypto_skcipher_decrypt" },
	{ 0xeadbccbc, "crypto_skcipher_setkey" },
	{ 0x9386790b, "crypto_shash_tfm_digest" },
	{ 0xd56f6291, "crypto_drop_spawn" },
	{ 0x72f87ec, "crypto_unregister_template" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x1435a63c, "crypto_grab_skcipher" },
	{ 0x9de6ef5e, "crypto_grab_aead" },
	{ 0x5a921311, "strncmp" },
	{ 0x9f984513, "strrchr" },
	{ 0x349cba85, "strchr" },
	{ 0x122c3a7e, "_printk" },
	{ 0x4829a47e, "memcpy" },
	{ 0xaef5b584, "crypto_alg_mod_lookup" },
	{ 0xdf0577ce, "crypto_mod_put" },
	{ 0xece4db2, "shash_no_setkey" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd298d82d, "aead_register_instance" },
	{ 0xe276643a, "skcipher_register_instance" },
	{ 0x82beb0e5, "crypto_skcipher_encrypt" },
	{ 0xc62611e1, "scatterwalk_map_and_copy" },
	{ 0xbddb0e1d, "crypto_aead_decrypt" },
	{ 0x30cd443b, "crypto_aead_encrypt" },
	{ 0xbac8aeea, "sg_nents_for_len" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x80a095d8, "scatterwalk_ffwd" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "authenc");


MODULE_INFO(srcversion, "F636EBD2037DCB413A38076");
