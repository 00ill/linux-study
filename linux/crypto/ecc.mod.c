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

KSYMTAB_FUNC(ecc_get_curve25519, "", "");
KSYMTAB_FUNC(ecc_get_curve, "", "");
KSYMTAB_FUNC(ecc_digits_from_bytes, "", "");
KSYMTAB_FUNC(ecc_alloc_point, "", "");
KSYMTAB_FUNC(ecc_free_point, "", "");
KSYMTAB_FUNC(vli_is_zero, "", "");
KSYMTAB_FUNC(vli_num_bits, "", "");
KSYMTAB_FUNC(vli_from_be64, "", "");
KSYMTAB_FUNC(vli_from_le64, "", "");
KSYMTAB_FUNC(vli_cmp, "", "");
KSYMTAB_FUNC(vli_sub, "", "");
KSYMTAB_FUNC(vli_mod_mult_slow, "", "");
KSYMTAB_FUNC(vli_mod_inv, "", "");
KSYMTAB_FUNC(ecc_point_is_zero, "", "");
KSYMTAB_FUNC(ecc_point_mult_shamir, "", "");
KSYMTAB_FUNC(ecc_is_key_valid, "", "");
KSYMTAB_FUNC(ecc_gen_privkey, "", "");
KSYMTAB_FUNC(ecc_make_pub_key, "", "");
KSYMTAB_FUNC(ecc_is_pubkey_valid_partial, "", "");
KSYMTAB_FUNC(ecc_is_pubkey_valid_full, "", "");
KSYMTAB_FUNC(crypto_ecdh_shared_secret, "", "");

SYMBOL_CRC(ecc_get_curve25519, 0x5306988b, "");
SYMBOL_CRC(ecc_get_curve, 0x59100486, "");
SYMBOL_CRC(ecc_digits_from_bytes, 0xa8d8f6c7, "");
SYMBOL_CRC(ecc_alloc_point, 0x8e688192, "");
SYMBOL_CRC(ecc_free_point, 0x90cdc197, "");
SYMBOL_CRC(vli_is_zero, 0x4c281912, "");
SYMBOL_CRC(vli_num_bits, 0x932b6ff7, "");
SYMBOL_CRC(vli_from_be64, 0x16e410ff, "");
SYMBOL_CRC(vli_from_le64, 0xeac9b99a, "");
SYMBOL_CRC(vli_cmp, 0x92668805, "");
SYMBOL_CRC(vli_sub, 0x9f6efabd, "");
SYMBOL_CRC(vli_mod_mult_slow, 0x7c0fbb00, "");
SYMBOL_CRC(vli_mod_inv, 0x1a5faa3a, "");
SYMBOL_CRC(ecc_point_is_zero, 0xd94c8eb5, "");
SYMBOL_CRC(ecc_point_mult_shamir, 0xf54ac7fa, "");
SYMBOL_CRC(ecc_is_key_valid, 0x671f7aa5, "");
SYMBOL_CRC(ecc_gen_privkey, 0xd6315f31, "");
SYMBOL_CRC(ecc_make_pub_key, 0xed4ae15e, "");
SYMBOL_CRC(ecc_is_pubkey_valid_partial, 0xa0483906, "");
SYMBOL_CRC(ecc_is_pubkey_valid_full, 0x1686a280, "");
SYMBOL_CRC(crypto_ecdh_shared_secret, 0xa76b31a2, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdcb764ad, "memset" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6ff607b6, "crypto_get_default_rng" },
	{ 0xbb056ddd, "crypto_default_rng" },
	{ 0x668402aa, "crypto_put_default_rng" },
	{ 0x5a921311, "strncmp" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "177E8F0FBB029D0B44D8E96");
