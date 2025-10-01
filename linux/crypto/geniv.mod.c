#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(aead_geniv_alloc, "_gpl", "");
KSYMTAB_FUNC(aead_init_geniv, "_gpl", "");
KSYMTAB_FUNC(aead_exit_geniv, "_gpl", "");

SYMBOL_CRC(aead_geniv_alloc, 0x6ff0e37d, "_gpl");
SYMBOL_CRC(aead_init_geniv, 0x5e5dd8ce, "_gpl");
SYMBOL_CRC(aead_exit_geniv, 0x5677346f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefe669ed, "crypto_aead_setauthsize" },
	{ 0x44c4c527, "crypto_aead_setkey" },
	{ 0xd56f6291, "crypto_drop_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ff607b6, "crypto_get_default_rng" },
	{ 0xbb056ddd, "crypto_default_rng" },
	{ 0x668402aa, "crypto_put_default_rng" },
	{ 0x65664ab5, "crypto_get_default_null_skcipher" },
	{ 0xced1d723, "crypto_spawn_tfm2" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0xc35aaa13, "crypto_destroy_tfm" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x9de6ef5e, "crypto_grab_aead" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "crypto_null");


MODULE_INFO(srcversion, "E0C30BEDFD8A624A051D18D");
